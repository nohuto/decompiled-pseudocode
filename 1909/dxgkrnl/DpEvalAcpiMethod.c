/*
 * XREFs of DpEvalAcpiMethod @ 0x1C0148560
 * Callers:
 *     DpiAddDevice @ 0x1C0165580 (DpiAddDevice.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C001A8D8 (DpiFdoGetChildDescriptor.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1C01487E0 (DpiAcpiEvalAcpiMethodEx.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C017BB54 (DpiAcpiGetAcpiChildName.c)
 */

__int64 __fastcall DpEvalAcpiMethod(
        __int64 a1,
        __int64 a2,
        int *a3,
        ULONG a4,
        _DWORD *OutputBuffer,
        ULONG OutputBufferLength)
{
  __int64 v7; // rcx
  int *v8; // rdi
  __int64 v9; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r12
  __int64 v11; // rsi
  int v12; // eax
  struct _DEVICE_OBJECT *v13; // rcx
  IRP *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rax
  struct _KMUTANT *v22; // r12
  _QWORD *ChildDescriptor; // rax
  char v24; // si
  int v25; // r9d
  __int64 v26; // rdi
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  const char *AcpiChildName; // rax
  struct _STRING *p_DestinationString; // rdx
  __int64 v33; // rax
  NTSTATUS v34; // eax
  __int64 v35; // rax
  struct _STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-11h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-1h] BYREF
  char v39; // [rsp+D8h] [rbp+57h]
  int v40; // [rsp+E0h] [rbp+5Fh]

  v40 = a2;
  v7 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v39 = 0;
  v8 = a3;
  DestinationString.Buffer = 0LL;
  LODWORD(v9) = 0;
  AttachedDeviceReference = 0LL;
  if ( !a1 )
    goto LABEL_31;
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 || *(_DWORD *)(v11 + 16) != 1953656900 || *(_DWORD *)(v11 + 20) != 2 )
  {
    v19 = -1073741811LL;
    goto LABEL_49;
  }
  if ( KeGetCurrentIrql() )
  {
    v26 = -1073741811LL;
    LODWORD(v9) = -1073741811;
    if ( *(_DWORD *)(*(_QWORD *)(v11 + 40) + 28LL) >= 0x2003u )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL, a2);
      v27[3] = 275LL;
      v27[4] = 21LL;
      v27[5] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v27);
    }
    goto LABEL_34;
  }
  if ( !*(_BYTE *)(v11 + 1157) )
  {
    LODWORD(v9) = -1073741637;
    v29 = WdLogNewEntry5_WdWarning(0LL, a2, a3);
    *(_QWORD *)(v29 + 24) = -1073741637LL;
    WdLogEvent5_WdWarning(v29);
    return (unsigned int)v9;
  }
  if ( !a3 || !a4 || !OutputBuffer && OutputBufferLength )
    goto LABEL_31;
  v12 = *a3;
  if ( *a3 != 1634885968 )
  {
    if ( v12 == 543451477 )
    {
      v30 = *(_QWORD *)(a1 + 64);
      *a3 = 1130980673;
      AcpiChildName = (const char *)DpiAcpiGetAcpiChildName(v30);
      if ( !AcpiChildName )
      {
LABEL_32:
        v26 = -1073741810LL;
        goto LABEL_33;
      }
      RtlInitAnsiString(&DestinationString, AcpiChildName);
      LODWORD(a3) = (_DWORD)v8;
      p_DestinationString = &DestinationString;
LABEL_41:
      LODWORD(v9) = DpiAcpiEvalAcpiMethodEx(
                      a1,
                      (int)p_DestinationString,
                      (int)a3,
                      a4,
                      OutputBuffer,
                      OutputBufferLength,
                      1);
      return (unsigned int)v9;
    }
    if ( v12 != 2017818181 )
      goto LABEL_14;
    if ( (_DWORD)a2 == -1 )
    {
      *a3 = 1130980673;
      LODWORD(p_DestinationString) = 0;
      goto LABEL_41;
    }
LABEL_31:
    v26 = -1073741811LL;
LABEL_33:
    LODWORD(v9) = v26;
LABEL_34:
    v28 = WdLogNewEntry5_WdError(v7, a2, a3);
    *(_QWORD *)(v28 + 24) = v26;
    WdLogEvent5_WdError(v28);
    return (unsigned int)v9;
  }
  v39 = 1;
  *a3 = 1130980673;
LABEL_14:
  if ( (_DWORD)a2 == -1 )
  {
    v13 = *(struct _DEVICE_OBJECT **)(v11 + 24);
    IoStatusBlock.Pointer = 0LL;
    IoStatusBlock.Information = 0LL;
    AttachedDeviceReference = IoGetAttachedDeviceReference(v13);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v14 = IoBuildDeviceIoControlRequest(
            0x32C004u,
            AttachedDeviceReference,
            v8,
            a4,
            OutputBuffer,
            OutputBufferLength,
            0,
            &Event,
            &IoStatusBlock);
    if ( !v14 )
    {
      LODWORD(v9) = -1073741670;
      v33 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
      *(_QWORD *)(v33 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v33);
      goto LABEL_23;
    }
    LODWORD(v9) = IofCallDriver(AttachedDeviceReference, v14);
    if ( (_DWORD)v9 == 259 )
    {
      v34 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v9 = v34;
      if ( v34 )
      {
        v35 = WdLogNewEntry5_WdError(v7, a2, a3);
        *(_QWORD *)(v35 + 24) = v9;
LABEL_50:
        WdLogEvent5_WdError(v35);
        goto LABEL_23;
      }
      LODWORD(v9) = IoStatusBlock.Status;
    }
    if ( (int)v9 < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v7, a2, a3);
      *(_QWORD *)(v20 + 24) = (int)v9;
      WdLogEvent5_WdWarning(v20);
      goto LABEL_23;
    }
    if ( !OutputBufferLength || *OutputBuffer == 1114596673 && OutputBuffer[2] )
    {
LABEL_23:
      if ( AttachedDeviceReference )
        ObfDereferenceObject(AttachedDeviceReference);
      return (unsigned int)v9;
    }
    v19 = -1072431089LL;
LABEL_49:
    LODWORD(v9) = v19;
    v35 = WdLogNewEntry5_WdError(v7, a2, a3);
    *(_QWORD *)(v35 + 24) = v19;
    goto LABEL_50;
  }
  v22 = (struct _KMUTANT *)(v11 + 3408);
  KeWaitForSingleObject((PVOID)(v11 + 3408), Executive, 0, 0, 0LL);
  ChildDescriptor = DpiFdoGetChildDescriptor(v11, v40);
  if ( ChildDescriptor )
  {
    v24 = 1;
    RtlInitAnsiString(&DestinationString, (PCSZ)ChildDescriptor[10]);
    LODWORD(v9) = DpiAcpiEvalAcpiMethodEx(
                    a1,
                    (int)&DestinationString,
                    (int)v8,
                    v25,
                    OutputBuffer,
                    OutputBufferLength,
                    v39);
  }
  else
  {
    v24 = 0;
  }
  KeReleaseMutex(v22, 0);
  if ( !v24 )
    goto LABEL_32;
  return (unsigned int)v9;
}

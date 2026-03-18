/*
 * XREFs of DpEvalAcpiMethod @ 0x1C01451B0
 * Callers:
 *     DpiAddDevice @ 0x1C0149BF0 (DpiAddDevice.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C001E720 (DpiFdoGetChildDescriptor.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C0146824 (DpiAcpiGetAcpiChildName.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1C0146C1C (DpiAcpiEvalAcpiMethodEx.c)
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
  int v9; // r12d
  __int64 v10; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r15
  __int64 v12; // rsi
  int v13; // eax
  IRP *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  const char *AcpiChildName; // rax
  struct _STRING *p_DestinationString; // rdx
  __int64 v28; // rax
  NTSTATUS v29; // eax
  __int64 v30; // rax
  struct _KMUTANT *v31; // r15
  _QWORD *ChildDescriptor; // rax
  char v33; // si
  int v34; // r9d
  struct _STRING DestinationString; // [rsp+58h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-50h] BYREF
  char v38; // [rsp+D0h] [rbp+8h]

  v7 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v38 = 0;
  v8 = a3;
  DestinationString.Buffer = 0LL;
  v9 = a2;
  LODWORD(v10) = 0;
  AttachedDeviceReference = 0LL;
  if ( !a1 )
    goto LABEL_26;
  v12 = *(_QWORD *)(a1 + 64);
  if ( !v12 || *(_DWORD *)(v12 + 16) != 1953656900 || *(_DWORD *)(v12 + 20) != 2 )
  {
    v18 = -1073741811LL;
    goto LABEL_49;
  }
  if ( KeGetCurrentIrql() )
  {
    v21 = -1073741811LL;
    LODWORD(v10) = -1073741811;
    if ( *(_DWORD *)(*(_QWORD *)(v12 + 40) + 28LL) >= 0x2003u )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL);
      v22[3] = 275LL;
      v22[4] = 21LL;
      v22[5] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v22);
    }
    goto LABEL_29;
  }
  if ( !*(_BYTE *)(v12 + 1149) )
  {
    LODWORD(v10) = -1073741637;
    v24 = WdLogNewEntry5_WdWarning(0LL, a2, a3);
    *(_QWORD *)(v24 + 24) = -1073741637LL;
    WdLogEvent5_WdWarning(v24);
    return (unsigned int)v10;
  }
  if ( !a3 || !a4 || !OutputBuffer && OutputBufferLength )
    goto LABEL_26;
  v13 = *a3;
  if ( *a3 != 1634885968 )
  {
    if ( v13 == 543451477 )
    {
      v25 = *(_QWORD *)(a1 + 64);
      *a3 = 1130980673;
      AcpiChildName = (const char *)DpiAcpiGetAcpiChildName(v25);
      if ( !AcpiChildName )
        goto LABEL_27;
      RtlInitAnsiString(&DestinationString, AcpiChildName);
      LODWORD(a3) = (_DWORD)v8;
      p_DestinationString = &DestinationString;
LABEL_36:
      LODWORD(v10) = DpiAcpiEvalAcpiMethodEx(
                       a1,
                       (int)p_DestinationString,
                       (int)a3,
                       a4,
                       OutputBuffer,
                       OutputBufferLength,
                       1);
      return (unsigned int)v10;
    }
    if ( v13 != 2017818181 )
      goto LABEL_13;
    if ( (_DWORD)a2 == -1 )
    {
      *a3 = 1130980673;
      LODWORD(p_DestinationString) = 0;
      goto LABEL_36;
    }
LABEL_26:
    v21 = -1073741811LL;
LABEL_28:
    LODWORD(v10) = v21;
LABEL_29:
    v23 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v23 + 24) = v21;
    WdLogEvent5_WdError(v23);
    return (unsigned int)v10;
  }
  v38 = 1;
  *a3 = 1130980673;
LABEL_13:
  if ( (_DWORD)a2 == -1 )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(v12 + 24));
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
      LODWORD(v10) = -1073741670;
      v28 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v28 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v28);
      goto LABEL_22;
    }
    LODWORD(v10) = IofCallDriver(AttachedDeviceReference, v14);
    if ( (_DWORD)v10 == 259 )
    {
      v29 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v10 = v29;
      if ( v29 )
      {
        v30 = WdLogNewEntry5_WdError(v7);
        *(_QWORD *)(v30 + 24) = v10;
LABEL_50:
        WdLogEvent5_WdError(v30);
        goto LABEL_22;
      }
      LODWORD(v10) = IoStatusBlock.Status;
    }
    if ( (int)v10 < 0 )
    {
      v19 = WdLogNewEntry5_WdWarning(v7, v16, v17);
      *(_QWORD *)(v19 + 24) = (int)v10;
      WdLogEvent5_WdWarning(v19);
      goto LABEL_22;
    }
    if ( !OutputBufferLength || *OutputBuffer == 1114596673 && OutputBuffer[2] )
    {
LABEL_22:
      if ( AttachedDeviceReference )
        ObfDereferenceObject(AttachedDeviceReference);
      return (unsigned int)v10;
    }
    v18 = -1072431089LL;
LABEL_49:
    LODWORD(v10) = v18;
    v30 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v30 + 24) = v18;
    goto LABEL_50;
  }
  v31 = (struct _KMUTANT *)(v12 + 3336);
  KeWaitForSingleObject((PVOID)(v12 + 3336), Executive, 0, 0, 0LL);
  ChildDescriptor = DpiFdoGetChildDescriptor(v12, v9);
  if ( ChildDescriptor )
  {
    v33 = 1;
    RtlInitAnsiString(&DestinationString, (PCSZ)ChildDescriptor[10]);
    LODWORD(v10) = DpiAcpiEvalAcpiMethodEx(
                     a1,
                     (int)&DestinationString,
                     (int)v8,
                     v34,
                     OutputBuffer,
                     OutputBufferLength,
                     v38);
  }
  else
  {
    v33 = 0;
  }
  KeReleaseMutex(v31, 0);
  if ( !v33 )
  {
LABEL_27:
    v21 = -1073741810LL;
    goto LABEL_28;
  }
  return (unsigned int)v10;
}

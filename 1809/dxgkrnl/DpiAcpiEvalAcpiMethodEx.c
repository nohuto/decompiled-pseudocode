/*
 * XREFs of DpiAcpiEvalAcpiMethodEx @ 0x1C0146C1C
 * Callers:
 *     DpEvalAcpiMethod @ 0x1C01451B0 (DpEvalAcpiMethod.c)
 *     DpiAcpiPrepareAcpiChildNameList @ 0x1C0146888 (DpiAcpiPrepareAcpiChildNameList.c)
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall DpiAcpiEvalAcpiMethodEx(
        __int64 a1,
        const void **a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *OutputBuffer,
        ULONG OutputBufferLength,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // rsi
  unsigned int v11; // eax
  unsigned int v12; // r14d
  ULONG v13; // r12d
  unsigned int v14; // r15d
  _DWORD *PoolWithTag; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rdi
  __int64 v18; // rsi
  struct _DEVICE_OBJECT *v19; // rsi
  IRP *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  NTSTATUS v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  if ( a2 && *(_WORD *)a2 > 0xFAu )
  {
    LODWORD(v24) = -1073741811;
    v27 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    return (unsigned int)v24;
  }
  v11 = a3[2];
  v12 = 4;
  if ( v11 < 4 )
    v11 = 4;
  v13 = v11 + 268;
  v14 = v11 + 268;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11 + 268, 0x74727044u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v24) = -1073741801;
    v28 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v28 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v28);
    return (unsigned int)v24;
  }
  memset(PoolWithTag, 0, v14);
  *v17 = 1181312321;
  if ( a2 )
  {
    memmove(v17 + 1, a2[1], *(unsigned __int16 *)a2);
    v18 = *(unsigned __int16 *)a2;
    *((_BYTE *)v17 + v18 + 4) = 46;
    v8 = (unsigned int)(v18 + 1);
  }
  *(_DWORD *)((char *)v17 + v8 + 4) = a3[1];
  *((_BYTE *)v17 + (unsigned int)(v8 + 4) + 4) = 0;
  v17[65] = a3[2];
  v17[66] = a3[3];
  if ( a7 )
    v12 = a3[2];
  memmove(v17 + 67, a3 + 4, v12);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v19 = *(struct _DEVICE_OBJECT **)(v7 + 160);
  ObfReferenceObject(v19);
  v20 = IoBuildDeviceIoControlRequest(
          0x32C018u,
          v19,
          v17,
          v13,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( v20 )
  {
    LODWORD(v24) = IofCallDriver(v19, v20);
    if ( (_DWORD)v24 == 259 )
    {
      v30 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v24 = v30;
      if ( v30 )
      {
        v31 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v31 + 24) = v24;
LABEL_28:
        WdLogEvent5_WdError(v31);
        goto LABEL_16;
      }
      LODWORD(v24) = IoStatusBlock.Status;
    }
    if ( (int)v24 >= 0 )
    {
      if ( !OutputBufferLength || *OutputBuffer == 1114596673 && OutputBuffer[2] )
        goto LABEL_16;
      LODWORD(v24) = -1072431089;
      v31 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v31 + 24) = -1072431089LL;
      goto LABEL_28;
    }
    v32 = WdLogNewEntry5_WdWarning(v23, v22, v25);
    *(_QWORD *)(v32 + 24) = (int)v24;
    WdLogEvent5_WdWarning(v32);
  }
  else
  {
    LODWORD(v24) = -1073741670;
    v29 = WdLogNewEntry5_WdLowResource(v21);
    *(_QWORD *)(v29 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v29);
  }
LABEL_16:
  if ( v19 )
    ObfDereferenceObject(v19);
  ExFreePoolWithTag(v17, 0);
  return (unsigned int)v24;
}

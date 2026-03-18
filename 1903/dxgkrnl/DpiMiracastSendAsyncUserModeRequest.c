/*
 * XREFs of DpiMiracastSendAsyncUserModeRequest @ 0x1C02A5248
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C004D1A0 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C004E698 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C02A4260 (DpiMiracastCbSendUserModeMessage.c)
 * Callees:
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     McTemplateK0pqtqq @ 0x1C00357F8 (McTemplateK0pqtqq.c)
 */

__int64 __fastcall DpiMiracastSendAsyncUserModeRequest(
        _QWORD *a1,
        __int64 a2,
        const GUID *a3,
        const void *a4,
        size_t Size,
        void *a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        PDEVICE_OBJECT DeviceObject,
        IRP **a11)
{
  char v12; // bl
  void *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  const GUID *v18; // r8
  unsigned int v19; // ebx
  unsigned int v20; // eax
  unsigned int v21; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // r14
  __int64 v28; // rax
  PIRP Irp; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  IRP *v33; // rbx
  __int64 v34; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v37; // rax
  __int64 v39; // [rsp+20h] [rbp-58h]
  __int64 v40; // [rsp+28h] [rbp-50h]
  __int64 v41; // [rsp+30h] [rbp-48h]
  __int64 v42; // [rsp+38h] [rbp-40h]
  int v43; // [rsp+90h] [rbp+18h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+C8h] [rbp+50h]
  __int64 v46; // [rsp+D0h] [rbp+58h]

  v43 = (int)a3;
  v12 = 0;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    McTemplateK0pqtqq((__int64)a1, &EventEnterMiracastSendUserModeRequest, a3, a1[12], 0, Size, a7, 0);
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 0;
  if ( a11 )
    *a11 = 0LL;
  if ( (struct _KTHREAD *)a1[11] != KeGetCurrentThread() )
  {
    v12 = 1;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 4);
    a1[11] = KeGetCurrentThread();
  }
  v15 = (void *)a1[22];
  DeviceObjecta = (PDEVICE_OBJECT)a1[23];
  if ( v15 )
    ObfReferenceObject(v15);
  if ( v12 )
  {
    a1[11] = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 4);
  }
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdWarning(v16);
    v19 = -1073741130;
    goto LABEL_34;
  }
  v20 = Size;
  if ( (unsigned int)Size <= a7 )
    v20 = a7;
  v21 = v20 + 64;
  if ( v21 < 0x40 )
  {
    v19 = -1073741675;
    v37 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v37 + 24) = -1073741675LL;
    WdLogEvent5_WdError(v37);
    ObfDereferenceObject(v15);
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v21, 0x74727044u);
    v27 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v19 = -1073741801;
      v28 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
      *(_QWORD *)(v28 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v28);
LABEL_20:
      ObfDereferenceObject(v15);
      goto LABEL_34;
    }
    *PoolWithTag = v15;
    PoolWithTag[1] = a1[12];
    PoolWithTag[4] = a8;
    PoolWithTag[5] = a9;
    *((_DWORD *)PoolWithTag + 14) = a11 == 0LL;
    Irp = IoAllocateIrp(DeviceObjecta->StackSize, 0);
    v33 = Irp;
    if ( !Irp )
    {
      v19 = -1073741801;
      v34 = WdLogNewEntry5_WdLowResource(v30, 0LL, v31, v32);
      *(_QWORD *)(v34 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v34);
      ExFreePoolWithTag(v27, 0);
      goto LABEL_20;
    }
    v46 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
    *(_BYTE *)v46 = 14;
    *(_DWORD *)(v46 + 8) = a7;
    *(_DWORD *)(v46 + 16) = Size;
    *(_DWORD *)(v46 + 24) = v43;
    if ( !a7 )
      a6 = 0LL;
    v33->UserBuffer = a6;
    v27[6] = a6;
    if ( (_DWORD)Size || a7 )
    {
      v33->AssociatedIrp.MasterIrp = (struct _IRP *)(v27 + 8);
      if ( (_DWORD)Size )
        memmove(v27 + 8, a4, (unsigned int)Size);
    }
    *(_QWORD *)(v46 + 48) = v15;
    CurrentStackLocation = v33->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Context = v27;
    CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiMiracastIoCompleteRoutine;
    CurrentStackLocation[-1].Control = -32;
    if ( a11 )
      *a11 = v33;
    v19 = IofCallDriver(DeviceObjecta, v33);
    if ( DeviceObject )
      LOBYTE(DeviceObject->Type) = 1;
  }
LABEL_34:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
  {
    LODWORD(v42) = v19;
    LODWORD(v41) = a7;
    LODWORD(v40) = Size;
    LODWORD(v39) = 0;
    McTemplateK0pqtqq(v17, &EventLeaveMiracastSendUserModeRequest, v18, a1[12], v39, v40, v41, v42);
  }
  return v19;
}

/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x1402ED588
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402ED6AC (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwAllocateVirtualMemory @ 0x1401B85F0 (ZwAllocateVirtualMemory.c)
 */

KSPIN_LOCK __fastcall RtlpStdExtendUpperWatermark(KSPIN_LOCK *SpinLock, void *a2)
{
  KSPIN_LOCK v3; // rsi
  KSPIN_LOCK v4; // rdi
  char v5; // dl
  char *v6; // rcx
  KSPIN_LOCK v7; // rax
  unsigned __int8 v8; // di
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = a2;
  v3 = 0LL;
  *((_BYTE *)SpinLock + 8) = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v4 = SpinLock[21];
  v5 = *((_BYTE *)SpinLock + 128);
  v6 = (char *)SpinLock[19];
  BaseAddress = v6;
  v7 = v4 - 8;
  if ( !v5 )
  {
    if ( v7 < (unsigned __int64)v6 )
    {
      RegionSize = 4096LL;
      if ( (unsigned __int64)(v6 - 4096) <= SpinLock[18] )
        goto LABEL_9;
      BaseAddress = v6 - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_9;
      SpinLock[19] = (KSPIN_LOCK)BaseAddress;
    }
LABEL_8:
    ++*((_DWORD *)SpinLock + 45);
    v3 = v4 - 8;
    SpinLock[21] = v4 - 8;
    goto LABEL_9;
  }
  if ( v7 >= SpinLock[20] )
    goto LABEL_8;
LABEL_9:
  v8 = *((_BYTE *)SpinLock + 8);
  KxReleaseSpinLock(SpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v8);
  return v3;
}

/*
 * XREFs of CcAddExternalCache @ 0x140169F94
 * Callers:
 *     CcRegisterExternalCache @ 0x140169F10 (CcRegisterExternalCache.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall CcAddExternalCache(__int64 a1)
{
  KIRQL v2; // di
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  v3 = (_QWORD *)qword_140439458;
  v4 = (_QWORD *)(a1 + 32);
  if ( *(__int64 **)qword_140439458 != &CcExternalCacheList )
    __fastfail(3u);
  v4[1] = qword_140439458;
  *v4 = &CcExternalCacheList;
  *v3 = v4;
  qword_140439458 = (__int64)v4;
  if ( CcNumberOfExternalCaches + 1 <= (unsigned int)CcNumberOfExternalCaches )
    KeBugCheckEx(0x34u, 0x1313uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ++CcNumberOfExternalCaches;
  KxReleaseSpinLock(&CcExternalCacheListLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  return result;
}

/*
 * XREFs of EtwpCovSampCaptureApc @ 0x1403163A0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140317040 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x140317688 (EtwpCovSampSafeForUserAddressCapture.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x1408C56B8 (EtwpCovSampCaptureUserAddresses.c)
 */

struct _KTHREAD *__fastcall EtwpCovSampCaptureApc(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r14
  KIRQL v7; // al
  KIRQL v8; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  struct _KTHREAD *result; // rax
  signed __int32 v13[14]; // [rsp+0h] [rbp-38h] BYREF
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a3;
  v5 = a1 - 56;
  v6 = *a4;
  *a2 = 0LL;
  _InterlockedOr(v13, 0);
  if ( *(_DWORD *)(*(_QWORD *)(a1 - 56 + 48) + 40LL) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 264));
    *(_QWORD *)(v5 + 64) = 0LL;
    v8 = v7;
    KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 264));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v8);
  }
  v10 = qword_14040AE48;
  memset((void *)(v5 + 56), 0, 0x58uLL);
  v11 = *(_QWORD *)(v5 + 48);
  *(_DWORD *)(v5 + 144) = 0;
  EtwpCovSampCaptureReleaseToLookaside(v10, v11, v5);
  if ( (int)EtwpCovSampSafeForUserAddressCapture(1LL, &v14) >= 0 && !v14 )
    EtwpCovSampCaptureUserAddresses(v4, v6);
  result = KeGetCurrentThread();
  _InterlockedAnd((volatile signed __int32 *)&result[1].SwapListEntry + 2, 0xFF7FFFFF);
  return result;
}

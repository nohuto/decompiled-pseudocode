/*
 * XREFs of EtwpCovSampCaptureCancelApcs @ 0x140334F58
 * Callers:
 *     EtwpCovSampCaptureContextStop @ 0x1403351C0 (EtwpCovSampCaptureContextStop.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KeRemoveQueueApc @ 0x1401317E4 (KeRemoveQueueApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140335880 (EtwpCovSampCaptureReleaseToLookaside.c)
 */

LONG_PTR __fastcall EtwpCovSampCaptureCancelApcs(__int64 a1)
{
  LONG_PTR result; // rax
  __int64 *v2; // r14
  __int64 *v3; // rdi
  KSPIN_LOCK *v4; // r12
  void *v5; // rsi
  KIRQL v6; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx

  result = *(unsigned int *)(a1 + 344);
  if ( *(_DWORD *)(a1 + 348) != (_DWORD)result )
  {
    v2 = (__int64 *)(a1 + 304);
    v3 = *(__int64 **)(a1 + 304);
    if ( v3 != (__int64 *)(a1 + 304) )
    {
      v4 = (KSPIN_LOCK *)(a1 + 264);
      do
      {
        v5 = 0LL;
        v6 = KeAcquireSpinLockRaiseToDpc(v4);
        if ( *((_BYTE *)v3 + 114) )
        {
          v5 = (void *)v3[5];
          if ( v5 )
            ObfReferenceObjectWithTag((PVOID)v3[5], 0x746C6644u);
        }
        KxReleaseSpinLock(v4);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        result = v6;
        __writecr8(v6);
        if ( v5 )
        {
          if ( KeRemoveQueueApc((__int64)(v3 + 4)) )
          {
            v8 = qword_140432588;
            memset(v3 + 4, 0, 0x58uLL);
            v9 = v3[3];
            *((_DWORD *)v3 + 30) = 0;
            EtwpCovSampCaptureReleaseToLookaside(v8, v9, v3 - 3);
          }
          result = ObfDereferenceObjectWithTag(v5, 0x746C6644u);
        }
        v3 = (__int64 *)*v3;
      }
      while ( v3 != v2 );
    }
  }
  return result;
}

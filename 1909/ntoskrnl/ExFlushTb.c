/*
 * XREFs of ExFlushTb @ 0x14033BFE8
 * Callers:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     KeFlushMultipleRangeTb @ 0x140099010 (KeFlushMultipleRangeTb.c)
 *     MiAgeWorkingSetTail @ 0x140099350 (MiAgeWorkingSetTail.c)
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
 *     KeFlushSingleTb @ 0x1400C5914 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140166B0C (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14017A96C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushEntireTb @ 0x1401883E0 (KeFlushEntireTb.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

struct _KTHREAD *__fastcall ExFlushTb(unsigned int a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  unsigned __int64 v5; // rcx

  result = KeGetCurrentThread();
  if ( a3 != 1 )
    return (struct _KTHREAD *)((__int64 (__fastcall *)(__int64, _QWORD, __int64))HalIommuDispatch[10])(
                                ExpSvmIommuSystemContext,
                                a1,
                                a2);
  v5 = result->ApcState.Process[2].ActiveProcessors.Bitmap[6];
  if ( v5 )
    return (struct _KTHREAD *)((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64))HalIommuDispatch[9])(
                                v5,
                                a1,
                                a2);
  return result;
}

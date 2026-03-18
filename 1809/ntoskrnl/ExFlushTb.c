/*
 * XREFs of ExFlushTb @ 0x14031D1F8
 * Callers:
 *     MiFlushTbList @ 0x1400740C0 (MiFlushTbList.c)
 *     KeFlushTb @ 0x1400755B0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140075BB0 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x1400ECDD4 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140156EB8 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140173C7C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushEntireTb @ 0x140187800 (KeFlushEntireTb.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
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
  v5 = result->ApcState.Process[2].ActiveProcessors.Bitmap[2];
  if ( v5 )
    return (struct _KTHREAD *)((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64))HalIommuDispatch[9])(
                                v5,
                                a1,
                                a2);
  return result;
}

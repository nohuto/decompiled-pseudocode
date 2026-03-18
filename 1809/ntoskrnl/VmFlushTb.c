/*
 * XREFs of VmFlushTb @ 0x14030B5F0
 * Callers:
 *     MiFlushTbList @ 0x1400740C0 (MiFlushTbList.c)
 *     KeFlushTb @ 0x1400755B0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140075BB0 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x1400ECDD4 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140156EB8 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140173C7C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     VmpFlushTb @ 0x14030C3CC (VmpFlushTb.c)
 */

struct _KTHREAD *__fastcall VmFlushTb(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  volatile LONG *v4; // rcx

  if ( a3 == 1 )
  {
    result = KeGetCurrentThread();
    v4 = (volatile LONG *)result->ApcState.Process[2].ActiveProcessors.Bitmap[15];
    if ( v4 )
      return (struct _KTHREAD *)VmpFlushTb(v4);
  }
  return result;
}

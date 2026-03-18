/*
 * XREFs of ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0016F28
 * Callers:
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008559C (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001514 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

DXGPROCESSVIDMMLOCK *__fastcall DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK(
        DXGPROCESSVIDMMLOCK *this,
        struct _KTHREAD **a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    if ( a2[18] == KeGetCurrentThread() )
      *(_QWORD *)this = 0LL;
    else
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a2 + 17));
  }
  return this;
}

/*
 * XREFs of ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0017A48
 * Callers:
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0081200 (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0010A40 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

DXGPROCESSVIDMMLOCK *__fastcall DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK(
        DXGPROCESSVIDMMLOCK *this,
        struct _KTHREAD **a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    if ( a2[19] == KeGetCurrentThread() )
      *(_QWORD *)this = 0LL;
    else
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a2 + 18));
  }
  return this;
}

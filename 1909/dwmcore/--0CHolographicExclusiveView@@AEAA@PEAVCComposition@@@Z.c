/*
 * XREFs of ??0CHolographicExclusiveView@@AEAA@PEAVCComposition@@@Z @ 0x18024335C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CHolographicExclusiveView *__fastcall CHolographicExclusiveView::CHolographicExclusiveView(
        CHolographicExclusiveView *this,
        struct CComposition *a2)
{
  CHolographicExclusiveView *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)this = &CHolographicExclusiveView::`vftable';
  InitializeSRWLock((PSRWLOCK)this + 50);
  result = this;
  *((_QWORD *)this + 7) = *(_QWORD *)(*((_QWORD *)this + 2) + 112LL);
  return result;
}

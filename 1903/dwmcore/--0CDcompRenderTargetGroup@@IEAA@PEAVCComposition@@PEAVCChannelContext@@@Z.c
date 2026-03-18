/*
 * XREFs of ??0CDcompRenderTargetGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x1800D6380
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CDcompRenderTargetGroup *__fastcall CDcompRenderTargetGroup::CDcompRenderTargetGroup(
        CDcompRenderTargetGroup *this,
        struct CComposition *a2,
        struct CChannelContext *a3)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CDcompRenderTargetGroup::`vftable';
  return this;
}

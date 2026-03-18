/*
 * XREFs of ??0CHoverPointerSource@@IEAA@PEAVCComposition@@@Z @ 0x1800D9980
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CHoverPointerSource *__fastcall CHoverPointerSource::CHoverPointerSource(
        CHoverPointerSource *this,
        struct CComposition *a2)
{
  *((_QWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CHoverPointerSource::`vftable'{for `IHoverPointerSourceResource'};
  *((_QWORD *)this + 1) = &CHoverPointerSource::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  return this;
}

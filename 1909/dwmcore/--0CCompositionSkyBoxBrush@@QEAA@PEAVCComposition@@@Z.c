/*
 * XREFs of ??0CCompositionSkyBoxBrush@@QEAA@PEAVCComposition@@@Z @ 0x1801D0FD0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CCompositionSkyBoxBrush *__fastcall CCompositionSkyBoxBrush::CCompositionSkyBoxBrush(
        CCompositionSkyBoxBrush *this,
        struct CComposition *a2)
{
  CCompositionSkyBoxBrush *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)this = &CCompositionSkyBoxBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CTextBrush::`vftable'{for `IVisualListenerInfoProvider'};
  result = this;
  *((_BYTE *)this + 72) = 0;
  *((_DWORD *)this + 28) = 63;
  *((_DWORD *)this + 27) = 1120403456;
  return result;
}

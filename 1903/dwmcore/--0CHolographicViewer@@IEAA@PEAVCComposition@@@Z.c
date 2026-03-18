/*
 * XREFs of ??0CHolographicViewer@@IEAA@PEAVCComposition@@@Z @ 0x180247CC0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

CHolographicViewer *__fastcall CHolographicViewer::CHolographicViewer(
        CHolographicViewer *this,
        struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &CHolographicViewer::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CHolographicViewer::`vftable'{for `IHolographicViewer'};
  *((_QWORD *)this + 8) = &CHolographicViewer::`vftable'{for `IHolographicViewerBufferSource'};
  memset_0((char *)this + 76, 0, 0x30uLL);
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_BYTE *)this + 152) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 18) = _InterlockedIncrement(&dword_18033BE5C);
  *((_QWORD *)this + 20) = *(_QWORD *)(*((_QWORD *)this + 2) + 112LL);
  InitializeSRWLock((PSRWLOCK)this + 22);
  return this;
}

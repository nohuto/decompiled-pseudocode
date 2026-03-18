/*
 * XREFs of ??0CHolographicViewer@@IEAA@PEAVCComposition@@@Z @ 0x18020EA30
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     memset_0 @ 0x1800EC516 (memset_0.c)
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
  memset_0((char *)this + 76, 0, 0x2CuLL);
  *((_DWORD *)this + 31) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_BYTE *)this + 144) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 18) = _InterlockedIncrement(&dword_1803076F4);
  *((_QWORD *)this + 19) = *(_QWORD *)(*((_QWORD *)this + 2) + 120LL);
  InitializeSRWLock((PSRWLOCK)this + 21);
  return this;
}

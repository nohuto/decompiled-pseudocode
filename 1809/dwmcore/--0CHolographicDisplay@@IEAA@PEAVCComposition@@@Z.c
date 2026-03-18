/*
 * XREFs of ??0CHolographicDisplay@@IEAA@PEAVCComposition@@@Z @ 0x18020C108
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CHolographicDisplay *__fastcall CHolographicDisplay::CHolographicDisplay(
        CHolographicDisplay *this,
        struct CComposition *a2)
{
  CHolographicDisplay *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CHolographicDisplay::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHolographicDisplay::`vftable'{for `IHolographicDisplayInfo'};
  *((_DWORD *)this + 20) = 0;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *((_DWORD *)this + 27) = 0;
  *((_BYTE *)this + 112) = 0;
  InitializeSRWLock((PSRWLOCK)this + 15);
  *((_DWORD *)this + 20) = _InterlockedIncrement(&CHolographicDisplay::s_displayIdCounter);
  result = this;
  *((_QWORD *)this + 9) = *(_QWORD *)(*((_QWORD *)this + 2) + 120LL);
  return result;
}

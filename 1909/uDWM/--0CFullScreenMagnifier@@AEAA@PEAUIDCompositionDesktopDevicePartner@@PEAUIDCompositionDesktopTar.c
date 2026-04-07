/*
 * XREFs of ??0CFullScreenMagnifier@@AEAA@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@@Z @ 0x1800452D0
 * Callers:
 *     ?Create@CFullScreenMagnifier@@SAJPEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180045220 (-Create@CFullScreenMagnifier@@SAJPEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CFullScreenMagnifier *__fastcall CFullScreenMagnifier::CFullScreenMagnifier(
        CFullScreenMagnifier *this,
        struct IDCompositionDesktopDevicePartner *a2,
        struct IDCompositionDesktopTargetPartner *a3,
        struct CVisual *a4)
{
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = &CFullScreenMagnifier::`vftable';
  *((_QWORD *)this + 5) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 4) = a4;
  *(_OWORD *)((char *)this + 68) = xmmword_1800C7860;
  *(_OWORD *)((char *)this + 168) = xmmword_1800C7860;
  *(_OWORD *)((char *)this + 84) = xmmword_1800C7870;
  *(_OWORD *)((char *)this + 184) = xmmword_1800C7870;
  *(_OWORD *)((char *)this + 100) = xmmword_1800C7880;
  *(_OWORD *)((char *)this + 200) = xmmword_1800C7880;
  *(_OWORD *)((char *)this + 116) = xmmword_1800C7890;
  *(_OWORD *)((char *)this + 216) = xmmword_1800C7890;
  *(_OWORD *)((char *)this + 132) = xmmword_1800C78A0;
  *(_OWORD *)((char *)this + 232) = xmmword_1800C78A0;
  *(_OWORD *)((char *)this + 148) = xmmword_1800C78B0;
  *((_DWORD *)this + 41) = 1065353216;
  *(_OWORD *)((char *)this + 248) = xmmword_1800C78B0;
  *((_DWORD *)this + 66) = 1065353216;
  if ( a4 )
    _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IDCompositionDesktopTargetPartner *))(*(_QWORD *)a3 + 8LL))(a3);
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}

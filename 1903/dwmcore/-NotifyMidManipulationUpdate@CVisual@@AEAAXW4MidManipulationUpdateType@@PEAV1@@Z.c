/*
 * XREFs of ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180089BCC
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18002B0D8 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180089C68 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18008AA20 (-Release@CVisual@@UEAAKXZ.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18008BA20 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1801C2E94 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800A44AC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::NotifyMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  CComposition *v5; // rbx
  struct CManipulationManager *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (*(_BYTE *)(a3 + 94) & 2) != 0 )
  {
    v5 = *(CComposition **)(a1 + 16);
    v6 = 0LL;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v6);
    if ( (int)CComposition::GetManipulationManager(v5, &v6) >= 0 )
      (*(void (__fastcall **)(struct CManipulationManager *, _QWORD, __int64))(*(_QWORD *)v6 + 48LL))(v6, a2, a3);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v6);
  }
}

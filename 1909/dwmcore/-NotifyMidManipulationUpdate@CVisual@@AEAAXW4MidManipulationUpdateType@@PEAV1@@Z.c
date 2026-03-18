/*
 * XREFs of ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1800790C4
 * Callers:
 *     ?Release@CVisual@@UEAAKXZ @ 0x180078900 (-Release@CVisual@@UEAAKXZ.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180078CC0 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180078F04 (-DirtyForInvisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800A8DB8 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1801C16F4 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800A833C (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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

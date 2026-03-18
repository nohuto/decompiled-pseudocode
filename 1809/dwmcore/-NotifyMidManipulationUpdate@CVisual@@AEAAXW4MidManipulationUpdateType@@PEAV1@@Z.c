/*
 * XREFs of ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18009FC60
 * Callers:
 *     ?DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x18006DB84 (-DirtyForVisibleChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18009F590 (-Release@CVisual@@UEAAKXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18009FACC (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18007F878 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801EBCCC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

void __fastcall CVisual::NotifyMidManipulationUpdate(__int64 a1, unsigned int a2, __int64 a3)
{
  struct CManipulationManager *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (*(_BYTE *)(a3 + 94) & 2) != 0 )
  {
    v6 = 0LL;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v6);
    if ( (int)CComposition::GetManipulationManager(*(CComposition **)(a1 + 16), &v6) >= 0 )
      CManipulationManager::QueueMidManipulationUpdate(v6, a2, a3);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v6);
  }
}

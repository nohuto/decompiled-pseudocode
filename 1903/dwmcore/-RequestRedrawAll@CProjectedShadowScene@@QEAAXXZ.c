/*
 * XREFs of ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180006AB4
 * Callers:
 *     ?ProcessSetLightSource@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETLIGHTSOURCE@@@Z @ 0x180003D88 (-ProcessSetLightSource@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSH.c)
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x1800063A4 (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z @ 0x180006540 (-SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x180006584 (-SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z @ 0x1800065C8 (-SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x180006600 (-SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x180006658 (-SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x1800066B0 (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 *     ?NotifyOnChanged@CProjectedShadowScene@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180006A90 (-NotifyOnChanged@CProjectedShadowScene@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x180007190 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 *     ?SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x180022940 (-SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x180006AF4 (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowScene::RequestRedrawAll(CProjectedShadowScene *this)
{
  __int64 ***v1; // rdi
  __int64 **i; // rbx

  if ( !CCommonRegistryData::m_fDisableProjectedShadows )
  {
    v1 = (__int64 ***)*((_QWORD *)this + 9);
    for ( i = *v1; i != (__int64 **)v1; i = (__int64 **)*i )
      CProjectedShadowReceiver::RequestRedraw((CProjectedShadowReceiver *)i[2]);
  }
}

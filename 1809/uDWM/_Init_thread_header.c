/*
 * XREFs of _Init_thread_header @ 0x18004C22C
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18000AA20 (-Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtag.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000AB60 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@P.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002CCC4 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?DwmClientStartup@@YAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003C820 (-DwmClientStartup@@YAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18003DF10 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18003E1C4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x18003E3A4 (-GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z.c)
 *     ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x180040318 (-RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180045EA8 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x1800465B0 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180047098 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x18007DB08 (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 *     ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x18007E4FC (-LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007E5C8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x18007E960 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x18007EB80 (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18007EC5C (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x180090590 (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_header(_DWORD *a1)
{
  AcquireSRWLockExclusive(&SRWLock);
  while ( 1 )
  {
    if ( !*a1 )
    {
      *a1 = -1;
      goto LABEL_7;
    }
    if ( *a1 != -1 )
      break;
    SleepConditionVariableSRW(&ConditionVariable, &SRWLock, 0xFFFFFFFF, 0);
  }
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) = Init_global_epoch;
LABEL_7:
  ReleaseSRWLockExclusive(&SRWLock);
}

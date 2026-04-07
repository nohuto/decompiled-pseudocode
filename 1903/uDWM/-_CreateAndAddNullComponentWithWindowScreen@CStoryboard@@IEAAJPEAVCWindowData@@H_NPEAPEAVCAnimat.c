/*
 * XREFs of ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800031E4
 * Callers:
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002290 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002410 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18002F840 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180033720 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ @ 0x1800A8B10 (-OnEndTransitionRequest@CAppArrangementImmediate@@EEAAJXZ.c)
 *     ?OnEndTransitionRequest@CNoAnimation@@UEAAJXZ @ 0x1800A8DA0 (-OnEndTransitionRequest@CNoAnimation@@UEAAJXZ.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800AB430 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800ABF00 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800AC950 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800ACB80 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CTabSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800ADE30 (-_WindowEnumCallback@CTabSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180003280 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000B398 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
        CStoryboard *this,
        struct CWindowData *a2,
        int a3,
        bool a4,
        struct CAnimationComponent **a5)
{
  int v6; // eax
  unsigned int v7; // edi
  volatile signed __int32 *v8; // rbx
  int v9; // eax
  void *v11; // [rsp+28h] [rbp-20h]
  CBaseObject *v12; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0LL;
  v6 = CTransitionVisualController::CreateNullAnimationComponentWithWindow(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
         a2,
         a3,
         this,
         a4,
         &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v6, 0x157Au, v11);
LABEL_5:
    v8 = (volatile signed __int32 *)v12;
    goto LABEL_6;
  }
  v8 = (volatile signed __int32 *)v12;
  v9 = CStoryboard::_AddAnimationComponent(this, v12);
  v7 = v9;
  if ( v9 >= 0 )
  {
    *a5 = (struct CAnimationComponent *)v8;
    if ( !v8 )
      return v7;
    _InterlockedIncrement(v8 + 2);
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v9, 0x157Bu, v11);
LABEL_6:
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return v7;
}

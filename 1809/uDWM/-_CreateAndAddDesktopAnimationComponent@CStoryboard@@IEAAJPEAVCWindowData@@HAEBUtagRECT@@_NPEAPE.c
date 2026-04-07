/*
 * XREFs of ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800A57E4
 * Callers:
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002D50 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 *     ?CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z @ 0x1800A31BC (-CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800A5F64 (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A6DF0 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A78B0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18002D804 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18009EB3C (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddDesktopAnimationComponent(
        CStoryboard *this,
        const RECT *a2,
        int a3,
        const struct tagRECT *a4,
        bool a5,
        struct CAnimationComponent **a6)
{
  __int64 v6; // rax
  LONG bottom; // edx
  char v12; // al
  int v13; // eax
  unsigned int v14; // edi
  volatile signed __int32 *v15; // rbx
  int v16; // eax
  CBaseObject *v18; // [rsp+68h] [rbp+10h] BYREF

  v6 = *(_QWORD *)this;
  bottom = a2[37].bottom;
  v18 = 0LL;
  v12 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(v6 + 120))(this, bottom & 0xFFF);
  v13 = CTransitionVisualController::CreateDesktopAnimationComponent(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
          a2,
          a3,
          a4,
          a5,
          (v12 & 4) != 0,
          this,
          &v18);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v15 = (volatile signed __int32 *)v18;
    v16 = CStoryboard::_AddAnimationComponent(this, v18);
    v14 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, 0x1539u);
      goto LABEL_8;
    }
    *a6 = (struct CAnimationComponent *)v15;
    if ( !v15 )
      return v14;
    _InterlockedIncrement(v15 + 2);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x1538u);
  }
  v15 = (volatile signed __int32 *)v18;
LABEL_8:
  if ( v15 )
    CBaseObject::Release((CBaseObject *)v15);
  return v14;
}

/*
 * XREFs of ?CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z @ 0x1800A31BC
 * Callers:
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002CB0 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 * Callees:
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180003364 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?GetPVLTarget@CLauncherLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180004830 (-GetPVLTarget@CLauncherLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180030484 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180032B04 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800A57E4 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 */

__int64 __fastcall CLauncherLaunch::CommonAnimate(
        CLauncherLaunch *this,
        struct CWindowData *a2,
        struct CAnimationComponent **a3)
{
  int v3; // ebx
  const struct tagRECT *v5; // rdx
  int PVLTarget; // ecx
  int v9; // eax
  int v10; // edi
  CBaseObject *v11; // rbx
  __int128 v12; // xmm0
  int v13; // eax
  __int64 v14; // rcx
  struct CAnimationComponent *v15; // rax
  CBaseObject *v16; // rax
  CBaseObject *v17; // rax
  CBaseObject *v19; // [rsp+50h] [rbp-9h] BYREF
  struct tagRECT *v20; // [rsp+58h] [rbp-1h] BYREF
  struct tagRECT v21; // [rsp+60h] [rbp+7h] BYREF
  struct tagRECT v22; // [rsp+70h] [rbp+17h] BYREF

  v3 = *((_DWORD *)a2 + 28);
  v19 = 0LL;
  v5 = (const struct tagRECT *)((char *)this + 120);
  v20 = 0LL;
  if ( v3 != 1 )
    v5 = 0LL;
  CStoryboard::_GetIdealRects(a2, v5, &v22, &v20, &v21);
  PVLTarget = CLauncherLaunch::GetPVLTarget((__int64)this, *((_DWORD *)a2 + 151));
  if ( v3 == 1 )
  {
    v9 = CStoryboard::_CreateAndAddDesktopAnimationComponent(this, a2, PVLTarget, &v22, 0, &v19);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v9, 0xB14u);
LABEL_6:
      v11 = v19;
      goto LABEL_13;
    }
    v11 = v19;
    if ( *((_DWORD *)v19 + 17) != 2 )
    {
      v12 = *(_OWORD *)((char *)this + 120);
      *((_DWORD *)v19 + 17) = 2;
      *(_OWORD *)((char *)v11 + 104) = v12;
    }
  }
  else
  {
    v13 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 0, PVLTarget, v20, 0LL, 0x11u, 1, &v19);
    v10 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0xB1Eu);
      goto LABEL_6;
    }
    v11 = v19;
  }
  CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v11 + 5), &v22);
  v14 = *((_QWORD *)v11 + 5);
  *(struct tagRECT *)(v14 + 872) = v21;
  CVisual::SetDirtyFlags((CVisual *)(v14 + 8), 4096);
LABEL_13:
  if ( a3 )
  {
    v15 = 0LL;
    if ( v10 >= 0 )
      v15 = v11;
    *a3 = v15;
    v16 = 0LL;
    if ( v10 >= 0 )
      v16 = v11;
    if ( v16 )
    {
      v17 = 0LL;
      if ( v10 >= 0 )
        v17 = v11;
      _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
      v11 = v19;
    }
  }
  if ( v11 )
    CBaseObject::Release(v11);
  return (unsigned int)v10;
}

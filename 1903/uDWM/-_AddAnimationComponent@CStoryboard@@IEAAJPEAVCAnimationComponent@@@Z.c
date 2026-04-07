/*
 * XREFs of ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000B398
 * Callers:
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800031E4 (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180031E84 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18003201C (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x1800A89D0 (-OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ.c)
 *     ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800A9C38 (-_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPE.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800A9E34 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 *     ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z @ 0x1800A9F4C (-_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TAR.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800AB430 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800ADEF0 (-_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard.c)
 * Callees:
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000B434 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800AACA8 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CStoryboard::_AddAnimationComponent(CStoryboard *this, struct CAnimationComponent *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // eax
  int v6; // ebx
  int v8; // eax
  void *v9; // [rsp+28h] [rbp-10h]
  struct CAnimationComponent *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v3 = *((_DWORD *)this + 28);
  v4 = v3 + 1;
  if ( v3 + 1 < v3 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v9);
    goto LABEL_11;
  }
  if ( v4 <= *((_DWORD *)this + 27) )
  {
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * v3) = v10;
    *((_DWORD *)this + 28) = v4;
    goto LABEL_4;
  }
  v8 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 88, 8LL, 1LL, &v10);
  v6 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC0u, v9);
  if ( v6 < 0 )
  {
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v6, 0x158Fu, v9);
LABEL_13:
    CStoryboard::_RemoveAnimationComponent(this, v10);
    return (unsigned int)v6;
  }
LABEL_4:
  v5 = CTransitionVisualController::AddAnimationComponent(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
         v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v5, 0x1590u, v9);
    goto LABEL_13;
  }
  return (unsigned int)v6;
}

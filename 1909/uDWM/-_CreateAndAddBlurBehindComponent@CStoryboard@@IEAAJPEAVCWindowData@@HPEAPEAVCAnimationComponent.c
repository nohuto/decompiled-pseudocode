/*
 * XREFs of ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x18002FD28
 * Callers:
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002930 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180032B90 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180033250 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000A058 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RecordWindowRect@CAnimationComponent@@QEAAXXZ @ 0x18002E7E0 (-RecordWindowRect@CAnimationComponent@@QEAAXXZ.c)
 *     ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18002FC14 (-CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCSto.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CStoryboard::_CreateAndAddBlurBehindComponent(
        CStoryboard *this,
        __m128i *a2,
        int a3,
        struct CAnimationComponent **a4)
{
  int v6; // eax
  unsigned int v7; // edi
  volatile signed __int32 *v8; // rbx
  int v10; // eax
  void *v11; // [rsp+28h] [rbp-10h]
  CAnimationComponent *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  *a4 = 0LL;
  if ( !a2[25].m128i_i64[0] )
  {
    v7 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x1502u,
      v11);
    return v7;
  }
  v6 = CTransitionVisualController::CreateBlurBehindAnimationComponent(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
         a2,
         a3,
         this,
         &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v6, 0x1505u, v11);
  }
  else
  {
    v8 = (volatile signed __int32 *)v12;
    if ( !v12 )
      return v7;
    v10 = CStoryboard::_AddAnimationComponent(this, v12);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v10, 0x1509u, v11);
      goto LABEL_11;
    }
    CAnimationComponent::RecordWindowRect((CAnimationComponent *)v8);
    *a4 = (struct CAnimationComponent *)v8;
    _InterlockedIncrement(v8 + 2);
  }
  v8 = (volatile signed __int32 *)v12;
LABEL_11:
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return v7;
}

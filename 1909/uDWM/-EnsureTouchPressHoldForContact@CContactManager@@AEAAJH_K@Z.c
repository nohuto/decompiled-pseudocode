/*
 * XREFs of ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x180096488
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x180097048 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x180030018 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047CE4 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x180095CC4 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 */

__int64 __fastcall CContactManager::EnsureTouchPressHoldForContact(CContactManager *this, unsigned int a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rax
  struct CTouchVisual *v8; // rsi
  CContactManager *v9; // rcx
  struct CTouchVisual *v10; // rsi
  CContactManager *v11; // rcx
  struct CTouchVisual *v12; // rsi
  CContactManager *v13; // rcx
  struct CTouchVisual *v14; // rsi
  CContactManager *v15; // rcx
  struct CTouchVisual *v16; // rsi
  int Touch; // eax
  CContactManager *v18; // rcx

  v3 = 0;
  v4 = 112LL * a2;
  v5 = *((_QWORD *)this + 7);
  if ( !*(_QWORD *)(v5 + v4 + 64) )
  {
    v8 = *(struct CTouchVisual **)(v5 + v4 + 48);
    CContactManager::StopAndRemoveFromRootNode(this, v8);
    if ( v8 )
      CBaseObject::Release(v8);
    v10 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v4 + 56);
    CContactManager::StopAndRemoveFromRootNode(v9, v10);
    if ( v10 )
      CBaseObject::Release(v10);
    v12 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v4 + 88);
    CContactManager::StopAndRemoveFromRootNode(v11, v12);
    if ( v12 )
      CBaseObject::Release(v12);
    v14 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v4 + 64);
    CContactManager::StopAndRemoveFromRootNode(v13, v14);
    if ( v14 )
      CBaseObject::Release(v14);
    v16 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v4 + 96);
    CContactManager::StopAndRemoveFromRootNode(v15, v16);
    if ( v16 )
      CBaseObject::Release(v16);
    *(_QWORD *)(*((_QWORD *)this + 7) + v4 + 48) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 7) + v4 + 56) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 7) + v4 + 88) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 7) + v4 + 64) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 7) + v4 + 96) = 0LL;
    *(_BYTE *)(*((_QWORD *)this + 7) + v4 + 104) = 0;
    Touch = CreateTouchVisual<CTouchPressHoldVisual>(a3, (CTouchPressHoldVisual **)(v4 + *((_QWORD *)this + 7) + 64LL));
    v3 = Touch;
    if ( Touch >= 0 )
      CContactManager::AddToTouchNode(v18, a3, *(struct CVisual **)(*((_QWORD *)this + 7) + v4 + 64));
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x86Bu);
  }
  return v3;
}

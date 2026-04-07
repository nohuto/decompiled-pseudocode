/*
 * XREFs of ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800A3BE8
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002D768 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?RegisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z @ 0x180082414 (-RegisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z.c)
 *     ?Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800A2C00 (-Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x1800B1BC0 (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 */

__int64 __fastcall CTransitionVisualController::GetIconicThumbnailRepresentation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        char a5,
        CBaseObject **a6)
{
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  CBaseObject *v12; // rbx
  int v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  CBaseObject *v19; // rsi
  CBaseObject **v20; // r14
  _DWORD v22[10]; // [rsp+30h] [rbp-28h] BYREF
  CBaseObject *v23; // [rsp+60h] [rbp+8h] BYREF

  v23 = 0LL;
  v9 = CIconicAnimatedVisual::Create(&v23);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v9,
      0x9B4u);
LABEL_17:
    v12 = v23;
    goto LABEL_18;
  }
  v11 = a2;
  v12 = v23;
  v13 = CIconicAnimatedVisual::SetIconicData(v23, v11, a4, &a5);
  v10 = v13;
  if ( v13 >= 0 )
  {
    v14 = 0;
    v15 = a4[3] - a4[1];
    if ( a4[2] - *a4 >= 0 )
      v14 = a4[2] - *a4;
    v22[0] = v14;
    v16 = 0;
    if ( v15 >= 0 )
      v16 = v15;
    v22[1] = v16;
    v17 = (*(__int64 (__fastcall **)(CBaseObject *, _DWORD *))(*(_QWORD *)v12 + 96LL))(v12, v22);
    v10 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v17,
        0x9B7u);
      goto LABEL_18;
    }
    v18 = (*(__int64 (__fastcall **)(CBaseObject *))(*(_QWORD *)v12 + 64LL))(v12);
    v10 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v18,
        0x9B9u);
      goto LABEL_18;
    }
    *(_QWORD *)(a3 + 136) = v12;
    _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
    v19 = v23;
    CImmersiveIconicBitmapRegistry::RegisterIconicAnimatedVisual(
      *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 38),
      v23);
    v20 = a6;
    if ( *a6 )
      CBaseObject::Release(*a6);
    *v20 = v19;
    _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
    goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    v13,
    0x9B6u);
LABEL_18:
  if ( v12 )
    CBaseObject::Release(v12);
  return v10;
}

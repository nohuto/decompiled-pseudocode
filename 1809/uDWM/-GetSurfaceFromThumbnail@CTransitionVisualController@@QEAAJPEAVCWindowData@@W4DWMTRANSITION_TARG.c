/*
 * XREFs of ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCResource@@4PEAUMilPoint3F@@@Z @ 0x1800302D4
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18002F1D4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x180006F4C (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180033940 (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x180086948 (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetSurfaceFromThumbnail(
        __int64 a1,
        __int64 a2,
        int a3,
        const struct tagRECT *a4,
        char a5,
        CBaseObject **a6,
        CBaseObject **a7,
        float *a8)
{
  CBaseObject *v8; // rsi
  const struct tagRECT *v9; // r10
  float v10; // r15d
  unsigned int CVI; // edi
  CWindowSnapshot *v13; // rcx
  __int64 v14; // r15
  __int64 v16; // rcx
  float v17; // xmm0_4
  struct CResource *v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  float v24; // [rsp+98h] [rbp-69h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-61h] BYREF
  struct CResource *v26; // [rsp+A8h] [rbp-59h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-51h] BYREF
  int v28; // [rsp+B8h] [rbp-49h]
  __int128 v29; // [rsp+C0h] [rbp-41h] BYREF
  __int128 v30; // [rsp+D0h] [rbp-31h] BYREF

  v26 = 0LL;
  v8 = 0LL;
  v9 = a4;
  v10 = *(float *)&a3;
  *a8 = 1.0;
  a8[1] = 1.0;
  CVI = -2147467259;
  a8[2] = 1.0;
  *(_QWORD *)&v29 = a4;
  v24 = *(float *)&a3;
  v25 = 0LL;
  if ( !a2 )
    return CVI;
  v13 = *(CWindowSnapshot **)(a2 + 424);
  if ( v13 )
  {
    CVI = CWindowSnapshot::GetCVI(v13, a4, &v26, &v24);
    v17 = 1.0 / v24;
    a8[1] = 1.0 / v24;
    *a8 = v17;
  }
  else
  {
    v14 = 0LL;
    if ( !*(_DWORD *)(a2 + 536) )
      return CVI;
    while ( 1 )
    {
      v19 = *(_QWORD *)(a2 + 512);
      v27 = 0x3F8000003F800000LL;
      v28 = 1065353216;
      if ( CThumbnailVisual::GetCVI(
             *(CThumbnailVisual **)(*(_QWORD *)(v19 + 8 * v14) + 96LL),
             v9,
             &v26,
             (struct MilPoint3F *)&v27) >= 0
        && (!a5
         || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v27 - 1.0)) & _xmm) <= 0.0000011920929
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v27 + 1) - 1.0)) & _xmm) <= 0.0000011920929) )
      {
        break;
      }
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *(_DWORD *)(a2 + 536) )
        goto LABEL_7;
      v9 = (const struct tagRECT *)v29;
    }
    v20 = v28;
    CVI = 0;
    v10 = v24;
    *(_QWORD *)a8 = v27;
    *((_DWORD *)a8 + 2) = v20;
  }
  if ( (CVI & 0x80000000) == 0 )
  {
    v18 = v26;
    if ( (LODWORD(v10) & 0x4000000) != 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v26 + 2) + 1008LL))(
        *((_QWORD *)v26 + 2),
        *((unsigned int *)v26 + 6));
    v21 = CCachedVisualImageBrushResource::Create(
            v16,
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            &v25);
    CVI = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v21,
        0x97Bu);
      v8 = (CBaseObject *)v25;
      goto LABEL_8;
    }
    v8 = (CBaseObject *)v25;
    v30 = _xmm;
    v29 = _xmm;
    v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(v25 + 16) + 1200LL))(
            *(_QWORD *)(v25 + 16),
            *(unsigned int *)(v25 + 24),
            *(_QWORD *)(v25 + 16),
            &v30,
            &v29,
            0,
            0,
            0,
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            *((_DWORD *)v18 + 6));
    CVI = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v22,
        0x999u);
      goto LABEL_8;
    }
    if ( *a7 )
      CBaseObject::Release(*a7);
    *a7 = v18;
    _InterlockedAdd((volatile signed __int32 *)v18 + 2, 1u);
    if ( *a6 )
      CBaseObject::Release(*a6);
    v23 = v25;
    *a6 = (CBaseObject *)v25;
    _InterlockedAdd((volatile signed __int32 *)(v23 + 8), 1u);
    v8 = (CBaseObject *)v25;
  }
LABEL_7:
  v18 = v26;
LABEL_8:
  if ( v18 )
    CBaseObject::Release(v18);
  if ( v8 )
    CBaseObject::Release(v8);
  return CVI;
}

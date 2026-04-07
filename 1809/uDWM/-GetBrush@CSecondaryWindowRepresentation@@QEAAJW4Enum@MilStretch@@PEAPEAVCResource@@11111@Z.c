/*
 * XREFs of ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x180009950
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800078F4 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180008EA0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800ADB60 (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCResource@@0PEAM@Z @ 0x18000663C (-GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCResource@@0PEAM@Z.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAPEAV4@@Z @ 0x180009D50 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAP.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180021410 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::GetBrush(
        __int64 a1,
        __int64 a2,
        CBaseObject **a3,
        CBaseObject **a4,
        __int64 a5,
        CBaseObject **a6,
        CBaseObject **a7,
        CBaseObject **a8)
{
  CBaseObject **v11; // rsi
  CBaseObject *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  CBaseObject *v15; // rax
  int v16; // eax
  CBaseObject *v17; // rax
  int v18; // eax
  CTransitionWindowSnapshot *v19; // rcx
  CBaseObject *v20; // rax
  int v21; // eax
  int v22; // eax
  CWindowData *v23; // rdx
  __int64 v24; // rbx
  CWindowData *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // r9d
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  CBaseObject *v36; // rcx
  CBaseObject *v37; // rcx
  CBaseObject *v38; // rcx
  CBaseObject *v39; // rcx
  CBaseObject *v40; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  int Brush; // eax
  CBaseObject *v45; // [rsp+50h] [rbp-59h] BYREF
  int v46; // [rsp+58h] [rbp-51h]
  int v47; // [rsp+5Ch] [rbp-4Dh]
  CBaseObject *v48; // [rsp+60h] [rbp-49h] BYREF
  CBaseObject *v49; // [rsp+68h] [rbp-41h] BYREF
  CBaseObject *v50; // [rsp+70h] [rbp-39h] BYREF
  CBaseObject *v51; // [rsp+78h] [rbp-31h] BYREF
  CBaseObject **v52; // [rsp+80h] [rbp-29h]
  __int128 v53; // [rsp+88h] [rbp-21h] BYREF
  _QWORD v54[2]; // [rsp+98h] [rbp-11h] BYREF

  v51 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v45 = 0LL;
  v11 = a8;
  v52 = a8;
  if ( a3 )
  {
    v12 = *a3;
    v48 = v12;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
    }
    else
    {
      v13 = CResource::Create(27LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), &v48);
      v14 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x3A2u);
        goto LABEL_61;
      }
    }
  }
  if ( a4 )
  {
    v15 = *a4;
    v49 = v15;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
    }
    else
    {
      v16 = CResource::Create(27LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), &v49);
      v14 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x3ACu);
        goto LABEL_61;
      }
    }
  }
  if ( a6 )
  {
    v17 = *a6;
    v50 = v17;
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
    }
    else
    {
      v18 = CResource::Create(33LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), &v50);
      v14 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x3C0u);
        goto LABEL_61;
      }
    }
  }
  v19 = *(CTransitionWindowSnapshot **)(a1 + 544);
  if ( v19 )
  {
    Brush = CTransitionWindowSnapshot::GetBrush(v19, &v51, &v45, (float *)(a1 + 504));
    v14 = Brush;
    if ( Brush >= 0 )
      goto LABEL_34;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Brush, 0x3C7u);
    goto LABEL_59;
  }
  if ( a7 && (v20 = *a7) != 0LL )
  {
    v45 = *a7;
    _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
  }
  else
  {
    v21 = CResource::Create(5LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), &v45);
    v14 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x3D1u);
      goto LABEL_61;
    }
  }
  v47 = 0;
  v53 = 0uLL;
  if ( v48 )
  {
    v46 = 0;
    v22 = *((_DWORD *)v48 + 6);
    v53 = 0uLL;
    v47 = v22;
  }
  else
  {
    v53 = _xmm;
    v46 = 1;
  }
  v23 = 0LL;
  v24 = *(_QWORD *)(a1 + 48);
  v25 = *(CWindowData **)(a1 + 64);
  if ( *(_DWORD *)(a1 + 72) != 1 )
  {
    if ( *(_DWORD *)(a1 + 72) == 2 )
    {
      v42 = *((_QWORD *)v25 + 53);
      if ( v42 )
      {
        v23 = *(CWindowData **)(v42 + 32);
        goto LABEL_18;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 72) != 3 )
        goto LABEL_18;
      if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
      {
        v23 = *(CWindowData **)(*((_QWORD *)v25 + 54) + 80LL);
        goto LABEL_18;
      }
    }
  }
  v23 = v25;
LABEL_18:
  if ( CWindowData::IsImmersiveWindow(v23) && *(_DWORD *)(a1 + 72) == 3 )
  {
    if ( *(_QWORD *)(a1 + 512) )
      v24 = *(_QWORD *)(a1 + 512);
    goto LABEL_26;
  }
  if ( v24 )
    goto LABEL_27;
  v26 = 0LL;
  v27 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 72) != 1 )
  {
    if ( *(_DWORD *)(a1 + 72) == 2 )
    {
      v43 = *(_QWORD *)(v27 + 424);
      if ( v43 )
      {
        v26 = *(_QWORD *)(v43 + 32);
        goto LABEL_23;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 72) != 3 )
        goto LABEL_23;
      if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(v27 + 432) + 80LL);
        goto LABEL_23;
      }
    }
  }
  v26 = v27;
LABEL_23:
  v28 = *(_QWORD *)(v26 + 392);
  if ( !v28 )
  {
LABEL_98:
    v30 = 0;
    goto LABEL_29;
  }
  if ( (*(_BYTE *)(a1 + 40) & 4) != 0 )
    v24 = *(_QWORD *)(v28 + 528);
  else
    v24 = *(_QWORD *)(v28 + 256);
LABEL_26:
  if ( !v24 )
    goto LABEL_98;
LABEL_27:
  v29 = *(_QWORD *)(v24 + 16);
  if ( !v29 )
    goto LABEL_98;
  v30 = *(_DWORD *)(v29 + 24);
LABEL_29:
  if ( v50 )
    v31 = *((_DWORD *)v50 + 6);
  else
    v31 = 0;
  v54[0] = 0LL;
  v54[1] = 0LL;
  v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, _QWORD *, int, int, int, int))(**((_QWORD **)v45 + 2)
                                                                                            + 1000LL))(
          *((_QWORD *)v45 + 2),
          *((unsigned int *)v45 + 6),
          &v53,
          v54,
          v47,
          v31,
          v30,
          v46);
  v14 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x407u);
    goto LABEL_61;
  }
  v35 = CSecondaryWindowRepresentation::CreateBrushForCVI(v34, v33, v45, v49, 0LL, &v51);
  v14 = v35;
  if ( v35 >= 0 )
  {
    v11 = v52;
LABEL_34:
    if ( v11 )
    {
      if ( *v11 )
        CBaseObject::Release(*v11);
      v36 = v51;
      *v11 = v51;
      if ( v36 )
        _InterlockedIncrement((volatile signed __int32 *)v36 + 2);
    }
    if ( a3 )
    {
      if ( *a3 )
        CBaseObject::Release(*a3);
      v37 = v48;
      *a3 = v48;
      if ( v37 )
        _InterlockedIncrement((volatile signed __int32 *)v37 + 2);
    }
    if ( a4 )
    {
      if ( *a4 )
        CBaseObject::Release(*a4);
      v38 = v49;
      *a4 = v49;
      if ( v38 )
        _InterlockedIncrement((volatile signed __int32 *)v38 + 2);
    }
    if ( a6 )
    {
      if ( *a6 )
        CBaseObject::Release(*a6);
      v39 = v50;
      *a6 = v50;
      if ( v39 )
        _InterlockedIncrement((volatile signed __int32 *)v39 + 2);
    }
    if ( a7 )
    {
      if ( *a7 )
        CBaseObject::Release(*a7);
      v40 = v45;
      *a7 = v45;
      if ( v40 )
        _InterlockedIncrement((volatile signed __int32 *)v40 + 2);
    }
    goto LABEL_59;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x409u);
LABEL_59:
  if ( v51 )
    CBaseObject::Release(v51);
LABEL_61:
  if ( v48 )
    CBaseObject::Release(v48);
  if ( v49 )
    CBaseObject::Release(v49);
  if ( v50 )
    CBaseObject::Release(v50);
  if ( v45 )
    CBaseObject::Release(v45);
  return v14;
}

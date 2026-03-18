/*
 * XREFs of ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C0147B10
 * Callers:
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0128098 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02B4AB8 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C02BA210 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000390C (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0003A2C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004418 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C0005110 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C000519C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0005900 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     DpiMiracastHandleDisplayConfigChange @ 0x1C004C428 (DpiMiracastHandleDisplayConfigChange.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00DB404 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E6444 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C0147C78 (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C0147DC8 (-GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 */

__int64 __fastcall VIDPN_MGR::CacheLastClientCommittedVidPnRef(VIDPN_MGR *this, struct DMMVIDPN *const a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r11
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  DMMVIDPNTOPOLOGY *v13; // rsi
  unsigned int v14; // edi
  struct DMMVIDPNPRESENTPATH *MostImportantPath; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // r14d
  __int64 v20; // r9
  __int64 PathSourceFromTarget; // rdx
  __int64 v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // r14
  int v28; // esi
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // r13
  __int64 v41; // rax
  _QWORD *v42; // rax
  UINT cx; // r12d
  UINT cy; // r13d
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdi
  DMMVIDPNSOURCEMODE *v49; // rdi
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // edi
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // [rsp+30h] [rbp-18h] BYREF
  __int64 v59; // [rsp+38h] [rbp-10h] BYREF
  __int64 v60; // [rsp+90h] [rbp+48h]
  __int64 v61; // [rsp+98h] [rbp+50h] BYREF
  struct _D3DDDI_RATIONAL v62; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v63; // [rsp+A8h] [rbp+60h]

  v2 = 0;
  v61 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 8);
  auto_rc<DMMVIDPN>::reset(&v61, (__int64)a2);
  v4 = v61;
  v60 = v61;
  v5 = Set<DMMVIDPN>::FindByValue((__int64)this + 96, v61);
  if ( !DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(
          (__int64)this + 104,
          v5) )
  {
    v57 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v57 + 24) = v4;
    *(_QWORD *)(v57 + 32) = this;
    WdLogEvent5_WdError(v57);
    v2 = -1071774973;
    goto LABEL_22;
  }
  v10 = (_QWORD *)(v9 + 8);
  v11 = *(_QWORD *)(v9 + 8);
  if ( *(_QWORD *)(v11 + 8) != v9 + 8 || (v12 = *(_QWORD **)(v9 + 16), (_QWORD *)*v12 != v10) )
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  v13 = (DMMVIDPNTOPOLOGY *)(v4 + 96);
  *v10 = 0LL;
  *(_QWORD *)(v9 + 16) = 0LL;
  --*((_QWORD *)this + 17);
  if ( *((_QWORD *)v13 + 5) )
  {
    v14 = *((_DWORD *)this + 124);
    if ( v14 == -1 || !DMMVIDPNTOPOLOGY::IsTargetInTopology(v13, v14) )
    {
      MostImportantPath = DMMVIDPNTOPOLOGY::GetMostImportantPath(v13);
      if ( !MostImportantPath )
        goto LABEL_12;
      v14 = *(_DWORD *)(*((_QWORD *)MostImportantPath + 12) + 24LL);
      v18 = *((_QWORD *)this + 1);
      v19 = *(_DWORD *)(*((_QWORD *)MostImportantPath + 11) + 24LL);
      if ( !v18 )
      {
        v37 = WdLogNewEntry5_WdAssertion(0LL, v16);
        WdLogEvent5_WdAssertion(v37);
        v18 = *((_QWORD *)this + 1);
      }
      v20 = 2LL;
      PathSourceFromTarget = v19;
    }
    else
    {
      v35 = *((_QWORD *)this + 1);
      if ( !v35 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v34, v33);
        WdLogEvent5_WdAssertion(v36);
        v35 = *((_QWORD *)this + 1);
        v14 = *((_DWORD *)this + 124);
      }
      PathSourceFromTarget = (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v13, v14);
      v20 = 0LL;
      v18 = v35;
    }
    v22 = v14;
  }
  else
  {
    v18 = *((_QWORD *)this + 1);
    if ( !v18 )
    {
      v32 = WdLogNewEntry5_WdAssertion(0LL, v11);
      WdLogEvent5_WdAssertion(v32);
      v18 = *((_QWORD *)this + 1);
    }
    v22 = 0xFFFFFFFFLL;
    v20 = 3LL;
    PathSourceFromTarget = 0xFFFFFFFFLL;
  }
  ADAPTER_DISPLAY::SetPrimaryPath(v18, PathSourceFromTarget, v22, v20);
LABEL_12:
  v23 = (_QWORD *)((char *)v13 + 24);
  v24 = (_QWORD *)*((_QWORD *)v13 + 3);
  if ( v24 == (_QWORD *)((char *)v13 + 24) )
    v25 = 0LL;
  else
    v25 = v24 - 1;
  v26 = *((_QWORD *)v13 + 5);
  v27 = v25;
  if ( v26 == 1 )
  {
    if ( !v25 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v17, v23);
      WdLogEvent5_WdAssertion(v38);
    }
    v28 = 0;
    v29 = *(_QWORD *)(v25[12] + 96LL);
    if ( *(_DWORD *)(v29 + 84) == 15 )
      v28 = 8;
  }
  else if ( v26 == 2 )
  {
    v39 = (_QWORD *)v25[1];
    v40 = v39 - 1;
    if ( v39 == v23 )
      v40 = 0LL;
    if ( !v40 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v17, v23);
      WdLogEvent5_WdAssertion(v41);
    }
    if ( *(_DWORD *)(*(_QWORD *)(v25[12] + 96LL) + 84LL) != 15 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v40[12] + 96LL) + 84LL) != 15 )
        goto LABEL_20;
      v27 = v40;
    }
    v28 = 2;
    v29 = 4LL;
    if ( v25[11] != v40[11] )
      v28 = 4;
  }
  else
  {
    if ( !v25 )
      goto LABEL_20;
    while ( 1 )
    {
      v29 = *(_QWORD *)(v27[12] + 96LL);
      if ( *(_DWORD *)(v29 + 84) == 15 )
        break;
      v42 = (_QWORD *)v27[1];
      v27 = v42 - 1;
      if ( v42 == v23 )
        v27 = 0LL;
      if ( !v27 )
        goto LABEL_20;
    }
    v28 = 1;
  }
  if ( v28 )
  {
    LODWORD(v63) = 0;
    cx = 0;
    cy = 0;
    if ( !v27 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v29, v23);
      WdLogEvent5_WdAssertion(v45);
    }
    v46 = v27[11];
    v47 = *(_QWORD *)(v46 + 104);
    if ( v47 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v47 + 96));
      v48 = *(_QWORD *)(v46 + 104);
      v60 = v61;
    }
    else
    {
      v48 = 0LL;
    }
    v59 = v48;
    v49 = *(DMMVIDPNSOURCEMODE **)(v48 + 144);
    if ( v49 && *((_DWORD *)v49 + 18) != 2 )
    {
      cx = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v49)->PrimSurfSize.cx;
      cy = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v49)->PrimSurfSize.cy;
    }
    v50 = v27[12];
    v51 = *(_QWORD *)(v50 + 104);
    if ( v51 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v51 + 96));
      v52 = *(_QWORD *)(v50 + 104);
      v30 = v61;
    }
    else
    {
      v30 = v60;
      v52 = 0LL;
    }
    v53 = *(_QWORD *)(v52 + 144);
    v58 = v52;
    if ( v53 )
    {
      v62 = *(struct _D3DDDI_RATIONAL *)(v53 + 92);
      DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v53 + 72), &v62);
      v54 = DMMVIDEOSIGNALMODE::DivideAndRound(v62.Numerator, v62.Denominator);
    }
    else
    {
      v54 = v63;
    }
    v55 = *((_QWORD *)this + 1);
    if ( !v55 )
    {
      v56 = WdLogNewEntry5_WdAssertion(0LL, v23);
      WdLogEvent5_WdAssertion(v56);
      v55 = *((_QWORD *)this + 1);
    }
    DpiMiracastHandleDisplayConfigChange(*(_QWORD *)(*(_QWORD *)(v55 + 16) + 192LL), v28, cx, cy, v54);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v58, 0LL);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v59, 0LL);
    goto LABEL_21;
  }
LABEL_20:
  v30 = v60;
LABEL_21:
  v61 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 11, v30);
LABEL_22:
  auto_rc<DMMVIDPN>::reset(&v61, 0LL);
  return v2;
}

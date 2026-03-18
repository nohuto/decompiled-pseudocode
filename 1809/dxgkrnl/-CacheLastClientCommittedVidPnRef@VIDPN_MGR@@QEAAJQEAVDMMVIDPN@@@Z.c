/*
 * XREFs of ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C013A3AC
 * Callers:
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CFBFC (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C027C6A8 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C02821D0 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003814 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C00046A0 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C000472C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0007060 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000F658 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     DpiMiracastHandleDisplayConfigChange @ 0x1C0045958 (DpiMiracastHandleDisplayConfigChange.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00D7168 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00D9938 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C013A510 (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C013A580 (-GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 */

__int64 __fastcall VIDPN_MGR::CacheLastClientCommittedVidPnRef(VIDPN_MGR *this, struct DMMVIDPN *const a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r11
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  DMMVIDPNTOPOLOGY *v11; // r13
  unsigned int v12; // edi
  struct DMMVIDPNPRESENTPATH *MostImportantPath; // rax
  __int64 v14; // rcx
  unsigned int v15; // esi
  __int64 v16; // r9
  __int64 PathSourceFromTarget; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rsi
  _QWORD *v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // r15
  int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v28; // rax
  __int64 v29; // rcx
  char *v30; // r8
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // r13
  __int64 v37; // rax
  _QWORD *v38; // rax
  UINT cx; // r12d
  UINT cy; // r13d
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rsi
  DMMVIDPNSOURCEMODE *v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // esi
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // [rsp+30h] [rbp-18h] BYREF
  __int64 v55; // [rsp+38h] [rbp-10h] BYREF
  __int64 v56; // [rsp+90h] [rbp+48h]
  __int64 v57; // [rsp+98h] [rbp+50h] BYREF
  struct _D3DDDI_RATIONAL v58; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v59; // [rsp+A8h] [rbp+60h]

  v2 = 0;
  v57 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 8);
  auto_rc<DMMVIDPN>::reset(&v57, (__int64)a2);
  v4 = v57;
  v56 = v57;
  v5 = Set<DMMVIDPN>::FindByValue((__int64)this + 96, v57);
  if ( !DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(
          (__int64)this + 104,
          v5) )
  {
    v53 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v53 + 24) = v4;
    *(_QWORD *)(v53 + 32) = this;
    WdLogEvent5_WdError(v53);
    v2 = -1071774973;
    goto LABEL_22;
  }
  v8 = (_QWORD *)(v7 + 8);
  v9 = *(_QWORD *)(v7 + 8);
  if ( *(_QWORD *)(v9 + 8) != v7 + 8 || (v10 = *(_QWORD **)(v7 + 16), (_QWORD *)*v10 != v8) )
    __fastfail(3u);
  *v10 = v9;
  v11 = (DMMVIDPNTOPOLOGY *)(v4 + 96);
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
  *(_QWORD *)(v7 + 16) = 0LL;
  --*((_QWORD *)this + 17);
  if ( *(_QWORD *)(v4 + 136) )
  {
    v12 = *((_DWORD *)this + 124);
    if ( v12 == -1 || !DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v4 + 96), v12) )
    {
      MostImportantPath = DMMVIDPNTOPOLOGY::GetMostImportantPath((DMMVIDPNTOPOLOGY *)(v4 + 96));
      if ( !MostImportantPath )
        goto LABEL_12;
      v12 = *(_DWORD *)(*((_QWORD *)MostImportantPath + 12) + 24LL);
      v14 = *((_QWORD *)this + 1);
      v15 = *(_DWORD *)(*((_QWORD *)MostImportantPath + 11) + 24LL);
      if ( !v14 )
      {
        v33 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v33);
        v14 = *((_QWORD *)this + 1);
      }
      v16 = 2LL;
      PathSourceFromTarget = v15;
    }
    else
    {
      v31 = *((_QWORD *)this + 1);
      if ( !v31 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v29);
        WdLogEvent5_WdAssertion(v32);
        v31 = *((_QWORD *)this + 1);
        v12 = *((_DWORD *)this + 124);
      }
      PathSourceFromTarget = (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v11, v12, v30);
      v16 = 0LL;
      v14 = v31;
    }
    v18 = v12;
  }
  else
  {
    v14 = *((_QWORD *)this + 1);
    if ( !v14 )
    {
      v28 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v28);
      v14 = *((_QWORD *)this + 1);
    }
    v18 = 0xFFFFFFFFLL;
    v16 = 3LL;
    PathSourceFromTarget = 0xFFFFFFFFLL;
  }
  ADAPTER_DISPLAY::SetPrimaryPath(v14, PathSourceFromTarget, v18, v16);
LABEL_12:
  v19 = (_QWORD *)((char *)v11 + 24);
  v20 = 0LL;
  v21 = (_QWORD *)*((_QWORD *)v11 + 3);
  if ( v21 != (_QWORD *)((char *)v11 + 24) )
    v20 = v21 - 1;
  v22 = *((_QWORD *)v11 + 5);
  v23 = v20;
  if ( v22 == 1 )
  {
    if ( !v20 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v34);
    }
    v24 = 8;
    v25 = *(_QWORD *)(v20[12] + 96LL);
    if ( *(_DWORD *)(v25 + 84) != 15 )
      v24 = 0;
  }
  else if ( v22 == 2 )
  {
    v35 = (_QWORD *)v20[1];
    v36 = v35 - 1;
    if ( v35 == v19 )
      v36 = 0LL;
    if ( !v36 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v37);
    }
    if ( *(_DWORD *)(*(_QWORD *)(v20[12] + 96LL) + 84LL) != 15 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v36[12] + 96LL) + 84LL) != 15 )
        goto LABEL_20;
      v23 = v36;
    }
    v24 = 2;
    v25 = 4LL;
    if ( v20[11] != v36[11] )
      v24 = 4;
  }
  else
  {
    if ( !v20 )
      goto LABEL_20;
    while ( 1 )
    {
      v25 = *(_QWORD *)(v23[12] + 96LL);
      if ( *(_DWORD *)(v25 + 84) == 15 )
        break;
      v38 = (_QWORD *)v23[1];
      v23 = v38 - 1;
      if ( v38 == v19 )
        v23 = 0LL;
      if ( !v23 )
        goto LABEL_20;
    }
    v24 = 1;
  }
  if ( v24 )
  {
    LODWORD(v59) = 0;
    cx = 0;
    cy = 0;
    if ( !v23 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v41);
    }
    v42 = v23[11];
    v43 = *(_QWORD *)(v42 + 104);
    if ( v43 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v43 + 96));
      v44 = *(_QWORD *)(v42 + 104);
      v56 = v57;
    }
    else
    {
      v44 = 0LL;
    }
    v55 = v44;
    v45 = *(DMMVIDPNSOURCEMODE **)(v44 + 144);
    if ( v45 && *((_DWORD *)v45 + 18) != 2 )
    {
      cx = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v45)->PrimSurfSize.cx;
      cy = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v45)->PrimSurfSize.cy;
    }
    v46 = v23[12];
    v47 = *(_QWORD *)(v46 + 104);
    if ( v47 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v47 + 96));
      v48 = *(_QWORD *)(v46 + 104);
      v26 = v57;
    }
    else
    {
      v26 = v56;
      v48 = 0LL;
    }
    v49 = *(_QWORD *)(v48 + 144);
    v54 = v48;
    if ( v49 )
    {
      v58 = *(struct _D3DDDI_RATIONAL *)(v49 + 92);
      DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v49 + 72), &v58);
      v50 = DMMVIDEOSIGNALMODE::DivideAndRound(v58.Numerator, v58.Denominator);
    }
    else
    {
      v50 = v59;
    }
    v51 = *((_QWORD *)this + 1);
    if ( !v51 )
    {
      v52 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v52);
      v51 = *((_QWORD *)this + 1);
    }
    DpiMiracastHandleDisplayConfigChange(*(_QWORD *)(*(_QWORD *)(v51 + 16) + 192LL), v24, cx, cy, v50);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v54, 0LL);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v55, 0LL);
    goto LABEL_21;
  }
LABEL_20:
  v26 = v56;
LABEL_21:
  v57 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 11, v26);
LABEL_22:
  auto_rc<DMMVIDPN>::reset(&v57, 0LL);
  return v2;
}

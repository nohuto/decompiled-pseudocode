/*
 * XREFs of ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C02B2D68
 * Callers:
 *     DxgkOpmGetRedirectionInfo @ 0x1C01F6A50 (DxgkOpmGetRedirectionInfo.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C0236598 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C026CF78 (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0005530 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0005900 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00DB31C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00DB404 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 */

__int64 __fastcall DmmGetClientVidPnTargetModeInfo(
        DXGADAPTER *a1,
        __int64 a2,
        enum _D3DKMDT_VIDEO_SIGNAL_STANDARD *a3,
        unsigned int *a4,
        unsigned __int8 *a5,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING *a6,
        struct _D3DKMDT_2DREGION *a7,
        struct _D3DDDI_RATIONAL *a8)
{
  unsigned int v8; // ebx
  __int64 v9; // r12
  unsigned __int8 *v11; // r13
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING *v12; // r15
  struct _D3DKMDT_2DREGION *v13; // rsi
  struct _D3DDDI_RATIONAL *v14; // r14
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // r8
  __int64 v36; // r10
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  enum _D3DKMDT_VIDEO_SIGNAL_STANDARD *v46; // rcx

  v8 = 0;
  v9 = (unsigned int)a2;
  if ( a3 )
    *a3 = D3DKMDT_VSS_UNINITIALIZED;
  if ( a4 )
    *a4 = 0;
  v11 = a5;
  if ( a5 )
    *a5 = 0;
  v12 = a6;
  if ( a6 )
    *a6 = D3DDDI_VSSLO_UNINITIALIZED;
  v13 = a7;
  if ( a7 )
    *a7 = 0LL;
  v14 = a8;
  if ( a8 )
    *a8 = 0LL;
  if ( !a1 )
  {
    v15 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v15 + 24) = 0LL;
LABEL_15:
    WdLogEvent5_WdError(v15);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v18, v17);
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = *((_QWORD *)a1 + 319);
  if ( !v21 )
  {
    v15 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v15 + 24) = a1;
    goto LABEL_15;
  }
  v22 = *(_QWORD *)(v21 + 88);
  if ( v22 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)&a8, v22);
    v25 = *(_QWORD *)(v22 + 88);
    a5 = 0LL;
    if ( v25 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 32));
      v26 = *(_QWORD *)(v22 + 88);
    }
    else
    {
      v26 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&a5, v26, v24);
    if ( a5 )
    {
      v34 = IndexedSet<DMMVIDPNTARGET>::FindById(*((_QWORD *)a5 + 39), v9);
      if ( v34 )
      {
        if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v36 + 96), v9) )
        {
          v42 = *(_QWORD *)(v34 + 104);
          if ( v42 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v42 + 96));
            v43 = *(_QWORD *)(v34 + 104);
          }
          else
          {
            v43 = 0LL;
          }
          v44 = *(_QWORD *)(v43 + 144);
          a7 = (struct _D3DKMDT_2DREGION *)v43;
          if ( !v44 )
          {
            v45 = WdLogNewEntry5_WdAssertion(v39, v38);
            WdLogEvent5_WdAssertion(v45);
            v44 = *(_QWORD *)(v43 + 144);
          }
          a6 = *(enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING **)(v44 + 92);
          DmmCalculatePresentationVSync(
            (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v44 + 72),
            (struct _D3DDDI_RATIONAL *)&a6);
          if ( a3 )
            *a3 = *v46;
          if ( a4 )
            *a4 = DmmMapVSyncFromRationalToInteger(
                    (const struct _D3DDDI_RATIONAL *)&a6,
                    (unsigned int)((int)(*(_DWORD *)(*(_QWORD *)(v43 + 144) + 120LL) << 29) >> 29),
                    0LL);
          if ( v11 )
            *v11 = (unsigned int)(((int)(*(_DWORD *)(*(_QWORD *)(v43 + 144) + 120LL) << 29) >> 29) - 2) <= 1;
          if ( v12 )
            *v12 = (int)(*(_DWORD *)(*(_QWORD *)(v43 + 144) + 120LL) << 29) >> 29;
          if ( v13 )
            *v13 = *(struct _D3DKMDT_2DREGION *)(*(_QWORD *)(v43 + 144) + 84LL);
          if ( v14 )
            *v14 = *(struct _D3DDDI_RATIONAL *)(*(_QWORD *)(v43 + 144) + 92LL);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&a7, 0LL);
        }
        else
        {
          v41 = WdLogNewEntry5_WdError(v39, v38, v40);
          *(_QWORD *)(v41 + 24) = v9;
          WdLogEvent5_WdError(v41);
          v8 = -1071774912;
        }
      }
      else
      {
        v37 = WdLogNewEntry5_WdError(v33, v32, v35);
        *(_QWORD *)(v37 + 24) = v9;
        WdLogEvent5_WdError(v37);
        v8 = -1071774971;
      }
    }
    else
    {
      v30 = WdLogNewEntry5_WdError(v28, v27, v29);
      *(_QWORD *)(v30 + 24) = a1;
      WdLogEvent5_WdError(v30);
      v8 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&a5, 0LL, v31);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)&a8[5]);
    return v8;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v23 + 24) = a1;
    WdLogEvent5_WdError(v23);
    return 3223192373LL;
  }
}

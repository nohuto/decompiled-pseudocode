/*
 * XREFs of ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C027A994
 * Callers:
 *     DxgkOpmGetRedirectionInfo @ 0x1C01C7F70 (DxgkOpmGetRedirectionInfo.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C0204C20 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C0238668 (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003814 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00D7168 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00E3D10 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DmmGetClientVidPnTargetModeInfo(
        DXGADAPTER *a1,
        unsigned int a2,
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
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // r10
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  enum _D3DKMDT_VIDEO_SIGNAL_STANDARD *v36; // rcx

  v8 = 0;
  v9 = a2;
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
    v15 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v15 + 24) = 0LL;
LABEL_15:
    WdLogEvent5_WdError(v15);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = *((_QWORD *)a1 + 315);
  if ( !v19 )
  {
    v15 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v15 + 24) = a1;
    goto LABEL_15;
  }
  v20 = *(_QWORD *)(v19 + 88);
  if ( v20 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)&a8, v20);
    v22 = *(_QWORD *)(v20 + 88);
    a5 = 0LL;
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 32));
      v23 = *(_QWORD *)(v20 + 88);
    }
    else
    {
      v23 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&a5, v23);
    if ( a5 )
    {
      v27 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*((_QWORD *)a5 + 39), v9);
      if ( v27 )
      {
        if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v28 + 96), v9) )
        {
          v32 = *(_QWORD *)(v27 + 104);
          if ( v32 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v32 + 96));
            v33 = *(_QWORD *)(v27 + 104);
          }
          else
          {
            v33 = 0LL;
          }
          v34 = *(_QWORD *)(v33 + 144);
          a7 = (struct _D3DKMDT_2DREGION *)v33;
          if ( !v34 )
          {
            v35 = WdLogNewEntry5_WdAssertion(v30);
            WdLogEvent5_WdAssertion(v35);
            v34 = *(_QWORD *)(v33 + 144);
          }
          a6 = *(enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING **)(v34 + 92);
          DmmCalculatePresentationVSync(
            (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v34 + 72),
            (struct _D3DDDI_RATIONAL *)&a6);
          if ( a3 )
            *a3 = *v36;
          if ( a4 )
            *a4 = DmmMapVSyncFromRationalToInteger(
                    (const struct _D3DDDI_RATIONAL *)&a6,
                    (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(*(_QWORD *)(v33 + 144) + 120LL) << 29) >> 29),
                    0LL);
          if ( v11 )
            *v11 = (unsigned int)(((int)(*(_DWORD *)(*(_QWORD *)(v33 + 144) + 120LL) << 29) >> 29) - 2) <= 1;
          if ( v12 )
            *v12 = (int)(*(_DWORD *)(*(_QWORD *)(v33 + 144) + 120LL) << 29) >> 29;
          if ( v13 )
            *v13 = *(struct _D3DKMDT_2DREGION *)(*(_QWORD *)(v33 + 144) + 84LL);
          if ( v14 )
            *v14 = *(struct _D3DDDI_RATIONAL *)(*(_QWORD *)(v33 + 144) + 92LL);
          auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&a7, 0LL);
        }
        else
        {
          v31 = WdLogNewEntry5_WdError(v30);
          *(_QWORD *)(v31 + 24) = v9;
          WdLogEvent5_WdError(v31);
          v8 = -1071774912;
        }
      }
      else
      {
        v29 = WdLogNewEntry5_WdError(v26);
        *(_QWORD *)(v29 + 24) = v9;
        WdLogEvent5_WdError(v29);
        v8 = -1071774971;
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v25 + 24) = a1;
      WdLogEvent5_WdError(v25);
      v8 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&a5, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)&a8[5]);
    return v8;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdError(v21);
    return 3223192373LL;
  }
}

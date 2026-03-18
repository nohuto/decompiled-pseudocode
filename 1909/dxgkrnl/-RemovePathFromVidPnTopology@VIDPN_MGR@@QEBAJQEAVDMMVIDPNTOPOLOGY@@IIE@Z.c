/*
 * XREFs of ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02B6544
 * Callers:
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C02B2AF4 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C02BA2C0 (-RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0003B2C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003D9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003DE0 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0005F70 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0006108 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00062C8 (--0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C000EC40 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00199C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001FF60 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0021DD8 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0022F48 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0053B54 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E0048 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00E2B38 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E4244 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E43B0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E471C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00EDB7C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C012CC00 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01320F8 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C02B5CE4 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C02B5E38 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 */

__int64 __fastcall VIDPN_MGR::RemovePathFromVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  __int64 v5; // rdi
  __int64 v7; // r14
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int8 v12; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 Container; // rdi
  __int64 v28; // r8
  unsigned __int8 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rcx
  int NumPathsFromSource; // eax
  _QWORD *v36; // rax
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rbx
  __int64 v44; // rcx
  DMMVIDPNTARGETMODESET *v45; // rbx
  __int64 v46; // r13
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rax
  DMMVIDPNTARGETMODESET *v50; // rbx
  DMMVIDPNSOURCEMODE *v51; // rcx
  __int64 v52; // rdx
  UINT cx; // ecx
  int v54; // eax
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rax
  struct DMMVIDPNSOURCEMODESET *v58; // rdi
  __int64 v59; // rbx
  _QWORD *v60; // rax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rax
  struct DMMVIDPNTARGETMODESET *v69; // rbx
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  int v80; // eax
  __int64 v82; // [rsp+20h] [rbp-E0h]
  char v83; // [rsp+40h] [rbp-C0h]
  char v84; // [rsp+41h] [rbp-BFh]
  unsigned int v85; // [rsp+44h] [rbp-BCh] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v86; // [rsp+48h] [rbp-B8h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v87; // [rsp+4Ch] [rbp-B4h]
  unsigned int v88; // [rsp+50h] [rbp-B0h]
  struct DMMVIDPNSOURCEMODESET *v89; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPNTARGETMODESET *v90; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v91; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTARGETMODESET *v92; // [rsp+70h] [rbp-90h] BYREF
  DMMVIDPNTARGETMODESET *v93; // [rsp+78h] [rbp-88h] BYREF
  DXGK_ENUM_PIVOT v94; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v95[24]; // [rsp+88h] [rbp-78h] BYREF
  _D3DKMDT_VIDPN_SOURCE_MODE v96; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v97[72]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v98[56]; // [rsp+118h] [rbp+18h] BYREF
  int v99; // [rsp+150h] [rbp+50h]

  v5 = a4;
  v7 = a3;
  Path = 0LL;
  v88 = a4;
  v83 = 0;
  v84 = 0;
  memset(&v96, 0, sizeof(v96));
  DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE((DMMVIDPNTARGETMODE *)v97, 0LL, 0);
  v87 = D3DKMDT_VPPS_UNPINNED;
  v13 = D3DKMDT_VPPR_UNPINNED;
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (_DWORD)v7 == -1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( (_DWORD)v5 == -1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(1LL, v10);
    WdLogEvent5_WdAssertion(v17);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v95,
    ((unsigned __int64)a2 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    2u,
    v12,
    v82,
    1uLL);
  v18 = DMMVIDPNTOPOLOGY::RemovePath(a2, v7, v5, 0LL);
  v21 = v18;
  if ( v18 >= 0 )
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v95, v19);
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160, v24);
    v30 = *((_QWORD *)this + 1);
    if ( !v30 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v26, v25);
      WdLogEvent5_WdAssertion(v31);
      v30 = *((_QWORD *)this + 1);
    }
    v32 = *(_QWORD *)(v30 + 16);
    v33 = *(_QWORD *)(v32 + 2552);
    if ( *(_BYTE *)(v33 + 233) && *(_BYTE *)(v33 + 234)
      || (v34 = *(_QWORD **)(*(_QWORD *)(v32 + 192) + 64LL), *(_DWORD *)(v34[5] + 28LL) >= 0x4003u) )
    {
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, (unsigned int)v7, &v91);
      v21 = NumPathsFromSource;
      if ( NumPathsFromSource == -1071774919 )
      {
        v91 = 0LL;
        goto LABEL_46;
      }
      if ( NumPathsFromSource < 0 )
        goto LABEL_19;
      if ( v91 != 1 )
        goto LABEL_46;
      v37 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)a2, (unsigned int)v7, 0LL, &v85);
      v21 = v37;
      if ( v37 < 0 )
      {
LABEL_19:
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v34, v25, v28);
LABEL_30:
        v36[4] = Container & -(__int64)(Container != -88);
        v36[3] = v7;
        v36[5] = v21;
LABEL_84:
        WdLogEvent5_WdError(v36);
        return (unsigned int)v21;
      }
      if ( v85 == -1 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v34, v25);
        WdLogEvent5_WdAssertion(v38);
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(a2, v7, v85);
      if ( !Path )
      {
        v39 = WdLogNewEntry5_WdAssertion(v34, v25);
        WdLogEvent5_WdAssertion(v39);
      }
      v28 = *((unsigned int *)Path + 29);
      if ( (_DWORD)v28 != 254 && (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v28) - 2) & 0xFFFFFFFD) == 0 )
      {
        if ( !a5 )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdError(v34, v25, v28);
          v21 = -1071774970LL;
          goto LABEL_30;
        }
        v86 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v28);
        v13 = v86;
        DMMVIDPNPRESENTPATH::UnpinContentRotation(Path, v40);
        v87 = *((_DWORD *)Path + 28);
        if ( v87 != D3DKMDT_VPPS_UNPINNED )
          DMMVIDPNPRESENTPATH::UnpinContentScaling(Path, v41);
        v43 = *((_QWORD *)Path + 12);
        v44 = *(_QWORD *)(v43 + 104);
        if ( v44 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v44 + 96), 1u);
          v45 = *(DMMVIDPNTARGETMODESET **)(v43 + 104);
          v93 = v45;
          if ( v45 )
          {
            v46 = *((_QWORD *)v45 + 18);
            if ( v46 )
            {
              v84 = 1;
              DMMVIDEOSIGNALMODE::Initialize(
                (DMMVIDEOSIGNALMODE *)v98,
                (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v46 + 72));
              v99 = *(_DWORD *)(v46 + 128);
              DMMVIDPNTARGETMODESET::UnpinMode(v45, v47);
            }
            v13 = v86;
          }
        }
        else
        {
          v93 = 0LL;
        }
        v48 = *((_QWORD *)Path + 11);
        v49 = *(_QWORD *)(v48 + 104);
        if ( v49 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v49 + 96), 1u);
          v50 = *(DMMVIDPNTARGETMODESET **)(v48 + 104);
          v92 = v50;
          if ( v50 )
          {
            v51 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v50 + 18);
            if ( v51 )
            {
              v83 = 1;
              DMMVIDPNSOURCEMODE::Serialize(v51, &v96, v42);
              DMMVIDPNTARGETMODESET::UnpinMode(v50, v52);
              if ( v96.Type != D3DKMDT_RMT_TEXT )
              {
                v96.Format.Graphics.PrimSurfSize = (D3DKMDT_2DREGION)__PAIR64__(
                                                                       v96.Format.Graphics.PrimSurfSize.cx,
                                                                       v96.Format.Graphics.PrimSurfSize.cy);
                cx = v96.Format.Graphics.VisibleRegionSize.cx;
                v96.Format.Graphics.VisibleRegionSize.cx = v96.Format.Graphics.VisibleRegionSize.cy;
                *(_QWORD *)(&v96.Format.Text + 3) = cx;
              }
            }
          }
        }
        else
        {
          v92 = 0LL;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v92, 0LL);
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v93, 0LL);
      }
    }
LABEL_46:
    if ( *((struct DMMVIDPNTOPOLOGY *const *)a2 + 3) != (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
    {
      v94.VidPnSourceId = -1;
      v94.VidPnTargetId = -1;
      v54 = VIDPN_MGR::FormalizeVidPnChange(
              (unsigned __int64)this,
              (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
              2LL,
              1,
              &v94);
      v21 = v54;
      if ( v54 < 0 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v34, v25, v28);
        v36[4] = v88;
        v36[3] = v7;
        v36[5] = Container & -(__int64)(Container != -88);
        v36[6] = v21;
        goto LABEL_84;
      }
    }
    if ( v83 )
    {
      v55 = *((_QWORD *)Path + 11);
      v56 = *(_QWORD *)(v55 + 104);
      if ( !v56 )
      {
        v89 = 0LL;
LABEL_52:
        v57 = WdLogNewEntry5_WdError(v34, v25, v28);
        WdLogEvent5_WdError(v57);
        LODWORD(v21) = -1071774958;
LABEL_53:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v89, 0LL);
        return (unsigned int)v21;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v56 + 96));
      v58 = *(struct DMMVIDPNSOURCEMODESET **)(v55 + 104);
      v89 = v58;
      if ( !v58 )
        goto LABEL_52;
      v59 = 0LL;
      v34 = (_QWORD *)*((_QWORD *)v58 + 6);
      if ( v34 != (_QWORD *)((char *)v58 + 48) )
        v59 = (__int64)(v34 - 1);
      if ( !v59 )
        goto LABEL_52;
      do
      {
        if ( v96.Type != D3DKMDT_RMT_TEXT && *(_DWORD *)(v59 + 72) != 2 )
          v96.Format.Graphics.Stride = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v59)->Stride;
        if ( DMMVIDPNSOURCEMODE::operator==(v59, (__int64)&v96) )
          break;
        v60 = *(_QWORD **)(v59 + 8);
        v59 = (__int64)(v60 - 1);
        if ( v60 == (_QWORD *)((char *)v58 + 48) )
          v59 = 0LL;
      }
      while ( v59 );
      if ( !v59 )
        goto LABEL_52;
      v61 = VIDPN_MGR::PinVidPnSourceMode(this, v58, *(_DWORD *)(v59 + 24), 1);
      v21 = v61;
      if ( v61 < 0 )
      {
        v65 = WdLogNewEntry5_WdError(v63, v62, v64);
        *(_QWORD *)(v65 + 24) = v21;
        WdLogEvent5_WdError(v65);
        goto LABEL_53;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v89, 0LL);
    }
    if ( v84 )
    {
      v66 = *((_QWORD *)Path + 12);
      v67 = *(_QWORD *)(v66 + 104);
      if ( !v67 )
      {
        v90 = 0LL;
LABEL_72:
        v68 = WdLogNewEntry5_WdError(v34, v25, v28);
        WdLogEvent5_WdError(v68);
        LODWORD(v21) = -1071774958;
LABEL_73:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v90, 0LL);
        return (unsigned int)v21;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v67 + 96));
      v69 = *(struct DMMVIDPNTARGETMODESET **)(v66 + 104);
      v90 = v69;
      if ( !v69 )
        goto LABEL_72;
      v70 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)v69 + 24, (__int64)v97);
      if ( !v70 )
        goto LABEL_72;
      v71 = VIDPN_MGR::PinVidPnTargetMode(this, v69, *(_DWORD *)(v70 + 24), 1);
      v21 = v71;
      if ( v71 < 0 )
      {
        v75 = WdLogNewEntry5_WdError(v73, v72, v74);
        *(_QWORD *)(v75 + 24) = v21;
        WdLogEvent5_WdError(v75);
        goto LABEL_73;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v90, 0LL);
    }
    if ( v87 == D3DKMDT_VPPS_UNPINNED
      || (v76 = VIDPN_MGR::PinPathContentScaling((ADAPTER_DISPLAY **)this, Path, (unsigned int)v87, v29),
          v21 = v76,
          v76 >= 0) )
    {
      if ( v13 == D3DKMDT_VPPR_UNPINNED
        || (v80 = VIDPN_MGR::PinPathContentRotation(this, Path, v13), v21 = v80, v80 >= 0) )
      {
        LODWORD(v21) = 0;
        return (unsigned int)v21;
      }
    }
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v78, v77, v79);
    v36[3] = v21;
    goto LABEL_84;
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
  v22[3] = v7;
  v22[4] = v5;
  v22[5] = a2;
  v22[6] = v21;
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v95, v23);
  return (unsigned int)v21;
}

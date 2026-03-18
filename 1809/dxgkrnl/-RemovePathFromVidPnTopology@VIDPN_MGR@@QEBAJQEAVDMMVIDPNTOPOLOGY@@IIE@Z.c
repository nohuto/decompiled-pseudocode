/*
 * XREFs of ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C027E0F0
 * Callers:
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C027A184 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C0281E70 (-RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z.c)
 * Callees:
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00022A0 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0007060 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C000A5C0 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000A8C4 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C000AA54 (--0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000EC9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000F638 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017224 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00172C8 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C00182E4 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0019E44 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C004C8DC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BD85C (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00D4444 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00D887C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00D8EBC (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E491C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E4FE0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E5198 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E5618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C027D88C (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C027D9E0 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
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
  __int64 v10; // rcx
  unsigned __int8 v11; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 Container; // rdi
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rcx
  int NumPathsFromSource; // eax
  _QWORD *v33; // rax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // r8d
  unsigned int v38; // r8d
  __int64 v39; // rbx
  __int64 v40; // rcx
  DMMVIDPNTARGETMODESET *v41; // rbx
  __int64 v42; // r13
  __int64 v43; // rbx
  __int64 v44; // rax
  DMMVIDPNTARGETMODESET *v45; // rbx
  DMMVIDPNSOURCEMODE *v46; // rcx
  UINT cx; // ecx
  int v48; // eax
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  struct DMMVIDPNSOURCEMODESET *v52; // rdi
  __int64 v53; // rbx
  _QWORD *v54; // rax
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rax
  struct DMMVIDPNTARGETMODESET *v61; // rbx
  __int64 v62; // rax
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rcx
  int v68; // eax
  __int64 v70; // [rsp+20h] [rbp-E0h]
  char v71; // [rsp+40h] [rbp-C0h]
  char v72; // [rsp+41h] [rbp-BFh]
  unsigned int v73; // [rsp+44h] [rbp-BCh] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v74; // [rsp+48h] [rbp-B8h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v75; // [rsp+4Ch] [rbp-B4h]
  unsigned int v76; // [rsp+50h] [rbp-B0h]
  struct DMMVIDPNSOURCEMODESET *v77; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPNTARGETMODESET *v78; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v79; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTARGETMODESET *v80; // [rsp+70h] [rbp-90h] BYREF
  DMMVIDPNTARGETMODESET *v81; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v82[4]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v83[24]; // [rsp+90h] [rbp-70h] BYREF
  _D3DKMDT_VIDPN_SOURCE_MODE v84; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v85[72]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v86[56]; // [rsp+118h] [rbp+18h] BYREF
  int v87; // [rsp+150h] [rbp+50h]

  v5 = a4;
  v7 = a3;
  Path = 0LL;
  v76 = a4;
  v71 = 0;
  v72 = 0;
  memset(&v84, 0, sizeof(v84));
  v82[2] = 0;
  DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE((DMMVIDPNTARGETMODE *)v85, 0LL, 0);
  v75 = D3DKMDT_VPPS_UNPINNED;
  v12 = D3DKMDT_VPPR_UNPINNED;
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (_DWORD)v7 == -1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (_DWORD)v5 == -1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(1LL);
    WdLogEvent5_WdAssertion(v16);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v83,
    ((unsigned __int64)a2 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    2u,
    v11,
    v70,
    1uLL);
  v17 = DMMVIDPNTOPOLOGY::RemovePath(a2, v7, v5, 0LL);
  v22 = v17;
  if ( v17 >= 0 )
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v83);
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    v27 = *((_QWORD *)this + 1);
    if ( !v27 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v28);
      v27 = *((_QWORD *)this + 1);
    }
    v29 = *(_QWORD *)(v27 + 16);
    v30 = *(_QWORD *)(v29 + 2520);
    if ( *(_BYTE *)(v30 + 132) && *(_BYTE *)(v30 + 133)
      || (v31 = *(_QWORD **)(*(_QWORD *)(v29 + 192) + 64LL), *(_DWORD *)(v31[5] + 28LL) >= 0x4003u) )
    {
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v7, &v79);
      v22 = NumPathsFromSource;
      if ( NumPathsFromSource == -1071774919 )
      {
        v79 = 0LL;
        goto LABEL_46;
      }
      if ( NumPathsFromSource < 0 )
        goto LABEL_19;
      if ( v79 != 1 )
        goto LABEL_46;
      v34 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)a2, v7, 0LL, &v73);
      v22 = v34;
      if ( v34 < 0 )
      {
LABEL_19:
        v33 = (_QWORD *)WdLogNewEntry5_WdError(v31);
LABEL_30:
        v33[4] = Container & -(__int64)(Container != -88);
        v33[3] = v7;
        v33[5] = v22;
LABEL_84:
        WdLogEvent5_WdError(v33);
        return (unsigned int)v22;
      }
      if ( v73 == -1 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v31);
        WdLogEvent5_WdAssertion(v35);
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(a2, v7, v73);
      if ( !Path )
      {
        v36 = WdLogNewEntry5_WdAssertion(v31);
        WdLogEvent5_WdAssertion(v36);
      }
      v37 = *((_DWORD *)Path + 29);
      if ( v37 != 254 && (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v37) - 2) & 0xFFFFFFFD) == 0 )
      {
        if ( !a5 )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdError(v31);
          v22 = -1071774970LL;
          goto LABEL_30;
        }
        v74 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v38);
        v12 = v74;
        DMMVIDPNPRESENTPATH::UnpinContentRotation(Path);
        v75 = *((_DWORD *)Path + 28);
        if ( v75 != D3DKMDT_VPPS_UNPINNED )
          DMMVIDPNPRESENTPATH::UnpinContentScaling(Path);
        v39 = *((_QWORD *)Path + 12);
        v40 = *(_QWORD *)(v39 + 104);
        if ( v40 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v40 + 96), 1u);
          v41 = *(DMMVIDPNTARGETMODESET **)(v39 + 104);
          v81 = v41;
          if ( v41 )
          {
            v42 = *((_QWORD *)v41 + 18);
            if ( v42 )
            {
              v72 = 1;
              DMMVIDEOSIGNALMODE::Initialize(
                (DMMVIDEOSIGNALMODE *)v86,
                (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v42 + 72));
              v87 = *(_DWORD *)(v42 + 128);
              DMMVIDPNTARGETMODESET::UnpinMode(v41);
            }
            v12 = v74;
          }
        }
        else
        {
          v81 = 0LL;
        }
        v43 = *((_QWORD *)Path + 11);
        v44 = *(_QWORD *)(v43 + 104);
        if ( v44 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v44 + 96), 1u);
          v45 = *(DMMVIDPNTARGETMODESET **)(v43 + 104);
          v80 = v45;
          if ( v45 )
          {
            v46 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v45 + 18);
            if ( v46 )
            {
              v71 = 1;
              DMMVIDPNSOURCEMODE::Serialize(v46, &v84);
              DMMVIDPNTARGETMODESET::UnpinMode(v45);
              if ( v84.Type != D3DKMDT_RMT_TEXT )
              {
                v84.Format.Graphics.PrimSurfSize = (D3DKMDT_2DREGION)__PAIR64__(
                                                                       v84.Format.Graphics.PrimSurfSize.cx,
                                                                       v84.Format.Graphics.PrimSurfSize.cy);
                cx = v84.Format.Graphics.VisibleRegionSize.cx;
                v84.Format.Graphics.VisibleRegionSize.cx = v84.Format.Graphics.VisibleRegionSize.cy;
                *(_QWORD *)(&v84.Format.Text + 3) = cx;
              }
            }
          }
        }
        else
        {
          v80 = 0LL;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v80, 0LL);
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v81, 0LL);
      }
    }
LABEL_46:
    if ( *((struct DMMVIDPNTOPOLOGY *const *)a2 + 3) != (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
    {
      v82[0] = -1;
      v82[1] = -1;
      LOBYTE(v26) = 1;
      v48 = VIDPN_MGR::FormalizeVidPnChange(
              (__int64)this,
              (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
              2LL,
              v26,
              v82);
      v22 = v48;
      if ( v48 < 0 )
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdError(v31);
        v33[4] = v76;
        v33[3] = v7;
        v33[5] = Container & -(__int64)(Container != -88);
        v33[6] = v22;
        goto LABEL_84;
      }
    }
    if ( v71 )
    {
      v49 = *((_QWORD *)Path + 11);
      v50 = *(_QWORD *)(v49 + 104);
      if ( !v50 )
      {
        v77 = 0LL;
LABEL_52:
        v51 = WdLogNewEntry5_WdError(v31);
        WdLogEvent5_WdError(v51);
        LODWORD(v22) = -1071774958;
LABEL_53:
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v77, 0LL);
        return (unsigned int)v22;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v50 + 96));
      v52 = *(struct DMMVIDPNSOURCEMODESET **)(v49 + 104);
      v77 = v52;
      if ( !v52 )
        goto LABEL_52;
      v53 = 0LL;
      v31 = (_QWORD *)*((_QWORD *)v52 + 6);
      if ( v31 != (_QWORD *)((char *)v52 + 48) )
        v53 = (__int64)(v31 - 1);
      if ( !v53 )
        goto LABEL_52;
      do
      {
        if ( v84.Type != D3DKMDT_RMT_TEXT && *(_DWORD *)(v53 + 72) != 2 )
          v84.Format.Graphics.Stride = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v53)->Stride;
        if ( DMMVIDPNSOURCEMODE::operator==(v53, (__int64)&v84) )
          break;
        v54 = *(_QWORD **)(v53 + 8);
        v53 = (__int64)(v54 - 1);
        if ( v54 == (_QWORD *)((char *)v52 + 48) )
          v53 = 0LL;
      }
      while ( v53 );
      if ( !v53 )
        goto LABEL_52;
      v55 = VIDPN_MGR::PinVidPnSourceMode(this, v52, *(_DWORD *)(v53 + 24), 1);
      v22 = v55;
      if ( v55 < 0 )
      {
        v57 = WdLogNewEntry5_WdError(v56);
        *(_QWORD *)(v57 + 24) = v22;
        WdLogEvent5_WdError(v57);
        goto LABEL_53;
      }
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v77, 0LL);
    }
    if ( v72 )
    {
      v58 = *((_QWORD *)Path + 12);
      v59 = *(_QWORD *)(v58 + 104);
      if ( !v59 )
      {
        v78 = 0LL;
LABEL_72:
        v60 = WdLogNewEntry5_WdError(v31);
        WdLogEvent5_WdError(v60);
        LODWORD(v22) = -1071774958;
LABEL_73:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v78, 0LL);
        return (unsigned int)v22;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v59 + 96));
      v61 = *(struct DMMVIDPNTARGETMODESET **)(v58 + 104);
      v78 = v61;
      if ( !v61 )
        goto LABEL_72;
      v62 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)v61 + 24, (__int64)v85);
      if ( !v62 )
        goto LABEL_72;
      v63 = VIDPN_MGR::PinVidPnTargetMode(this, v61, *(_DWORD *)(v62 + 24), 1);
      v22 = v63;
      if ( v63 < 0 )
      {
        v65 = WdLogNewEntry5_WdError(v64);
        *(_QWORD *)(v65 + 24) = v22;
        WdLogEvent5_WdError(v65);
        goto LABEL_73;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v78, 0LL);
    }
    if ( v75 == D3DKMDT_VPPS_UNPINNED
      || (v66 = VIDPN_MGR::PinPathContentScaling((ADAPTER_DISPLAY **)this, Path, v75, v26), v22 = v66, v66 >= 0) )
    {
      if ( v12 == D3DKMDT_VPPR_UNPINNED
        || (v68 = VIDPN_MGR::PinPathContentRotation(this, Path, v12), v22 = v68, v68 >= 0) )
      {
        LODWORD(v22) = 0;
        return (unsigned int)v22;
      }
    }
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v67);
    v33[3] = v22;
    goto LABEL_84;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
  v23[3] = v7;
  v23[4] = v5;
  v23[5] = a2;
  v23[6] = v22;
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v83);
  return (unsigned int)v22;
}

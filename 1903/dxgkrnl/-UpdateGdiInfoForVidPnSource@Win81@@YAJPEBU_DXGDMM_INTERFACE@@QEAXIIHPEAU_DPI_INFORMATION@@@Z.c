/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C028B5D8
 * Callers:
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C028AF0C (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0002118 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C00024BC (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0002568 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0003C9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000BE6C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0128718 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C012A8E4 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C012A9EC (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C0284BE8 (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C028ACF0 (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z @ 0x1C028AE9C (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z.c)
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C028B0D4 (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C028B1F4 (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@@Z @ 0x1C028B3C0 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C02C9588 (MonitorGetEdidBaseBlockPtr.c)
 */

__int64 __fastcall Win81::UpdateGdiInfoForVidPnSource(
        Win81 *this,
        const struct _DXGDMM_INTERFACE *a2,
        void *const a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // rsi
  DpiInternal *v7; // r15
  DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  _OWORD *v14; // rbx
  __int64 (__fastcall *v15)(DpiInternal *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **); // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  DpiInternal *v21; // r14
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r9
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r14
  unsigned int v35; // edi
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 (__fastcall *v40)(__int64, _QWORD, _QWORD, __int64 *); // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v47; // esi
  bool v48; // r14
  int VideoOutputTechnology; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rbx
  _QWORD *v54; // rax
  int v55; // edi
  unsigned __int8 *EdidBaseBlockPtr; // r14
  int PreferredMode; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rbx
  _QWORD *v62; // rax
  int v63; // r13d
  int v64; // r12d
  unsigned __int32 v65; // r14d
  unsigned int v66; // esi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  const struct _DXGDMM_VIDPN_INTERFACE *v70; // r15
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v71; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v72; // r15d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v73; // ebx
  char v74; // al
  const struct _DXGDMM_VIDPN_INTERFACE *v75; // r13
  __int64 v76; // rdx
  __int64 v77; // rax
  struct tagSIZE v78; // rdx
  int IsAudioAvailableInEdid; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  unsigned int v82; // ebx
  __int64 v83; // rax
  char cx; // si
  __int64 v85; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v86; // ecx
  unsigned int v87; // eax
  __int64 v88; // rdx
  struct _DPI_INFORMATION *v89; // r9
  _QWORD *v90; // rax
  struct tagSIZE v91; // r8
  unsigned int v92; // eax
  __int64 v93; // rax
  __int128 v94; // xmm1
  __int128 v95; // xmm0
  __int128 v96; // xmm1
  __int128 v97; // xmm0
  struct _D3DKMDT_2DREGION *v99; // [rsp+28h] [rbp-E0h]
  struct _D3DKMDT_2DREGION v100; // [rsp+48h] [rbp-C0h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v101[2]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v102; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v103; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v104; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v105; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v106; // [rsp+78h] [rbp-90h] BYREF
  int v107; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v108; // [rsp+80h] [rbp-88h]
  __int64 v109; // [rsp+88h] [rbp-80h] BYREF
  __int64 v110; // [rsp+90h] [rbp-78h] BYREF
  struct D3DKMDT_HVIDPN__ *v111; // [rsp+98h] [rbp-70h] BYREF
  __int64 v112; // [rsp+A0h] [rbp-68h] BYREF
  int v113; // [rsp+A8h] [rbp-60h]
  unsigned int v114; // [rsp+B0h] [rbp-58h] BYREF
  BOOL v115; // [rsp+B4h] [rbp-54h]
  int v116; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v117; // [rsp+C0h] [rbp-48h] BYREF
  char v118; // [rsp+C8h] [rbp-40h] BYREF
  const struct _DXGDMM_VIDPN_INTERFACE *v119; // [rsp+D0h] [rbp-38h]
  void (__fastcall *v120)(__int64, const struct _DXGDMM_VIDPN_INTERFACE *); // [rsp+D8h] [rbp-30h]
  __int64 v121; // [rsp+E0h] [rbp-28h]
  int v122; // [rsp+E8h] [rbp-20h]
  unsigned __int64 v123; // [rsp+F0h] [rbp-18h]
  DpiInternal *v124; // [rsp+F8h] [rbp-10h]
  char v125; // [rsp+100h] [rbp-8h] BYREF
  DpiInternal *v126; // [rsp+108h] [rbp+0h]
  void (__fastcall *v127)(__int64, DpiInternal *); // [rsp+110h] [rbp+8h]
  __int64 v128; // [rsp+118h] [rbp+10h]
  int v129; // [rsp+120h] [rbp+18h]
  _OWORD v130[6]; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int8 *v131; // [rsp+188h] [rbp+80h]
  __int128 v132; // [rsp+190h] [rbp+88h]
  __int128 v133; // [rsp+1A0h] [rbp+98h]
  _BYTE v134[96]; // [rsp+1B8h] [rbp+B0h] BYREF

  v6 = (unsigned int)a3;
  v7 = a2;
  v116 = (int)a3;
  v108 = a4;
  v124 = a2;
  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
  if ( Current && DXGPROCESS::IsRemoteConnection(Current) )
  {
    v13 = WdLogNewEntry5_WdError(v11, v10, v12);
    LODWORD(v14) = -1073741637;
    *(_QWORD *)(v13 + 24) = v7;
    *(_QWORD *)(v13 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v14;
  }
  v15 = (__int64 (__fastcall *)(DpiInternal *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **))*((_QWORD *)this + 6);
  v111 = 0LL;
  v126 = 0LL;
  v127 = 0LL;
  v128 = 0LL;
  v129 = 0;
  v125 = 0;
  v104 = 0LL;
  v16 = v15(v7, &v104, &v111);
  v14 = (_OWORD *)v16;
  if ( v16 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
    v20[3] = v7;
LABEL_6:
    v20[4] = v14;
LABEL_99:
    WdLogEvent5_WdError(v20);
    goto LABEL_108;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v125,
    v104,
    *((_QWORD *)this + 8),
    (__int64)v7);
  v21 = v126;
  v105 = 0LL;
  v109 = 0LL;
  v22 = (*(__int64 (__fastcall **)(DpiInternal *, __int64 *, __int64 *))v111)(v126, &v105, &v109);
  v14 = (_OWORD *)v22;
  if ( v22 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23, v25);
    v20[3] = v21;
    goto LABEL_6;
  }
  v117 = 0LL;
  v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *))v109)(v105, (unsigned int)v6, &v117);
  v14 = (_OWORD *)v26;
  if ( v26 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v29);
    v20[3] = v6;
    v30 = v105;
LABEL_98:
    v20[4] = v30;
    v20[5] = v14;
    goto LABEL_99;
  }
  memset(v134, 0, 0x5CuLL);
  v33 = v117;
  v14 = (_OWORD *)a6;
  v34 = 0LL;
  v123 = 0LL;
  v133 = *(_OWORD *)&v134[64];
  v35 = (v117 > 1) | *(_DWORD *)(a6 + 92) & 0x20;
  *(_DWORD *)&v134[92] = v35;
  if ( !v117 )
  {
    v132 = *(_OWORD *)&v134[16];
LABEL_101:
    if ( (v35 & 2) == 0
      || (v91 = (struct tagSIZE)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(_mm_load_si128((const __m128i *)&v134[80]), 4)),
          v91.cx == 1234568) )
    {
      v92 = *(_DWORD *)&v134[8];
    }
    else
    {
      v92 = Win81::AdjustDesktopScaleFactorForOverride(
              (Win81 *)0x64,
              *(__int64 *)&v134[32],
              v91,
              (const struct Win81::DPI_SCALE_FACTOR_COLLECTION *)v32);
      *(_DWORD *)&v134[8] = v92;
    }
    if ( !v92 )
    {
      v93 = WdLogNewEntry5_WdAssertion(v33, v31);
      *(_QWORD *)(v93 + 24) = 1058LL;
      WdLogEvent5_WdAssertion(v93);
    }
    v94 = v132;
    *v14 = *(_OWORD *)v134;
    v95 = *(_OWORD *)&v134[32];
    v14[1] = v94;
    v96 = *(_OWORD *)&v134[48];
    v14[2] = v95;
    v97 = v133;
    v14[3] = v96;
    v14[4] = v97;
    v14[5] = *(_OWORD *)&v134[80];
    LODWORD(v14) = 0;
    goto LABEL_108;
  }
  v132 = *(_OWORD *)&v134[16];
  while ( 1 )
  {
    v100.cy = -1;
    BYTE2(v100.cx) = 0;
    v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, UINT *))(v109 + 8))(
            v105,
            (unsigned int)v6,
            v34,
            &v100.cy);
    v14 = (_OWORD *)v36;
    if ( v36 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37, v39);
      v30 = (unsigned int)v6;
      v20[3] = v34;
      goto LABEL_98;
    }
    v103 = 0LL;
    v40 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(v109 + 24);
    v119 = 0LL;
    v120 = 0LL;
    v121 = 0LL;
    v122 = 0;
    v118 = 0;
    v41 = v40(v105, (unsigned int)v6, v100.cy, &v103);
    v14 = (_OWORD *)v41;
    if ( v41 < 0 )
      break;
    v45 = v103;
    if ( !v103 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v43, 0LL);
      *(_QWORD *)(v46 + 24) = 790LL;
      WdLogEvent5_WdAssertion(v46);
      v45 = v103;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v118,
      v45,
      *(_QWORD *)(v109 + 32),
      v105);
    v101[0] = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)v119 + 5));
    LOBYTE(v100.cx) = 0;
    v47 = v101[0];
    v101[1] = D3DKMDT_VOT_UNINITIALIZED;
    v48 = 0;
    VideoOutputTechnology = DmmGetVideoOutputTechnology(v7, v100.cy, &v101[1], 0LL);
    v53 = VideoOutputTechnology;
    if ( VideoOutputTechnology >= 0 )
    {
      v48 = IsInternalVideoOutput(v101[1]);
      LOBYTE(v100.cx) = v48;
    }
    else
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50, v52);
      v54[3] = v7;
      v54[4] = v100.cy;
      v54[5] = v53;
      WdLogEvent5_WdError(v54);
    }
    v115 = v48;
    v102 = 0LL;
    v107 = 0;
    v55 = (v35 ^ (v35 | (4 * v48))) & 4 ^ v35;
    EdidBaseBlockPtr = (unsigned __int8 *)MonitorGetEdidBaseBlockPtr(v7, v100.cy);
    v131 = EdidBaseBlockPtr;
    HIBYTE(v100.cx) = 0;
    v112 = 0LL;
    v113 = 0;
    PreferredMode = EDID_V1_GetPreferredMode(EdidBaseBlockPtr, (struct DISPLAY_PREFERRED_MODE_INFO *)&v112);
    v61 = PreferredMode;
    if ( PreferredMode >= 0 )
    {
      HIBYTE(v100.cx) = 1;
    }
    else
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdError(v59, v58, v60);
      v62[3] = v7;
      v62[4] = v100.cy;
      v62[5] = v61;
      WdLogEvent5_WdError(v62);
    }
    v63 = v112;
    v64 = HIDWORD(v112);
    v104 = v112;
    if ( ((v47 - 2) & 0xFFFFFFFD) == 0 )
    {
      v63 = HIDWORD(v112);
      v104 = __PAIR64__(v112, HIDWORD(v112));
      v64 = v112;
    }
    if ( !EdidBaseBlockPtr )
    {
      v65 = HIDWORD(v102);
      v55 |= 8u;
      v66 = v102;
LABEL_38:
      BYTE2(v100.cx) = (*((_BYTE *)v7 + 308) & 0x20) != 0;
      goto LABEL_39;
    }
    if ( (int)EDID_V1_GetPhysicalSize(v59, EdidBaseBlockPtr, &v106, &v114) < 0 )
    {
      v69 = WdLogNewEntry5_WdAssertion(v68, v67);
      *(_QWORD *)(v69 + 24) = 849LL;
      WdLogEvent5_WdAssertion(v69);
    }
    v66 = v106;
    v65 = v114;
    v102 = __PAIR64__(v114, v106);
    if ( ((v101[0] - 2) & 0xFFFFFFFD) == 0 )
    {
      v66 = v114;
      v102 = __PAIR64__(v106, v114);
      v65 = v106;
    }
    if ( v66 && v65 )
    {
      if ( (int)(v66 * v65) <= 16000 && !LOBYTE(v100.cx) )
      {
        v65 = 0;
        v107 = 1;
        v55 |= 0x40u;
        v102 = 0LL;
        v66 = 0;
        goto LABEL_38;
      }
    }
    else
    {
      v65 = 0;
      v102 = 0LL;
      v66 = 0;
    }
    if ( !v66 )
      goto LABEL_38;
LABEL_39:
    v70 = v119;
    v103 = 0LL;
    LODWORD(v14) = DpiInternal::GetCurrentSourceResolution(
                     v126,
                     v111,
                     v119,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v103);
    if ( (int)v14 < 0 )
      goto LABEL_95;
    v110 = 0LL;
    BYTE1(v100.cx) = 0;
    LODWORD(v14) = DpiInternal::GetCurrentTargetResolution(
                     v126,
                     v111,
                     v70,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v110,
                     (struct _D3DKMDT_2DREGION *)((char *)&v100 + 1));
    if ( (int)v14 < 0 )
      goto LABEL_95;
    v71 = HIDWORD(v110);
    if ( ((v101[0] - 2) & 0xFFFFFFFD) != 0 )
    {
      v101[1] = SHIDWORD(v110);
      v71 = (int)v110;
    }
    else
    {
      v101[1] = v110;
    }
    v72 = (int)v103;
    v101[0] = v71;
    if ( (v55 & 1) != 0 && v63 && v64 )
    {
      v73 = HIDWORD(v103);
      if ( BYTE1(v100.cx) )
        v73 = HIDWORD(v103) >> 1;
      if ( (unsigned int)v103 >= 2 * v63 || v73 >= (unsigned int)(2 * v64) )
        v74 = 2;
      else
        v74 = 0;
      v55 ^= ((unsigned __int8)v55 ^ (unsigned __int8)(v55 | v74)) & 2;
      if ( BYTE1(v100.cx) )
        v73 *= 2;
    }
    else
    {
      v73 = HIDWORD(v103);
    }
    memset(v130, 0, sizeof(v130));
    v75 = v119;
    DWORD1(v130[5]) = a5;
    *(_QWORD *)&v130[2] = __PAIR64__(v73, v103);
    v76 = *((unsigned int *)v119 + 3);
    if ( *((_DWORD *)v119 + 3) != 1 )
    {
      switch ( *((_DWORD *)v119 + 3) )
      {
        case 2:
          goto LABEL_84;
        case 3:
          break;
        case 4:
LABEL_84:
          if ( (_DWORD)v76 == 4 )
          {
            v86 = v101[0];
            if ( v66 * v73 <= v65 * (unsigned int)v103 )
            {
              v72 = v101[0];
              v73 = v73 * v101[0] / (unsigned int)v103;
            }
            else
            {
              v87 = (int)v103 * v101[1] / (unsigned int)v73;
              v73 = v101[1];
              v72 = v87;
            }
          }
          else
          {
            v86 = v101[0];
          }
          v66 = v66 * v72 / v86;
          v65 = v65 * v73 / v101[1];
          break;
        default:
          if ( *((_DWORD *)v119 + 3) != 5 )
          {
            if ( *((_DWORD *)v119 + 3) == 255 )
              break;
            v77 = WdLogNewEntry5_WdAssertion((unsigned int)(*((_DWORD *)v119 + 3) - 5), v76);
            *(_QWORD *)(v77 + 24) = *((int *)v75 + 3);
            WdLogEvent5_WdAssertion(v77);
          }
          v55 |= 0x100u;
          break;
      }
    }
    v78 = (struct tagSIZE)*((unsigned int *)v75 + 5);
    *((_QWORD *)&v130[1] + 1) = __PAIR64__(v65, v66);
    if ( (unsigned int)(v78.cx - 5) <= 0xB )
      v78 = (struct tagSIZE)(unsigned int)((v78.cx - 1) % 4 + 1);
    v35 = (((v78.cx - 2) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | v55 & 0xFFFFFF7F;
    *(_DWORD *)&v134[92] = v35;
    if ( !BYTE2(v100.cx) && !v107 && v131 && HIBYTE(v100.cx) )
    {
      IsAudioAvailableInEdid = DpiInternal::IsAudioAvailableInEdid(v124, (void *)v100.cy);
      LODWORD(v99) = (unsigned __int8)v113;
      v35 = v35 & 0xFFFFFFEF | (16
                              * (unsigned __int8)Win81::DetermineViewDistance(
                                                   v124,
                                                   &v102,
                                                   (const struct tagSIZE *)v115,
                                                   (int)&v104,
                                                   (const struct tagSIZE *)v99,
                                                   IsAudioAvailableInEdid,
                                                   (unsigned int *)&v130[4]));
      v82 = v130[4];
      *(_DWORD *)&v134[92] = v35;
      if ( !LODWORD(v130[4]) )
      {
        v83 = WdLogNewEntry5_WdAssertion(v81, v80);
        *(_QWORD *)(v83 + 24) = 1014LL;
        WdLogEvent5_WdAssertion(v83);
      }
LABEL_72:
      cx = v100.cx;
      goto LABEL_73;
    }
    v82 = 0;
    LODWORD(v130[4]) = 0;
    if ( !BYTE2(v100.cx) )
      goto LABEL_72;
    cx = v100.cx;
    if ( LOBYTE(v100.cx) )
    {
      Win81::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        *(Win81 **)&v130[2],
        v78,
        (__int64)v130,
        (struct _DPI_INFORMATION *)4);
      Win81::FillOverridesAndAdjustedScaleFactor((Win81 *)v108, v88, (__int64)v130, v89);
      v35 |= 0x400u;
      *(_DWORD *)&v134[92] = v35;
      goto LABEL_74;
    }
LABEL_73:
    Win81::FillDpiInfo(
      (Win81 *)((char *)&v130[1] + 8),
      (const struct tagSIZE *)&v130[2],
      (const struct tagSIZE *)v82,
      v108,
      (unsigned int)v99,
      (__int64)v130);
LABEL_74:
    if ( HIDWORD(v130[5]) )
    {
      v85 = WdLogNewEntry5_WdAssertion(v33, v31);
      *(_QWORD *)(v85 + 24) = 1031LL;
      WdLogEvent5_WdAssertion(v85);
    }
    HIDWORD(v130[5]) = v35;
    if ( cx
      || (v35 & 4) == 0
      && (v32 = 2LL,
          v31 = (unsigned int)((*(_DWORD *)&v134[56] + *(_DWORD *)&v134[60]) >> 31),
          LODWORD(v31) = (*(_DWORD *)&v134[56] + *(_DWORD *)&v134[60]) % 2,
          (*(_DWORD *)&v134[56] + *(_DWORD *)&v134[60]) / 2 <= (DWORD2(v130[3]) + HIDWORD(v130[3])) / 2) )
    {
      *(_OWORD *)v134 = v130[0];
      v132 = v130[1];
      *(_OWORD *)&v134[32] = v130[2];
      v133 = v130[4];
      *(_OWORD *)&v134[80] = v130[5];
      v35 = HIDWORD(v130[5]);
      *(_OWORD *)&v134[48] = v130[3];
    }
    if ( v118 )
      v120(v121, v75);
    v7 = v124;
    v34 = v123 + 1;
    LODWORD(v6) = v116;
    v123 = v34;
    if ( v34 >= v117 )
    {
      v14 = (_OWORD *)a6;
      goto LABEL_101;
    }
  }
  v90 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42, v44);
  v90[3] = (unsigned int)v6;
  v90[4] = v100.cy;
  v90[5] = v14;
  WdLogEvent5_WdError(v90);
  v70 = v119;
LABEL_95:
  if ( v118 )
    v120(v121, v70);
LABEL_108:
  if ( v125 )
    v127(v128, v126);
  return (unsigned int)v14;
}

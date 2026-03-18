/*
 * XREFs of ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C0236C08
 * Callers:
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0237D34 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002E40 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D73F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8CB8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DAE0C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00DB95C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00DBA44 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0126B30 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1C0130C7C (ConvertGdiScalingToDMMScaling.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C014F5B0 (DxgkGetGlobalRawmodeFlag.c)
 *     ?ConvertD3DddiRotationToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTATION@@@Z @ 0x1C02367CC (-ConvertD3DddiRotationToDmmRotation@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTAT.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0236838 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0237768 (-RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMD.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C02B3178 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C02B34D0 (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?DmmGetMostImportantVidPnPathTargetsFromSource@@YAJQEAXPEAUD3DKMDT_HVIDPN__@@IQEAI@Z @ 0x1C02B3848 (-DmmGetMostImportantVidPnPathTargetsFromSource@@YAJQEAXPEAUD3DKMDT_HVIDPN__@@IQEAI@Z.c)
 */

__int64 __fastcall PinPresentPathModalityFromMode(
        void (__fastcall **a1)(char *, struct D3DKMDT_HVIDPN__ *),
        char *a2,
        struct D3DKMDT_HVIDPN__ *a3,
        struct _DXGDMM_VIDPN_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a6,
        unsigned int a7,
        unsigned __int64 a8,
        struct _D3DKMT_DISPLAYMODE *a9,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a10,
        unsigned int a11,
        unsigned int a12,
        struct D3DKMDT_HVIDPN__ **a13)
{
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v19; // r14
  __int64 v20; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v21; // rbx
  __int64 v22; // rax
  const struct _D3DDDI_RATIONAL *v23; // r12
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rbx
  _QWORD *v33; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int16 v39; // ax
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rbx
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  _QWORD *v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rsi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rcx
  bool v56; // al
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r8
  struct _D3DDDI_RATIONAL v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  int v63; // eax
  __int64 v64; // rdx
  __int64 Numerator; // rcx
  __int64 v66; // rcx
  unsigned int i; // edi
  unsigned __int16 v68; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v69; // r14
  unsigned int j; // esi
  unsigned __int16 v71; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v72; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v73; // rax
  __int64 v74; // rdx
  int v75; // ebx
  struct DXGPROCESS *Current; // rax
  struct D3DKMDT_HVIDPN__ **v77; // r14
  int v78; // edi
  int v79; // edi
  unsigned int k; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v81; // rax
  signed int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  _BYTE v89[64]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v90; // [rsp+98h] [rbp-70h]
  _D3DKMDT_VIDPN_TARGET_MODE v91; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v93; // [rsp+160h] [rbp+58h] BYREF
  struct D3DKMDT_HVIDPN__ *v94; // [rsp+168h] [rbp+60h]
  struct _DXGDMM_VIDPN_INTERFACE *v95; // [rsp+170h] [rbp+68h]

  v95 = a4;
  v94 = a3;
  if ( !a2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, 0LL);
    *(_QWORD *)(v16 + 24) = 3972LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a3 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v17 + 24) = 3973LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a4 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v18 + 24) = 3974LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = a5;
  if ( !a5 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v20 + 24) = 3975LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = a6;
  if ( !a6 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v22 + 24) = 3976LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = (const struct _D3DDDI_RATIONAL *)a9;
  if ( !a9 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v24 + 24) = 3977LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v25 = a7;
  if ( a7 == -1 )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v26 + 24) = 3978LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !a13 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v27 + 24) = 3979LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v28 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, unsigned __int64 *))v21 + 15))(v19, &v93);
  v32 = v28;
  if ( v28 < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29, v31);
    v33[3] = v25;
    v33[4] = v19;
    v33[5] = v32;
    WdLogEvent5_WdError(v33);
    return (unsigned int)v32;
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v89, v93, v93);
  v39 = v90;
  if ( v90 )
    v39 = *(_WORD *)(v90 + 22);
  if ( v39 >= (unsigned __int16)v93 )
  {
    v42 = *(_QWORD *)(a2 + 276);
    MostImportantVidPnPathTargetsFromSource = DmmGetMostImportantVidPnPathTargetsFromSource(
                                                (DXGADAPTER *)a2,
                                                a3,
                                                v25,
                                                (unsigned int *const)&a10);
    v41 = MostImportantVidPnPathTargetsFromSource;
    if ( MostImportantVidPnPathTargetsFromSource >= 0 )
    {
      v48 = 0;
      a7 = 0;
      if ( v93 )
      {
        v49 = 0LL;
        while ( 1 )
        {
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v89, v48);
          v51 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, __int64, unsigned int *, unsigned int *))a6
                 + 16))(
                  v19,
                  v49,
                  &a12,
                  &a11);
          v41 = v51;
          if ( v51 < 0 )
            break;
          v55 = a12;
          *((_DWORD *)PathDescriptor + 6) = a12;
          *((_DWORD *)PathDescriptor + 7) = a11;
          *(_QWORD *)PathDescriptor |= 0x8700000000000uLL;
          *((_QWORD *)PathDescriptor + 2) = v42;
          v56 = a12 != (_DWORD)v25 || *((_BYTE *)DXGGLOBAL::GetGlobal(v55, v52) + 303985);
          v57 = ConvertVidPnPathToPathDescription((DXGADAPTER *)a2, v94, v95, a6, v19, a12, a11, v56, PathDescriptor);
          v41 = v57;
          if ( v57 < 0 )
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdError(v58, v44, v59);
            v47[3] = a12;
            v47[4] = a11;
            v47[5] = v19;
            v47[6] = v41;
            goto LABEL_54;
          }
          if ( a12 == (_DWORD)v25 )
          {
            *((_DWORD *)PathDescriptor + 24) = v23->Numerator;
            *((_DWORD *)PathDescriptor + 25) = v23->Denominator;
            *((_QWORD *)PathDescriptor + 13) = *((_QWORD *)PathDescriptor + 12);
            *((_DWORD *)PathDescriptor + 29) = v23[1].Numerator;
            *((_BYTE *)PathDescriptor + 128) = (v23[5].Numerator & 0x10) != 0;
            *(_QWORD *)PathDescriptor |= 0x100uLL;
            *((_QWORD *)PathDescriptor + 1) |= 0x100uLL;
            v60 = v23[2];
            *(_QWORD *)PathDescriptor |= 2uLL;
            *((_QWORD *)PathDescriptor + 1) |= 2uLL;
            *(struct _D3DDDI_RATIONAL *)((char *)PathDescriptor + 52) = v60;
            if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v58, v44) + 303928)
              && DmmGetClientVidPnTargetModeInfo(
                   a2,
                   a11,
                   0LL,
                   0LL,
                   0LL,
                   0LL,
                   (struct _D3DKMDT_2DREGION *)((char *)PathDescriptor + 44),
                   0LL) >= 0 )
            {
              *(_QWORD *)PathDescriptor |= 1uLL;
              *((_QWORD *)PathDescriptor + 1) |= 1uLL;
            }
            if ( a11 == a10 )
            {
              v63 = ConvertD3DddiRotationToDmmRotation(v23[3].Denominator, v61, v62);
              *(_QWORD *)PathDescriptor |= 0x200uLL;
            }
            else
            {
              *(_QWORD *)PathDescriptor &= ~0x200uLL;
              v63 = 0;
            }
            *((_DWORD *)PathDescriptor + 33) = v63;
            if ( a11 == a10 )
              *((_DWORD *)PathDescriptor + 20) ^= (*((_DWORD *)PathDescriptor + 20) ^ v23[3].Numerator) & 7;
            v64 = *(_QWORD *)PathDescriptor;
            *(_QWORD *)PathDescriptor |= 4uLL;
            Numerator = v23[4].Numerator;
            if ( (unsigned int)(Numerator - 1) > 1 )
            {
              if ( (v64 & 0x40000000000LL) == 0 )
                DmmGetDefaultScaling(a2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)PathDescriptor + 34);
            }
            else
            {
              ConvertGdiScalingToDMMScaling(Numerator, (_DWORD *)PathDescriptor + 34, v62);
            }
            v44 = 0x40000000000LL;
            *(_QWORD *)PathDescriptor |= 0x40000000000uLL;
          }
          else
          {
            *((_QWORD *)PathDescriptor + 1) |= *(_QWORD *)PathDescriptor & 0x18000820B8FLL;
          }
          v48 = a7 + 1;
          v49 = v48;
          ++a7;
          if ( v48 >= v93 )
            goto LABEL_49;
        }
        v47 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52, v54);
        v47[3] = v19;
        v47[4] = v41;
      }
      else
      {
LABEL_49:
        v66 = v90;
        for ( i = 0; ; ++i )
        {
          v68 = v66 ? *(_WORD *)(v66 + 20) : 0;
          if ( i >= v68 )
            break;
          v69 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v89, i);
          if ( (*(_QWORD *)v69 & 0x4000000000000LL) != 0 )
          {
            v66 = v90;
          }
          else
          {
            for ( j = i; ; ++j )
            {
              v66 = v90;
              v71 = v90 ? *(_WORD *)(v90 + 20) : 0;
              if ( j >= v71 )
                break;
              v72 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v89, j);
              if ( *((_DWORD *)v72 + 6) == *((_DWORD *)v69 + 6)
                && *((_DWORD *)v72 + 4) == *((_DWORD *)v69 + 4)
                && *((_DWORD *)v72 + 5) == *((_DWORD *)v69 + 5) )
              {
                *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v89, j) + 46) = i | 0xFE540000;
                v73 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v89, j);
                *(_QWORD *)v73 |= 0x4000000000000uLL;
              }
            }
          }
        }
        v75 = 0;
        if ( DxgkGetGlobalRawmodeFlag(v66, v44) )
          v75 = 0x20000;
        Current = DXGPROCESS::GetCurrent(0x20000LL, v74);
        v77 = a13;
        v78 = v75 | 0x8000000;
        if ( !*((_BYTE *)Current + 298) )
          v78 = v75;
        v79 = v78 | 0x40000;
        if ( (int)BmlGetPathModalityForAdapterWithCoreAccessHeld(v90, (__int64)a2, 1, 2, v79, (__int64)a13) >= 0 )
          goto LABEL_81;
        for ( k = 0; k < v93; ++k )
        {
          v81 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v89, k);
          if ( *((_DWORD *)v81 + 6) == (_DWORD)v25 )
            *((_QWORD *)v81 + 1) &= ~2uLL;
        }
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     v90,
                                                     (__int64)a2,
                                                     1,
                                                     2,
                                                     v79,
                                                     (__int64)v77);
        v41 = PathModalityForAdapterWithCoreAccessHeld;
        DxgkLogCodePointPacket(
          0x1Eu,
          PathModalityForAdapterWithCoreAccessHeld,
          a8 + (v25 & 0xFFFF0000),
          0,
          *(_QWORD *)(a2 + 276));
        if ( (int)v41 >= 0 )
        {
LABEL_81:
          memset(&v91, 0, sizeof(v91));
          LODWORD(v41) = RetrievePinnedModeForTarget(v95, *v77, a10, &v91);
          if ( (int)v41 < 0 )
          {
            v88 = WdLogNewEntry5_WdAssertion(v87, v86);
            *(_QWORD *)(v88 + 24) = 4274LL;
            WdLogEvent5_WdAssertion(v88);
            a1[8](a2, *v77);
            *v77 = 0LL;
          }
          else
          {
            DmmCalculatePresentationVSync(&v91.VideoSignalInfo, (struct _D3DDDI_RATIONAL *)&v23[2]);
            v23[1].Denominator = DmmMapVSyncFromRationalToInteger(
                                   v23 + 2,
                                   (unsigned int)((int)(*(_DWORD *)&v91.VideoSignalInfo.AdditionalSignalInfo << 29) >> 29),
                                   0LL);
          }
          goto LABEL_84;
        }
        v47 = (_QWORD *)WdLogNewEntry5_WdError(v84, v83, v85);
        v47[3] = v41;
      }
    }
    else
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44, v46);
      v47[3] = v25;
      v47[4] = v19;
      v47[5] = v41;
    }
LABEL_54:
    WdLogEvent5_WdError(v47);
  }
  else
  {
    v40 = WdLogNewEntry5_WdLowResource(v36, v35, v37, v38);
    *(_QWORD *)(v40 + 24) = v93;
    WdLogEvent5_WdLowResource(v40);
    LODWORD(v41) = -1073741801;
  }
LABEL_84:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v89);
  return (unsigned int)v41;
}

/*
 * XREFs of ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02C4C3C
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C02C3434 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1C000389C (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000BE6C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D6BA8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8678 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D9258 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00D92B0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DA7CC (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0146BD8 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0148D00 (DxgkIsVirtualizationDisabledForTarget.c)
 *     DxgkIsMonitorConnected @ 0x1C0202E80 (DxgkIsMonitorConnected.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C02C13E8 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     _lambda_58ec37c2392282bb0e6e3e53197351b6_::operator() @ 0x1C02C3374 (_lambda_58ec37c2392282bb0e6e3e53197351b6_--operator().c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02C42B4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02C4B44 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02C52DC (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02C5318 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02C53C0 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02C5464 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02C5530 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C02C557C (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C02C64E4 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(BTL_TOPOLOGY_CONSTRUCTOR *this, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned __int16 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct CCD_BTL *v13; // rax
  unsigned int v14; // r15d
  unsigned int v15; // edi
  unsigned __int16 v16; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  unsigned int v18; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rax
  __int64 v20; // rcx
  __int128 v21; // xmm1
  unsigned int v22; // r14d
  unsigned int j; // r14d
  unsigned int v24; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v25; // r15
  __int64 v26; // rcx
  unsigned int v27; // r14d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rax
  CCD_TOPOLOGY *v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v35; // r14
  bool *v36; // r12
  const struct _LUID *v37; // r15
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // rax
  CCD_TOPOLOGY *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // r14d
  int v47; // eax
  bool v48; // cl
  __int16 v49; // dx
  bool v50; // zf
  bool v51; // al
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  _QWORD *v56; // rax
  __int64 v57; // rax
  unsigned __int16 v58; // cx
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rax
  CCD_TOPOLOGY *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  int v68; // eax
  _QWORD *v69; // rax
  CCD_TOPOLOGY *v70; // rcx
  int v72; // [rsp+40h] [rbp-79h]
  __int128 v73; // [rsp+48h] [rbp-71h]
  __int128 v74; // [rsp+58h] [rbp-61h]
  __int128 v75; // [rsp+68h] [rbp-51h]
  _BYTE v76[64]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v77; // [rsp+C0h] [rbp+7h]
  __int64 i; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int16 v79; // [rsp+130h] [rbp+77h]
  int v80; // [rsp+138h] [rbp+7Fh]

  *a2 = 0;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 303984)
    || (LODWORD(v6) = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructFromFirmwareRecommendedVidPn(this), (int)v6 < 0) )
  {
    v72 = *((_DWORD *)this + 15);
    v73 = *(_OWORD *)((char *)this + 12);
    v74 = *(_OWORD *)((char *)this + 28);
    v75 = *(_OWORD *)((char *)this + 44);
    v79 = BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(this);
    v80 = v79;
    v7 = v79;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v76, 8u, 0);
    Current = DXGPROCESS::GetCurrent(v9, v8);
    if ( !DXGPROCESS::IsRemoteConnection(Current) )
    {
      v13 = CCD_BTL::Global(v12, v11);
      if ( (int)CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v76, (struct CCD_BTL *)((char *)v13 + 8)) < 0 )
      {
LABEL_46:
        v43 = *(CCD_TOPOLOGY **)this;
        *((_DWORD *)this + 2) = 0;
        *(_OWORD *)((char *)this + 12) = v73;
        *a2 = 0;
        *(_OWORD *)((char *)this + 28) = v74;
        *(_OWORD *)((char *)this + 44) = v75;
        *((_DWORD *)this + 15) = v72;
        CCD_TOPOLOGY::Clear(v43);
        switch ( v7 )
        {
          case 1u:
            v47 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
            break;
          case 2u:
            v47 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
            break;
          case 3u:
            v47 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
            break;
          default:
            v46 = v7 - 4;
            if ( v46 > 1 )
            {
              v63 = WdLogNewEntry5_WdAssertion(v45, v44);
              *(_QWORD *)(v63 + 24) = v7;
              WdLogEvent5_WdAssertion(v63);
              LODWORD(v6) = -1073741823;
              goto LABEL_76;
            }
            v47 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
            break;
        }
        LODWORD(v6) = v47;
        if ( v47 < 0 )
        {
          v46 = v7 - 4;
LABEL_76:
          v64 = *(CCD_TOPOLOGY **)this;
          *((_DWORD *)this + 2) = 0;
          CCD_TOPOLOGY::Clear(v64);
          if ( v7 == 3 )
          {
            v68 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
          }
          else
          {
            if ( v46 > 1 )
              goto LABEL_81;
            v68 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
          }
          LODWORD(v6) = v68;
LABEL_81:
          if ( (int)v6 < 0 )
          {
            v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v66, v65, v67);
            v69[3] = (int)v6;
            v69[4] = *(_QWORD *)this;
            v69[5] = v7;
            WdLogEvent5_WdWarning(v69);
            v70 = *(CCD_TOPOLOGY **)this;
            *((_DWORD *)this + 2) = 0;
            CCD_TOPOLOGY::Clear(v70);
            LODWORD(v6) = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
          }
        }
LABEL_83:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v76);
        return (unsigned int)v6;
      }
    }
    v14 = 0;
    *a2 = 0;
    v15 = 0;
    while ( 1 )
    {
      v16 = v77 ? *(_WORD *)(v77 + 20) : 0;
      if ( v14 >= v16 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v76, v14);
      LOBYTE(i) = 0;
      if ( (int)DxgkIsMonitorConnected(
                  *(struct _LUID *)((char *)PathDescriptor + 16),
                  *((unsigned int *)PathDescriptor + 7),
                  0LL,
                  0,
                  (bool *)&i) >= 0
        && (_BYTE)i )
      {
        v18 = *a2;
        *((_QWORD *)PathDescriptor + 1) = 0LL;
        if ( v14 != v18 )
        {
          v19 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v76, v18);
          v20 = 2LL;
          do
          {
            *(_OWORD *)v19 = *(_OWORD *)PathDescriptor;
            *((_OWORD *)v19 + 1) = *((_OWORD *)PathDescriptor + 1);
            *((_OWORD *)v19 + 2) = *((_OWORD *)PathDescriptor + 2);
            *((_OWORD *)v19 + 3) = *((_OWORD *)PathDescriptor + 3);
            *((_OWORD *)v19 + 4) = *((_OWORD *)PathDescriptor + 4);
            *((_OWORD *)v19 + 5) = *((_OWORD *)PathDescriptor + 5);
            *((_OWORD *)v19 + 6) = *((_OWORD *)PathDescriptor + 6);
            v19 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v19 + 128);
            v21 = *((_OWORD *)PathDescriptor + 7);
            PathDescriptor = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)PathDescriptor + 128);
            *((_OWORD *)v19 - 1) = v21;
            --v20;
          }
          while ( v20 );
          *(_OWORD *)v19 = *(_OWORD *)PathDescriptor;
          v18 = *a2;
        }
        v15 = v18 + 1;
        *a2 = v18 + 1;
      }
      else
      {
        v22 = 0;
        for ( i = (__int64)v76; v22 < *a2; ++v22 )
          lambda_58ec37c2392282bb0e6e3e53197351b6_::operator()((CCD_TOPOLOGY **)&i, (__int64)PathDescriptor, v22);
        for ( j = v14 + 1; j < (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v76); ++j )
          lambda_58ec37c2392282bb0e6e3e53197351b6_::operator()((CCD_TOPOLOGY **)&i, (__int64)PathDescriptor, j);
        v15 = *a2;
      }
      ++v14;
    }
    *(_WORD *)(v77 + 20) = *(_WORD *)a2;
    if ( !v15 )
      goto LABEL_69;
    v24 = v15 - 1;
    do
    {
      v25 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v76, v24);
      v26 = *(_QWORD *)v25;
      if ( (*(_QWORD *)v25 & 0x4000000000000LL) != 0 )
      {
        v27 = 0;
        while ( 1 )
        {
          v28 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v76, v27);
          if ( (*(_QWORD *)v28 & 0x4000000000000LL) != 0 && *((_DWORD *)v25 + 46) == *((_DWORD *)v28 + 46) )
            break;
          if ( ++v27 >= v15 )
            goto LABEL_35;
        }
        *((_DWORD *)v25 + 46) = v27 | 0xFE530000;
      }
      else
      {
        *((_DWORD *)v25 + 46) = v24 | 0xFE530000;
        *(_QWORD *)v25 = v26 | 0x4000000000000LL;
      }
LABEL_35:
      --v24;
      --v15;
    }
    while ( v15 );
    if ( *a2 && (unsigned __int16)(v80 - 1) > 1u )
    {
      v29 = *(CCD_TOPOLOGY **)this;
      *((_WORD *)this + 4) = *a2;
      v30 = CCD_TOPOLOGY::CopyInheritScope(v29, (const struct CCD_TOPOLOGY *)v76);
      v6 = v30;
      if ( v30 < 0 )
      {
        v34 = WdLogNewEntry5_WdError(v32, v31, v33);
        *(_QWORD *)(v34 + 24) = v6;
        WdLogEvent5_WdError(v34);
        goto LABEL_45;
      }
      if ( *a2 != 1 )
        v80 = 4;
      v35 = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, 0LL);
      v36 = (bool *)this + 60;
      v37 = (const struct _LUID *)((char *)v35 + 16);
      *(_QWORD *)((char *)this + 12) = *((_QWORD *)v35 + 2);
      *((_DWORD *)this + 5) = *((_DWORD *)v35 + 6);
      *((_DWORD *)this + 6) = *((_DWORD *)v35 + 7);
      *((_DWORD *)this + 7) = *((_DWORD *)v35 + 22);
      *((_DWORD *)this + 8) = *((_DWORD *)v35 + 23);
      IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                            *(struct _LUID *)((char *)v35 + 16),
                                            *((unsigned int *)v35 + 7),
                                            (bool *)this + 53,
                                            (bool *)this + 60,
                                            0LL,
                                            0LL,
                                            0LL);
      v6 = IsVirtualizationDisabledForTarget;
      if ( IsVirtualizationDisabledForTarget < 0 )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39, v41);
        v42[3] = *((unsigned int *)v35 + 7);
        v42[4] = *((int *)v35 + 5);
        v42[5] = v37->LowPart;
        v42[6] = v6;
        WdLogEvent5_WdError(v42);
LABEL_44:
        v7 = v79;
        goto LABEL_45;
      }
      v48 = *v36;
      v49 = v80;
      v50 = !*v36;
      *((_BYTE *)this + 53) = *((_BYTE *)this + 53) == 0;
      *v36 = v50;
      *((_BYTE *)this + 11) = v49 == 3;
      v51 = v49 == 3 && !v48;
      *((_BYTE *)this + 10) = v51;
      if ( !v48 || v49 != 3 )
      {
        v59 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(this, 0);
        v6 = v59;
        if ( v59 >= 0 )
          goto LABEL_83;
        v56 = (_QWORD *)WdLogNewEntry5_WdError(v61, v60, v62);
        v56[3] = *((unsigned int *)v35 + 7);
        v56[4] = *((int *)v35 + 5);
        v56[5] = v37->LowPart;
        v56[6] = v6;
        goto LABEL_59;
      }
      *((_BYTE *)this + 10) = 0;
      v52 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology((CCD_TOPOLOGY **)this, 0LL, v37, *((_DWORD *)v35 + 6));
      v6 = v52;
      if ( v52 < 0 )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdError(v54, v53, v55);
        v56[3] = v6;
        v56[4] = *((int *)v35 + 5);
        v56[5] = v37->LowPart;
        v56[6] = *((unsigned int *)v35 + 6);
        v56[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
LABEL_59:
        WdLogEvent5_WdError(v56);
        goto LABEL_44;
      }
      if ( !IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v35 + 22)) )
        goto LABEL_44;
      v57 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      if ( v57 )
        v58 = *(_WORD *)(v57 + 20);
      else
        v58 = 0;
      if ( v58 >= 2u )
        CCD_TOPOLOGY::SwapPathsDescriptors(*(void ***)this, 0, 1u);
      v7 = v79;
    }
    else
    {
LABEL_69:
      LODWORD(v6) = -1073741637;
    }
LABEL_45:
    if ( (int)v6 >= 0 )
      goto LABEL_83;
    goto LABEL_46;
  }
  WdLogNewEntry5_WdTrace(v5, v4);
  return (unsigned int)v6;
}

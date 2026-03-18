/*
 * XREFs of ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C028C3AC
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C028B064 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1C0005AE8 (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00C2320 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00C9978 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00C99D0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00CA3D8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00CA51C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00CDD14 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkIsMonitorConnected @ 0x1C01D50C0 (DxgkIsMonitorConnected.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C0289078 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     _lambda_36a5c3cf09b4e72a442c67f1bbefbad9_::operator() @ 0x1C028AFA4 (_lambda_36a5c3cf09b4e72a442c67f1bbefbad9_--operator().c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C028BBB4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C028C2B4 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C028CA68 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C028CAA4 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C028CB4C (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C028CBF0 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C028CCBC (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C028CD08 (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C028D138 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(BTL_TOPOLOGY_CONSTRUCTOR *this, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int16 v9; // r13
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  struct CCD_BTL *v14; // rax
  unsigned int v15; // r15d
  unsigned int v16; // edi
  unsigned __int16 v17; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  unsigned int v19; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rax
  __int64 v21; // rcx
  __int128 v22; // xmm1
  unsigned int v23; // esi
  unsigned int j; // esi
  unsigned int v25; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // r15
  __int64 v27; // rcx
  unsigned int v28; // esi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v29; // rax
  CCD_TOPOLOGY *v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v34; // rsi
  bool *v35; // r12
  const struct _LUID *v36; // r15
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  CCD_TOPOLOGY *v40; // rcx
  __int64 v41; // rcx
  unsigned int v42; // r14d
  int v43; // eax
  bool v44; // cl
  __int16 v45; // dx
  bool v46; // zf
  bool v47; // al
  int v48; // eax
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rax
  unsigned __int16 v52; // cx
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rax
  CCD_TOPOLOGY *v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // eax
  _QWORD *v61; // rax
  CCD_TOPOLOGY *v62; // rcx
  int v64; // [rsp+40h] [rbp-79h]
  __int128 v65; // [rsp+48h] [rbp-71h]
  __int128 v66; // [rsp+58h] [rbp-61h]
  __int128 v67; // [rsp+68h] [rbp-51h]
  _BYTE v68[64]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v69; // [rsp+C0h] [rbp+7h]
  unsigned __int64 i; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int16 v71; // [rsp+130h] [rbp+77h]
  int v72; // [rsp+138h] [rbp+7Fh]

  *a2 = 0;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this) + 20314)
    || (LODWORD(v6) = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructFromFirmwareRecommendedVidPn(this), (int)v6 < 0) )
  {
    v64 = *((_DWORD *)this + 15);
    v65 = *(_OWORD *)((char *)this + 12);
    v66 = *(_OWORD *)((char *)this + 28);
    v67 = *(_OWORD *)((char *)this + 44);
    v71 = BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(this);
    v72 = v71;
    v9 = v71;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v68, 8u, 0);
    Current = DXGPROCESS::GetCurrent();
    if ( !Current )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v12 + 24) = 1122LL;
      WdLogEvent5_WdAssertion(v12);
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)Current + 13) + 224LL))(0LL, 0LL, 0LL) )
    {
      v14 = CCD_BTL::Global(v13);
      if ( (int)CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v68, (struct CCD_BTL *)((char *)v14 + 8)) < 0 )
      {
LABEL_48:
        v40 = *(CCD_TOPOLOGY **)this;
        *((_DWORD *)this + 2) = 0;
        *(_OWORD *)((char *)this + 12) = v65;
        *a2 = 0;
        *(_OWORD *)((char *)this + 28) = v66;
        *(_OWORD *)((char *)this + 44) = v67;
        *((_DWORD *)this + 15) = v64;
        CCD_TOPOLOGY::Clear(v40);
        switch ( v9 )
        {
          case 1u:
            v43 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
            break;
          case 2u:
            v43 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
            break;
          case 3u:
            v43 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
            break;
          default:
            v42 = v9 - 4;
            if ( v42 > 1 )
            {
              v55 = WdLogNewEntry5_WdAssertion(v41);
              *(_QWORD *)(v55 + 24) = v9;
              WdLogEvent5_WdAssertion(v55);
              LODWORD(v6) = -1073741823;
              goto LABEL_77;
            }
            v43 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
            break;
        }
        LODWORD(v6) = v43;
        if ( v43 < 0 )
        {
          v42 = v9 - 4;
LABEL_77:
          v56 = *(CCD_TOPOLOGY **)this;
          *((_DWORD *)this + 2) = 0;
          CCD_TOPOLOGY::Clear(v56);
          if ( v9 == 3 )
          {
            v60 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
          }
          else
          {
            if ( v42 > 1 )
              goto LABEL_82;
            v60 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
          }
          LODWORD(v6) = v60;
LABEL_82:
          if ( (int)v6 < 0 )
          {
            v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v57, v59);
            v61[3] = (int)v6;
            v61[4] = *(_QWORD *)this;
            v61[5] = v9;
            WdLogEvent5_WdWarning(v61);
            v62 = *(CCD_TOPOLOGY **)this;
            *((_DWORD *)this + 2) = 0;
            CCD_TOPOLOGY::Clear(v62);
            LODWORD(v6) = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
          }
        }
LABEL_84:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v68);
        return (unsigned int)v6;
      }
    }
    v15 = 0;
    *a2 = 0;
    v16 = 0;
    while ( 1 )
    {
      v17 = v69 ? *(_WORD *)(v69 + 20) : 0;
      if ( v15 >= v17 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v68, v15);
      LOBYTE(i) = 0;
      if ( (int)DxgkIsMonitorConnected(
                  *(struct _LUID *)((char *)PathDescriptor + 16),
                  *((_DWORD *)PathDescriptor + 7),
                  0,
                  0,
                  (bool *)&i) >= 0
        && (_BYTE)i )
      {
        v19 = *a2;
        *((_QWORD *)PathDescriptor + 1) = 0LL;
        if ( v15 != v19 )
        {
          v20 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v68, v19);
          v21 = 2LL;
          do
          {
            *(_OWORD *)v20 = *(_OWORD *)PathDescriptor;
            *((_OWORD *)v20 + 1) = *((_OWORD *)PathDescriptor + 1);
            *((_OWORD *)v20 + 2) = *((_OWORD *)PathDescriptor + 2);
            *((_OWORD *)v20 + 3) = *((_OWORD *)PathDescriptor + 3);
            *((_OWORD *)v20 + 4) = *((_OWORD *)PathDescriptor + 4);
            *((_OWORD *)v20 + 5) = *((_OWORD *)PathDescriptor + 5);
            *((_OWORD *)v20 + 6) = *((_OWORD *)PathDescriptor + 6);
            v20 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v20 + 128);
            v22 = *((_OWORD *)PathDescriptor + 7);
            PathDescriptor = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)PathDescriptor + 128);
            *((_OWORD *)v20 - 1) = v22;
            --v21;
          }
          while ( v21 );
          *(_OWORD *)v20 = *(_OWORD *)PathDescriptor;
          v19 = *a2;
        }
        v16 = v19 + 1;
        *a2 = v19 + 1;
      }
      else
      {
        v23 = 0;
        for ( i = (unsigned __int64)v68; v23 < *a2; ++v23 )
          lambda_36a5c3cf09b4e72a442c67f1bbefbad9_::operator()((CCD_TOPOLOGY **)&i, (__int64)PathDescriptor, v23);
        for ( j = v15 + 1; j < (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v68); ++j )
          lambda_36a5c3cf09b4e72a442c67f1bbefbad9_::operator()((CCD_TOPOLOGY **)&i, (__int64)PathDescriptor, j);
        v16 = *a2;
      }
      ++v15;
    }
    *(_WORD *)(v69 + 20) = v16;
    if ( !v16 )
      goto LABEL_70;
    v25 = v16 - 1;
    do
    {
      v26 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v68, v25);
      v27 = *(_QWORD *)v26;
      if ( (*(_QWORD *)v26 & 0x4000000000000LL) != 0 )
      {
        v28 = 0;
        while ( 1 )
        {
          v29 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v68, v28);
          if ( (*(_QWORD *)v29 & 0x4000000000000LL) != 0 && *((_DWORD *)v26 + 46) == *((_DWORD *)v29 + 46) )
            break;
          if ( ++v28 >= v16 )
            goto LABEL_37;
        }
        *((_DWORD *)v26 + 46) = v28 | 0xFE530000;
      }
      else
      {
        *((_DWORD *)v26 + 46) = v25 | 0xFE530000;
        *(_QWORD *)v26 = v27 | 0x4000000000000LL;
      }
LABEL_37:
      --v25;
      --v16;
    }
    while ( v16 );
    if ( !*a2 || (unsigned __int16)(v72 - 1) <= 1u )
    {
LABEL_70:
      LODWORD(v6) = -1073741637;
LABEL_47:
      if ( (int)v6 >= 0 )
        goto LABEL_84;
      goto LABEL_48;
    }
    v30 = *(CCD_TOPOLOGY **)this;
    *((_WORD *)this + 4) = *a2;
    v31 = CCD_TOPOLOGY::CopyInheritScope(v30, (const struct CCD_TOPOLOGY *)v68);
    v6 = v31;
    if ( v31 < 0 )
    {
      v33 = WdLogNewEntry5_WdError(v32);
      *(_QWORD *)(v33 + 24) = v6;
      WdLogEvent5_WdError(v33);
      goto LABEL_47;
    }
    if ( *a2 != 1 )
      v72 = 4;
    v34 = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, 0);
    v35 = (bool *)this + 60;
    v36 = (const struct _LUID *)((char *)v34 + 16);
    *(_QWORD *)((char *)this + 12) = *((_QWORD *)v34 + 2);
    *((_DWORD *)this + 5) = *((_DWORD *)v34 + 6);
    *((_DWORD *)this + 6) = *((_DWORD *)v34 + 7);
    *((_DWORD *)this + 7) = *((_DWORD *)v34 + 22);
    *((_DWORD *)this + 8) = *((_DWORD *)v34 + 23);
    IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                          *(struct _LUID *)((char *)v34 + 16),
                                          *((_DWORD *)v34 + 7),
                                          (__int64)this + 53,
                                          (__int64)this + 60,
                                          0LL,
                                          0LL,
                                          0LL);
    v6 = IsVirtualizationDisabledForTarget;
    if ( IsVirtualizationDisabledForTarget >= 0 )
    {
      v44 = *v35;
      v45 = v72;
      v46 = !*v35;
      *((_BYTE *)this + 53) = *((_BYTE *)this + 53) == 0;
      *v35 = v46;
      *((_BYTE *)this + 11) = v45 == 3;
      v47 = v45 == 3 && !v44;
      *((_BYTE *)this + 10) = v47;
      if ( v44 && v45 == 3 )
      {
        *((_BYTE *)this + 10) = 0;
        v48 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology((CCD_TOPOLOGY **)this, 0, v36, *((_DWORD *)v34 + 6));
        v6 = v48;
        if ( v48 >= 0 )
        {
          if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v34 + 22)) )
          {
            v51 = *(_QWORD *)(*(_QWORD *)this + 64LL);
            v52 = v51 ? *(_WORD *)(v51 + 20) : 0;
            if ( v52 >= 2u )
              CCD_TOPOLOGY::SwapPathsDescriptors(*(void ***)this, 0, 1u);
          }
          goto LABEL_46;
        }
        v50 = (_QWORD *)WdLogNewEntry5_WdError(v49);
        v50[3] = v6;
        v50[4] = *((int *)v34 + 5);
        v50[5] = v36->LowPart;
        v50[6] = *((unsigned int *)v34 + 6);
        v50[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
      }
      else
      {
        v53 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(this, 0);
        v6 = v53;
        if ( v53 >= 0 )
          goto LABEL_84;
        v50 = (_QWORD *)WdLogNewEntry5_WdError(v54);
        v50[3] = *((unsigned int *)v34 + 7);
        v50[4] = *((int *)v34 + 5);
        v50[5] = v36->LowPart;
        v50[6] = v6;
      }
      WdLogEvent5_WdError(v50);
    }
    else
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdError(v38);
      v39[3] = *((unsigned int *)v34 + 7);
      v39[4] = *((int *)v34 + 5);
      v39[5] = v36->LowPart;
      v39[6] = v6;
      WdLogEvent5_WdError(v39);
    }
LABEL_46:
    v9 = v71;
    goto LABEL_47;
  }
  WdLogNewEntry5_WdTrace(v5, v4, v7, v8);
  return (unsigned int)v6;
}

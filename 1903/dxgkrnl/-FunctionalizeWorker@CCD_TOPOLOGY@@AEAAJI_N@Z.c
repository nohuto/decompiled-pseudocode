/*
 * XREFs of ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C00D37C8
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C00D08CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D0968 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00D09F0 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D0DC4 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1685::__AUTO_USING_PM_PathChangeReason1685 @ 0x1C00D0FFC (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1685--__AUTO.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00D1038 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00D1614 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00D3B20 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z @ 0x1C00D5710 (-ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D6BA8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00D7BAC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00D7E08 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DA7CC (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DA844 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C02C10C8 (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C02C1178 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FunctionalizeWorker(CCD_TOPOLOGY *this, __int64 a2, _BOOL8 a3)
{
  int v4; // r15d
  __int64 v5; // rcx
  bool v6; // si
  unsigned int v7; // r9d
  _DWORD *v8; // rax
  __int64 v9; // rcx
  __int16 v10; // ax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rdx
  int v18; // r14d
  unsigned int i; // ecx
  unsigned __int16 v20; // ax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // esi
  unsigned __int16 v25; // r8
  __int64 v26; // rcx
  int v27; // r10d
  int v28; // r9d
  __int64 v29; // rcx
  bool v30; // al
  __int64 v31; // r13
  int PathModalityForAdapter; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  int v37; // eax
  __int64 v39; // rax
  unsigned __int16 v40; // di
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rdi
  unsigned int v48; // esi
  __int64 v49; // r12
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r13
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v57; // [rsp+38h] [rbp-41h]
  _BYTE v58[144]; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int16 v59; // [rsp+E0h] [rbp+67h] BYREF
  int v60; // [rsp+E8h] [rbp+6Fh]
  unsigned __int64 v61; // [rsp+F8h] [rbp+7Fh] BYREF

  v60 = a2;
  v4 = 0;
  v5 = *((_QWORD *)this + 8);
  v6 = a3;
  v7 = *(unsigned __int16 *)(v5 + 20);
  v56 = v5 + 48;
  v57 = v7;
  if ( v7 )
  {
    v8 = (_DWORD *)(v5 + 280);
    v9 = v7;
    do
    {
      *v8 |= 1u;
      v8[1] = 0;
      v8 += 68;
      --v9;
    }
    while ( v9 );
    v5 = *((_QWORD *)this + 8);
  }
  if ( v5 )
    v10 = *(_WORD *)(v5 + 20);
  else
    v10 = 0;
  if ( !v10 )
  {
    v39 = WdLogNewEntry5_WdWarning(v5, a2, a3);
    *(_QWORD *)(v39 + 24) = this;
    *(_QWORD *)(v39 + 32) = *((_QWORD *)this + 8);
    WdLogEvent5_WdWarning(v39);
    LODWORD(v16) = -1073741823;
    goto LABEL_32;
  }
  CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
  v12 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this, v11);
  v16 = v12;
  if ( v12 < 0 )
  {
LABEL_67:
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
    v55[3] = *((_QWORD *)this + 8);
    v55[4] = v16;
LABEL_68:
    WdLogEvent5_WdError(v55);
    goto LABEL_32;
  }
  v17 = *((_QWORD *)this + 8);
  v18 = 0;
  for ( i = 0; ; ++i )
  {
    v20 = v17 ? *(_WORD *)(v17 + 20) : 0;
    if ( i >= v20 )
      break;
    v21 = 272LL * i;
    if ( *(_BYTE *)(v21 + v17 + 177) )
    {
      v22 = *(_QWORD *)(v21 + v17 + 48);
      if ( (v22 & 0x101) == 0 && (v22 & 0x20000) != 0 )
        v18 = 1;
    }
  }
  if ( v18 )
  {
    v40 = 8;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v58, 8u, 0);
    v59 = 8;
    while ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v58, v40) >= v40 )
    {
      v43 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v58, 1, v6, 1, &v59);
      if ( v43 != -1073741789 )
        goto LABEL_44;
      v40 = v59;
    }
    v46 = (_QWORD *)WdLogNewEntry5_WdTrace(v42, v41);
    v46[3] = v40;
    v46[4] = this;
    v45 = *((_QWORD *)this + 8);
    v46[5] = v45;
    v43 = -1073741801;
LABEL_44:
    if ( v43 >= 0 )
    {
      v47 = *((_QWORD *)this + 8);
      v48 = 0;
      if ( !*(_WORD *)(v47 + 20) )
      {
LABEL_59:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v58);
        goto LABEL_17;
      }
      while ( 1 )
      {
        v49 = 272LL * v48;
        Global = DXGGLOBAL::GetGlobal(v45, (__int64)v44);
        v51 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(v49 + v47 + 64), &v61);
        if ( !v51 )
          break;
        v52 = *((_QWORD *)v51 + 319);
        v53 = *((_QWORD *)v51 + 320);
        if ( *(_BYTE *)(v52 + 234) && !*(_BYTE *)(v52 + 233) )
          LOBYTE(v4) = 1;
        DXGADAPTER::ReleaseReferenceNoTracking(v51);
        v54 = *((_QWORD *)this + 8);
        v45 = 0LL;
        v47 = v54;
        if ( *(_BYTE *)(v49 + v54 + 177) )
        {
          if ( v53 )
          {
            if ( !(_BYTE)v4 )
            {
              v44 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v49 + v54 + 48);
              if ( (*(_DWORD *)v44 & 0x20101) == 0x20000LL )
              {
                CCD_TOPOLOGY::SetGivenPathDataFromActivePath(0LL, v44, (const struct CCD_TOPOLOGY *)v58);
                v47 = *((_QWORD *)this + 8);
              }
            }
          }
        }
        ++v48;
        v4 = 0;
        if ( v48 >= *(unsigned __int16 *)(v47 + 20) )
          goto LABEL_59;
      }
    }
    else
    {
      WdLogNewEntry5_WdTrace(v45, v44);
    }
    v18 = 0;
    goto LABEL_59;
  }
LABEL_17:
  CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
  v23 = *((_QWORD *)this + 8);
  v24 = 0;
  if ( *(_WORD *)(v23 + 20) )
  {
    while ( 1 )
    {
      if ( v23 && *(_WORD *)(v23 + 20) )
      {
        v25 = 0;
        v26 = 272LL * v24;
        v27 = *(_DWORD *)(v26 + v23 + 64);
        v28 = *(_DWORD *)(v26 + v23 + 68);
        while ( 1 )
        {
          v29 = 272LL * v25;
          if ( *(_DWORD *)(v29 + v23 + 64) == v27 && *(_DWORD *)(v29 + v23 + 68) == v28 )
            break;
          ++v25;
        }
        v30 = v25 == v24;
      }
      else
      {
        v30 = 0;
      }
      if ( v30 )
        break;
LABEL_28:
      v23 = *((_QWORD *)this + 8);
      if ( ++v24 >= *(unsigned __int16 *)(v23 + 20) )
        goto LABEL_29;
    }
    v31 = 272LL * v24;
    while ( 1 )
    {
      PathModalityForAdapter = BmlGetPathModalityForAdapter(
                                 *((_QWORD *)this + 8),
                                 *(_QWORD *)(*((_QWORD *)this + 8) + v31 + 64),
                                 *((_BYTE *)this + 76) & 1,
                                 *((_DWORD *)this + 20),
                                 v60);
      v16 = PathModalityForAdapter;
      if ( PathModalityForAdapter != -1071774970 )
        break;
      if ( !v18
        || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                            this,
                            (const struct _LUID *)(v31 + *((_QWORD *)this + 8) + 64LL))
        || v4 )
      {
        goto LABEL_66;
      }
      v4 = 1;
      WdLogNewEntry5_WdTrace(v34, v33);
    }
    v4 = 0;
    if ( PathModalityForAdapter >= 0 )
      goto LABEL_28;
LABEL_66:
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33, v35);
    v55[3] = v16;
    v55[4] = *((_QWORD *)this + 8);
    v55[5] = v24;
    v55[6] = *(int *)(272LL * v24 + *((_QWORD *)this + 8) + 68);
    v55[7] = *(unsigned int *)(272LL * v24 + *((_QWORD *)this + 8) + 64);
    goto LABEL_68;
  }
LABEL_29:
  CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x10000000000000uLL);
  v36 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
  v16 = v36;
  if ( v36 < 0 )
    goto LABEL_67;
  CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x20000000000000uLL);
  v37 = CCD_TOPOLOGY::AdjustDesktopLayout(this);
  v16 = v37;
  if ( v37 < 0 )
    goto LABEL_67;
  CCD_TOPOLOGY::FillScalingIntent(this);
  CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
  LODWORD(v16) = 0;
LABEL_32:
  CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1685::__AUTO_USING_PM_PathChangeReason1685(&v56);
  return (unsigned int)v16;
}

/*
 * XREFs of ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C00AF5D0
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C00AF410 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1685::__AUTO_USING_PM_PathChangeReason1685 @ 0x1C00AEE80 (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1685--__AUTO.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00BBECC (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00C64CC (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z @ 0x1C00C892C (-ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00C93FC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00C9BA8 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00CA51C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00CA594 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00CC774 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00CC7FC (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00CE528 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00D5954 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C0288D58 (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C0288E08 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FunctionalizeWorker(CCD_TOPOLOGY *this, __int64 a2, char a3)
{
  int v4; // r15d
  __int64 v5; // rcx
  __int64 v6; // r8
  _DWORD *v7; // rax
  __int64 v8; // rcx
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // r14d
  unsigned int i; // ecx
  unsigned __int16 v17; // ax
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int16 v20; // di
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  __int64 v31; // rdi
  unsigned int v32; // esi
  __int64 v33; // r12
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r13
  __int64 v38; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v39; // rdx
  __int64 v40; // rdx
  unsigned int v41; // esi
  bool j; // cf
  unsigned __int16 v43; // r8
  __int64 v44; // rcx
  int v45; // r10d
  int v46; // r9d
  __int64 v47; // rcx
  bool v48; // al
  __int64 v49; // r13
  int PathModalityForAdapter; // eax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  _QWORD *v55; // rax
  int v56; // eax
  int v57; // eax
  __int64 v59; // [rsp+38h] [rbp-49h] BYREF
  int v60; // [rsp+40h] [rbp-41h]
  _BYTE v61[144]; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v62; // [rsp+E8h] [rbp+67h] BYREF
  int v63; // [rsp+F0h] [rbp+6Fh]
  unsigned __int16 v64; // [rsp+F8h] [rbp+77h] BYREF

  LOBYTE(v64) = a3;
  v63 = a2;
  v4 = 0;
  v5 = *((_QWORD *)this + 8);
  v6 = *(unsigned __int16 *)(v5 + 20);
  v59 = v5 + 48;
  v60 = v6;
  if ( (_DWORD)v6 )
  {
    v7 = (_DWORD *)(v5 + 280);
    v8 = (unsigned int)v6;
    do
    {
      *v7 |= 1u;
      v7[1] = 0;
      v7 += 68;
      --v8;
    }
    while ( v8 );
    v5 = *((_QWORD *)this + 8);
  }
  if ( v5 )
    v9 = *(_WORD *)(v5 + 20);
  else
    v9 = 0;
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdWarning(v5, a2, v6);
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = *((_QWORD *)this + 8);
    WdLogEvent5_WdWarning(v10);
    LODWORD(v11) = -1073741823;
    goto LABEL_69;
  }
  CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
  v12 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this);
  v11 = v12;
  if ( v12 >= 0 )
  {
    v14 = *((_QWORD *)this + 8);
    v15 = 0;
    for ( i = 0; ; ++i )
    {
      v17 = v14 ? *(_WORD *)(v14 + 20) : 0;
      if ( i >= v17 )
        break;
      v18 = 272LL * i;
      if ( *(_BYTE *)(v18 + v14 + 177) )
      {
        v19 = *(_QWORD *)(v18 + v14 + 48);
        if ( (v19 & 0x101) == 0 && (v19 & 0x20000) != 0 )
          v15 = 1;
      }
    }
    if ( !v15 )
    {
LABEL_44:
      CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
      v40 = *((_QWORD *)this + 8);
      v41 = 0;
      for ( j = *(_WORD *)(v40 + 20) != 0; j; j = v41 < *(unsigned __int16 *)(v40 + 20) )
      {
        if ( v40 && *(_WORD *)(v40 + 20) )
        {
          v43 = 0;
          v44 = 272LL * v41;
          v45 = *(_DWORD *)(v44 + v40 + 64);
          v46 = *(_DWORD *)(v44 + v40 + 68);
          while ( 1 )
          {
            v47 = 272LL * v43;
            if ( *(_DWORD *)(v47 + v40 + 64) == v45 && *(_DWORD *)(v47 + v40 + 68) == v46 )
              break;
            ++v43;
          }
          v48 = v43 == v41;
        }
        else
        {
          v48 = 0;
        }
        if ( v48 )
        {
          v49 = 272LL * v41;
          while ( 1 )
          {
            PathModalityForAdapter = BmlGetPathModalityForAdapter(
                                       *((_QWORD *)this + 8),
                                       *(_QWORD *)(*((_QWORD *)this + 8) + v49 + 64),
                                       *((_DWORD *)this + 19) & 1,
                                       *((unsigned int *)this + 20),
                                       v63);
            v11 = PathModalityForAdapter;
            if ( PathModalityForAdapter != -1071774970 )
              break;
            if ( !v15
              || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                                  this,
                                  (const struct _LUID *)(v49 + *((_QWORD *)this + 8) + 64LL))
              || v4 )
            {
              goto LABEL_63;
            }
            v4 = 1;
            WdLogNewEntry5_WdTrace(v51, v52, v53, v54);
          }
          v4 = 0;
          if ( PathModalityForAdapter >= 0 )
            goto LABEL_62;
LABEL_63:
          v55 = (_QWORD *)WdLogNewEntry5_WdError(v51);
          v55[3] = v11;
          v55[4] = *((_QWORD *)this + 8);
          v55[5] = v41;
          v55[6] = *(int *)(272LL * v41 + *((_QWORD *)this + 8) + 68);
          v55[7] = *(unsigned int *)(272LL * v41 + *((_QWORD *)this + 8) + 64);
          goto LABEL_67;
        }
LABEL_62:
        v40 = *((_QWORD *)this + 8);
        ++v41;
      }
      CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x10000000000000uLL);
      v56 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
      v11 = v56;
      if ( v56 >= 0 )
      {
        CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x20000000000000uLL);
        v57 = CCD_TOPOLOGY::AdjustDesktopLayout(this);
        v11 = v57;
        if ( v57 >= 0 )
        {
          CCD_TOPOLOGY::FillScalingIntent(this);
          CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
          LODWORD(v11) = 0;
          goto LABEL_69;
        }
      }
      goto LABEL_66;
    }
    v20 = 8;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v61, 8u, 0);
    v64 = 8;
    while ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v61, v20) >= v20 )
    {
      v25 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v61, 1, 0, 1, &v64);
      if ( v25 != -1073741789 )
        goto LABEL_27;
      v20 = v64;
    }
    v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
    v30[3] = v20;
    v30[4] = this;
    v27 = *((_QWORD *)this + 8);
    v30[5] = v27;
    v25 = -1073741801;
LABEL_27:
    if ( v25 >= 0 )
    {
      v31 = *((_QWORD *)this + 8);
      v32 = 0;
      if ( !*(_WORD *)(v31 + 20) )
      {
LABEL_43:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v61);
        goto LABEL_44;
      }
      while ( 1 )
      {
        v33 = 272LL * v32;
        Global = DXGGLOBAL::GetGlobal(v27);
        v35 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(v33 + v31 + 64), &v62);
        if ( !v35 )
          break;
        v36 = *((_QWORD *)v35 + 315);
        v37 = *((_QWORD *)v35 + 316);
        if ( *(_BYTE *)(v36 + 133) && !*(_BYTE *)(v36 + 132) )
          LOBYTE(v4) = 1;
        DXGADAPTER::ReleaseReference(v35);
        v38 = *((_QWORD *)this + 8);
        v27 = 0LL;
        v31 = v38;
        if ( *(_BYTE *)(v33 + v38 + 177) )
        {
          if ( v37 )
          {
            if ( !(_BYTE)v4 )
            {
              v39 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v33 + v38 + 48);
              v27 = *(_QWORD *)v39;
              if ( (*(_QWORD *)v39 & 0x101LL) == 0 && (v27 & 0x20000) != 0 )
              {
                CCD_TOPOLOGY::SetGivenPathDataFromActivePath((CCD_TOPOLOGY *)v27, v39, (const struct CCD_TOPOLOGY *)v61);
                v31 = *((_QWORD *)this + 8);
              }
            }
          }
        }
        ++v32;
        v4 = 0;
        if ( v32 >= *(unsigned __int16 *)(v31 + 20) )
          goto LABEL_43;
      }
    }
    else
    {
      WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
    }
    v15 = 0;
    goto LABEL_43;
  }
LABEL_66:
  v55 = (_QWORD *)WdLogNewEntry5_WdError(v13);
  v55[3] = *((_QWORD *)this + 8);
  v55[4] = v11;
LABEL_67:
  WdLogEvent5_WdError(v55);
LABEL_69:
  CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1685::__AUTO_USING_PM_PathChangeReason1685(&v59);
  return (unsigned int)v11;
}

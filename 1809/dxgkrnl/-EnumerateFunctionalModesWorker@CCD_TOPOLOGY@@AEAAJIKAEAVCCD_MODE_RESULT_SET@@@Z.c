/*
 * XREFs of ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02881E8
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1C0238CF0 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1685::__AUTO_USING_PM_PathChangeReason1685 @ 0x1C00AEE80 (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1685--__AUTO.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00BBECC (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00C64CC (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00C93FC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00CA51C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00CA594 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00CC774 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C0288D58 (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C0288E08 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C0289078 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C0289460 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 */

__int64 __fastcall CCD_TOPOLOGY::EnumerateFunctionalModesWorker(
        CCD_TOPOLOGY **this,
        int a2,
        unsigned int a3,
        struct CCD_MODE_RESULT_SET *a4)
{
  PVOID v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // r8
  CCD_TOPOLOGY *v11; // rcx
  __int64 v12; // rdx
  _DWORD *v13; // rax
  __int64 v14; // rcx
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  CCD_TOPOLOGY *v21; // rdx
  int v22; // esi
  unsigned int i; // ecx
  unsigned __int16 v24; // ax
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned __int16 v27; // di
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rdx
  CCD_TOPOLOGY *v36; // rcx
  _QWORD *v37; // rax
  unsigned int j; // r14d
  CCD_TOPOLOGY *v39; // rdi
  unsigned __int16 v40; // ax
  __int64 v41; // r15
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r12
  char v46; // di
  CCD_TOPOLOGY *v47; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v48; // rdx
  CCD_TOPOLOGY *v49; // r12
  int v50; // r14d
  __int64 v51; // r13
  __int64 v52; // r15
  int PathModeListForAdapter; // eax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int16 v58; // [rsp+38h] [rbp-59h] BYREF
  __int64 v59; // [rsp+40h] [rbp-51h] BYREF
  int v60; // [rsp+48h] [rbp-49h]
  unsigned __int64 v61; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v62[144]; // [rsp+58h] [rbp-39h] BYREF

  v6 = operator new[](0x2580uLL, 0x4B677844u, PagedPool);
  if ( v6 )
  {
    memset(v6, 0, 0x2580uLL);
    CCD_TOPOLOGY::SwapPathsDescriptors((CCD_TOPOLOGY *)this, a3, *((unsigned __int16 *)this[8] + 10) - 1);
    v11 = this[8];
    v12 = *((unsigned __int16 *)v11 + 10);
    v59 = (__int64)v11 + 48;
    v60 = v12;
    if ( (_DWORD)v12 )
    {
      v13 = (_DWORD *)((char *)v11 + 280);
      v14 = (unsigned int)v12;
      do
      {
        *v13 |= 1u;
        v13[1] = 0;
        v13 += 68;
        --v14;
      }
      while ( v14 );
      v11 = this[8];
    }
    if ( v11 )
      v15 = *((_WORD *)v11 + 10);
    else
      v15 = 0;
    if ( v15 )
    {
      CCD_TOPOLOGY::ValidateIncomingPathModalityFlags((CCD_TOPOLOGY *)this);
      v18 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath((CCD_TOPOLOGY *)this);
      v17 = v18;
      if ( v18 >= 0 )
      {
        v21 = this[8];
        v22 = 0;
        for ( i = 0; ; ++i )
        {
          v24 = v21 ? *((_WORD *)v21 + 10) : 0;
          if ( i >= (unsigned int)v24 - 1 )
            break;
          v25 = 272LL * i;
          if ( *((_BYTE *)v21 + v25 + 177) )
          {
            v26 = *(_QWORD *)((char *)v21 + v25 + 48);
            if ( (v26 & 0x101) == 0 && (v26 & 0x20000) != 0 )
              v22 = 1;
          }
        }
        if ( v22 )
        {
          v27 = 8;
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v62, 8u, 0);
          v58 = 8;
          while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v62, v27, v28, v29) >= v27 )
          {
            v34 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v62, 1, 0, 1, &v58);
            if ( v34 != -1073741789 )
              goto LABEL_30;
            v27 = v58;
          }
          v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v31, v30, v32, v33);
          v37[3] = v27;
          v37[4] = this;
          v36 = this[8];
          v37[5] = v36;
          v34 = -1073741801;
LABEL_30:
          if ( v34 >= 0 )
          {
            for ( j = 0; ; ++j )
            {
              v39 = this[8];
              v40 = v39 ? *((_WORD *)v39 + 10) : 0;
              if ( j >= (unsigned int)v40 - 1 )
                break;
              v41 = 272LL * j;
              Global = DXGGLOBAL::GetGlobal((__int64)v36);
              v43 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)v39 + v41 + 64), &v61);
              if ( !v43 )
                goto LABEL_48;
              v44 = *((_QWORD *)v43 + 315);
              v45 = *((_QWORD *)v43 + 316);
              if ( !*(_BYTE *)(v44 + 133) || (v46 = 1, *(_BYTE *)(v44 + 132)) )
                v46 = 0;
              DXGADAPTER::ReleaseReference(v43);
              v47 = this[8];
              if ( *((_BYTE *)v47 + v41 + 177) )
              {
                if ( v45 )
                {
                  if ( !v46 )
                  {
                    v48 = (CCD_TOPOLOGY *)((char *)v47 + v41 + 48);
                    if ( (*(_QWORD *)v48 & 0x101LL) == 0 && (*(_QWORD *)v48 & 0x20000LL) != 0 )
                      CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v36, v48, (const struct CCD_TOPOLOGY *)v62);
                  }
                }
              }
            }
          }
          else
          {
            WdLogNewEntry5_WdTrace(v36, v35, v28, v29);
LABEL_48:
            v22 = 0;
          }
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v62);
        }
        CCD_TOPOLOGY::LogFunctionalizePacket((CCD_TOPOLOGY *)this, 1);
        v49 = this[8];
        v50 = 0;
        v51 = 272LL * *((unsigned __int16 *)v49 + 10);
        v52 = (__int64)v49 + v51;
        while ( 1 )
        {
          PathModeListForAdapter = BmlGetPathModeListForAdapter(
                                     this[8],
                                     *(_QWORD *)(v52 - 208),
                                     *((_DWORD *)this + 19) & 1,
                                     *((unsigned int *)this + 20),
                                     a2,
                                     a4);
          v17 = PathModeListForAdapter;
          if ( PathModeListForAdapter != -1071774970 )
            break;
          if ( !v22
            || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                                (CCD_TOPOLOGY *)this,
                                (const struct _LUID *)(v52 - 208))
            || v50 )
          {
            goto LABEL_57;
          }
          v50 = 1;
          WdLogNewEntry5_WdTrace(v54, v55, v56, v57);
        }
        if ( PathModeListForAdapter < 0 )
        {
LABEL_57:
          v20 = (_QWORD *)WdLogNewEntry5_WdError(v54);
          v20[3] = v17;
          v20[4] = this[8];
          v20[5] = *((unsigned __int16 *)this[8] + 10) - 1LL;
          v20[6] = *(int *)((char *)v49 + v51 - 204);
          v20[7] = *(unsigned int *)(v52 - 208);
          goto LABEL_58;
        }
        CCD_TOPOLOGY::LogFunctionalizePacket((CCD_TOPOLOGY *)this, 0);
      }
      else
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v20[3] = this[8];
        v20[4] = v17;
LABEL_58:
        WdLogEvent5_WdError(v20);
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdWarning(v11, v12, v10);
      *(_QWORD *)(v16 + 24) = this;
      *(_QWORD *)(v16 + 32) = this[8];
      WdLogEvent5_WdWarning(v16);
      LODWORD(v17) = -1073741823;
    }
    CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1685::__AUTO_USING_PM_PathChangeReason1685(&v59);
    return (unsigned int)v17;
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v8 + 24) = 1676LL;
    WdLogEvent5_WdLowResource(v8);
    return 3221225495LL;
  }
}

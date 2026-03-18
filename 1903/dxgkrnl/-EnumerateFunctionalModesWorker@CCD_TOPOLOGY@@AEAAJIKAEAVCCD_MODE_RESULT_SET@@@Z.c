/*
 * XREFs of ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02C0560
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1C026D620 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D0968 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00D09F0 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1685::__AUTO_USING_PM_PathChangeReason1685 @ 0x1C00D0FFC (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1685--__AUTO.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00D3B20 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D6BA8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00D7BAC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DA7CC (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DA844 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C02C10C8 (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C02C1178 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C02C13E8 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02C17D0 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 */

__int64 __fastcall CCD_TOPOLOGY::EnumerateFunctionalModesWorker(
        CCD_TOPOLOGY **this,
        int a2,
        unsigned int a3,
        struct CCD_MODE_RESULT_SET *a4)
{
  PVOID v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v13; // r8
  CCD_TOPOLOGY *v14; // rcx
  __int64 v15; // rdx
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  CCD_TOPOLOGY *v27; // rdx
  int v28; // esi
  unsigned int i; // ecx
  unsigned __int16 v30; // ax
  __int64 v31; // rax
  unsigned __int16 v32; // di
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v36; // rdx
  CCD_TOPOLOGY *v37; // rcx
  _QWORD *v38; // rax
  unsigned int j; // edi
  CCD_TOPOLOGY *v40; // r14
  unsigned __int16 v41; // ax
  __int64 v42; // r15
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r12
  char v47; // r14
  CCD_TOPOLOGY *v48; // rax
  CCD_TOPOLOGY *v49; // r12
  int v50; // r14d
  __int64 v51; // r13
  __int64 v52; // r15
  int PathModeListForAdapter; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned __int16 v57; // [rsp+38h] [rbp-59h] BYREF
  __int64 v58; // [rsp+40h] [rbp-51h] BYREF
  int v59; // [rsp+48h] [rbp-49h]
  unsigned __int64 v60; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v61[144]; // [rsp+58h] [rbp-39h] BYREF

  v6 = operator new[](0x2580uLL, 0x4B677844u, PagedPool);
  if ( v6 )
  {
    memset(v6, 0, 0x2580uLL);
    CCD_TOPOLOGY::SwapPathsDescriptors((CCD_TOPOLOGY *)this, a3, *((unsigned __int16 *)this[8] + 10) - 1);
    v14 = this[8];
    v15 = *((unsigned __int16 *)v14 + 10);
    v58 = (__int64)v14 + 48;
    v59 = v15;
    if ( (_DWORD)v15 )
    {
      v16 = (_DWORD *)((char *)v14 + 280);
      v17 = (unsigned int)v15;
      do
      {
        *v16 |= 1u;
        v16[1] = 0;
        v16 += 68;
        --v17;
      }
      while ( v17 );
      v14 = this[8];
    }
    if ( v14 )
      v18 = *((_WORD *)v14 + 10);
    else
      v18 = 0;
    if ( v18 )
    {
      CCD_TOPOLOGY::ValidateIncomingPathModalityFlags((CCD_TOPOLOGY *)this);
      v22 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath((CCD_TOPOLOGY *)this, v21);
      v20 = v22;
      if ( v22 >= 0 )
      {
        v27 = this[8];
        v28 = 0;
        for ( i = 0; ; ++i )
        {
          v30 = v27 ? *((_WORD *)v27 + 10) : 0;
          if ( i >= (unsigned int)v30 - 1 )
            break;
          v31 = 272LL * i;
          if ( *((_BYTE *)v27 + v31 + 177) )
          {
            if ( (*(_DWORD *)((_BYTE *)v27 + v31 + 48) & 0x20101) == 0x20000LL )
              v28 = 1;
          }
        }
        if ( v28 )
        {
          v32 = 8;
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v61, 8u, 0);
          v57 = 8;
          while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v61, v32) >= v32 )
          {
            v35 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v61, 1, 0, 1, &v57);
            if ( v35 != -1073741789 )
              goto LABEL_29;
            v32 = v57;
          }
          v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v34, v33);
          v38[3] = v32;
          v38[4] = this;
          v37 = this[8];
          v38[5] = v37;
          v35 = -1073741801;
LABEL_29:
          if ( v35 >= 0 )
          {
            for ( j = 0; ; ++j )
            {
              v40 = this[8];
              v41 = v40 ? *((_WORD *)v40 + 10) : 0;
              if ( j >= (unsigned int)v41 - 1 )
                break;
              v42 = 272LL * j;
              Global = DXGGLOBAL::GetGlobal((__int64)v37, (__int64)v36);
              v44 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)v40 + v42 + 64), &v60);
              if ( !v44 )
                goto LABEL_46;
              v45 = *((_QWORD *)v44 + 319);
              v46 = *((_QWORD *)v44 + 320);
              if ( !*(_BYTE *)(v45 + 234) || (v47 = 1, *(_BYTE *)(v45 + 233)) )
                v47 = 0;
              DXGADAPTER::ReleaseReferenceNoTracking(v44);
              v48 = this[8];
              if ( *((_BYTE *)v48 + v42 + 177) )
              {
                if ( v46 )
                {
                  if ( !v47 )
                  {
                    v36 = (CCD_TOPOLOGY *)((char *)v48 + v42 + 48);
                    if ( (*(_DWORD *)v36 & 0x20101) == 0x20000LL )
                      CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v37, v36, (const struct CCD_TOPOLOGY *)v61);
                  }
                }
              }
            }
          }
          else
          {
            WdLogNewEntry5_WdTrace(v37, v36);
LABEL_46:
            v28 = 0;
          }
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v61);
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
          v20 = PathModeListForAdapter;
          if ( PathModeListForAdapter != -1071774970 )
            break;
          if ( !v28
            || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                                (CCD_TOPOLOGY *)this,
                                (const struct _LUID *)(v52 - 208))
            || v50 )
          {
            goto LABEL_55;
          }
          v50 = 1;
          WdLogNewEntry5_WdTrace(v55, v54);
        }
        if ( PathModeListForAdapter < 0 )
        {
LABEL_55:
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v55, v54, v56);
          v26[3] = v20;
          v26[4] = this[8];
          v26[5] = *((unsigned __int16 *)this[8] + 10) - 1LL;
          v26[6] = *(int *)((char *)v49 + v51 - 204);
          v26[7] = *(unsigned int *)(v52 - 208);
          goto LABEL_56;
        }
        CCD_TOPOLOGY::LogFunctionalizePacket((CCD_TOPOLOGY *)this, 0);
      }
      else
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23, v25);
        v26[3] = this[8];
        v26[4] = v20;
LABEL_56:
        WdLogEvent5_WdError(v26);
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdWarning(v14, v15, v13);
      *(_QWORD *)(v19 + 24) = this;
      *(_QWORD *)(v19 + 32) = this[8];
      WdLogEvent5_WdWarning(v19);
      LODWORD(v20) = -1073741823;
    }
    CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1685::__AUTO_USING_PM_PathChangeReason1685(&v58);
    return (unsigned int)v20;
  }
  else
  {
    v11 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = 1676LL;
    WdLogEvent5_WdLowResource(v11);
    return 3221225495LL;
  }
}

/*
 * XREFs of ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C00C47B0
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00CCA90 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00C9660 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E3588 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E4244 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E43B0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C012CC00 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0131E20 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C014B824 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmDisableAllFailurePathsOnAdapter(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  struct VIDPN_MGR *v11; // r15
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  _QWORD *v17; // rax
  unsigned int v18; // esi
  struct DMMVIDPN *v19; // rbx
  DMMVIDPNTOPOLOGY *v20; // r13
  int NumPathsFromSource; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  ADAPTER_DISPLAY *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rsi
  __int64 v35; // rax
  unsigned int v36; // esi
  ADAPTER_DISPLAY *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  char v44[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct DMMVIDPN *v45; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v48[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v49[256]; // [rsp+90h] [rbp-70h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a4 && (*(_DWORD *)(a4 + 328) != 2 || *(_QWORD *)(a4 + 1728) != a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(struct VIDPN_MGR **)(*(_QWORD *)(a1 + 2552) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v47, (__int64)v11);
  v45 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v11);
  v16 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
    v17[3] = *(int *)(a1 + 280);
    v17[4] = *(unsigned int *)(a1 + 276);
    v17[5] = v16;
    WdLogEvent5_WdError(v17);
    goto LABEL_34;
  }
  v18 = 0;
  v19 = v45;
  v20 = (struct DMMVIDPN *)((char *)v45 + 96);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 2552) + 80LL) )
  {
    while ( 1 )
    {
      if ( _bittest(&a2, v18) )
      {
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v20, v18, &v46);
        if ( NumPathsFromSource >= 0 )
          goto LABEL_15;
        if ( NumPathsFromSource != -1071774919 || v46 )
          break;
      }
LABEL_20:
      if ( ++v18 >= *(_DWORD *)(*(_QWORD *)(a1 + 2552) + 80LL) )
      {
        v19 = v45;
        goto LABEL_22;
      }
    }
    v25 = WdLogNewEntry5_WdAssertion(v23, v22);
    WdLogEvent5_WdAssertion(v25);
LABEL_15:
    if ( v46 )
    {
      LOBYTE(v24) = 2;
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        v48,
        ((unsigned __int64)v45 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v45 + 96) != 0LL),
        v24);
      v26 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v20, v18);
      v28 = v26 + 0x80000000;
      if ( (v28 & 0x80000000) == 0 && v26 != -1071774919 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v28, v27);
        WdLogEvent5_WdAssertion(v29);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v48);
    }
    goto LABEL_20;
  }
LABEL_22:
  memset(v49, 0, 0xFCuLL);
  v44[0] = 0;
  v30 = VIDPN_MGR::SetTimingsFromVidPn(v11, 0LL, 1LL, v19, v49, v44, 0, a4, 0LL);
  v34 = v30;
  if ( v30 < 0 )
  {
    v35 = WdLogNewEntry5_WdError(v32, v31, v33);
    *(_QWORD *)(v35 + 24) = v19;
    *(_QWORD *)(v35 + 32) = v34;
    WdLogEvent5_WdError(v35);
    v32 = *(ADAPTER_DISPLAY **)(a1 + 2552);
    v36 = 0;
    if ( *((_DWORD *)v32 + 20) )
    {
      do
      {
        v37 = v32;
        if ( _bittest(&a2, v36) )
        {
          ADAPTER_DISPLAY::SetVidPnSourceActive(v32, v36, 0, 0, 0);
          v37 = *(ADAPTER_DISPLAY **)(a1 + 2552);
        }
        ++v36;
        v32 = v37;
      }
      while ( v36 < *((_DWORD *)v37 + 20) );
    }
  }
  if ( (v44[0] & 1) != 0 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v32, v31);
    WdLogEvent5_WdAssertion(v38);
  }
  if ( (v44[0] & 2) != 0 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v32, v31);
    WdLogEvent5_WdAssertion(v39);
  }
  if ( (int)VIDPN_MGR::CacheLastClientCommittedVidPnRef(v11, v19) < 0 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v41, v40);
    WdLogEvent5_WdAssertion(v42);
  }
  LODWORD(v16) = 0;
LABEL_34:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v45, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v47 + 40));
  return (unsigned int)v16;
}

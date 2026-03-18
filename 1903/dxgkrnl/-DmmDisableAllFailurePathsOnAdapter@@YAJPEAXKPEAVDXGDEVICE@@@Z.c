/*
 * XREFs of ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C02BA210
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00CC5E0 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004418 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00C8950 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E2F48 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E3C04 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E3D70 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01253E8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0127FCC (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C012E2A8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C0147B10 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmDisableAllFailurePathsOnAdapter(PERESOURCE *a1, int a2, struct DXGDEVICE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  struct VIDPN_MGR *Address; // r15
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  _QWORD *v16; // rax
  unsigned int v17; // esi
  char *v18; // rbx
  unsigned __int64 *v19; // r13
  int NumPathsFromSource; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int8 v23; // r9
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  PERESOURCE v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rsi
  __int64 v34; // rax
  unsigned int v35; // esi
  PERESOURCE v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v43; // [rsp+20h] [rbp-E0h]
  int v44; // [rsp+50h] [rbp-B0h] BYREF
  struct DMMVIDPN *v45; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v48[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v49[256]; // [rsp+90h] [rbp-70h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a3 && (*((_DWORD *)a3 + 82) != 2 || *((PERESOURCE **)a3 + 216) != a1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v9);
  }
  Address = (struct VIDPN_MGR *)a1[319]->Address;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v47, (__int64)Address);
  v45 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                             Address,
                                             (__int64 *)&v45);
  v15 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v16[3] = *((int *)a1 + 70);
    v16[4] = *((unsigned int *)a1 + 69);
    v16[5] = v15;
    WdLogEvent5_WdError(v16);
    goto LABEL_34;
  }
  v17 = 0;
  v18 = (char *)v45;
  v19 = (unsigned __int64 *)((char *)v45 + 96);
  if ( LODWORD(a1[319]->Reserved2) )
  {
    while ( 1 )
    {
      if ( _bittest(&a2, v17) )
      {
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)v19, v17, &v46);
        if ( NumPathsFromSource >= 0 )
          goto LABEL_15;
        if ( NumPathsFromSource != -1071774919 || v46 )
          break;
      }
LABEL_20:
      if ( ++v17 >= LODWORD(a1[319]->Reserved2) )
      {
        v18 = (char *)v45;
        goto LABEL_22;
      }
    }
    v24 = WdLogNewEntry5_WdAssertion(v22, v21);
    WdLogEvent5_WdAssertion(v24);
LABEL_15:
    if ( v46 )
    {
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v48,
        (unsigned __int64)(v19 + 7) & -(__int64)(v19 != 0LL),
        2u,
        v23,
        v43,
        v19[5]);
      v25 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((char **)v19, v17);
      v27 = v25 + 0x80000000;
      if ( (v27 & 0x80000000) == 0 && v25 != -1071774919 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v27, v26);
        WdLogEvent5_WdAssertion(v28);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v48, v26);
    }
    goto LABEL_20;
  }
LABEL_22:
  memset(v49, 0, 0xFCuLL);
  LOBYTE(v44) = 0;
  v29 = VIDPN_MGR::SetTimingsFromVidPn(Address, 0LL, 2u, v18, (struct D3DKMT_VIDPN_SOURCE_MASKS *)v49, &v44, 0, a3, 0LL);
  v33 = v29;
  if ( v29 < 0 )
  {
    v34 = WdLogNewEntry5_WdError(v31, v30, v32);
    *(_QWORD *)(v34 + 24) = v18;
    *(_QWORD *)(v34 + 32) = v33;
    WdLogEvent5_WdError(v34);
    v31 = a1[319];
    v35 = 0;
    if ( LODWORD(v31->Reserved2) )
    {
      do
      {
        v36 = v31;
        if ( _bittest(&a2, v35) )
        {
          ADAPTER_DISPLAY::SetVidPnSourceActive((PERESOURCE **)v31, v35, 0, 0, 0);
          v36 = a1[319];
        }
        ++v35;
        v31 = v36;
      }
      while ( v35 < LODWORD(v36->Reserved2) );
    }
  }
  if ( (v44 & 1) != 0 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v31, v30);
    WdLogEvent5_WdAssertion(v37);
  }
  if ( (v44 & 2) != 0 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v31, v30);
    WdLogEvent5_WdAssertion(v38);
  }
  if ( (int)VIDPN_MGR::CacheLastClientCommittedVidPnRef(Address, (struct DMMVIDPN *const)v18) < 0 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v40, v39);
    WdLogEvent5_WdAssertion(v41);
  }
  LODWORD(v15) = 0;
LABEL_34:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v45, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v47 + 40));
  return (unsigned int)v15;
}

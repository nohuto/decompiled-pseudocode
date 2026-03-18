/*
 * XREFs of ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E0048
 * Callers:
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DFAE8 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00E30A0 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0131300 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0131E20 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C014EE20 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02B4EC8 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02B6544 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C02BE6D0 (-RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z.c)
 * Callees:
 *     ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEBAAEBTModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x1C00041B8 (--A-$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEBAAEBTModifyingActionConstrai.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ @ 0x1C0004488 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0005530 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C00055DC (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C0005868 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00058C0 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C0005964 (-FindByValue@-$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00059C0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ @ 0x1C0009AE8 (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C012CC00 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::RemovePath(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned int a3,
        struct DMMVIDPNPRESENTPATH **a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DMMVIDPNPRESENTPATH *Path; // r14
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  int *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  DMMVIDPNSOURCE *v24; // r10
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  v6 = a2;
  if ( a4 )
    *a4 = 0LL;
  if ( !ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 2u) )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
LABEL_21:
    v26[3] = this;
    WdLogEvent5_WdError(v26);
    return 3221225506LL;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(this, v6, v4);
  if ( Path )
  {
    if ( *((_BYTE *)this + 76) <= 2u )
    {
      v28 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v28);
    }
    if ( (*(_BYTE *)Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[]((__int64)this + 80, 2uLL) & 1) != 0 )
    {
      v36 = 0LL;
      if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v6, &v36) < 0 || (v32 = v36) == 0 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v30, v29);
        WdLogEvent5_WdAssertion(v33);
        v32 = v36;
      }
      if ( v32 < 2 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29, v31);
        v26[4] = v6;
        v26[5] = v4;
        goto LABEL_21;
      }
    }
    v15 = Set<DMMVIDPNPRESENTPATH>::FindByValue((__int64)this, (__int64)Path);
    if ( DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::ContainsByReference(
           (__int64)this + 8,
           (__int64)v15) )
    {
      v18 = v15 + 1;
      v19 = v15[1];
      if ( *(_QWORD **)(v19 + 8) != v15 + 1 || (v20 = (_QWORD *)v15[2], (_QWORD *)*v20 != v18) )
        __fastfail(3u);
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      *v18 = 0LL;
      v15[2] = 0LL;
      --*((_QWORD *)this + 5);
    }
    else
    {
      v15 = 0LL;
      v34 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v34);
    }
    *((_DWORD *)this + 49) &= ~(1 << (*((_DWORD *)v15 + 26) - 1));
    v21 = (int *)v15[12];
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(this, v21[6]) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v23, v22);
      WdLogEvent5_WdAssertion(v35);
    }
    DMMVIDPNTARGET::_SetEmptyCofuncModeSet((DMMVIDPNTARGET *)v21);
    if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(this, *(_DWORD *)(v15[11] + 24LL)) )
      DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(v24);
    if ( a4 )
      *a4 = (struct DMMVIDPNPRESENTPATH *)v15;
    else
      (*(void (__fastcall **)(_QWORD *, __int64))*v15)(v15, 1LL);
    ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 2u);
    return 0LL;
  }
  else
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
    v27[3] = v6;
    v27[4] = v4;
    v27[5] = this;
    WdLogEvent5_WdError(v27);
    return 3223192359LL;
  }
}

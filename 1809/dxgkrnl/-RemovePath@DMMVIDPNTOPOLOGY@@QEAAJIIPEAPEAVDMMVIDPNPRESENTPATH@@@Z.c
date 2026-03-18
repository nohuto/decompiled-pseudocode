/*
 * XREFs of ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BD85C
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B883C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00BB0F4 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00BDB48 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00C0814 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C013A7B0 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C027C6A8 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C027E0F0 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C02862A0 (-RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002EE0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003814 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z @ 0x1C00038D4 (-FindByValue@-$Set@VDMMVIDPNPRESENTPATH@@@@QEBAPEAVDMMVIDPNPRESENTPATH@@QEBV2@@Z.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ @ 0x1C0003D00 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003EF0 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEBAAEBTModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x1C0003F28 (--A-$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEBAAEBTModifyingActionConstrai.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ @ 0x1C000B71C (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C000F90C (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C000FA24 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00D4444 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::RemovePath(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned int a3,
        struct DMMVIDPNPRESENTPATH **a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  int *v16; // rbp
  __int64 v17; // rcx
  DMMVIDPNSOURCE *v18; // r10
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  v6 = a2;
  if ( a4 )
    *a4 = 0LL;
  if ( !ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 2u) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v8);
LABEL_21:
    v20[3] = this;
    WdLogEvent5_WdError(v20);
    return 3221225506LL;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(this, v6, v4);
  if ( Path )
  {
    if ( *((_BYTE *)this + 76) <= 2u )
    {
      v22 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v22);
    }
    if ( (*(_BYTE *)Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[]((__int64)this + 80, 2uLL) & 1) != 0 )
    {
      v28 = 0LL;
      if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v6, &v28) < 0 || (v24 = v28) == 0 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v25);
        v24 = v28;
      }
      if ( v24 < 2 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        v20[4] = v6;
        v20[5] = v4;
        goto LABEL_21;
      }
    }
    v11 = Set<DMMVIDPNPRESENTPATH>::FindByValue((__int64)this, (__int64)Path);
    if ( DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::ContainsByReference(
           (__int64)this + 8,
           (__int64)v11) )
    {
      v13 = v11 + 1;
      v14 = v11[1];
      if ( *(_QWORD **)(v14 + 8) != v11 + 1 || (v15 = (_QWORD *)v11[2], (_QWORD *)*v15 != v13) )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      *v13 = 0LL;
      v11[2] = 0LL;
      --*((_QWORD *)this + 5);
    }
    else
    {
      v11 = 0LL;
      v26 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v26);
    }
    *((_DWORD *)this + 49) &= ~(1 << (*((_DWORD *)v11 + 26) - 1));
    v16 = (int *)v11[12];
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(this, v16[6]) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v17);
      WdLogEvent5_WdAssertion(v27);
    }
    DMMVIDPNTARGET::_SetEmptyCofuncModeSet((DMMVIDPNTARGET *)v16);
    if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(this, *(_DWORD *)(v11[11] + 24LL)) )
      DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(v18);
    if ( a4 )
      *a4 = (struct DMMVIDPNPRESENTPATH *)v11;
    else
      (*(void (__fastcall **)(_QWORD *, __int64))*v11)(v11, 1LL);
    ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 2u);
    return 0LL;
  }
  else
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v21[3] = v6;
    v21[4] = v4;
    v21[5] = this;
    WdLogEvent5_WdError(v21);
    return 3223192359LL;
  }
}

/*
 * XREFs of ?DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x1C00D0408
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF408 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005C3C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall DmmGetTargetLinkTrainingStatus(PERESOURCE *a1, unsigned int a2, enum _DXGK_CONNECTION_STATUS *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 Address; // rbx
  __int64 v8; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v13);
  }
  Address = (__int64)a1[315]->Address;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v15, Address);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(Address + 80) + 72LL));
  v8 = *(_QWORD *)(Address + 80);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v8, v4);
  if ( TargetById )
  {
    v11 = 0;
    *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)TargetById + 65) + 24LL);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = v4;
    WdLogEvent5_WdError(v14);
    v11 = -1073741811;
  }
  if ( v8 )
    ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v15 + 40));
  return v11;
}

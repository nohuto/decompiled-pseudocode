/*
 * XREFs of ?DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x1C00CF9A8
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF18C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00DACA4 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 */

__int64 __fastcall DmmGetTargetLinkTrainingStatus(PERESOURCE *a1, unsigned int a2, enum _DXGK_CONNECTION_STATUS *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 Address; // rbx
  __int64 v9; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // edi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v18);
  }
  Address = (__int64)a1[319]->Address;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, Address);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(Address + 80) + 72LL));
  v9 = *(_QWORD *)(Address + 80);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v9, v4);
  if ( TargetById )
  {
    *(_DWORD *)a3 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(TargetById, 0LL);
    v16 = 0;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v19 + 24) = v4;
    WdLogEvent5_WdError(v19);
    v16 = -1073741811;
  }
  if ( v9 )
    ReferenceCounted::Release((ReferenceCounted *)(v9 + 64), v14, v15);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v20 + 40));
  return v16;
}

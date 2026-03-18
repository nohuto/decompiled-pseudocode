/*
 * XREFs of ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C0281FAC
 * Callers:
 *     DpiFdoHandleTargetConnectionState @ 0x1C0265BE4 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C001A5CC (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C028310C (-BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONN.c)
 */

__int64 __fastcall DmmBuildDynamicVideoPresentTargetChildRelations(
        PERESOURCE *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 Address; // rbx
  __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF
  DMMVIDEOPRESENTTARGETSET *v14; // [rsp+50h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  Address = (__int64)a1[315]->Address;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v13, Address);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(Address + 80) + 72LL));
  v14 = *(DMMVIDEOPRESENTTARGETSET **)(Address + 80);
  LODWORD(Address) = DMMVIDEOPRESENTTARGETSET::BuildDynamicVideoPresentTargetChildRelations(v14, a2, a3, a4, a5);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)&v14, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13[0] + 40));
  return (unsigned int)Address;
}

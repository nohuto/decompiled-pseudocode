/*
 * XREFs of ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02BA4B8
 * Callers:
 *     DpiFdoHandleTargetConnectionState @ 0x1C02A1890 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C001B780 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02BB788 (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 */

__int64 __fastcall DmmCreateDynamicVideoPresentTarget(
        PERESOURCE *a1,
        unsigned int a2,
        unsigned int a3,
        struct _DXGK_CHILD_CAPABILITIES *a4,
        char a5,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 Address; // rbx
  __int64 v14; // r8
  __int64 v16[3]; // [rsp+30h] [rbp-18h] BYREF
  DMMVIDEOPRESENTTARGETSET *v17; // [rsp+50h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v12);
  }
  Address = (__int64)a1[319]->Address;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v16, Address);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(Address + 80) + 72LL));
  v17 = *(DMMVIDEOPRESENTTARGETSET **)(Address + 80);
  LODWORD(Address) = DMMVIDEOPRESENTTARGETSET::CreateDynamicVideoPresentTarget(v17, a2, a3, a4, a5, a6);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)&v17, 0LL, v14);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v16[0] + 40));
  return (unsigned int)Address;
}

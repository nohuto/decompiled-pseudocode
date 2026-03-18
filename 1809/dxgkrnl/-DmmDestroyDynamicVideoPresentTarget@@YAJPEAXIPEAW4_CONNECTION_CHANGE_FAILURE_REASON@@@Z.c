/*
 * XREFs of ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C028212C
 * Callers:
 *     DpiFdoHandleTargetConnectionState @ 0x1C0265BE4 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C001A5CC (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02838B0 (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 */

__int64 __fastcall DmmDestroyDynamicVideoPresentTarget(
        PERESOURCE *a1,
        unsigned int a2,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 Address; // rbx
  DMMVIDEOPRESENTTARGETSET *v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  Address = (__int64)a1[315]->Address;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v11, Address);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(Address + 80) + 72LL));
  v10 = *(DMMVIDEOPRESENTTARGETSET **)(Address + 80);
  LODWORD(Address) = DMMVIDEOPRESENTTARGETSET::DestroyDynamicVideoPresentTarget(v10, a2, a3);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)&v10, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v11 + 40));
  return (unsigned int)Address;
}

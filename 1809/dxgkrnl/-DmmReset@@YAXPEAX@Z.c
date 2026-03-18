/*
 * XREFs of ?DmmReset@@YAXPEAX@Z @ 0x1C027CBD4
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01C4BF4 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00040D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Reset@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C0283C40 (-Reset@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall DmmReset(DXGADAPTER *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rax
  DMMVIDEOPRESENTTARGET *NextTarget; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 315) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v7, v4);
  v5 = (_QWORD *)(*(_QWORD *)(v4 + 80) + 24LL);
  if ( (_QWORD *)*v5 != v5 )
  {
    NextTarget = (DMMVIDEOPRESENTTARGET *)(*v5 - 8LL);
    if ( *v5 != 8LL )
    {
      do
      {
        DMMVIDEOPRESENTTARGET::Reset(NextTarget);
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(*(DMMVIDEOPRESENTTARGETSET **)(v4 + 80), NextTarget);
      }
      while ( NextTarget );
    }
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v7 + 40));
}

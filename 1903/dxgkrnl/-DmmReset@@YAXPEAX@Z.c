/*
 * XREFs of ?DmmReset@@YAXPEAX@Z @ 0x1C02B4FE0
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01F3AF8 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0003D00 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C014BF10 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall DmmReset(DXGADAPTER *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rax
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3, v2);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 319) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v8, v5);
  v6 = (_QWORD *)(*(_QWORD *)(v5 + 80) + 24LL);
  if ( (_QWORD *)*v6 != v6 )
  {
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v6 - 8LL);
    if ( *v6 != 8LL )
    {
      do
      {
        DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(NextTarget);
        *(_BYTE *)(*((_QWORD *)NextTarget + 67) + 168LL) = 13;
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(*(DMMVIDEOPRESENTTARGETSET **)(v5 + 80), NextTarget);
      }
      while ( NextTarget );
    }
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v8 + 40));
}

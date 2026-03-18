/*
 * XREFs of ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C0149D24
 * Callers:
 *     _lambda_253e1404844a8379d0c8ce26edd6c7ad_::_lambda_invoker_cdecl_ @ 0x1C001B7E0 (_lambda_253e1404844a8379d0c8ce26edd6c7ad_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0003D00 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C001B730 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEBAJPEAPEAVDXGDISPLAYMANAGEROBJECT@@@Z @ 0x1C0149DDC (-ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEBAJPEAPEAVDXGDISPLAYMANAGEROBJECT@@@Z.c)
 *     ?ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C028D0A8 (-ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?ExchangeDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJPEAVDXGDISPLAYMANAGEROBJECT@@0@Z @ 0x1C02BBCA4 (-ExchangeDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJPEAVDXGDISPLAYMANAGEROBJECT@@0@Z.c)
 */

__int64 __fastcall DmmClearDisplayManagerReferencesForAdapter(const struct DXGADAPTER *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  DMMVIDEOPRESENTTARGETSET *v4; // rbx
  unsigned int *NextTarget; // rdi
  _QWORD *v6; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbp
  __int64 v18; // rax
  struct DXGDISPLAYMANAGEROBJECT *v19; // [rsp+40h] [rbp+8h] BYREF
  DMMVIDEOPRESENTTARGETSET *v20; // [rsp+48h] [rbp+10h] BYREF
  __int64 v21; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 319) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v21, v2);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v2 + 80) + 72LL));
  v4 = *(DMMVIDEOPRESENTTARGETSET **)(v2 + 80);
  NextTarget = 0LL;
  v20 = v4;
  v6 = (_QWORD *)*((_QWORD *)v4 + 3);
  if ( v6 != (_QWORD *)((char *)v4 + 24) )
    NextTarget = (unsigned int *)(v6 - 1);
  for ( ;
        NextTarget;
        NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                       v4,
                                       (const struct DMMVIDEOPRESENTTARGET *const)NextTarget) )
  {
    v19 = 0LL;
    if ( (int)DMMVIDEOPRESENTTARGET::ReferenceDisplayManagerObject((DMMVIDEOPRESENTTARGET *)NextTarget, &v19) >= 0
      && v19 )
    {
      v8 = DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnershipNoDmm(v19, *(struct _LUID *)((char *)a1 + 276), NextTarget[6]);
      v11 = v8;
      if ( v8 < 0 )
      {
        v12 = WdLogNewEntry5_WdAssertion(v10, v9);
        *(_QWORD *)(v12 + 24) = v11;
        WdLogEvent5_WdAssertion(v12);
      }
      v13 = DMMVIDEOPRESENTTARGET::ExchangeDisplayManagerObject((DMMVIDEOPRESENTTARGET *)NextTarget, 0LL, v19);
      v17 = v13;
      if ( v13 < 0 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v15, v14);
        *(_QWORD *)(v18 + 24) = v17;
        WdLogEvent5_WdAssertion(v18);
      }
      ReferenceCounted::Release(v19, v14, v16);
    }
  }
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)&v20, 0LL, v3);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v21 + 40));
  return 0LL;
}

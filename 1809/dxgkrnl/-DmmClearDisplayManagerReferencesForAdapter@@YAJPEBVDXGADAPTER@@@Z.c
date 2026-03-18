/*
 * XREFs of ?DmmClearDisplayManagerReferencesForAdapter@@YAJPEBVDXGADAPTER@@@Z @ 0x1C013908C
 * Callers:
 *     _lambda_b738754624db98fc5a522f2870f1bafc_::_lambda_invoker_cdecl_ @ 0x1C001A6C0 (_lambda_b738754624db98fc5a522f2870f1bafc_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00040D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C001A5CC (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEBAJPEAPEAVDXGDISPLAYMANAGEROBJECT@@@Z @ 0x1C0139144 (-ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEBAJPEAPEAVDXGDISPLAYMANAGEROBJECT@@@Z.c)
 *     ?ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C0256DF8 (-ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?ExchangeDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJPEAVDXGDISPLAYMANAGEROBJECT@@0@Z @ 0x1C0283A04 (-ExchangeDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJPEAVDXGDISPLAYMANAGEROBJECT@@0@Z.c)
 */

__int64 __fastcall DmmClearDisplayManagerReferencesForAdapter(const struct DXGADAPTER *a1)
{
  __int64 v2; // rbx
  DMMVIDEOPRESENTTARGETSET *v3; // rbx
  unsigned int *NextTarget; // rdi
  _QWORD *v5; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rax
  struct DXGDISPLAYMANAGEROBJECT *v15; // [rsp+40h] [rbp+8h] BYREF
  DMMVIDEOPRESENTTARGETSET *v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 315) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v17, v2);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v2 + 80) + 72LL));
  v3 = *(DMMVIDEOPRESENTTARGETSET **)(v2 + 80);
  NextTarget = 0LL;
  v16 = v3;
  v5 = (_QWORD *)*((_QWORD *)v3 + 3);
  if ( v5 != (_QWORD *)((char *)v3 + 24) )
    NextTarget = (unsigned int *)(v5 - 1);
  for ( ;
        NextTarget;
        NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                       v3,
                                       (const struct DMMVIDEOPRESENTTARGET *const)NextTarget) )
  {
    v15 = 0LL;
    if ( (int)DMMVIDEOPRESENTTARGET::ReferenceDisplayManagerObject((DMMVIDEOPRESENTTARGET *)NextTarget, &v15) >= 0
      && v15 )
    {
      v7 = DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnershipNoDmm(v15, *(struct _LUID *)((char *)a1 + 276), NextTarget[6]);
      v9 = v7;
      if ( v7 < 0 )
      {
        v10 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v10 + 24) = v9;
        WdLogEvent5_WdAssertion(v10);
      }
      v11 = DMMVIDEOPRESENTTARGET::ExchangeDisplayManagerObject((DMMVIDEOPRESENTTARGET *)NextTarget, 0LL, v15);
      v13 = v11;
      if ( v11 < 0 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v14 + 24) = v13;
        WdLogEvent5_WdAssertion(v14);
      }
      ReferenceCounted::Release(v15);
    }
  }
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)&v16, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v17 + 40));
  return 0LL;
}

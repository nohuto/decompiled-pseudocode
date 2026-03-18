/*
 * XREFs of DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765___ @ 0x1C00CA970
 * Callers:
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C00CA810 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEBAJPEAPEAVDXGDISPLAYMANAGEROBJECT@@@Z @ 0x1C0149DDC (-ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEBAJPEAPEAVDXGDISPLAYMANAGEROBJECT@@@Z.c)
 */

__int64 __fastcall DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765_(
        DXGADAPTER *a1,
        __int64 a2,
        struct DXGDISPLAYMANAGEROBJECT ***a3)
{
  __int64 v3; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v17; // edi
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  if ( !a1 )
  {
    v20 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v20 + 24) = 0LL;
LABEL_13:
    WdLogEvent5_WdError(v20);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v21);
  }
  v9 = *((_QWORD *)a1 + 319);
  if ( !v9 )
  {
    v20 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v20 + 24) = a1;
    goto LABEL_13;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v24, *(_QWORD *)(v9 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 80) + 72LL));
    v11 = *(_QWORD *)(v10 + 80);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v11, v3);
    if ( TargetById )
    {
      v17 = DMMVIDEOPRESENTTARGET::ReferenceDisplayManagerObject(TargetById, *a3);
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v23 + 24) = v3;
      WdLogEvent5_WdError(v23);
      v17 = -1071774971;
    }
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 64), v16, v18);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v24 + 40));
    return v17;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v22 + 24) = a1;
    WdLogEvent5_WdError(v22);
    return 3223192373LL;
  }
}

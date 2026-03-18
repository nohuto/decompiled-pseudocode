/*
 * XREFs of DmmDoForSpecifiedTarget__lambda_babeb6617360c1278b0dac3884c10b63___ @ 0x1C011F588
 * Callers:
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C011F45C (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005C3C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEBAJPEAPEAVDXGDISPLAYMANAGEROBJECT@@@Z @ 0x1C0139144 (-ReferenceDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEBAJPEAPEAVDXGDISPLAYMANAGEROBJECT@@@Z.c)
 */

__int64 __fastcall DmmDoForSpecifiedTarget__lambda_babeb6617360c1278b0dac3884c10b63_(
        DXGADAPTER *a1,
        unsigned int a2,
        struct DXGDISPLAYMANAGEROBJECT ***a3)
{
  __int64 v3; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v14 + 24) = 0LL;
LABEL_13:
    WdLogEvent5_WdError(v14);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v15);
  }
  v7 = *((_QWORD *)a1 + 315);
  if ( !v7 )
  {
    v14 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v14 + 24) = a1;
    goto LABEL_13;
  }
  v8 = *(_QWORD *)(v7 + 88);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v18, *(_QWORD *)(v7 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v8 + 80) + 72LL));
    v9 = *(_QWORD *)(v8 + 80);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v9, v3);
    if ( TargetById )
    {
      v12 = DMMVIDEOPRESENTTARGET::ReferenceDisplayManagerObject(TargetById, *a3);
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v17 + 24) = v3;
      WdLogEvent5_WdError(v17);
      v12 = -1071774971;
    }
    if ( v9 )
      ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v18 + 40));
    return v12;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdError(v16);
    return 3223192373LL;
  }
}

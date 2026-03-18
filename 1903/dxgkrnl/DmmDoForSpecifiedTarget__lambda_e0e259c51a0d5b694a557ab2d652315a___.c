/*
 * XREFs of DmmDoForSpecifiedTarget__lambda_e0e259c51a0d5b694a557ab2d652315a___ @ 0x1C02B0970
 * Callers:
 *     ?DmmSetTargetForceableState@@YAJQEAXIE@Z @ 0x1C02B51CC (-DmmSetTargetForceableState@@YAJQEAXIE@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall DmmDoForSpecifiedTarget__lambda_e0e259c51a0d5b694a557ab2d652315a_(
        DXGADAPTER *a1,
        __int64 a2,
        _BYTE *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  struct DMMVIDEOPRESENTTARGET *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edi
  int v22; // eax
  __int64 v23; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_QWORD *)a1 + 319);
  if ( !v12 )
  {
    v6 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v23, *(_QWORD *)(v12 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 80) + 72LL));
    v15 = *(_QWORD *)(v13 + 80);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v15, v3);
    v19 = TargetById;
    if ( TargetById )
    {
      v22 = *((_DWORD *)TargetById + 20);
      if ( v22 >= 0 && (v22 <= 3 || v22 == 14) )
        *((_DWORD *)v19 + 102) = *a3 != 0;
      v21 = 0;
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(0LL, v17, v18);
      *(_QWORD *)(v20 + 24) = v3;
      WdLogEvent5_WdError(v20);
      v21 = -1071774971;
    }
    if ( v15 )
      ReferenceCounted::Release((ReferenceCounted *)(v15 + 64), v17, v18);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v23 + 40));
    return v21;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3223192373LL;
  }
}

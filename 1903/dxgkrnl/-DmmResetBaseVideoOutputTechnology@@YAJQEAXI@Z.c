/*
 * XREFs of ?DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z @ 0x1C02B5088
 * Callers:
 *     DpiPdoRemovePdo @ 0x1C02AFB30 (DpiPdoRemovePdo.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005D64 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall DmmResetBaseVideoOutputTechnology(DXGADAPTER *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned int v20; // edi
  __int64 v21; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v5 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v5);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)a1 + 319);
  if ( !v11 )
  {
    v5 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v5 + 24) = a1;
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(v11 + 88);
  if ( v12 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v21, *(_QWORD *)(v11 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 80) + 72LL));
    v14 = *(_QWORD *)(v12 + 80);
    v15 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v14, v3);
    if ( v15 )
    {
      v20 = 0;
      *(_DWORD *)(v15 + 80) = *(_DWORD *)(v15 + 84);
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v17, v16, v18);
      *(_QWORD *)(v19 + 24) = v3;
      WdLogEvent5_WdError(v19);
      v20 = -1071774971;
    }
    if ( v14 )
      ReferenceCounted::Release((ReferenceCounted *)(v14 + 64), v16, v18);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v21 + 40));
    return v20;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3223192373LL;
  }
}

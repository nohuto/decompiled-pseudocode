/*
 * XREFs of ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C02B55FC
 * Callers:
 *     DpiPdoAddPdo @ 0x1C015B8CC (DpiPdoAddPdo.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00060CC (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall DmmSetTemporaryVideoOutputTechnology(DXGADAPTER *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  int v4; // ebp
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned int v21; // edi
  __int64 v22; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  v4 = a3;
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
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v22, *(_QWORD *)(v12 + 88));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 80) + 72LL));
    v15 = *(_QWORD *)(v13 + 80);
    v16 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v15, v3);
    if ( v16 )
    {
      *(_DWORD *)(v16 + 80) = v4;
      v21 = 0;
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v20 + 24) = v3;
      WdLogEvent5_WdError(v20);
      v21 = -1071774971;
    }
    if ( v15 )
      ReferenceCounted::Release((ReferenceCounted *)(v15 + 64), v17, v19);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v22 + 40));
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

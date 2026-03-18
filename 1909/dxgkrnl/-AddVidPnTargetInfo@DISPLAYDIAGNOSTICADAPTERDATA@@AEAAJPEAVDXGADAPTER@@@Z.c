/*
 * XREFs of ?AddVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0295104
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C0295B7C (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0003E00 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAPEAVVIDPNTARGETINFO@@XZ @ 0x1C0024BE8 (-GetNextVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAPEAVVIDPNTARGETINFO@@XZ.c)
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0296644 (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnTargetInfo(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  unsigned int v2; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // rbx
  _QWORD *v13; // rsi
  const struct DMMVIDEOPRESENTTARGET *i; // rsi
  VIDPNTARGETINFO *NextVidPnTargetInfo; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 976LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *(_QWORD *)(*((_QWORD *)a2 + 319) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v20, v9);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 80) + 72LL));
  v12 = *(_QWORD **)(v9 + 80);
  v13 = (_QWORD *)v12[3];
  if ( v13 != v12 + 3 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v13 - 1);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v12, i) )
    {
      if ( *((_QWORD *)i + 14) )
      {
        NextVidPnTargetInfo = DISPLAYDIAGNOSTICADAPTERDATA::GetNextVidPnTargetInfo(this);
        if ( !NextVidPnTargetInfo )
        {
          v19 = WdLogNewEntry5_WdError(v17, v16, v18);
          *(_QWORD *)(v19 + 24) = 998LL;
          WdLogEvent5_WdError(v19);
          v2 = -1073741801;
          break;
        }
        if ( VIDPNTARGETINFO::Initialize(NextVidPnTargetInfo, a2, i) >= 0 )
          ++*((_DWORD *)this + 251);
      }
    }
  }
  ReferenceCounted::Release((ReferenceCounted *)(v12 + 8), v10, v11);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v20 + 40));
  return v2;
}

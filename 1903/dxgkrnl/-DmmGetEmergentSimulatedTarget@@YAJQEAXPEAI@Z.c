/*
 * XREFs of ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C00DE8C8
 * Callers:
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DE6F0 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0175020 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0003D00 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003D4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall DmmGetEmergentSimulatedTarget(DXGADAPTER *a1, unsigned int *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // r8
  unsigned int v12; // eax
  _QWORD *v13; // rbx
  _QWORD *v14; // rsi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v15; // rsi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *NextTarget; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdError(a1, 0LL, a3);
    *(_QWORD *)(v18 + 24) = 0LL;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  *a2 = -1;
  if ( !a1 )
  {
    v19 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v19 + 24) = 0LL;
LABEL_24:
    WdLogEvent5_WdError(v19);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v20);
  }
  v9 = *((_QWORD *)a1 + 319);
  if ( !v9 )
  {
    v19 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v19 + 24) = a1;
    goto LABEL_24;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v22, v10);
    v12 = *(_DWORD *)(v10 + 492);
    if ( v12 == -1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 80) + 72LL));
      v13 = *(_QWORD **)(v10 + 80);
      v14 = (_QWORD *)v13[3];
      if ( v14 == v13 + 3 )
        v15 = 0LL;
      else
        v15 = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v14 - 1);
      NextTarget = v15;
      if ( !v15 )
        goto LABEL_20;
      while ( !IsInternalVideoOutput(NextTarget[20]) )
      {
        NextTarget = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                                                (DMMVIDEOPRESENTTARGETSET *)v13,
                                                                (const struct DMMVIDEOPRESENTTARGET *const)NextTarget);
        if ( !NextTarget )
          goto LABEL_13;
      }
      v15 = NextTarget;
LABEL_13:
      if ( v15 )
        *a2 = *((_DWORD *)v15 + 6);
      else
LABEL_20:
        v3 = -1073741275;
      ReferenceCounted::Release((ReferenceCounted *)(v13 + 8), (__int64)NextTarget, v11);
    }
    else
    {
      *a2 = v12;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v22 + 40));
    return v3;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdError(v21);
    return 3223192373LL;
  }
}

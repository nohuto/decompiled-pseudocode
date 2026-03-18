/*
 * XREFs of ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C00BFEB8
 * Callers:
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00BFD00 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0146F54 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00040D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmGetEmergentSimulatedTarget(DXGADAPTER *a1, unsigned int *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rbp
  unsigned int v8; // eax
  _QWORD *v9; // rbx
  const struct DMMVIDEOPRESENTTARGET *v10; // rbp
  _QWORD *v11; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  const struct DMMVIDEOPRESENTTARGET *v13; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v15 + 24) = 0LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  *a2 = -1;
  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v16 + 24) = 0LL;
LABEL_23:
    WdLogEvent5_WdError(v16);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v17);
  }
  v6 = *((_QWORD *)a1 + 315);
  if ( !v6 )
  {
    v16 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v16 + 24) = a1;
    goto LABEL_23;
  }
  v7 = *(_QWORD *)(v6 + 88);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v19, v7);
    v8 = *(_DWORD *)(v7 + 492);
    if ( v8 == -1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 80) + 72LL));
      v9 = *(_QWORD **)(v7 + 80);
      v10 = 0LL;
      v11 = (_QWORD *)v9[3];
      if ( v11 != v9 + 3 )
        v10 = (const struct DMMVIDEOPRESENTTARGET *)(v11 - 1);
      NextTarget = v10;
      if ( !v10 )
        goto LABEL_19;
      while ( !IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20)) )
      {
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v9, v13);
        if ( !NextTarget )
          goto LABEL_13;
      }
      v10 = v13;
LABEL_13:
      if ( v10 )
        *a2 = *((_DWORD *)v10 + 6);
      else
LABEL_19:
        v2 = -1073741275;
      ReferenceCounted::Release((ReferenceCounted *)(v9 + 8));
    }
    else
    {
      *a2 = v8;
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 40));
    return v2;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
    return 3223192373LL;
  }
}

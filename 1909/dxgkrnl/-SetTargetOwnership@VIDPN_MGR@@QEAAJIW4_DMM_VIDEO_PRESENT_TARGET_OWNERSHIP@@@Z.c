/*
 * XREFs of ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C0158F7C
 * Callers:
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0158CF8 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000D7C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00CC350 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall VIDPN_MGR::SetTargetOwnership(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  _QWORD v28[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  v5 = (unsigned int)a2;
  v8 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(a1, a2);
  v9 = (unsigned int)v5;
  v8[3] = v5;
  v10 = *(_QWORD *)(a1 + 8);
  if ( !v10 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v19);
    v10 = *(_QWORD *)(a1 + 8);
  }
  v8[4] = *(_QWORD *)(v10 + 16);
  v8[5] = v3;
  WdLogEvent5_WdDmmEvent(v8);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 80) + 72LL));
  v11 = *(_QWORD *)(a1 + 80);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v11, (unsigned int)v5);
  if ( TargetById )
  {
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 64), v12, (__int64)v14);
    v28[1] = 0LL;
    *((_DWORD *)TargetById + 30) = v3;
    v28[0] = 1LL;
    if ( (int)DxgkStatusChangeNotify((int *)v28, v12, v14) < 0 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v17, v16);
      WdLogEvent5_WdAssertion(v27);
    }
    return 0LL;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v22 + 24) = v9;
    v23 = *(_QWORD *)(a1 + 8);
    if ( !v23 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v21, v20);
      WdLogEvent5_WdAssertion(v24);
      v23 = *(_QWORD *)(a1 + 8);
    }
    *(_QWORD *)(v22 + 32) = *(_QWORD *)(v23 + 16);
    WdLogEvent5_WdError(v22);
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 64), v25, v26);
    return 3223192325LL;
  }
}

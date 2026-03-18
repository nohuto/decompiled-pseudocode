/*
 * XREFs of ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C0143544
 * Callers:
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01432B4 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005C3C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DxgkStatusChangeNotify @ 0x1C011DF20 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall VIDPN_MGR::SetTargetOwnership(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // r14
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+20h] [rbp-18h] BYREF
  __int64 v25; // [rsp+28h] [rbp-10h]

  v4 = (int)a3;
  v6 = (unsigned int)a2;
  v8 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(a1, a2, a3, a4);
  v9 = (unsigned int)v6;
  v8[3] = v6;
  v10 = *(_QWORD *)(a1 + 8);
  if ( !v10 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v18);
    v10 = *(_QWORD *)(a1 + 8);
  }
  v8[4] = *(_QWORD *)(v10 + 16);
  v8[5] = v4;
  WdLogEvent5_WdDmmEvent(v8);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 80) + 72LL));
  v11 = *(_QWORD *)(a1 + 80);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v11, v6);
  if ( TargetById )
  {
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
    v25 = 0LL;
    *((_DWORD *)TargetById + 30) = v4;
    v24 = 1;
    if ( (int)DxgkStatusChangeNotify(&v24, v12, v14) < 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v23);
    }
    return 0LL;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v20 + 24) = v9;
    v21 = *(_QWORD *)(a1 + 8);
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v22);
      v21 = *(_QWORD *)(a1 + 8);
    }
    *(_QWORD *)(v20 + 32) = *(_QWORD *)(v21 + 16);
    WdLogEvent5_WdError(v20);
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
    return 3223192325LL;
  }
}

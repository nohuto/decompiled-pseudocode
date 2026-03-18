/*
 * XREFs of ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1C0144114
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C0100EEC (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C02C9BA8 (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0003E00 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000D7C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall DmmGetNextVideoPresentTarget(DXGADAPTER *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rbx
  _QWORD *v14; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  unsigned int v16; // edi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v23; // [rsp+40h] [rbp+18h] BYREF

  v4 = a2;
  if ( !a3 )
  {
    v18 = WdLogNewEntry5_WdError(a1, a2, 0LL);
    *(_QWORD *)(v18 + 24) = 0LL;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  *a3 = -1;
  if ( !a1 )
  {
    v19 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v19 + 24) = 0LL;
LABEL_20:
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
    goto LABEL_20;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v23, v10);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 80) + 72LL));
    v13 = *(_QWORD **)(v10 + 80);
    if ( v4 == -1 )
    {
      v14 = (_QWORD *)v13[3];
      if ( v14 == v13 + 3 )
        NextTarget = 0LL;
      else
        NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v14 - 1);
    }
    else
    {
      TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*(DMMVIDEOPRESENTTARGETSET **)(v10 + 80), v4);
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v13, TargetById);
    }
    if ( NextTarget )
    {
      v16 = 0;
      *a3 = *((_DWORD *)NextTarget + 6);
    }
    else
    {
      v16 = -1073741275;
    }
    if ( v13 )
      ReferenceCounted::Release((ReferenceCounted *)(v13 + 8), v11, v12);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v23 + 40));
    return v16;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v21 + 24) = a1;
    WdLogEvent5_WdError(v21);
    return 3223192373LL;
  }
}

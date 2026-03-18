/*
 * XREFs of ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00E2150
 * Callers:
 *     ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00CA0C0 (-_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C028E598 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1C00E1864 (-DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00E23D0 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInformationForTargets(
        MONITOR_MGR *this,
        int (__high *a2)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8),
        void *a3,
        int a4)
{
  unsigned int v7; // edx
  struct DXGMONITOR *v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // r15d
  char v11; // si
  int IsTargetForcable; // eax
  __int64 v13; // rcx
  int MonitorInstance; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  int v22; // [rsp+20h] [rbp-20h]
  int v23; // [rsp+28h] [rbp-18h]
  unsigned int v24; // [rsp+80h] [rbp+40h] BYREF
  struct DXGMONITOR *v25; // [rsp+88h] [rbp+48h] BYREF
  int v26; // [rsp+98h] [rbp+58h] BYREF

  v26 = a4;
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v18);
  }
  v7 = -1;
  v24 = -1;
  do
  {
    LODWORD(v8) = DmmGetNextVideoPresentTarget(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), v7, &v24);
    if ( (int)v8 < 0 )
      break;
    v9 = *((_QWORD *)this + 1);
    v10 = 0;
    LOBYTE(v26) = 0;
    v11 = 0;
    IsTargetForcable = DmmIsTargetForcable(*(_QWORD *)(v9 + 16), v24, &v26, 0LL);
    v8 = (struct DXGMONITOR *)IsTargetForcable;
    if ( IsTargetForcable < 0 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v21[3] = v24;
      v21[4] = this;
      v21[5] = v8;
      WdLogEvent5_WdError(v21);
      if ( (_DWORD)v8 == -1073741275 )
        LODWORD(v8) = -1073741823;
      return (unsigned int)v8;
    }
    v25 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v24, 0, &v25);
    LODWORD(v8) = MonitorInstance;
    if ( MonitorInstance < 0 )
      goto LABEL_7;
    v8 = v25;
    if ( !v25 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v19);
    }
    v10 = *((_DWORD *)v8 + 108);
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v24, 1u, &v25);
    LODWORD(v8) = MonitorInstance;
    if ( MonitorInstance < 0 )
    {
LABEL_7:
      if ( MonitorInstance != -1073741275 )
      {
        v20 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v20 + 24) = v24;
        *(_QWORD *)(v20 + 32) = this;
        WdLogEvent5_WdError(v20);
        return (unsigned int)v8;
      }
    }
    else
    {
      v11 = 1;
    }
    LOBYTE(v23) = v11;
    LOBYTE(v22) = v26;
    v16 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, _QWORD, int, int))a2)(
            *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
            a3,
            v24,
            v10,
            v22,
            v23);
    v7 = v24;
    LODWORD(v8) = v16;
  }
  while ( v24 != -1 && v16 >= 0 );
  return (unsigned int)v8;
}

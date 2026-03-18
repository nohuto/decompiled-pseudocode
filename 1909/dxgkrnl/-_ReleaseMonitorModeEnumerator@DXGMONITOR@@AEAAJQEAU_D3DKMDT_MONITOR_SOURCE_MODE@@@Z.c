/*
 * XREFs of ?_ReleaseMonitorModeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C017D5C8
 * Callers:
 *     ?ReleaseModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C017D4C0 (-ReleaseModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODES.c)
 *     ?ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C02CD8D0 (-ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMOD.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReleaseMonitorModeEnumerator(
        DXGMONITOR *this,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        __int64 a3)
{
  DXGMONITOR *v4; // rdi
  DXGMONITOR **v5; // rdx
  DXGMONITOR *v6; // rax
  DXGMONITOR *v7; // rdx
  DXGMONITOR **v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = this;
  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v10);
  }
  v5 = (DXGMONITOR **)((char *)v4 + 240);
  if ( !a2 || (v6 = *v5, *v5 == (DXGMONITOR *)v5) )
  {
LABEL_13:
    v11 = WdLogNewEntry5_WdError(this, v5, a3);
    *(_QWORD *)(v11 + 24) = a2;
    *(_QWORD *)(v11 + 32) = v4;
    WdLogEvent5_WdError(v11);
    return 3223192368LL;
  }
  else
  {
    this = (DXGMONITOR *)&a2[1];
    while ( v6 != this )
    {
      if ( v5 == (DXGMONITOR **)v6 )
        goto LABEL_13;
      v6 = *(DXGMONITOR **)v6;
    }
    v7 = *(DXGMONITOR **)this;
    if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this
      || (v8 = *(DXGMONITOR ***)&a2[1].VideoSignalInfo.VideoStandard, *v8 != this) )
    {
      __fastfail(3u);
    }
    *v8 = v7;
    *((_QWORD *)v7 + 1) = v8;
    operator delete(a2);
    return 0LL;
  }
}

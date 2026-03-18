/*
 * XREFs of ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x1C0152AF4
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0152300 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
        struct _FAST_MUTEX *this,
        int (__high *a2)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *),
        void *a3,
        struct HDXGMONITOREVENT__ **a4)
{
  MONITOR_MGR *v6; // rax
  __int64 v7; // rcx
  MONITOR_MGR *v8; // rdi
  MONITOR_MGR **Blink; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  if ( !a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  *a4 = 0LL;
  v6 = (MONITOR_MGR *)operator new(0x20uLL, 0x4D677844u, PagedPool);
  v8 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 2) = VIDPN_MGR::_MonitorEventHandler;
    if ( this == (struct _FAST_MUTEX *)-224LL )
    {
      v13 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v13);
    }
    KeAcquireGuardedMutex(this + 4);
    Blink = (MONITOR_MGR **)this[2].Event.Header.WaitListHead.Blink;
    if ( *Blink != (MONITOR_MGR *)&this[2].Event.Header.WaitListHead )
      __fastfail(3u);
    *(_QWORD *)v8 = (char *)this + 144;
    *((_QWORD *)v8 + 1) = Blink;
    *Blink = v8;
    this[2].Event.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v8;
    *a4 = v8;
    if ( this == (struct _FAST_MUTEX *)-224LL )
    {
      v14 = WdLogNewEntry5_WdAssertion(Blink);
      WdLogEvent5_WdAssertion(v14);
    }
    KeReleaseGuardedMutex(this + 4);
    return 0LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v7);
    WdLogEvent5_WdError(v12);
    return 3221225495LL;
  }
}

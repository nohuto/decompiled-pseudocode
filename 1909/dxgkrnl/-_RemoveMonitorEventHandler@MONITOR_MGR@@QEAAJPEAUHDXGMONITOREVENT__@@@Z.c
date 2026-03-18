/*
 * XREFs of ?_RemoveMonitorEventHandler@MONITOR_MGR@@QEAAJPEAUHDXGMONITOREVENT__@@@Z @ 0x1C02C8BE8
 * Callers:
 *     MonitorUnregisterMonitorEventCallback @ 0x1C02CAB38 (MonitorUnregisterMonitorEventCallback.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_RemoveMonitorEventHandler(struct _FAST_MUTEX *this, struct HDXGMONITOREVENT__ ***a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  struct HDXGMONITOREVENT__ **p_WaitListHead; // rcx
  struct HDXGMONITOREVENT__ *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rax
  struct HDXGMONITOREVENT__ **v16; // rax
  struct HDXGMONITOREVENT__ **v17; // rcx

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( this == (struct _FAST_MUTEX *)-224LL )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v5);
  }
  KeAcquireGuardedMutex(this + 4);
  p_WaitListHead = (struct HDXGMONITOREVENT__ **)&this[2].Event.Header.WaitListHead;
  if ( a2 && (v9 = *p_WaitListHead, *p_WaitListHead != (struct HDXGMONITOREVENT__ *)p_WaitListHead) )
  {
    while ( v9 != (struct HDXGMONITOREVENT__ *)a2 )
    {
      if ( p_WaitListHead == (struct HDXGMONITOREVENT__ **)v9 )
        goto LABEL_7;
      v9 = *(struct HDXGMONITOREVENT__ **)v9;
    }
    v16 = *a2;
    if ( (*a2)[1] != (struct HDXGMONITOREVENT__ *)a2 || (v17 = a2[1], *v17 != (struct HDXGMONITOREVENT__ *)a2) )
      __fastfail(3u);
    *v17 = (struct HDXGMONITOREVENT__ *)v16;
    v16[1] = (struct HDXGMONITOREVENT__ *)v17;
    operator delete(a2);
    v13 = 0;
  }
  else
  {
LABEL_7:
    v10 = WdLogNewEntry5_WdError(p_WaitListHead, v6, v7);
    *(_QWORD *)(v10 + 24) = a2;
    WdLogEvent5_WdError(v10);
    v13 = -1073741811;
  }
  if ( this == (struct _FAST_MUTEX *)-224LL )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v14);
  }
  KeReleaseGuardedMutex(this + 4);
  return v13;
}

/*
 * XREFs of ??1MONITOR_MGR@@QEAA@XZ @ 0x1C02C7444
 * Callers:
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C0056038 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1C0001670 (-_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C7CCC (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C02C7DAC (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

void __fastcall MONITOR_MGR::~MONITOR_MGR(MONITOR_MGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD **v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdi
  void *v11; // rdx
  _QWORD **v12; // rsi
  _QWORD *v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rax
  struct _KEVENT *v16; // rcx
  _QWORD v17[10]; // [rsp+20h] [rbp-68h] BYREF

  memset(v17, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v17[1]);
  v17[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v17[3]) = 24;
  LOBYTE(v17[6]) = -1;
  v4 = (_QWORD **)((char *)this + 128);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v3, v2) + 24) = this;
  while ( 1 )
  {
    v8 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v8[1] != v4 || (v9 = (_QWORD *)*v8, *(_QWORD **)(*v8 + 8LL) != v8) )
LABEL_15:
      __fastfail(3u);
    *v4 = v9;
    v10 = v8 - 2;
    v9[1] = v4;
    if ( *((_DWORD *)v8 + 104) == 1 )
    {
      MONITOR_MGR::_DestroyPhysicalMonitor(this, v8 - 2, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v17);
    }
    else
    {
      v11 = (void *)v10[55];
      if ( v11 )
      {
        MONITOR_MGR::_DestroyPhysicalMonitor(this, v11, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v17);
        v10[55] = 0LL;
      }
      MONITOR_MGR::_DestroySimulatedMonitor(this, v10);
    }
  }
  v12 = (_QWORD **)((char *)this + 144);
  while ( 1 )
  {
    v13 = *v12;
    if ( *v12 == v12 )
      break;
    if ( (_QWORD **)v13[1] != v12 )
      goto LABEL_15;
    v14 = (_QWORD *)*v13;
    if ( *(_QWORD **)(*v13 + 8LL) != v13 )
      goto LABEL_15;
    *v12 = v14;
    v14[1] = v12;
    v15 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v15 + 24) = v13[2];
    *(_QWORD *)(v15 + 32) = v13[3];
    WdLogEvent5_WdError(v15);
    operator delete(v13);
  }
  v16 = (struct _KEVENT *)*((_QWORD *)this + 96);
  if ( v16 )
  {
    KeSetEvent(v16 + 1, 0, 0);
    MONITOR_MGR::_ReleaseMonitorPendingEvent(*((PVOID *)this + 96));
    *((_QWORD *)this + 96) = 0LL;
  }
  ExDeleteResourceLite((PERESOURCE)((char *)this + 16));
}

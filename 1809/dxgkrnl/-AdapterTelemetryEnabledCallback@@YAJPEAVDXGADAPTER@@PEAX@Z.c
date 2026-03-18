/*
 * XREFs of ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0255F60
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014CCC4 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C028F704 (-_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall AdapterTelemetryEnabledCallback(struct DXGADAPTER *a1, void *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rcx
  MONITOR_MGR *v9; // rcx
  __int64 v11; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v13[32]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v14[40]; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v15[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v15, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v15[1]);
  v15[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v15[3]) = 33;
  LOBYTE(v15[6]) = -1;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, a1, 0LL);
  v3 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12);
  v7 = v3;
  if ( v3 < 0 )
  {
    if ( v3 != -1073741130 )
    {
      v11 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      *(_QWORD *)(v11 + 24) = a1;
      *(_QWORD *)(v11 + 32) = v7;
      WdLogEvent5_WdWarning(v11);
      goto LABEL_7;
    }
  }
  else if ( (*((_DWORD *)a1 + 77) & 4) == 0 )
  {
    DXGADAPTER::AdapterTelemetry((__int64)a1, 1, (__int64)v15);
    v8 = *((_QWORD *)a1 + 315);
    if ( v8 )
    {
      v9 = *(MONITOR_MGR **)(v8 + 96);
      if ( v9 )
        MONITOR_MGR::_MonitorTelemetry(v9, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v15);
    }
  }
  LODWORD(v7) = 0;
LABEL_7:
  COREACCESS::~COREACCESS((COREACCESS *)v14);
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  return (unsigned int)v7;
}

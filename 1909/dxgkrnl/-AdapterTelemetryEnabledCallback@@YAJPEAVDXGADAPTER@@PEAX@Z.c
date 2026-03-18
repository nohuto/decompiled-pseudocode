/*
 * XREFs of ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C028C4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0162288 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C8958 (-_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall AdapterTelemetryEnabledCallback(struct DXGADAPTER *a1, void *a2)
{
  __int64 v3; // r8
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rcx
  MONITOR_MGR *v10; // rcx
  __int64 v12; // rax
  _QWORD v13[10]; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v14[8]; // [rsp+70h] [rbp-A8h] BYREF
  _BYTE v15[64]; // [rsp+78h] [rbp-A0h] BYREF
  _BYTE v16[72]; // [rsp+B8h] [rbp-60h] BYREF

  memset(v13, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v13[1]);
  v13[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v13[3]) = 33;
  LOBYTE(v13[6]) = -1;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((__int64)v14, 0xFFFFFFFFLL, v3);
  v8 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
    {
      v12 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      *(_QWORD *)(v12 + 24) = a1;
      *(_QWORD *)(v12 + 32) = v8;
      WdLogEvent5_WdWarning(v12);
      goto LABEL_7;
    }
  }
  else if ( (*((_DWORD *)a1 + 77) & 4) == 0 )
  {
    DXGADAPTER::AdapterTelemetry((__int64)a1, 1, (__int64)v13);
    v9 = *((_QWORD *)a1 + 319);
    if ( v9 )
    {
      v10 = *(MONITOR_MGR **)(v9 + 96);
      if ( v10 )
        MONITOR_MGR::_MonitorTelemetry(v10, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v13);
    }
  }
  LODWORD(v8) = 0;
LABEL_7:
  COREACCESS::~COREACCESS((COREACCESS *)v16);
  COREACCESS::~COREACCESS((COREACCESS *)v15);
  return (unsigned int)v8;
}

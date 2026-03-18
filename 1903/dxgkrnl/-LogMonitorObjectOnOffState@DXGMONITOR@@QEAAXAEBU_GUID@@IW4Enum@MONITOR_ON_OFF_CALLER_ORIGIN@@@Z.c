/*
 * XREFs of ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C014A724
 * Callers:
 *     LogMonitorHandleOnOffState @ 0x1C014A66C (LogMonitorHandleOnOffState.c)
 *     ?_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C0159380 (-_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C02CDC44 (--1DXGMONITOR@@AEAA@XZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00035A0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0019EC0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

void __fastcall DXGMONITOR::LogMonitorObjectOnOffState(char *a1, __int64 a2, int a3, char a4)
{
  char v6; // si
  __int64 v7; // rdx
  __int64 v8; // rbx
  const GUID *v9; // r9
  char v10; // [rsp+30h] [rbp-D0h] BYREF
  char v11; // [rsp+31h] [rbp-CFh] BYREF
  char v12; // [rsp+32h] [rbp-CEh] BYREF
  __int16 v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int16 *v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  int *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  const GUID *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  _DWORD *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  char *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  char *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  __int64 *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  __int64 *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  char *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  char *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]

  if ( a4 == 1 )
    v6 = 2 - (a3 != 0);
  else
    v6 = *a1;
  if ( a4 != 1 || v6 != *a1 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8LL) + 16LL);
    v15[0] = *(_DWORD *)(v7 + 276);
    v15[1] = *(_DWORD *)(v7 + 280);
    v8 = MEMORY[0xFFFFF78000000014];
    if ( (unsigned int)dword_1C00A1818 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1818, 0x400000000010uLL) )
    {
      v13 = 1;
      v19 = &v13;
      v14 = dword_1C00A424C++;
      v21 = &v14;
      v25 = v15;
      v27 = a1 + 44;
      v29 = &v10;
      v31 = &v16;
      v17 = *((_QWORD *)a1 + 1);
      v33 = &v17;
      v35 = &v11;
      v12 = *a1;
      v37 = &v12;
      v20 = 2LL;
      v22 = 4LL;
      v23 = v9;
      v24 = 16LL;
      v26 = 8LL;
      v28 = 4LL;
      v10 = a4;
      v30 = 1LL;
      v16 = v8;
      v32 = 8LL;
      v34 = 8LL;
      v11 = v6;
      v36 = 1LL;
      v38 = 1LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C00A1818, &unk_1C007489B, v9, v9, 0xCu, &pData);
    }
    if ( a4 == 1 )
    {
      *((_QWORD *)a1 + 1) = v8;
      *a1 = v6;
    }
  }
}

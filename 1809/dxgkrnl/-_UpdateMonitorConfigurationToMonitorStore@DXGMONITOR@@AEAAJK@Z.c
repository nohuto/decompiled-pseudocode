/*
 * XREFs of ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C0296B30
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C0295EA4 (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0294934 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateMonitorConfigurationToMonitorStore(DXGMONITOR *this, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  const WCHAR *v10; // r8
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  int ValueData; // [rsp+50h] [rbp+18h] BYREF
  PCWSTR Path; // [rsp+58h] [rbp+20h] BYREF

  Path = 0LL;
  v2 = a2;
  LODWORD(v6) = DXGMONITOR::_OpenMonitorDataStore(this, 0, (void **)&Path);
  if ( (int)v6 >= 0 )
  {
    v9 = WdLogNewEntry5_WdDmmEvent(v5, v4, v7, v8);
    *(_QWORD *)(v9 + 24) = v2;
    *(_QWORD *)(v9 + 32) = *((unsigned int *)this + 11);
    WdLogEvent5_WdDmmEvent(v9);
    v10 = (const WCHAR *)*(&DXGMONITOR::_MonitorConfigInfoTable + 3 * v2);
    ValueData = *(_DWORD *)((char *)this + *((int *)&DXGMONITOR::_MonitorConfigInfoTable + 6 * v2 + 3));
    v11 = RtlWriteRegistryValue(0x40000000u, Path, v10, 4u, &ValueData, 4u);
    v6 = v11;
    if ( v11 < 0 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v13[3] = v2;
      v13[4] = *((unsigned int *)this + 11);
      v13[5] = v6;
      WdLogEvent5_WdError(v13);
    }
  }
  if ( Path )
    ZwClose((HANDLE)Path);
  return (unsigned int)v6;
}

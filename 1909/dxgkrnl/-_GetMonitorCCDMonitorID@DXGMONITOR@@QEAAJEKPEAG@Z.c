/*
 * XREFs of ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C00ECA04
 * Callers:
 *     MonitorGetCCDMonitorID @ 0x1C00EC934 (MonitorGetCCDMonitorID.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C0176928 (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 *     ?_GetAppOverrideKey@DXGMONITOR@@QEAAJAEBU_UNICODE_STRING@@PEA_K@Z @ 0x1C02CAEB0 (-_GetAppOverrideKey@DXGMONITOR@@QEAAJAEBU_UNICODE_STRING@@PEA_K@Z.c)
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0006854 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorCCDMonitorID(DXGMONITOR *this, __int64 a2, int a3, unsigned __int16 *a4)
{
  char v6; // bp
  __int64 v8; // rax
  DXGADAPTER *v9; // rcx
  NTSTATUS appended; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  bool IsBddFallbackDriver; // al
  const WCHAR *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF

  v6 = a2;
  if ( !a3 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a4 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v20);
  }
  Destination.Buffer = a4;
  a4[a3 - 1] = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  v8 = *((_QWORD *)this + 4);
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(2 * a3 - 2);
  v9 = *(DXGADAPTER **)(*(_QWORD *)(v8 + 8) + 16LL);
  if ( (*((_DWORD *)v9 + 77) & 0x20) == 0 )
    goto LABEL_6;
  IsBddFallbackDriver = DXGADAPTER::IsBddFallbackDriver(v9);
  v22 = L"MSNIL";
  if ( !IsBddFallbackDriver )
    v22 = L"MSBDD_";
  LODWORD(v13) = RtlAppendUnicodeToString(&Destination, v22);
  if ( (int)v13 < 0 )
  {
    v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v26 + 24) = (int)v13;
    WdLogEvent5_WdWarning(v26);
  }
  else
  {
LABEL_6:
    appended = RtlAppendUnicodeStringToString(
                 &Destination,
                 (PCUNICODE_STRING)((char *)this + (-(__int64)(v6 != 0) & 0xFFFFFFFFFFFFFFF0uLL) + 536));
    v13 = appended;
    if ( appended >= 0 )
    {
      v14 = *((_QWORD *)this + 71);
      if ( v14 && !*(_DWORD *)(v14 + 16) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v12, v11);
        WdLogEvent5_WdAssertion(v27);
      }
      v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 308LL);
      if ( (v15 & 0x20) == 0 && (v15 & 0x40000) == 0 )
      {
        v16 = *((_QWORD *)this + 71);
        if ( v16 )
        {
          if ( *(_DWORD *)(v16 + 16) <= 1u )
            return 0LL;
        }
      }
      v18 = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 552));
      v13 = v18;
      if ( v18 >= 0 )
        return 0LL;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = v13;
  }
  return (unsigned int)v13;
}

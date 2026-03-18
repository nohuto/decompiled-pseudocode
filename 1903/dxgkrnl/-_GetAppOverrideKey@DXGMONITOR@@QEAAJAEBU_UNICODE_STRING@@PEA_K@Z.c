/*
 * XREFs of ?_GetAppOverrideKey@DXGMONITOR@@QEAAJAEBU_UNICODE_STRING@@PEA_K@Z @ 0x1C02CADF0
 * Callers:
 *     ?_GetAppOverride@DXGMONITOR@@QEAA_NPEAXU_GUID@@@Z @ 0x1C02CACFC (-_GetAppOverride@DXGMONITOR@@QEAA_NPEAXU_GUID@@@Z.c)
 *     ?_SetAppOverride@DXGMONITOR@@QEAAJU_GUID@@I_K@Z @ 0x1C02CBAF4 (-_SetAppOverride@DXGMONITOR@@QEAAJU_GUID@@I_K@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C00E8574 (-_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetAppOverrideKey(DXGMONITOR *this, PCUNICODE_STRING Source, unsigned __int64 *a3)
{
  unsigned __int16 *v6; // rdi
  unsigned int v7; // esi
  SIZE_T v8; // rax
  unsigned __int16 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  int MonitorCCDMonitorID; // ebx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int Length; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v28; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 HashValue; // [rsp+78h] [rbp+48h] BYREF

  v6 = 0LL;
  v7 = 130;
  while ( 1 )
  {
    if ( v6 )
      operator delete[](v6);
    v7 *= 2;
    v8 = 2LL * v7;
    if ( !is_mul_ok(v7, 2uLL) )
      v8 = -1LL;
    v9 = (unsigned __int16 *)operator new[](v8, 0x4D677844u, PagedPool);
    v6 = v9;
    if ( !v9 )
      break;
    MonitorCCDMonitorID = DXGMONITOR::_GetMonitorCCDMonitorID(this, 0LL, v7, v9);
    if ( MonitorCCDMonitorID >= 0 )
    {
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      RtlInitUnicodeString(&DestinationString, v6);
      DestinationString.MaximumLength = 2 * v7 - 2;
      MonitorCCDMonitorID = RtlAppendUnicodeStringToString(&DestinationString, Source);
    }
    if ( MonitorCCDMonitorID != -2147483643 && MonitorCCDMonitorID != -1073741789 )
    {
      if ( MonitorCCDMonitorID < 0 )
      {
        v18 = WdLogNewEntry5_WdError(v15, v14, v17);
        *(_QWORD *)(v18 + 32) = MonitorCCDMonitorID;
        *(_QWORD *)(v18 + 24) = this;
        WdLogEvent5_WdError(v18);
LABEL_22:
        operator delete[](v6);
        return (unsigned int)MonitorCCDMonitorID;
      }
      HashValue = 0LL;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      RtlInitUnicodeString(&DestinationString, v6);
      Length = DestinationString.Length;
      DestinationString.Length = (DestinationString.Length >> 1) & 0xFFFE;
      MonitorCCDMonitorID = RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)&HashValue);
      if ( MonitorCCDMonitorID < 0 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v21, v20);
        WdLogEvent5_WdAssertion(v22);
      }
      if ( Length <= 2 )
      {
LABEL_20:
        if ( MonitorCCDMonitorID < 0 )
          goto LABEL_22;
      }
      else
      {
        DestinationString.MaximumLength -= DestinationString.Length;
        v23 = (unsigned __int64)DestinationString.Length >> 1;
        DestinationString.Length = Length - DestinationString.Length;
        DestinationString.Buffer = &v6[v23];
        MonitorCCDMonitorID = RtlHashUnicodeString(&DestinationString, 1u, 0, (PULONG)&HashValue + 1);
        if ( MonitorCCDMonitorID < 0 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v25, v24);
          WdLogEvent5_WdAssertion(v26);
          goto LABEL_20;
        }
      }
      *a3 = HashValue;
      goto LABEL_22;
    }
    MonitorCCDMonitorID = -1073741789;
    if ( v7 >= 0x410 )
      goto LABEL_22;
  }
  v28 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
  WdLogEvent5_WdLowResource(v28);
  return 3221225495LL;
}

/*
 * XREFs of ?_SetAppOverride@DXGMONITOR@@QEAAJU_GUID@@I_K@Z @ 0x1C02CBBB4
 * Callers:
 *     MonitorSetAppOverride @ 0x1C02CA1D4 (MonitorSetAppOverride.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C01790B0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 *     ?_GetAppOverrideKey@DXGMONITOR@@QEAAJAEBU_UNICODE_STRING@@PEA_K@Z @ 0x1C02CAEB0 (-_GetAppOverrideKey@DXGMONITOR@@QEAAJAEBU_UNICODE_STRING@@PEA_K@Z.c)
 */

int __fastcall DXGMONITOR::_SetAppOverride(DXGMONITOR *this, GUID *Guid, int a3, __int64 a4)
{
  __int64 v5; // rax
  int result; // eax
  NTSTATUS v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-89h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+38h] [rbp-81h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-71h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v21[128]; // [rsp+60h] [rbp-59h] BYREF

  v5 = *(_QWORD *)&Guid->Data1 - *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1;
  if ( *(_QWORD *)&Guid->Data1 == *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1 )
    v5 = *(_QWORD *)Guid->Data4 - *(_QWORD *)GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data4;
  if ( v5 )
    return -1073741811;
  memset(v21, 0, sizeof(v21));
  *(_QWORD *)&GuidString.Length = 0x800000LL;
  GuidString.Buffer = (wchar_t *)v21;
  result = RtlStringFromGUID(Guid, &GuidString);
  if ( result >= 0 )
    return result;
  result = DXGMONITOR::_GetAppOverrideKey(this, &GuidString, &v19);
  if ( result < 0 )
    return result;
  if ( v19 != a4 )
    return -1073741811;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 0LL, &KeyHandle);
  if ( result >= 0 )
  {
    if ( a3 )
      v10 = ZwSetValueKey(KeyHandle, &ValueName, 0, 0xBu, &GuidString, 8u);
    else
      v10 = ZwDeleteValueKey(KeyHandle, &GuidString);
    v11 = v10;
    ZwClose(KeyHandle);
    if ( v11 >= 0 )
    {
      v16 = *(_QWORD *)&Guid->Data1 - *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1;
      if ( *(_QWORD *)&Guid->Data1 == *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1 )
        v16 = *(_QWORD *)Guid->Data4 - *(_QWORD *)GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data4;
      if ( !v16 )
        *((_DWORD *)this + 10) = *((_DWORD *)this + 10) & 0xFFFFEFFF | (a3 != 0 ? 0x1000 : 0);
      return 0;
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v13, v12, v14);
      *(_QWORD *)(v15 + 32) = v11;
      *(_QWORD *)(v15 + 24) = this;
      WdLogEvent5_WdError(v15);
      return v11;
    }
  }
  return result;
}

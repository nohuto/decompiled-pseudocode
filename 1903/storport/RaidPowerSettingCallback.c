/*
 * XREFs of RaidPowerSettingCallback @ 0x1C0018FC0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0015A68 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C0015B98 (RaCallMiniportAdapterControl.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     McTemplateK0qqqqq @ 0x1C00323D4 (McTemplateK0qqqqq.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0033B14 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0033B34 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003F6C8 (RaidAdapterSetMaxOperationalPower.c)
 *     StorpCSEntryTelemetry @ 0x1C004BDC0 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C004C1B8 (StorpCSExitTelemetry.c)
 */

__int64 __fastcall RaidPowerSettingCallback(
        _OWORD *SettingGuid,
        unsigned int *Value,
        ULONG ValueLength,
        _QWORD *Context)
{
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  __int128 v11; // xmm0
  char v13; // di
  unsigned int SystemPowerHint; // eax
  __int64 v15; // rdx
  char v16; // cl
  __int64 v17; // rdx
  __int64 v18; // r8
  int SystemPowerResumeLatency; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  char v23; // r9
  char v24; // r10
  char v25; // al
  __int64 v26; // r8
  int v27; // eax
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  char v31; // r10
  _QWORD v32[5]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v33; // [rsp+68h] [rbp-18h]
  __int64 v34; // [rsp+70h] [rbp-10h]

  memset(&v32[1], 0, 0x20uLL);
  v33 = 0LL;
  v34 = 0LL;
  v9 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
    v9 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( v9 )
  {
    v10 = *(_QWORD *)SettingGuid - *(_QWORD *)&GUID_DISK_MAX_POWER.Data1;
    if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_DISK_MAX_POWER.Data1 )
      v10 = *((_QWORD *)SettingGuid + 1) - *(_QWORD *)GUID_DISK_MAX_POWER.Data4;
    if ( !v10 )
    {
      v32[0] = *Value;
      if ( v32[0] <= 0x64uLL )
      {
        LOBYTE(v8) = 1;
        RaidAdapterSetMaxOperationalPower(Context, v32, v8);
      }
      return 0LL;
    }
    v11 = *SettingGuid;
    v32[3] = Value;
    LODWORD(v32[4]) = ValueLength;
    *(_OWORD *)&v32[1] = v11;
    if ( !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 5) )
      return 0LL;
LABEL_8:
    RaCallMiniportAdapterControl((__int64)(Context + 37));
    return 0LL;
  }
  if ( ValueLength == 4 && Value )
  {
    v13 = *(_BYTE *)Value;
    if ( !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 12) || !Context[629] || !Context[631] )
      return 0LL;
    SystemPowerHint = RaidAdapterGetSystemPowerHint(Context);
    RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint, v15, SystemPowerHint);
    v33 = 0x1000000001LL;
    if ( v13 == 1 )
    {
      v16 = *((_BYTE *)Context + 108);
      if ( v16 < 0 )
        return 0LL;
      *((_BYTE *)Context + 108) = v16 | 0x80;
      LODWORD(v34) = RaidAdapterGetSystemPowerHint(Context);
      SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency((unsigned int)v34, v17, v18);
      HIDWORD(v34) = SystemPowerResumeLatency;
      if ( StorEtwLoggingEnabled && (byte_1C0061741 & 1) != 0 )
        McTemplateK0qqqqq(v21, v20, v22, *((_DWORD *)Context + 14), v22, v24, v23, SystemPowerResumeLatency);
      StorpCSEntryTelemetry(Context);
    }
    else
    {
      if ( v13 )
        return 0LL;
      v25 = *((_BYTE *)Context + 108);
      if ( v25 >= 0 )
        return 0LL;
      *((_BYTE *)Context + 108) = v25 & 0x7F;
      LODWORD(v34) = RaidAdapterGetSystemPowerHint(Context);
      v27 = RaidAdapterGetSystemPowerResumeLatency((unsigned int)v34, (unsigned int)v34, v26);
      HIDWORD(v34) = v27;
      if ( StorEtwLoggingEnabled && (byte_1C0061741 & 1) != 0 )
        McTemplateK0qqqqq(v29, v28, v30, *((_DWORD *)Context + 14), v30, v31, v28, v27);
      StorpCSExitTelemetry(Context);
    }
    goto LABEL_8;
  }
  return 3221225485LL;
}

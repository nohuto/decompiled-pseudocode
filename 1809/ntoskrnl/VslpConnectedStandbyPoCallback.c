/*
 * XREFs of VslpConnectedStandbyPoCallback @ 0x14081A340
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslpConnectedStandbyPoCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        PVOID Context)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  _BYTE v9[12]; // [rsp+20h] [rbp-88h] BYREF
  int v10; // [rsp+2Ch] [rbp-7Ch]

  v5 = *(_QWORD *)&SettingGuid->Data1;
  v6 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v6 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v6 )
  {
    v10 = 1;
LABEL_9:
    v9[8] = *Value != 0;
    return VslpEnterIumSecureMode(2u, 55LL, 0, (__int64)v9);
  }
  v7 = *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 - v5;
  if ( *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 == v5 )
    v7 = *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v7 )
  {
    v10 = 2;
    goto LABEL_9;
  }
  return -1073741637;
}

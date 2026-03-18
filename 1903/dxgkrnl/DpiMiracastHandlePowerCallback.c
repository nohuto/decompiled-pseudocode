/*
 * XREFs of DpiMiracastHandlePowerCallback @ 0x1C02A4AE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C013DD00 (DxgkMiracastStopAllMiracastSessions.c)
 */

__int64 __fastcall DpiMiracastHandlePowerCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r8
  union _LARGE_INTEGER v10[2]; // [rsp+20h] [rbp-49h] BYREF
  _DWORD v11[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+38h] [rbp-31h]
  __int128 v13; // [rsp+40h] [rbp-29h]
  __int64 v14; // [rsp+50h] [rbp-19h]
  __int64 v15; // [rsp+58h] [rbp-11h]
  __int64 v16; // [rsp+60h] [rbp-9h]
  __int64 v17; // [rsp+68h] [rbp-1h]
  _DWORD v18[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v19; // [rsp+78h] [rbp+Fh]
  __int128 v20; // [rsp+80h] [rbp+17h]
  __int64 v21; // [rsp+90h] [rbp+27h]
  __int64 v22; // [rsp+98h] [rbp+2Fh]
  int v23; // [rsp+A0h] [rbp+37h]
  __int64 v24; // [rsp+A4h] [rbp+3Bh]
  int v25; // [rsp+ACh] [rbp+43h]

  v5 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  v4 = *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  v10[0].QuadPart = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( v5 )
  {
    v6 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_MONITOR_POWER_ON.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_MONITOR_POWER_ON.Data1 )
      v6 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_MONITOR_POWER_ON.Data4;
    if ( !v6 )
    {
      if ( *Value )
      {
        if ( byte_1C00A2759 && KeCancelTimer(&Timer) )
        {
          _InterlockedIncrement(&dword_1C00A2B70);
          v22 = 0LL;
          v18[0] = 6;
          v20 = 0uLL;
          v18[1] = 64;
          v21 = 0LL;
          v19 = 0LL;
          v23 = 73;
          v24 = 2LL;
          v25 = 0;
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v18, 0x200000000LL, v8);
        }
        byte_1C00A2759 = 0;
      }
      else
      {
        byte_1C00A2759 = 1;
        if ( byte_1C00A2757 && dword_1C00A2B58 )
        {
          v10[0].QuadPart = -300000000LL;
          KeSetTimer(&Timer, (LARGE_INTEGER)-300000000LL, &Dpc);
          v15 = 0LL;
          v11[0] = 6;
          v13 = 0uLL;
          v11[1] = 64;
          v14 = 0LL;
          v12 = 0LL;
          v16 = 73LL;
          v17 = 0LL;
          DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v11, 0x200000000LL, v7);
        }
      }
    }
  }
  else if ( *Value )
  {
    v10[0].QuadPart = -300000000LL;
    DxgkMiracastStopAllMiracastSessions(1, v10, 0x89u);
  }
  return 0LL;
}

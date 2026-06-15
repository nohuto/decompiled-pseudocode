/*
 * XREFs of ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x1800050F0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800010A0 (_TlgWrite.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000499C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x180026CE0 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 */

__int64 __fastcall LowPowerEpochNotificationCallback(void *a1, __int64 a2, _DWORD *a3)
{
  int v3; // esi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v11; // [rsp+50h] [rbp-38h]
  int v12; // [rsp+58h] [rbp-30h]
  int v13; // [rsp+5Ch] [rbp-2Ch]
  int *v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+6Ch] [rbp-1Ch]

  if ( a3[4] == 4
    && *(_QWORD *)a3 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1
    && *((_QWORD *)a3 + 1) == *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 )
  {
    v3 = a3[5];
    if ( (v3 != 0) != g_bLowPowerEpoch )
    {
      v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      v5 = g_bIsSystemAsleep;
      g_bLowPowerEpoch = v3 != 0;
      if ( !v3 )
        v5 = 1;
      g_bIsSystemAsleep = v5;
      v6 = (const struct _TlgProvider_t *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
      if ( *(_DWORD *)v6 > 4u )
      {
        v13 = 0;
        v16 = 0;
        v11 = &g_bLowPowerEpoch;
        v14 = &g_bIsSystemAsleep;
        v12 = 4;
        v15 = 4;
        TlgWrite(v6, &unk_180042A3F, v7, v8, 4u, &pData);
      }
      TsSessionOnLowPowerEpochStateChanged();
      if ( v4 )
        LeaveCriticalSection(v4);
    }
  }
  return 0LL;
}

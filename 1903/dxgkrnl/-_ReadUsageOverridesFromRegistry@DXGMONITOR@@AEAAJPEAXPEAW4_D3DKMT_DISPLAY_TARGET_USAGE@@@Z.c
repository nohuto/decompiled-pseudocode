/*
 * XREFs of ?_ReadUsageOverridesFromRegistry@DXGMONITOR@@AEAAJPEAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C016FA74
 * Callers:
 *     ?_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C016F9D8 (-_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_ReadUsageOverridesFromMonitorStore@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02CB53C (-_ReadUsageOverridesFromMonitorStore@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall DXGMONITOR::_ReadUsageOverridesFromRegistry(
        DXGMONITOR *this,
        void *a2,
        enum _D3DKMT_DISPLAY_TARGET_USAGE *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v11; // rax
  int v12; // [rsp+30h] [rbp-79h] BYREF
  int v13; // [rsp+34h] [rbp-75h] BYREF
  int v14; // [rsp+38h] [rbp-71h] BYREF
  int v15; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int64 v16; // [rsp+40h] [rbp-69h] BYREF
  int v17; // [rsp+48h] [rbp-61h]
  const WCHAR *v18; // [rsp+50h] [rbp-59h]
  int *v19; // [rsp+58h] [rbp-51h]
  int v20; // [rsp+60h] [rbp-49h]
  int *v21; // [rsp+68h] [rbp-41h]
  int v22; // [rsp+70h] [rbp-39h]
  __int64 v23; // [rsp+78h] [rbp-31h]
  int v24; // [rsp+80h] [rbp-29h]
  const WCHAR *v25; // [rsp+88h] [rbp-21h]
  int *v26; // [rsp+90h] [rbp-19h]
  int v27; // [rsp+98h] [rbp-11h]
  int *v28; // [rsp+A0h] [rbp-9h]
  int v29; // [rsp+A8h] [rbp-1h]
  __int64 v30; // [rsp+B0h] [rbp+7h]
  int v31; // [rsp+B8h] [rbp+Fh]
  _BYTE v32[40]; // [rsp+C0h] [rbp+17h] BYREF

  v12 = 0;
  v14 = 0;
  v13 = 0;
  v15 = 0;
  v16 = 0LL;
  v23 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v18 = L"HMDDevicePresent";
  v19 = &v12;
  v21 = &v14;
  v25 = L"SpecialUseDevicePresent";
  v26 = &v13;
  v17 = 288;
  v24 = 288;
  v20 = 67108868;
  v22 = 4;
  v27 = 67108868;
  v29 = 4;
  v28 = &v15;
  memset(v32, 0, sizeof(v32));
  v5 = RtlQueryRegistryValuesEx(0x40000000LL, a2, &v16, 0LL, 0LL);
  v9 = v5;
  if ( v5 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v11 + 24) = v9;
    WdLogEvent5_WdError(v11);
    LODWORD(v9) = 0;
    *(_DWORD *)a3 = 0;
  }
  else if ( v12 )
  {
    *(_DWORD *)a3 = 1;
  }
  else
  {
    *(_DWORD *)a3 = v13 != 0 ? 2 : 0;
  }
  return (unsigned int)v9;
}

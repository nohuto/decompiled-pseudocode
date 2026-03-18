/*
 * XREFs of ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1C00ACF28
 * Callers:
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C015E660 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000E62C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0212BC0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall DXGGLOBAL::HdrPowerPolicyChangeCallout(DXGGLOBAL *this)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v8[10]; // [rsp+30h] [rbp-68h] BYREF

  v7[0] = 0;
  v1 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v7, 1);
  v3 = v1;
  if ( v1 < 0 )
    goto LABEL_4;
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v2) + 5113) )
  {
    *((_DWORD *)DXGGLOBAL::GetGlobal(v4) + 5112) = 1;
    goto LABEL_6;
  }
  memset(v8, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v8[1]);
  v8[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v8[3]) = 63;
  LOBYTE(v8[6]) = -1;
  v5 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v8, 0x200000000uLL);
  v3 = v5;
  if ( v5 < 0 )
  {
LABEL_4:
    v6 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v6 + 24) = v3;
    WdLogEvent5_WdError(v6);
  }
LABEL_6:
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v7);
}

/*
 * XREFs of ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1C00C2FF8
 * Callers:
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1C017FBC0 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0003810 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003868 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0246830 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall DXGGLOBAL::HdrPowerPolicyChangeCallout(DXGGLOBAL *this)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  _BYTE v10[16]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v11[10]; // [rsp+30h] [rbp-68h] BYREF

  v10[0] = 0;
  v1 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v10, 1);
  v5 = v1;
  if ( v1 < 0 )
    goto LABEL_4;
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v3, v2) + 76031) )
  {
    *((_DWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 76030) = 1;
    goto LABEL_6;
  }
  memset(v11, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v11[1]);
  v11[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v11[3]) = 63;
  LOBYTE(v11[6]) = -1;
  v8 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v11, 0x200000000uLL);
  v5 = v8;
  if ( v8 < 0 )
  {
LABEL_4:
    v9 = WdLogNewEntry5_WdError(v3, v2, v4);
    *(_QWORD *)(v9 + 24) = v5;
    WdLogEvent5_WdError(v9);
  }
LABEL_6:
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v10);
}

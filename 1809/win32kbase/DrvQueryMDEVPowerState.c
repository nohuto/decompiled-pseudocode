/*
 * XREFs of DrvQueryMDEVPowerState @ 0x1C004B930
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0049150 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004B98C (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1C01050FC (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvQueryMDEVPowerState(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 i; // rdx
  __int64 v5; // r8
  __int64 v7; // rax

  v2 = 0LL;
  v3 = *(unsigned int *)(a1 + 20);
  if ( !(_DWORD)v3 )
    return 1LL;
  for ( i = a1 + 32; ; i += 40LL )
  {
    v5 = *(_QWORD *)(*(_QWORD *)i + 2576LL);
    if ( !v5 )
      break;
    if ( *(int *)(v5 + 160) < 0 )
      return 0LL;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= (unsigned int)v3 )
      return 1LL;
  }
  v7 = WdLogNewEntry5_WdError(v3, i, 0LL);
  *(_QWORD *)(v7 + 24) = *(_QWORD *)(a1 + 40 * v2 + 32);
  *(_QWORD *)(v7 + 32) = (unsigned int)v2;
  WdLogEvent5_WdError(v7);
  return 0LL;
}

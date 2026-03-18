/*
 * XREFs of ?MapInputToMonitorOnReason@@YA?AW4POWER_MONITOR_REQUEST_REASON@@W4_LINP_SOURCE@@@Z @ 0x1C00F4DFC
 * Callers:
 *     EditionKeepMachineUp @ 0x1C00F4C50 (EditionKeepMachineUp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapInputToMonitorOnReason(int a1)
{
  int v1; // ecx
  __int64 result; // rax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 31LL;
  v3 = v1 - 1;
  if ( !v3 )
    return 32LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 36LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 37LL;
  result = 4LL;
  v6 = v5 - 4;
  if ( !v6 )
    return 38LL;
  v7 = v6 - 2;
  if ( !v7 )
    return 33LL;
  v8 = v7 - 2;
  if ( !v8 )
    return 34LL;
  v9 = v8 - 1;
  if ( !v9 )
    return 39LL;
  if ( v9 == 2 )
    return 35LL;
  return result;
}

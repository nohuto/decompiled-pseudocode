/*
 * XREFs of PopErratumUpdateCallback @ 0x1402F7030
 * Callers:
 *     <none>
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x14069D520 (PopSetPowerSettingValueAcDc.c)
 *     ExQueryWnfStateData @ 0x1406E9F80 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopErratumUpdateCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const GUID *a6)
{
  int v7; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v8[4]; // [rsp+24h] [rbp-14h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF

  v7 = 4;
  if ( (int)ExQueryWnfStateData(a1, &v9, v8, &v7) >= 0 )
    PopSetPowerSettingValueAcDc(a6 + 1);
  return 0LL;
}

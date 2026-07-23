/*
 * XREFs of PopWnfMixedRealityCallback @ 0x140720190
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopSetPowerSettingValueAcDc @ 0x14058BA3C (PopSetPowerSettingValueAcDc.c)
 *     ExQueryWnfStateData @ 0x1406C9520 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfMixedRealityCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v5; // [rsp+30h] [rbp-18h] BYREF

  v3 = 8;
  v1 = ExQueryWnfStateData(a1, &v4, &v5, &v3);
  if ( v1 >= 0 )
  {
    if ( v3 < 8 )
    {
      return 0;
    }
    else
    {
      v3 = (v5 >> 1) & 1;
      PopSetPowerSettingValueAcDc(&GUID_MIXED_REALITY_MODE, 4LL, &v3);
    }
  }
  return (unsigned int)v1;
}

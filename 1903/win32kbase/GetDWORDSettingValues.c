/*
 * XREFs of GetDWORDSettingValues @ 0x1C0062190
 * Callers:
 *     <none>
 * Callees:
 *     GetDWORDSettingValuesEx @ 0x1C00621B0 (GetDWORDSettingValuesEx.c)
 */

__int64 __fastcall GetDWORDSettingValues(__int64 a1, __int64 a2, __int64 a3)
{
  return GetDWORDSettingValuesEx(a1, a2, a3, 0LL);
}

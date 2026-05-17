/*
 * XREFs of sub_18008B9D4 @ 0x18008B9D4
 * Callers:
 *     sub_18000FB00 @ 0x18000FB00 (sub_18000FB00.c)
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x18000F520 (RtlSidDominatesForTrust.c)
 */

bool __fastcall sub_18008B9D4(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool result; // al
  bool v6; // [rsp+40h] [rbp+18h] BYREF

  result = 0;
  v6 = 0;
  if ( !a1 || (*a4 = RtlSidDominatesForTrust(a1, a2, &v6), !(result = v6)) )
    *a4 = -1073741790;
  return result;
}

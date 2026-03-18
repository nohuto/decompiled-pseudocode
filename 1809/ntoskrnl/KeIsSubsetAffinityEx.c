/*
 * XREFs of KeIsSubsetAffinityEx @ 0x14028E2D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAndAffinityEx @ 0x1400DC6E0 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x14018A2D0 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v4[88]; // [rsp+20h] [rbp-C8h] BYREF

  KeAndAffinityEx(a1, a2, v4);
  return KeIsEqualAffinityEx(a1, v4);
}

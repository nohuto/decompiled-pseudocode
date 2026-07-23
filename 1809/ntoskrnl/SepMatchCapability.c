/*
 * XREFs of SepMatchCapability @ 0x140122730
 * Callers:
 *     SepMaximumAccessCheck @ 0x1400AACE0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400AB2B0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14015C2B4 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14015C3D4 (SepNormalAccessCheckEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x1400AAAA0 (SepSidInTokenSidHash.c)
 */

char __fastcall SepMatchCapability(__int64 a1, int a2, void *a3, int a4, _BYTE *a5, _DWORD *a6)
{
  char result; // al

  result = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(a1 + 808), 0LL, a3, 0, 1, 0, 0);
  if ( result )
  {
    *a6 |= a4 & a2;
    result = (char)a5;
    *a5 = 1;
  }
  return result;
}

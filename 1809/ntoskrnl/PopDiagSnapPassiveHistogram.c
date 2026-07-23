/*
 * XREFs of PopDiagSnapPassiveHistogram @ 0x14014286C
 * Callers:
 *     PopTraceThermalZonePassiveHistogram @ 0x1401426F0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1402E29BC (PopTraceThermalRequestPassiveHistogram.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopDiagSnapPassiveHistogram(__int64 a1, _DWORD *a2)
{
  __int64 *v3; // r8
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax

  v3 = (__int64 *)(a1 + 16);
  v4 = 21LL;
  do
  {
    v5 = v3[21];
    v6 = *v3;
    *v3 = v5;
    v7 = v6 - v5;
    ++v3;
    result = 0xD6BF94D5E57A42BDuLL * v7;
    *a2++ = v7 / 0x989680;
    --v4;
  }
  while ( v4 );
  return result;
}

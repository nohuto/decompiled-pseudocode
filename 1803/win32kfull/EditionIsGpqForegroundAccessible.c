/*
 * XREFs of EditionIsGpqForegroundAccessible @ 0x1C01A19C0
 * Callers:
 *     <none>
 * Callees:
 *     IsGpqForegroundAccessible @ 0x1C005DF64 (IsGpqForegroundAccessible.c)
 *     MSGLUA_GPQFOREGROUND @ 0x1C0135EDC (MSGLUA_GPQFOREGROUND.c)
 */

__int64 __fastcall EditionIsGpqForegroundAccessible(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( (unsigned int)IsGpqForegroundAccessible(a1, a2) )
    return 1LL;
  MSGLUA_GPQFOREGROUND(v3, v2);
  return 0LL;
}

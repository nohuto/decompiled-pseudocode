/*
 * XREFs of EditionIsGpqForegroundInaccessible @ 0x1C005DA20
 * Callers:
 *     <none>
 * Callees:
 *     IsGpqForegroundAccessible @ 0x1C005DF64 (IsGpqForegroundAccessible.c)
 *     MSGLUA_GPQFOREGROUND @ 0x1C0135EDC (MSGLUA_GPQFOREGROUND.c)
 */

__int64 __fastcall EditionIsGpqForegroundInaccessible(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = IsGpqForegroundAccessible(a1);
  v2 = 0;
  if ( !v1 )
  {
    MSGLUA_GPQFOREGROUND(0LL);
    return 1;
  }
  return v2;
}

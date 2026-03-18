/*
 * XREFs of EditionIsGpqForegroundAccessible @ 0x1C01C3270
 * Callers:
 *     <none>
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C0006948 (MSGLUA_GPQFOREGROUND.c)
 *     IsGpqForegroundAccessible @ 0x1C00AFFBC (IsGpqForegroundAccessible.c)
 */

__int64 __fastcall EditionIsGpqForegroundAccessible(unsigned int a1, __int64 a2)
{
  if ( (unsigned int)IsGpqForegroundAccessible(a1, a2) )
    return 1LL;
  MSGLUA_GPQFOREGROUND();
  return 0LL;
}

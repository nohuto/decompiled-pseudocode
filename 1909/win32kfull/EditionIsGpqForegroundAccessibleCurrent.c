/*
 * XREFs of EditionIsGpqForegroundAccessibleCurrent @ 0x1C001F3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C001F58C (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C0114088 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 */

__int64 __fastcall EditionIsGpqForegroundAccessibleCurrent(int a1)
{
  if ( (unsigned int)IsGpqForegroundAccessibleCurrent(a1) )
    return 1LL;
  MSGLUA_GPQFOREGROUND();
  return 0LL;
}

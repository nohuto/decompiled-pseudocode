/*
 * XREFs of LdrpFindTlsEntry @ 0x180025164
 * Callers:
 *     LdrpCallTlsInitializers @ 0x18002507C (LdrpCallTlsInitializers.c)
 *     LdrpReleaseTlsEntry @ 0x18007E45C (LdrpReleaseTlsEntry.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall LdrpFindTlsEntry(void *a1)
{
  _UNKNOWN **result; // rax

  for ( result = (_UNKNOWN **)LdrpTlsList; result != &LdrpTlsList; result = (_UNKNOWN **)*result )
  {
    if ( result[7] == a1 )
      return result;
  }
  return 0LL;
}

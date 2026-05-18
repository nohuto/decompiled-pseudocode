/*
 * XREFs of strrchr @ 0x180125AC0
 * Callers:
 *     sub_18011B798 @ 0x18011B798 (sub_18011B798.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strrchr(const char *Str, int Ch)
{
  return __imp_strrchr(Str, Ch);
}

/*
 * XREFs of strrchr @ 0x180125BD0
 * Callers:
 *     sub_18011B8A8 @ 0x18011B8A8 (sub_18011B8A8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strrchr(const char *Str, int Ch)
{
  return __imp_strrchr(Str, Ch);
}

/*
 * XREFs of strchr @ 0x180125ABA
 * Callers:
 *     sub_18011BF14 @ 0x18011BF14 (sub_18011BF14.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strchr(const char *Str, int Val)
{
  return __imp_strchr(Str, Val);
}

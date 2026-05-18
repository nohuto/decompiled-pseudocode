/*
 * XREFs of strchr @ 0x180125BCA
 * Callers:
 *     sub_18011C024 @ 0x18011C024 (sub_18011C024.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strchr(const char *Str, int Val)
{
  return __imp_strchr(Str, Val);
}

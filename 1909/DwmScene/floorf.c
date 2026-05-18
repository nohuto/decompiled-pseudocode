/*
 * XREFs of floorf @ 0x18012731A
 * Callers:
 *     sub_180104470 @ 0x180104470 (sub_180104470.c)
 *     sub_180104F84 @ 0x180104F84 (sub_180104F84.c)
 *     sub_18011C9A8 @ 0x18011C9A8 (sub_18011C9A8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf(float X)
{
  return __imp_floorf(X);
}

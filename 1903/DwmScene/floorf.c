/*
 * XREFs of floorf @ 0x18012720A
 * Callers:
 *     sub_180104360 @ 0x180104360 (sub_180104360.c)
 *     sub_180104E74 @ 0x180104E74 (sub_180104E74.c)
 *     sub_18011C898 @ 0x18011C898 (sub_18011C898.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf(float X)
{
  return __imp_floorf(X);
}

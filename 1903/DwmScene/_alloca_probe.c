/*
 * XREFs of _alloca_probe @ 0x180126020
 * Callers:
 *     sub_18000BF3C @ 0x18000BF3C (sub_18000BF3C.c)
 *     sub_18000D380 @ 0x18000D380 (sub_18000D380.c)
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 *     sub_1800812E0 @ 0x1800812E0 (sub_1800812E0.c)
 *     sub_1800919D8 @ 0x1800919D8 (sub_1800919D8.c)
 *     sub_1800E3318 @ 0x1800E3318 (sub_1800E3318.c)
 *     sub_180107A64 @ 0x180107A64 (sub_180107A64.c)
 *     sub_180107B54 @ 0x180107B54 (sub_180107B54.c)
 *     sub_18011D69C @ 0x18011D69C (sub_18011D69C.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
    {
      StackLimit -= 4096;
      *StackLimit = 0;
    }
    while ( v1 != StackLimit );
  }
  return result;
}

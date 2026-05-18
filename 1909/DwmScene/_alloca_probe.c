/*
 * XREFs of _alloca_probe @ 0x180126130
 * Callers:
 *     sub_18000BF3C @ 0x18000BF3C (sub_18000BF3C.c)
 *     sub_18000D380 @ 0x18000D380 (sub_18000D380.c)
 *     sub_180045920 @ 0x180045920 (sub_180045920.c)
 *     sub_1800813F0 @ 0x1800813F0 (sub_1800813F0.c)
 *     sub_180091AE8 @ 0x180091AE8 (sub_180091AE8.c)
 *     sub_1800E3428 @ 0x1800E3428 (sub_1800E3428.c)
 *     sub_180107B74 @ 0x180107B74 (sub_180107B74.c)
 *     sub_180107C64 @ 0x180107C64 (sub_180107C64.c)
 *     sub_18011D7AC @ 0x18011D7AC (sub_18011D7AC.c)
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

/*
 * XREFs of RtlGetExtendedContextLength @ 0x180020CE0
 * Callers:
 *     sub_180112808 @ 0x180112808 (sub_180112808.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x18001ECD0 (RtlGetExtendedContextLength2.c)
 *     sub_18001ED88 @ 0x18001ED88 (sub_18001ED88.c)
 */

__int64 __fastcall RtlGetExtendedContextLength(int a1)
{
  __int64 result; // rax
  unsigned int v2; // r10d
  _DWORD *v3; // r11
  __int64 v4; // r8
  int v5; // [rsp+40h] [rbp+18h] BYREF

  result = sub_18001ED88(a1, &v5);
  v4 = 0LL;
  if ( (int)result >= 0 )
  {
    if ( (v5 & 2) != 0 )
      v4 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    return RtlGetExtendedContextLength2(v2, v3, v4);
  }
  return result;
}

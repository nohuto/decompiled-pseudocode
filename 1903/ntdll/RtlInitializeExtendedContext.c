/*
 * XREFs of RtlInitializeExtendedContext @ 0x180020C80
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x18001EA60 (RtlInitializeExtendedContext2.c)
 *     sub_18001ED88 @ 0x18001ED88 (sub_18001ED88.c)
 */

__int64 __fastcall RtlInitializeExtendedContext(__int64 a1, int a2)
{
  __int64 result; // rax
  int v4; // r10d
  _QWORD *v5; // r11
  unsigned __int64 v6; // r9
  int v7; // [rsp+48h] [rbp+20h] BYREF

  result = sub_18001ED88(a2, &v7);
  v6 = 0LL;
  if ( (int)result >= 0 )
  {
    if ( (v7 & 2) != 0 )
      v6 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    return RtlInitializeExtendedContext2(a1, v4, v5, v6);
  }
  return result;
}

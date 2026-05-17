/*
 * XREFs of RtlInitializeExtendedContext @ 0x18007C0A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x180008450 (RtlInitializeExtendedContext2.c)
 *     RtlpValidateContextFlags @ 0x180008730 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlInitializeExtendedContext(__int64 a1, int a2)
{
  __int64 result; // rax
  int v4; // r10d
  _QWORD *v5; // r11
  unsigned __int64 v6; // r9
  int v7; // [rsp+48h] [rbp+20h] BYREF

  result = RtlpValidateContextFlags(a2, &v7);
  v6 = 0LL;
  if ( (int)result >= 0 )
  {
    if ( (v7 & 2) != 0 )
      v6 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    return RtlInitializeExtendedContext2(a1, v4, v5, v6);
  }
  return result;
}

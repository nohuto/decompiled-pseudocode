/*
 * XREFs of sub_18000B6E4 @ 0x18000B6E4
 * Callers:
 *     sub_18000C9C4 @ 0x18000C9C4 (sub_18000C9C4.c)
 * Callees:
 *     sub_18000AA90 @ 0x18000AA90 (sub_18000AA90.c)
 *     sub_18000B420 @ 0x18000B420 (sub_18000B420.c)
 */

signed __int64 __fastcall sub_18000B6E4(char a1)
{
  __int64 v1; // rbx
  signed __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  signed __int64 v6; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = qword_180268A90;
  v2 = 0LL;
  if ( qword_180268A90 )
  {
    if ( !*(_QWORD *)(qword_180268A90 + 8) )
    {
      v4 = *(_QWORD *)qword_180268A90;
      v8 = 0LL;
      if ( (int)sub_18000AA90(v4, &v8) >= 0 && !*(_QWORD *)(v1 + 8) )
        *(_QWORD *)(v1 + 8) = v8;
    }
    v5 = (*(_QWORD *)(v1 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v1 + 8) != 0LL);
    if ( v5 )
    {
      v6 = sub_18000B420(v5 + 8, a1);
      v2 = v6;
      if ( v6 )
      {
        if ( !*(_QWORD *)(v6 + 8) )
          *(_QWORD *)(v6 + 8) = v5 + 4;
      }
    }
  }
  return v2;
}

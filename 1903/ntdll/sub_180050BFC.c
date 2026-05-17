/*
 * XREFs of sub_180050BFC @ 0x180050BFC
 * Callers:
 *     sub_18004FB14 @ 0x18004FB14 (sub_18004FB14.c)
 * Callees:
 *     sub_180050C8C @ 0x180050C8C (sub_180050C8C.c)
 */

__int64 __fastcall sub_180050BFC(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v5; // rdi
  unsigned __int8 v6; // al
  __int64 v7; // r14
  __int64 v8; // r15

  v2 = (__int64 *)(a1 + 128);
  v3 = 129LL;
  do
  {
    result = *v2;
    if ( (*v2 & 1) == 0 )
    {
      v5 = *v2;
      v6 = *(_BYTE *)(*v2 + 2);
      if ( v6 )
      {
        v7 = 0LL;
        v8 = v6;
        do
        {
          sub_180050C8C(a1, *(_QWORD *)(v7 + *(_QWORD *)(v5 + 96)));
          v7 += 8LL;
          --v8;
        }
        while ( v8 );
      }
      result = sub_180050C8C(a1, v5);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}

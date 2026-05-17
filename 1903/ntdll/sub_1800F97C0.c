/*
 * XREFs of sub_1800F97C0 @ 0x1800F97C0
 * Callers:
 *     sub_1800F915C @ 0x1800F915C (sub_1800F915C.c)
 * Callees:
 *     sub_1800F91F0 @ 0x1800F91F0 (sub_1800F91F0.c)
 */

__int64 __fastcall sub_1800F97C0(_QWORD *a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v4; // r10
  unsigned __int16 *v5; // r8
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned __int16 *v11; // r11
  unsigned __int16 *v12; // [rsp+30h] [rbp+8h] BYREF

  result = a1[5];
  a1[13] = result;
  if ( result != a1[10] )
  {
    v12 = (unsigned __int16 *)(result - 2);
    result = sub_1800F91F0((__int64)a1, &v12);
    v5 = v12;
    v6 = -4LL;
    if ( *(int *)(v4 + 88) <= 0xFFFF )
      v6 = -2LL;
    if ( v12 != (unsigned __int16 *)(*(_QWORD *)(v4 + 80) + v6) )
    {
      v7 = *(_QWORD *)(v4 + 112);
      v8 = *(_QWORD *)(v7 + 32);
      v9 = *(_QWORD *)(v7 + 40);
      do
      {
        v10 = result & 0x7F;
        result = v9 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)result >> 7) + v8) << 7);
        LOBYTE(v7) = *(_BYTE *)(v10 + result - 128) & 0x3F;
        if ( (unsigned __int8)v7 < a2 )
          break;
        *(_QWORD *)(v4 + 104) = v5;
        v12 = v5 - 1;
        result = sub_1800F91F0(v7, &v12);
        v5 = v12;
      }
      while ( v12 != v11 );
    }
  }
  return result;
}

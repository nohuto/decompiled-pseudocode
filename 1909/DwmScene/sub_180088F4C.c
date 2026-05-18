/*
 * XREFs of sub_180088F4C @ 0x180088F4C
 * Callers:
 *     sub_18008CBD8 @ 0x18008CBD8 (sub_18008CBD8.c)
 * Callees:
 *     sub_180088528 @ 0x180088528 (sub_180088528.c)
 *     sub_180088ADC @ 0x180088ADC (sub_180088ADC.c)
 *     sub_18008D858 @ 0x18008D858 (sub_18008D858.c)
 */

__int64 __fastcall sub_180088F4C(__int64 ***a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 *v7; // rbx
  _QWORD *v8; // rax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v3 = (__int64 *)*a1;
  v7 = (*a1)[1];
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( (int)sub_18008D858(v7 + 4, a3) >= 0 )
    {
      v3 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  if ( v3 == (__int64 *)*a1 || (int)sub_18008D858(a3, v3 + 4) < 0 )
  {
    v11 = a3;
    v8 = (_QWORD *)sub_180088528((__int64)a1, (__int64)&unk_1801E48DE, &v11);
    sub_180088ADC(a1, &v10, v3, (__int64)(v8 + 4), v8);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}

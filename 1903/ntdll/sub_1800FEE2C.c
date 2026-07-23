/*
 * XREFs of sub_1800FEE2C @ 0x1800FEE2C
 * Callers:
 *     sub_1800FE4E0 @ 0x1800FE4E0 (sub_1800FE4E0.c)
 * Callees:
 *     sub_180005F60 @ 0x180005F60 (sub_180005F60.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800FDA88 @ 0x1800FDA88 (sub_1800FDA88.c)
 */

_QWORD *__fastcall sub_1800FEE2C(const void **BaseAddress, __int16 a2, __int16 a3, char a4)
{
  _QWORD *v4; // rdi
  __int16 v7; // ax
  __int16 v8; // dx
  size_t v9; // rsi
  size_t v10; // rbp
  _QWORD *v11; // rax

  v4 = 0LL;
  v7 = 4;
  if ( a2 >= 1 )
    v7 = a2;
  v8 = 40;
  if ( a3 >= 1 )
    v8 = a3;
  if ( BaseAddress )
  {
    if ( v7 >= (int)*((unsigned __int16 *)BaseAddress + 3) && v8 >= (int)*((unsigned __int16 *)BaseAddress + 5) )
    {
      v9 = 2LL * *((unsigned __int16 *)BaseAddress + 2);
      v10 = 2LL * *((unsigned __int16 *)BaseAddress + 4);
      v11 = sub_1800FDA88(v7, v8);
      v4 = v11;
      if ( v11 )
      {
        memmove((void *)v11[2], BaseAddress[2], v9);
        memmove((void *)v4[3], BaseAddress[3], v10);
        *((_WORD *)v4 + 3) = *((_WORD *)BaseAddress + 3);
        *((_WORD *)v4 + 5) = *((_WORD *)BaseAddress + 5);
        if ( !a4 )
          sub_180005F60(BaseAddress);
      }
    }
  }
  return v4;
}

/*
 * XREFs of RtlpMuiRegResizeStringPool @ 0x1800FEF0C
 * Callers:
 *     RtlpMuiRegGrowStringPool @ 0x1800FE5C0 (RtlpMuiRegGrowStringPool.c)
 * Callees:
 *     RtlpMuiRegFreeStringPool @ 0x180005F60 (RtlpMuiRegFreeStringPool.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     RtlpMuiRegCreateStringPool @ 0x1800FDB68 (RtlpMuiRegCreateStringPool.c)
 */

_QWORD *__fastcall RtlpMuiRegResizeStringPool(const void **BaseAddress, __int16 a2, __int16 a3, char a4)
{
  _QWORD *v4; // rdi
  __int16 v7; // ax
  __int16 v8; // dx
  size_t v9; // rsi
  size_t v10; // rbp
  _QWORD *StringPool; // rax

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
      StringPool = RtlpMuiRegCreateStringPool(v7, v8);
      v4 = StringPool;
      if ( StringPool )
      {
        memmove((void *)StringPool[2], BaseAddress[2], v9);
        memmove((void *)v4[3], BaseAddress[3], v10);
        *((_WORD *)v4 + 3) = *((_WORD *)BaseAddress + 3);
        *((_WORD *)v4 + 5) = *((_WORD *)BaseAddress + 5);
        if ( !a4 )
          RtlpMuiRegFreeStringPool(BaseAddress);
      }
    }
  }
  return v4;
}

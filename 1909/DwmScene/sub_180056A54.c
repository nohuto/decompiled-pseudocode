/*
 * XREFs of sub_180056A54 @ 0x180056A54
 * Callers:
 *     sub_1800454BC @ 0x1800454BC (sub_1800454BC.c)
 *     sub_180056E7C @ 0x180056E7C (sub_180056E7C.c)
 *     sub_180057878 @ 0x180057878 (sub_180057878.c)
 *     sub_18005DBD8 @ 0x18005DBD8 (sub_18005DBD8.c)
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 *     sub_18005E510 @ 0x18005E510 (sub_18005E510.c)
 *     sub_18006079C @ 0x18006079C (sub_18006079C.c)
 *     sub_1800647D8 @ 0x1800647D8 (sub_1800647D8.c)
 *     sub_18008A168 @ 0x18008A168 (sub_18008A168.c)
 *     sub_180097B78 @ 0x180097B78 (sub_180097B78.c)
 *     sub_1800C01E0 @ 0x1800C01E0 (sub_1800C01E0.c)
 *     sub_1800CFAE8 @ 0x1800CFAE8 (sub_1800CFAE8.c)
 *     sub_1800DD84C @ 0x1800DD84C (sub_1800DD84C.c)
 *     sub_1800E17A8 @ 0x1800E17A8 (sub_1800E17A8.c)
 *     sub_18010FFE4 @ 0x18010FFE4 (sub_18010FFE4.c)
 *     sub_180114670 @ 0x180114670 (sub_180114670.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x1800261E8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_1.c)
 *     sub_180045514 @ 0x180045514 (sub_180045514.c)
 *     memcpy @ 0x180125B94 (memcpy.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

const void **__fastcall sub_180056A54(_QWORD *a1, size_t a2, char *a3, unsigned __int64 Size)
{
  unsigned __int64 v6; // r8
  _QWORD *v7; // rsi
  bool v8; // cf
  _BYTE *v9; // r15
  size_t v10; // rbx

  v6 = a1[2];
  v7 = a1;
  if ( v6 < a2 )
    std::vector<void *>::_Xlen();
  if ( Size > a1[3] - v6 )
  {
    LOBYTE(v6) = 0;
    return sub_180045514((const void **)a1, Size, v6, a2, a3, Size);
  }
  else
  {
    v8 = a1[3] < 0x10uLL;
    a1[2] = v6 + Size;
    if ( !v8 )
      a1 = (_QWORD *)*a1;
    v9 = (char *)a1 + a2;
    if ( &a3[Size] <= (char *)a1 + a2 || a3 > (char *)a1 + v6 )
    {
      v10 = Size;
    }
    else if ( v9 > a3 )
    {
      v10 = v9 - a3;
    }
    else
    {
      v10 = 0LL;
    }
    memmove(&v9[Size], v9, v6 - a2 + 1);
    memcpy(v9, a3, v10);
    memcpy(&v9[v10], &a3[v10 + Size], Size - v10);
    return (const void **)v7;
  }
}

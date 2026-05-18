/*
 * XREFs of sub_180056944 @ 0x180056944
 * Callers:
 *     sub_1800453AC @ 0x1800453AC (sub_1800453AC.c)
 *     sub_180056D6C @ 0x180056D6C (sub_180056D6C.c)
 *     sub_180057768 @ 0x180057768 (sub_180057768.c)
 *     sub_18005DAC8 @ 0x18005DAC8 (sub_18005DAC8.c)
 *     sub_18005DED4 @ 0x18005DED4 (sub_18005DED4.c)
 *     sub_18005E400 @ 0x18005E400 (sub_18005E400.c)
 *     sub_18006068C @ 0x18006068C (sub_18006068C.c)
 *     sub_1800646C8 @ 0x1800646C8 (sub_1800646C8.c)
 *     sub_18008A058 @ 0x18008A058 (sub_18008A058.c)
 *     sub_180097A68 @ 0x180097A68 (sub_180097A68.c)
 *     sub_1800C00D0 @ 0x1800C00D0 (sub_1800C00D0.c)
 *     sub_1800CF9D8 @ 0x1800CF9D8 (sub_1800CF9D8.c)
 *     sub_1800DD73C @ 0x1800DD73C (sub_1800DD73C.c)
 *     sub_1800E1698 @ 0x1800E1698 (sub_1800E1698.c)
 *     sub_18010FED4 @ 0x18010FED4 (sub_18010FED4.c)
 *     sub_180114560 @ 0x180114560 (sub_180114560.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x1800260D8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_1.c)
 *     sub_180045404 @ 0x180045404 (sub_180045404.c)
 *     memcpy @ 0x180125A84 (memcpy.c)
 *     memmove @ 0x180125A9C (memmove.c)
 */

const void **__fastcall sub_180056944(_QWORD *a1, size_t a2, char *a3, unsigned __int64 Size)
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
    return sub_180045404((const void **)a1, Size, v6, a2, a3, Size);
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

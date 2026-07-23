/*
 * XREFs of sub_180046028 @ 0x180046028
 * Callers:
 *     sub_180045F38 @ 0x180045F38 (sub_180045F38.c)
 *     sub_18004EA3C @ 0x18004EA3C (sub_18004EA3C.c)
 * Callees:
 *     sub_180036D88 @ 0x180036D88 (sub_180036D88.c)
 *     sub_180046108 @ 0x180046108 (sub_180046108.c)
 *     sub_18004871C @ 0x18004871C (sub_18004871C.c)
 *     sub_1800508C8 @ 0x1800508C8 (sub_1800508C8.c)
 */

__int64 __fastcall sub_180046028(char *BaseAddress, size_t a2, unsigned __int64 a3, unsigned int a4, int *a5)
{
  unsigned __int64 v6; // rbx
  size_t v7; // rsi
  int v9; // r14d
  __int64 v10; // rcx
  void *v12; // rax
  char *v13; // rcx

  v6 = a3;
  v7 = a2;
  v9 = 3;
  if ( a3 > (unsigned int)*((unsigned __int16 *)BaseAddress + 446) - 16
    || (v10 = sub_180046108((__int64)(BaseAddress + 832), a2), a3 = (unsigned int)v6, a2 = (unsigned int)v7, v10 == -1) )
  {
    if ( v6 > 0x20000 )
    {
      if ( v6 > *((unsigned int *)BaseAddress + 116) )
      {
        v12 = (void *)sub_1800508C8(BaseAddress);
      }
      else
      {
        v13 = BaseAddress + 256;
        if ( v6 > *((unsigned int *)BaseAddress + 68) )
          v13 = BaseAddress + 448;
        v12 = sub_180036D88((__int64)v13, v7, v6, v6, a4);
      }
    }
    else
    {
      v12 = (void *)sub_18004871C(BaseAddress + 640, a2, a3, a4);
    }
    v10 = (__int64)v12;
  }
  else
  {
    v9 = 2;
  }
  *a5 = v9;
  return v10;
}

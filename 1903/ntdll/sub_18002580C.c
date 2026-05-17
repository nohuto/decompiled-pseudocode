/*
 * XREFs of sub_18002580C @ 0x18002580C
 * Callers:
 *     sub_1800220EC @ 0x1800220EC (sub_1800220EC.c)
 *     sub_180025788 @ 0x180025788 (sub_180025788.c)
 * Callees:
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800D4DF4 @ 0x1800D4DF4 (sub_1800D4DF4.c)
 */

__int64 __fastcall sub_18002580C(unsigned __int16 *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // ebp
  unsigned __int16 *v8; // rdx
  unsigned int v9; // ebp
  __int64 v10; // rsi
  void *v11; // rax

  v4 = 0;
  if ( a2 > a1[1] )
  {
    if ( a2 > 0xFFFE )
      return (unsigned int)-1073741562;
    v7 = a2 + 63;
    v8 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v9 = v7 & 0xFFFFFFC0;
    if ( v9 > 0xFFFE )
      v9 = 65534;
    if ( v8 == a1 + 8 )
    {
      v11 = (void *)sub_18006D6B8(v9, v8);
      v10 = (__int64)v11;
      if ( !v11 )
        return (unsigned int)-1073741801;
      if ( *a1 )
        memmove(v11, *((const void **)a1 + 1), *a1);
    }
    else
    {
      v10 = sub_1800D4DF4(v9, v8, a3, a4);
    }
    if ( v10 )
    {
      *((_QWORD *)a1 + 1) = v10;
      a1[1] = v9;
      return v4;
    }
    return (unsigned int)-1073741801;
  }
  return v4;
}

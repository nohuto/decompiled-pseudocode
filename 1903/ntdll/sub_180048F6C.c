/*
 * XREFs of sub_180048F6C @ 0x180048F6C
 * Callers:
 *     sub_180045188 @ 0x180045188 (sub_180045188.c)
 *     sub_180048DF4 @ 0x180048DF4 (sub_180048DF4.c)
 * Callees:
 *     sub_180049014 @ 0x180049014 (sub_180049014.c)
 *     sub_180049070 @ 0x180049070 (sub_180049070.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

__int64 __fastcall sub_180048F6C(unsigned __int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 *v5; // rcx
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rcx
  __int64 **v8; // r8
  __int64 *v9; // rbx
  __int64 result; // rax
  __int64 v11; // r9

  if ( a2[5] )
  {
    v4 = sub_180049070();
    v5 = *(__int64 **)(v4 + 8);
    if ( *v5 == v4 )
    {
      *a2 = v4;
      a2[1] = (__int64)v5;
      *v5 = (__int64)a2;
      *(_QWORD *)(v4 + 8) = a2;
    }
    else
    {
      sub_18010A694(13, 0, v4, 0, *v5, 0LL);
    }
    sub_180049014(a1, a2);
  }
  v6 = *((_BYTE *)a2 - 2);
  if ( v6 )
    v7 = ((unsigned __int64)(a2 - 2) & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v6 << 16) + 0x10000;
  else
    v7 = a1;
  v8 = (__int64 **)(v7 + 96);
  v9 = a2 + 2;
  result = *(_QWORD *)(v7 + 96);
  v11 = *(_QWORD *)(result + 8);
  if ( v11 != v7 + 96 )
    return sub_18010A694(13, 0, (_DWORD)v8, v11, 0LL, 0LL);
  *v9 = result;
  v9[1] = (__int64)v8;
  *(_QWORD *)(result + 8) = v9;
  *v8 = v9;
  return result;
}

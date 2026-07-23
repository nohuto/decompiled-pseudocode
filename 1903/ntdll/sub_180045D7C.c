/*
 * XREFs of sub_180045D7C @ 0x180045D7C
 * Callers:
 *     sub_180044EDC @ 0x180044EDC (sub_180044EDC.c)
 * Callees:
 *     sub_180036AE0 @ 0x180036AE0 (sub_180036AE0.c)
 *     sub_180044E1C @ 0x180044E1C (sub_180044E1C.c)
 *     sub_180045F38 @ 0x180045F38 (sub_180045F38.c)
 *     sub_180046E04 @ 0x180046E04 (sub_180046E04.c)
 *     sub_180046E9C @ 0x180046E9C (sub_180046E9C.c)
 *     sub_180047490 @ 0x180047490 (sub_180047490.c)
 *     sub_18009BF80 @ 0x18009BF80 (sub_18009BF80.c)
 */

__int64 __fastcall sub_180045D7C(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned int v12; // ebx
  unsigned __int8 v13; // cl

  v8 = sub_180044E1C(a1, a3);
  if ( !v8 )
    return -1LL;
  v10 = *(_QWORD *)(a4 + 32);
  v11 = (v10 + 4095) >> 12;
  if ( (unsigned int)((_DWORD)v11 << 12) < v10 )
    return 0LL;
  v12 = (unsigned int)(v11 + (1 << *(_BYTE *)(a1 + 9)) - 1) >> *(_BYTE *)(a1 + 9);
  v13 = *(_BYTE *)(v8 + 24) & 0xC;
  if ( v13 >= 8u || v12 > *(unsigned __int8 *)(v8 + 31) )
  {
    if ( v13 != 12
      || *(_QWORD *)(a4 + 24) <= *(_QWORD *)a4
      || v10 > 0x20000
      || (v9 = sub_18009BF80(*(PRTL_SRWLOCK *)(a1 + 32), a2)) == 0 )
    {
      if ( (a2 & 0x2000000) == 0 )
        return sub_180045F38(*(_QWORD *)(a1 + 56), a3, a4, a2);
      return 0LL;
    }
    if ( *(_DWORD *)(a4 + 16) )
    {
      sub_180046E9C(a3, *(_QWORD *)a4, a3, *(_QWORD *)(a4 + 24), a2);
      sub_180046E04(*(_QWORD *)(a1 + 56), v9, a2);
    }
  }
  else
  {
    if ( (unsigned int)v11 > (unsigned __int16)~*(_WORD *)(v8 + 28) && (int)sub_180047490(a1, 0, 0LL) < 0 )
      return 0LL;
    if ( *(_DWORD *)(a4 + 16) )
      sub_180046E9C(a3, *(_QWORD *)a4, a3, *(_QWORD *)(a4 + 24), a2);
    if ( v12 < *(unsigned __int8 *)(v8 + 31) )
      sub_180036AE0(a1, v8, v12, a2);
    *(_DWORD *)(v8 + 4) = (v12 << *(_BYTE *)(a1 + 8)) - *(_DWORD *)(a4 + 24);
    return a3;
  }
  return v9;
}

/*
 * XREFs of sub_180036D88 @ 0x180036D88
 * Callers:
 *     sub_180036CE0 @ 0x180036CE0 (sub_180036CE0.c)
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_180046028 @ 0x180046028 (sub_180046028.c)
 *     sub_18004CF00 @ 0x18004CF00 (sub_18004CF00.c)
 *     sub_180077518 @ 0x180077518 (sub_180077518.c)
 * Callees:
 *     sub_180036AE0 @ 0x180036AE0 (sub_180036AE0.c)
 *     sub_180036F20 @ 0x180036F20 (sub_180036F20.c)
 *     sub_180047490 @ 0x180047490 (sub_180047490.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_18010B808 @ 0x18010B808 (sub_18010B808.c)
 */

void *__fastcall sub_180036D88(__int64 a1, size_t a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r8
  unsigned int v8; // ebx
  void *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // r14d
  int v13; // r13d
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rbx

  v5 = (unsigned __int64)(a4 + 4095) >> 12;
  v6 = (unsigned __int64)(a3 + 4095) >> 12;
  v8 = v6 + 1;
  if ( (a5 & 4) == 0 )
    v8 = v6;
  if ( (a5 & 0x800000) != 0 && (unsigned int)-*(_DWORD *)a1 > 0x200000 )
    return 0LL;
  v10 = sub_180036F20(a1, v8, a5);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  v12 = *(unsigned __int8 *)(v10 + 31);
  v13 = (unsigned __int16)~*(_WORD *)(v10 + 28);
  if ( (_DWORD)v5 )
  {
    v14 = a5 & 0xFFFFFFFD;
    if ( !v13 )
      v14 = a5;
    if ( (int)sub_180047490(a1, v14, 0LL) < 0 )
    {
      v9 = 0LL;
      goto LABEL_20;
    }
  }
  if ( (a5 & 4) != 0 )
    sub_180047490(a1, 0, 0LL);
  *(_DWORD *)(v11 + 4) = (v12 << *(_BYTE *)(a1 + 8)) - a2;
  v15 = v11 & *(_QWORD *)a1;
  v16 = v11 - v15;
  v11 = 0LL;
  v9 = (void *)(v15 + (v16 >> 5 << *(_BYTE *)(a1 + 8)));
  if ( (a5 & 2) != 0
    && (v13
     || BYTE1(*(_QWORD *)(a1 + 40)) >= 2u
     || (*(_BYTE *)(a1 + 13) & 7) != 0 && (int)sub_18010B808(a1, v9, (unsigned int)a2) <= 2) )
  {
    memset(v9, 0, a2);
LABEL_20:
    if ( v11 )
      sub_180036AE0(a1, v11, 0, a5);
  }
  return v9;
}

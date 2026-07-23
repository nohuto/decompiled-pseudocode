/*
 * XREFs of HvlpFlushRangeListTb @ 0x140279D14
 * Callers:
 *     HvlFlushRangeListTb @ 0x140279838 (HvlFlushRangeListTb.c)
 * Callees:
 *     HvlpCountFlushVaList @ 0x1402799B8 (HvlpCountFlushVaList.c)
 *     HvlpFastFlushListTb @ 0x140279B10 (HvlpFastFlushListTb.c)
 *     HvlpPrepareFlushHeader @ 0x140279E98 (HvlpPrepareFlushHeader.c)
 *     HvlpSlowFlushListTb @ 0x14027A09C (HvlpSlowFlushListTb.c)
 */

__int64 __fastcall HvlpFlushRangeListTb(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        _QWORD *a7)
{
  char v7; // bl
  unsigned int v8; // eax
  int v9; // edx
  int v10; // r8d
  unsigned int v11; // r9d
  unsigned __int64 *v12; // r10
  __int128 v14[2]; // [rsp+30h] [rbp-28h] BYREF

  v7 = a4;
  if ( a5 )
  {
    LOBYTE(a4) = a3;
    HvlpPrepareFlushHeader(v14, a1, a2, a4);
  }
  v8 = HvlpCountFlushVaList(a6, a7);
  if ( v8 <= 0xB && (HvlEnlightenments & 0x80u) != 0 && (!v7 || v11 + 1 <= 0xC) )
    return HvlpFastFlushListTb(v14, v7, a5, v11, v12, v8);
  LOBYTE(v10) = a5;
  LOBYTE(v9) = v7;
  return HvlpSlowFlushListTb((unsigned int)v14, v9, v10, v11, (__int64)v12, v8);
}

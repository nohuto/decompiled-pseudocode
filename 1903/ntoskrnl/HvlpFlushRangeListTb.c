/*
 * XREFs of HvlpFlushRangeListTb @ 0x14028DE88
 * Callers:
 *     HvlFlushRangeListTb @ 0x14028D990 (HvlFlushRangeListTb.c)
 * Callees:
 *     HvlpCountFlushVaList @ 0x14028DB18 (HvlpCountFlushVaList.c)
 *     HvlpFastFlushListTb @ 0x14028DC70 (HvlpFastFlushListTb.c)
 *     HvlpPrepareFlushHeader @ 0x14028E040 (HvlpPrepareFlushHeader.c)
 *     HvlpSlowFlushListTb @ 0x14028E264 (HvlpSlowFlushListTb.c)
 */

void __fastcall HvlpFlushRangeListTb(__int64 a1, __int64 a2, char a3, __int64 a4, char a5, unsigned int a6, _QWORD *a7)
{
  char v7; // bl
  unsigned int v8; // eax
  int v9; // edx
  int v10; // r8d
  unsigned int v11; // r9d
  unsigned __int64 *v12; // r10
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v7 = a4;
  v13 = 0uLL;
  v14 = 0LL;
  if ( a5 )
  {
    LOBYTE(a4) = a3;
    HvlpPrepareFlushHeader(&v13, a1, a2, a4);
  }
  v8 = HvlpCountFlushVaList(a6, a7);
  if ( v8 > 0xB || (HvlEnlightenments & 0x80u) == 0 || v7 && v11 + 1 > 0xC )
  {
    LOBYTE(v10) = a5;
    LOBYTE(v9) = v7;
    HvlpSlowFlushListTb((unsigned int)&v13, v9, v10, v11, (__int64)v12, v8);
  }
  else
  {
    HvlpFastFlushListTb(&v13, v7, a5, v11, v12, v8);
  }
}

/*
 * XREFs of HvlpFlushRangeListTbEx @ 0x14028DC9C
 * Callers:
 *     HvlFlushRangeListTb @ 0x14028D6F0 (HvlFlushRangeListTb.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpCountFlushVaList @ 0x14028D878 (HvlpCountFlushVaList.c)
 *     HvlpFastFlushListTbEx @ 0x14028DABC (HvlpFastFlushListTbEx.c)
 *     HvlpSlowFlushListTbEx @ 0x14028E14C (HvlpSlowFlushListTbEx.c)
 */

_UNKNOWN **__fastcall HvlpFlushRangeListTbEx(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        unsigned int a6,
        _QWORD *a7)
{
  __int64 v11; // rax
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  unsigned int v15; // r10d
  unsigned __int64 *v16; // r11
  __int64 v18[4]; // [rsp+40h] [rbp-28h] BYREF

  memset(v18, 0, sizeof(v18));
  if ( a5 )
  {
    v18[0] = a1;
    v11 = (a3 == 0 ? 4 : 0) | 2u;
    if ( a1 )
      v11 = a3 == 0 ? 4 : 0;
    v18[1] = v11;
  }
  v12 = HvlpCountFlushVaList(a6, a7);
  if ( v12 + ((HvlpFlags >> 8) & 0xF) + 5 <= 0xE && (HvlEnlightenments & 0x80u) != 0 && (!a4 || v15 + 1 <= 0xC) )
    return HvlpFastFlushListTbEx(v18, a2, a4, v14, v15, v16, v12);
  LOBYTE(v13) = a4;
  return (_UNKNOWN **)HvlpSlowFlushListTbEx((unsigned int)v18, a2, v13, v14, v15, (__int64)v16, v12);
}

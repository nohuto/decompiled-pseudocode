/*
 * XREFs of sub_18010BEF4 @ 0x18010BEF4
 * Callers:
 *     sub_18010C01C @ 0x18010C01C (sub_18010C01C.c)
 * Callees:
 *     sub_180039500 @ 0x180039500 (sub_180039500.c)
 *     sub_180051450 @ 0x180051450 (sub_180051450.c)
 *     sub_180068434 @ 0x180068434 (sub_180068434.c)
 *     sub_18010BC08 @ 0x18010BC08 (sub_18010BC08.c)
 *     sub_18010BD2C @ 0x18010BD2C (sub_18010BD2C.c)
 */

unsigned __int64 __fastcall sub_18010BEF4(
        PRTL_SRWLOCK SRWLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5)
{
  __int64 v5; // r12
  unsigned int i; // r14d
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = a5;
  for ( i = 0; ; i = v14 )
  {
    a3 = sub_180039500((__int64)SRWLock, a2, a3, &v14);
    if ( v14 == *(unsigned __int16 *)(a2 + 32) )
    {
      sub_180051450((__int64)SRWLock, a2);
      return a2;
    }
    if ( v14 <= i || !(unsigned int)sub_18010BD2C(SRWLock, a2, a3, a4, v5) )
      break;
  }
  if ( ((__int64)SRWLock[22].Ptr & 1) != 0 && ((a3 + 32) & 0xFFF) != 0 )
  {
    v12 = sub_18010BC08(v11, a2, a3);
    if ( v12 )
      sub_180068434((__int64)SRWLock, a2, v12);
  }
  sub_180068434((__int64)SRWLock, a2, a3);
  return 0LL;
}

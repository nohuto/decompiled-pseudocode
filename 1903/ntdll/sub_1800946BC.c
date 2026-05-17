/*
 * XREFs of sub_1800946BC @ 0x1800946BC
 * Callers:
 *     atan @ 0x18008E870 (atan.c)
 *     atan2 @ 0x18008EAD0 (atan2.c)
 *     ceil @ 0x18008F430 (ceil.c)
 *     cos @ 0x18008F550 (cos.c)
 *     sin @ 0x18008F970 (sin.c)
 *     floor @ 0x18008FF10 (floor.c)
 *     log @ 0x180090140 (log.c)
 *     sqrt @ 0x180090E30 (sqrt.c)
 *     tan @ 0x180091CE0 (tan.c)
 *     sub_180095810 @ 0x180095810 (sub_180095810.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_180094590 @ 0x180094590 (sub_180094590.c)
 *     sub_1800945FC @ 0x1800945FC (sub_1800945FC.c)
 *     sub_180095170 @ 0x180095170 (sub_180095170.c)
 *     sub_180095420 @ 0x180095420 (sub_180095420.c)
 *     sub_180095704 @ 0x180095704 (sub_180095704.c)
 */

double __fastcall sub_1800946BC(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  BOOL v13; // eax
  __int64 v14; // r9
  __int64 v15; // xmm6_8
  __int64 v17; // [rsp+48h] [rbp-A1h] BYREF
  double v18[2]; // [rsp+50h] [rbp-99h] BYREF
  _QWORD v19[8]; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp-41h]

  v17 = sub_180095704(8064LL, 65472LL);
  *(_QWORD *)&v18[1] = a3;
  *(_QWORD *)&v18[0] = a3;
  v13 = sub_1800945FC(a5, v17);
  v15 = a8;
  if ( !v13 )
  {
    if ( a9 == 2 )
    {
      v19[6] = a8;
      v20 = v20 & 0xFFFFFFE0 | 3;
    }
    sub_180095170((unsigned int)v19, (unsigned int)&v17, a5, a2, (__int64)&a7, (__int64)v18);
  }
  if ( !dword_18015FF30 && a4 )
    return sub_180094590(a4, a6, a1, v14, v15, v18[0], v17);
  sub_180095420(a4);
  sub_180095704(v17, 65472LL);
  return v18[0];
}

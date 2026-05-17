/*
 * XREFs of sub_180015604 @ 0x180015604
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180012A10 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     sub_1800159B8 @ 0x1800159B8 (sub_1800159B8.c)
 *     sub_18006A9F8 @ 0x18006A9F8 (sub_18006A9F8.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180074270 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18007B110 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     sub_18001564C @ 0x18001564C (sub_18001564C.c)
 */

__int64 __fastcall sub_180015604(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v6; // r8
  __int64 v7; // rax

  if ( !a2 || !a1 )
    return 3221225485LL;
  v6 = a2;
  LOBYTE(a2) = a4;
  v7 = sub_18001564C(a3, a2, v6);
  *a1 = v7;
  return v7 == 0 ? 0xC0000017 : 0;
}

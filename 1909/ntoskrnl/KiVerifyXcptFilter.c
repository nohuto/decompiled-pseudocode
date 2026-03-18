/*
 * XREFs of KiVerifyXcptFilter @ 0x140A1525C
 * Callers:
 *     KiVerifyXcpt2 @ 0x140A14B80 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt0 @ 0x140A14CD0 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x140A14D20 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140A14D70 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140A14DC0 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140A14E10 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140A14E60 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140A14EC0 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140A14F20 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140A14F80 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140A14FE0 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x140A150F0 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x140A15140 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140A151B0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140A15200 (KiVerifyXcpt14.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiVerifyXcptFilter(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 12) = -1437226411;
    ++**(_DWORD **)a1;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 1;
  }
  return 1LL;
}

/*
 * XREFs of KiVerifyXcptFilter @ 0x1409CFF7C
 * Callers:
 *     KiVerifyXcpt2 @ 0x1409CF8B4 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt0 @ 0x1409CF9F0 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x1409CFA40 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x1409CFA90 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x1409CFAE0 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x1409CFB30 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x1409CFB80 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x1409CFBE0 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x1409CFC40 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x1409CFCA0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x1409CFD00 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x1409CFE10 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x1409CFE60 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x1409CFED0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x1409CFF20 (KiVerifyXcpt14.c)
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

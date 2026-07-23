/*
 * XREFs of KiVerifyXcptFilter @ 0x1409D0F7C
 * Callers:
 *     KiVerifyXcpt2 @ 0x1409D08B4 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt0 @ 0x1409D09F0 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x1409D0A40 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x1409D0A90 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x1409D0AE0 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x1409D0B30 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x1409D0B80 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x1409D0BE0 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x1409D0C40 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x1409D0CA0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x1409D0D00 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x1409D0E10 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x1409D0E60 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x1409D0ED0 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x1409D0F20 (KiVerifyXcpt14.c)
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

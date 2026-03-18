/*
 * XREFs of KiVerifyXcptFilter @ 0x140A14ABC
 * Callers:
 *     KiVerifyXcpt2 @ 0x140A143E0 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt0 @ 0x140A14530 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x140A14580 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140A145D0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140A14620 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140A14670 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140A146C0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140A14720 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140A14780 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140A147E0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140A14840 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x140A14950 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x140A149A0 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140A14A10 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140A14A60 (KiVerifyXcpt14.c)
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

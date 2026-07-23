/*
 * XREFs of HvcallFastExtended @ 0x1403226F0
 * Callers:
 *     HvlpReadPerfRegister @ 0x1401B3BF4 (HvlpReadPerfRegister.c)
 *     HvlpGetVtlCallVa @ 0x14032BC5C (HvlpGetVtlCallVa.c)
 *     HvlpCondenseMicrocode @ 0x140818C84 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140818CF0 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x1401C7450 (HvcallpExtendedFastHypercallWithOutput.c)
 */

__int64 __fastcall HvcallFastExtended(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // [rsp+20h] [rbp-18h]

  if ( !a5 )
    return HvcallpExtendedFastHypercall(a1, a2, a3);
  LODWORD(v6) = a5 >> 4;
  return HvcallpExtendedFastHypercallWithOutput(a1, a2, (unsigned int)(a3 + 15) >> 4, a4, v6);
}

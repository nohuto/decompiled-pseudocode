/*
 * XREFs of HvcallFastExtended @ 0x140343FE0
 * Callers:
 *     HvlpReadPerfRegister @ 0x1402863E8 (HvlpReadPerfRegister.c)
 *     HvlpGetVtlCallVa @ 0x14034D254 (HvlpGetVtlCallVa.c)
 *     HvlpCondenseMicrocode @ 0x1408514B4 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140851528 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x1401CD860 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x1401CD8C0 (HvcallpExtendedFastHypercallWithOutput.c)
 */

__int64 __fastcall HvcallFastExtended(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // [rsp+20h] [rbp-18h]

  if ( !a5 )
    return HvcallpExtendedFastHypercall(a1, a2, a3);
  LODWORD(v6) = a5 >> 4;
  return HvcallpExtendedFastHypercallWithOutput(a1, a2, (unsigned int)(a3 + 15) >> 4, a4, v6);
}

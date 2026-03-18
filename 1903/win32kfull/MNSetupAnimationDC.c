/*
 * XREFs of MNSetupAnimationDC @ 0x1C00E0A14
 * Callers:
 *     FinalUserInit @ 0x1C00E0598 (FinalUserInit.c)
 *     MNAllocMenuState @ 0x1C02106AC (MNAllocMenuState.c)
 * Callees:
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GetDPIMetrics @ 0x1C00912E8 (GetDPIMetrics.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1)
{
  __int64 result; // rax
  __int64 *DPIMetrics; // rax

  result = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    GreSetDCOwnerEx(result, 0LL, 0LL, 0LL);
    DPIMetrics = (__int64 *)GetDPIMetrics();
    GreSelectFont(*(_QWORD *)(a1 + 136), *DPIMetrics);
    return 1LL;
  }
  return result;
}

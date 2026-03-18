/*
 * XREFs of MNSetupAnimationDC @ 0x1C00B428C
 * Callers:
 *     FinalUserInit @ 0x1C00B4064 (FinalUserInit.c)
 *     MNAllocMenuState @ 0x1C01D4E78 (MNAllocMenuState.c)
 * Callees:
 *     GreSelectFont @ 0x1C00115F0 (GreSelectFont.c)
 *     GetDPIMetrics @ 0x1C0065818 (GetDPIMetrics.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  result = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    GreSetDCOwnerEx(result, 0LL, 0LL, 1LL);
    GetDPIMetrics(v4, v3);
    GreSelectFont(*(HDC *)(a1 + 136));
    return 1LL;
  }
  return result;
}

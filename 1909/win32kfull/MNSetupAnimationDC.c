/*
 * XREFs of MNSetupAnimationDC @ 0x1C0080670
 * Callers:
 *     FinalUserInit @ 0x1C00801F4 (FinalUserInit.c)
 *     MNAllocMenuState @ 0x1C021016C (MNAllocMenuState.c)
 * Callees:
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     GetDPIMetrics @ 0x1C012C10C (GetDPIMetrics.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *DPIMetrics; // rax

  result = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    GreSetDCOwnerEx(result, 0LL, 0LL, 0LL);
    DPIMetrics = (_QWORD *)GetDPIMetrics(v4, v3, v5);
    GreSelectFont(*(_QWORD *)(a1 + 136), *DPIMetrics);
    return 1LL;
  }
  return result;
}

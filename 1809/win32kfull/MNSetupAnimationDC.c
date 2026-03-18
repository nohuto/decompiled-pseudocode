/*
 * XREFs of MNSetupAnimationDC @ 0x1C00EBED8
 * Callers:
 *     FinalUserInit @ 0x1C00EBC78 (FinalUserInit.c)
 *     MNAllocMenuState @ 0x1C01F99E4 (MNAllocMenuState.c)
 * Callees:
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     GetDPIMetrics @ 0x1C00AB99C (GetDPIMetrics.c)
 */

__int64 __fastcall MNSetupAnimationDC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  result = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL), a2, a3);
  *(_QWORD *)(a1 + 136) = result;
  if ( result )
  {
    GetDPIMetrics(v6, v5);
    GreSelectFont(*(HDC *)(a1 + 136));
    GreSetDCOwnerEx(*(_QWORD *)(a1 + 136), 2147483666LL, 0LL, 1LL);
    return 1LL;
  }
  return result;
}

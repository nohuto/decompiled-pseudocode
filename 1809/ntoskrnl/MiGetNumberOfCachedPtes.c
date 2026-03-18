/*
 * XREFs of MiGetNumberOfCachedPtes @ 0x1400F0434
 * Callers:
 *     MiPteBinsNeedTrimming @ 0x1400F03E0 (MiPteBinsNeedTrimming.c)
 *     MmGetNumberOfFreeSystemPtes @ 0x1400F0D2C (MmGetNumberOfFreeSystemPtes.c)
 *     MiGetSystemPteStatistics @ 0x14085C014 (MiGetSystemPteStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNumberOfCachedPtes(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  int *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 80);
  result = 0LL;
  if ( v1 && KeNumberNodes )
  {
    v3 = (int *)(v1 + 64);
    v4 = (unsigned __int16)KeNumberNodes;
    do
    {
      v5 = *v3;
      v3 += 18;
      result += v5;
      --v4;
    }
    while ( v4 );
  }
  return result;
}

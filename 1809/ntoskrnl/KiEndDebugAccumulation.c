/*
 * XREFs of KiEndDebugAccumulation @ 0x140297820
 * Callers:
 *     KeThawExecution @ 0x14029766C (KeThawExecution.c)
 *     KiFreezeTargetExecution @ 0x1402978CC (KiFreezeTargetExecution.c)
 * Callees:
 *     KiBeginCounterAccumulation @ 0x140295FFC (KiBeginCounterAccumulation.c)
 *     PoGetFrequencyBucket @ 0x1402D3950 (PoGetFrequencyBucket.c)
 */

void __fastcall KiEndDebugAccumulation(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // r10
  unsigned int FrequencyBucket; // eax

  if ( !*(_BYTE *)(a1 + 32) && !PoAllProcIntrDisabled )
  {
    *(_BYTE *)(a1 + 32) = 1;
    v2 = *(_QWORD *)(a1 + 8);
    v3 = __rdtsc();
    v4 = *(_QWORD *)(a1 + 23488);
    v5 = v3 - v4;
    *(_QWORD *)(a1 + 23608) += v5;
    if ( (*(_BYTE *)(v2 + 2) & 0x20) != 0 )
    {
      FrequencyBucket = PoGetFrequencyBucket();
      *(_QWORD *)(a1 + 8 * (*(unsigned __int8 *)(a1 + 24224) + 2LL * FrequencyBucket) + 23616) += v5;
      v4 = *(_QWORD *)(a1 + 23488);
      v2 = *(_QWORD *)(a1 + 8);
    }
    *(_QWORD *)(a1 + 23488) = v5 + v4;
    if ( (*(_BYTE *)(v2 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v2, 0);
    *(_BYTE *)(a1 + 32) = 0;
  }
}

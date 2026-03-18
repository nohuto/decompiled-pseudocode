/*
 * XREFs of PpmResetPerfTimes @ 0x14018040C
 * Callers:
 *     PpmResetPerfEngineForProcessor @ 0x14015EDAC (PpmResetPerfEngineForProcessor.c)
 *     PpmCheckReset @ 0x14019D0B0 (PpmCheckReset.c)
 *     PpmCheckProcessorInit @ 0x14019D2B0 (PpmCheckProcessorInit.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x140035500 (PpmSnapPerformanceAccumulation.c)
 *     PpmResetPerformanceAccumulation @ 0x1401804C0 (PpmResetPerformanceAccumulation.c)
 */

__int64 __fastcall PpmResetPerfTimes(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24168);
  if ( v1 )
  {
    PpmResetPerformanceAccumulation();
    PpmSnapPerformanceAccumulation(a1, 1u, 0, 0, (LARGE_INTEGER *)(v1 + 32));
    *(_OWORD *)(v1 + 208) = *(_OWORD *)(v1 + 32);
    *(_OWORD *)(v1 + 224) = *(_OWORD *)(v1 + 48);
    *(_OWORD *)(v1 + 240) = *(_OWORD *)(v1 + 64);
    *(_OWORD *)(v1 + 256) = *(_OWORD *)(v1 + 80);
    *(_OWORD *)(v1 + 272) = *(_OWORD *)(v1 + 96);
    *(_QWORD *)(v1 + 288) = *(_QWORD *)(v1 + 112);
    *(_QWORD *)(v1 + 8) = *(_QWORD *)(v1 + 32);
    *(_QWORD *)v1 = *(_QWORD *)(v1 + 40);
    *(_QWORD *)(v1 + 16) = *(_QWORD *)(v1 + 48);
    result = *(unsigned int *)(v1 + 112);
    *(_DWORD *)(v1 + 24) = result;
  }
  return result;
}

/*
 * XREFs of PpmResetPerfTimes @ 0x14017690C
 * Callers:
 *     PpmResetPerfEngineForProcessor @ 0x140143698 (PpmResetPerfEngineForProcessor.c)
 *     PpmCheckReset @ 0x140192EE0 (PpmCheckReset.c)
 *     PpmCheckProcessorInit @ 0x140192FC0 (PpmCheckProcessorInit.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x14005BDC0 (PpmSnapPerformanceAccumulation.c)
 *     PpmResetPerformanceAccumulation @ 0x1401769C0 (PpmResetPerformanceAccumulation.c)
 */

__int64 __fastcall PpmResetPerfTimes(LARGE_INTEGER *a1)
{
  LARGE_INTEGER v1; // rdi
  __int64 result; // rax

  v1 = a1[3021];
  if ( v1.QuadPart )
  {
    PpmResetPerformanceAccumulation();
    PpmSnapPerformanceAccumulation(a1, 1u, 0, 0, (LARGE_INTEGER *)(v1.QuadPart + 32));
    *(_OWORD *)(v1.QuadPart + 208) = *(_OWORD *)(v1.QuadPart + 32);
    *(_OWORD *)(v1.QuadPart + 224) = *(_OWORD *)(v1.QuadPart + 48);
    *(_OWORD *)(v1.QuadPart + 240) = *(_OWORD *)(v1.QuadPart + 64);
    *(_OWORD *)(v1.QuadPart + 256) = *(_OWORD *)(v1.QuadPart + 80);
    *(_OWORD *)(v1.QuadPart + 272) = *(_OWORD *)(v1.QuadPart + 96);
    *(_QWORD *)(v1.QuadPart + 288) = *(_QWORD *)(v1.QuadPart + 112);
    *(_QWORD *)(v1.QuadPart + 8) = *(_QWORD *)(v1.QuadPart + 32);
    *(_QWORD *)v1.QuadPart = *(_QWORD *)(v1.QuadPart + 40);
    *(_QWORD *)(v1.QuadPart + 16) = *(_QWORD *)(v1.QuadPart + 48);
    result = *(unsigned int *)(v1.QuadPart + 112);
    *(_DWORD *)(v1.QuadPart + 24) = result;
  }
  return result;
}

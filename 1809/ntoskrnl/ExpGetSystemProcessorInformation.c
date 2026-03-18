/*
 * XREFs of ExpGetSystemProcessorInformation @ 0x1400A5DF0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1400A6A60 (KeQueryMaximumProcessorCountEx.c)
 *     ExSystemExceptionFilter @ 0x1406E2790 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall ExpGetSystemProcessorInformation(__int64 a1)
{
  *(_WORD *)a1 = KeProcessorArchitecture;
  *(_WORD *)(a1 + 2) = KeProcessorLevel;
  *(_WORD *)(a1 + 4) = KeProcessorRevision;
  *(_WORD *)(a1 + 6) = KeQueryMaximumProcessorCountEx(0xFFFFu);
  *(_DWORD *)(a1 + 8) = KeFeatureBits;
  return 0LL;
}

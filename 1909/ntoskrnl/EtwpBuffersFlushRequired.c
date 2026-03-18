/*
 * XREFs of EtwpBuffersFlushRequired @ 0x140136260
 * Callers:
 *     EtwpSwitchBuffer @ 0x140003560 (EtwpSwitchBuffer.c)
 *     EtwInitialize @ 0x14076DFD8 (EtwInitialize.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140003B44 (EtwpQueryUsedProcessorCount.c)
 */

bool __fastcall EtwpBuffersFlushRequired(__int64 a1)
{
  int UsedProcessorCount; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx

  if ( !*(_DWORD *)(a1 + 228) )
    return 1;
  UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
  return *(_DWORD *)(v3 + 248) - UsedProcessorCount - *(_DWORD *)(v4 + 244) >= *(_DWORD *)(v4 + 228);
}

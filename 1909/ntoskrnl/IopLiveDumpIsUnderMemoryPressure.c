/*
 * XREFs of IopLiveDumpIsUnderMemoryPressure @ 0x14029AC4C
 * Callers:
 *     IoCaptureLiveDump @ 0x140858644 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140858E28 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140859400 (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     <none>
 */

bool __fastcall IopLiveDumpIsUnderMemoryPressure(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r9

  v3 = 0;
  if ( a1 && *(_DWORD *)(a1 + 4) || a2 && *(_DWORD *)(a2 + 4) )
    return 1;
  if ( a3 )
    return *(_DWORD *)(a3 + 4) != 0;
  return v3;
}

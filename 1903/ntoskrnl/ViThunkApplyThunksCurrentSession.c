/*
 * XREFs of ViThunkApplyThunksCurrentSession @ 0x14097647C
 * Callers:
 *     VfThunkApplyThunks @ 0x140976220 (VfThunkApplyThunks.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400AFB30 (RtlImageDirectoryEntryToData.c)
 *     VfTargetDriversGetNode @ 0x140328A8C (VfTargetDriversGetNode.c)
 *     ViIsDriverSuspectForVerifier @ 0x140964A78 (ViIsDriverSuspectForVerifier.c)
 *     ViThunkReplaceAllSharedExports @ 0x140976878 (ViThunkReplaceAllSharedExports.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140976904 (ViThunkReplaceAllThunkedImports.c)
 */

__int64 __fastcall ViThunkApplyThunksCurrentSession(__int64 a1, unsigned int a2)
{
  void *v2; // rdi
  unsigned int v5; // r14d
  _DWORD *Node; // rax
  _DWORD *v7; // rsi
  PVOID v8; // r12
  ULONG v9; // edi
  unsigned int IsDriverSuspectForVerifier; // eax
  ULONG Size; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(void **)(a1 + 48);
  v5 = 0;
  Node = VfTargetDriversGetNode((unsigned __int64)v2);
  v7 = Node;
  if ( Node )
  {
    if ( (Node[6] & 1) == 0 )
    {
      v8 = RtlImageDirectoryEntryToData(v2, 1u, 0xCu, &Size);
      if ( v8 )
      {
        v9 = Size;
        if ( Size )
        {
          if ( a2 )
          {
            _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 1);
            _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 1);
            v9 = Size;
          }
          IsDriverSuspectForVerifier = ViIsDriverSuspectForVerifier(a1);
          v5 = ViThunkReplaceAllThunkedImports(v8, v9 >> 3, a2, IsDriverSuspectForVerifier);
          if ( v5 )
            ViThunkReplaceAllSharedExports(v7, a2);
        }
      }
    }
  }
  return v5;
}

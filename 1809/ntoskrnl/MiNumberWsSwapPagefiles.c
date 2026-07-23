/*
 * XREFs of MiNumberWsSwapPagefiles @ 0x1400F0508
 * Callers:
 *     MiWorkingSetManager @ 0x1400EF634 (MiWorkingSetManager.c)
 *     MmAllocateSpecialPool @ 0x1402ACD54 (MmAllocateSpecialPool.c)
 *     MiContractWsSwapPageFile @ 0x14066C944 (MiContractWsSwapPageFile.c)
 *     MiInsertPageFileInList @ 0x14074DB00 (MiInsertPageFileInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNumberWsSwapPagefiles(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  __int64 *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned int v6; // ecx

  v1 = *(_DWORD *)(a1 + 7128);
  v2 = 0;
  if ( v1 )
  {
    v3 = (__int64 *)(a1 + 7136);
    v4 = v1;
    do
    {
      v5 = *v3;
      v6 = v2 + 1;
      ++v3;
      if ( (*(_BYTE *)(v5 + 204) & 0x10) == 0 )
        v6 = v2;
      v2 = v6;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}

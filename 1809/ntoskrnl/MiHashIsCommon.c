/*
 * XREFs of MiHashIsCommon @ 0x1402CBEB8
 * Callers:
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiCombinePte @ 0x140088F10 (MiCombinePte.c)
 *     MiProcessCrcList @ 0x14061F320 (MiProcessCrcList.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D41D0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHashIsCommon(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  unsigned int v3; // eax
  unsigned int v4; // r9d

  v2 = *(_QWORD **)(a1 + 40);
  v3 = 0;
  if ( v2 )
  {
    v4 = *(_DWORD *)(a1 + 48);
    if ( !v4 )
      return 0LL;
    while ( a2 != *v2 )
    {
      ++v3;
      ++v2;
      if ( v3 >= v4 )
        return 0LL;
    }
  }
  return 1LL;
}

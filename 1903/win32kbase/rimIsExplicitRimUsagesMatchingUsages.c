/*
 * XREFs of rimIsExplicitRimUsagesMatchingUsages @ 0x1C0051B38
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00513AC (RIMCreateHidDesc.c)
 *     rimAnyExplicitRimUsagesMatchingUsages @ 0x1C0051A94 (rimAnyExplicitRimUsagesMatchingUsages.c)
 *     rimFindReferencedRimObj @ 0x1C0135CE8 (rimFindReferencedRimObj.c)
 *     RIMIDECreateHIDDesc @ 0x1C0148AD8 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimIsExplicitRimUsagesMatchingUsages(__int64 a1, __int16 a2, __int16 a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rax
  __int64 v5; // r9

  v3 = *(_DWORD *)(a1 + 88);
  v4 = 0LL;
  if ( !v3 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 96);
  while ( *(_WORD *)(v5 + 4 * v4) != a3 || *(_WORD *)(v5 + 4 * v4 + 2) != a2 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= v3 )
      return 0LL;
  }
  return 1LL;
}

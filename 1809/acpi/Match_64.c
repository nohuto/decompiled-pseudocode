/*
 * XREFs of Match_64 @ 0x1C0067674
 * Callers:
 *     Match @ 0x1C0067480 (Match.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C0002280 (IsCompatableDSDTRevision.c)
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     EvalPackageElement @ 0x1C0011FB4 (EvalPackageElement.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     MatchData_64 @ 0x1C0067508 (MatchData_64.c)
 */

__int64 __fastcall Match_64(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rbx
  unsigned int *v5; // rbp
  unsigned int v6; // esi
  unsigned __int64 v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned __int64 v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "PIIIII");
  if ( !v3 )
  {
    v4 = *(_QWORD *)(a2 + 80);
    v5 = *(unsigned int **)(v4 + 32);
    memset(v11, 0, 0x28uLL);
    v6 = *(_DWORD *)(v4 + 216);
    do
    {
      FreeDataBuffs((__int64)v11, 1u);
      v3 = EvalPackageElement(v5, v6, (__int64)v11);
      if ( !v3
        && WORD1(v11[0]) == 1
        && MatchData_64(v11[2], *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL), *(_QWORD *)(*(_QWORD *)(a2 + 80) + 96LL))
        && MatchData_64(v7, *(_DWORD *)(v8 + 136), *(_QWORD *)(v8 + 176)) )
      {
        v9 = v6;
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
        goto LABEL_10;
      }
      ++v6;
    }
    while ( !v3 );
    if ( v3 != -1072431100 )
      goto LABEL_11;
    *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
    v9 = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL) + 0xFFFFFFFF;
    v3 = 0;
LABEL_10:
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = v9;
LABEL_11:
    FreeDataBuffs((__int64)v11, 1u);
  }
  return v3;
}

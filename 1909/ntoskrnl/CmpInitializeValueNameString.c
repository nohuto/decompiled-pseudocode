/*
 * XREFs of CmpInitializeValueNameString @ 0x14063630C
 * Callers:
 *     CmpCommitSetValueKeyUoW @ 0x140635FA4 (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1406DDAAC (CmpCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406E3A58 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpMergeKeyValues @ 0x140836580 (CmpMergeKeyValues.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14083D328 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 * Callees:
 *     CmpCopyCompressedName @ 0x140660810 (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpInitializeValueNameString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int16 v5; // dx
  __int16 v6; // si
  __int64 result; // rax

  v3 = a3;
  v5 = *(_WORD *)(a1 + 2);
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    v6 = 0x7FFF;
    *(_WORD *)a2 = 2 * v5;
    result = CmpCopyCompressedName(a3, 0x7FFFLL, a1 + 20, *(unsigned __int16 *)(a1 + 2));
  }
  else
  {
    *(_WORD *)a2 = v5;
    v6 = v5;
    v3 = a1 + 20;
  }
  *(_QWORD *)(a2 + 8) = v3;
  *(_WORD *)(a2 + 2) = v6;
  return result;
}

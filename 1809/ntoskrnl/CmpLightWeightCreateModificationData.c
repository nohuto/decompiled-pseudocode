/*
 * XREFs of CmpLightWeightCreateModificationData @ 0x14080505C
 * Callers:
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140805204 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140805468 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408057F8 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x1408047A0 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightDuplicateParentLists @ 0x14080512C (CmpLightWeightDuplicateParentLists.c)
 *     CmpLightWeightUpdateModificationActions @ 0x140805F1C (CmpLightWeightUpdateModificationActions.c)
 */

__int64 __fastcall CmpLightWeightCreateModificationData(__int64 a1, unsigned int **a2)
{
  ULONG_PTR v4; // rbp
  unsigned int *TransientPoolWithTag; // rax
  unsigned int *v6; // rbx
  int updated; // edi

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  TransientPoolWithTag = (unsigned int *)CmpAllocateTransientPoolWithTag(PagedPool, 0x14uLL, 0x77554D43u);
  v6 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    *(_QWORD *)TransientPoolWithTag = 0LL;
    *((_QWORD *)TransientPoolWithTag + 1) = 0LL;
    ++*TransientPoolWithTag;
    TransientPoolWithTag[3] = -1;
    TransientPoolWithTag[4] = -1;
    updated = CmpLightWeightDuplicateParentLists(v4);
    if ( updated >= 0 )
    {
      updated = CmpLightWeightUpdateModificationActions(
                  v6,
                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL),
                  *(_QWORD *)(a1 + 56));
      if ( updated >= 0 )
      {
        updated = 0;
        *a2 = v6;
        v6 = 0LL;
      }
    }
    if ( v6 )
      CmpLightWeightCleanupModifyKeyDataUoW(v4, v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)updated;
}

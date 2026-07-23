/*
 * XREFs of CmpCleanupLightWeightUoWData @ 0x140695AAC
 * Callers:
 *     CmpCleanupLightWeightPrepare @ 0x1406949F8 (CmpCleanupLightWeightPrepare.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     CmpDereferenceSecurityNode @ 0x1401B3530 (CmpDereferenceSecurityNode.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1405AB51C (CmpCleanupDiscardReplaceContext.c)
 *     CmpFreeKeyByCell @ 0x1405AE6F8 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x1405AEB5C (CmpFreeValue.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140696790 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x1408047A0 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 */

void __fastcall CmpCleanupLightWeightUoWData(__int64 a1)
{
  ULONG_PTR *v1; // rdi
  int v3; // eax
  _QWORD *v4; // rcx
  ULONG_PTR v5; // rdx
  unsigned int *v6; // rcx
  ULONG_PTR v7; // rdx

  v1 = *(ULONG_PTR **)(a1 + 104);
  if ( !v1 )
    return;
  v3 = *(_DWORD *)(a1 + 68);
  switch ( v3 )
  {
    case 0:
      goto LABEL_11;
    case 1:
      goto LABEL_25;
    case 2:
      goto LABEL_12;
    case 3:
LABEL_25:
      *(_QWORD *)(a1 + 104) = 0LL;
      return;
  }
  if ( v3 <= 3 )
    return;
  if ( v3 > 6 )
  {
    if ( v3 == 9 )
    {
      v5 = *(unsigned int *)v1;
      if ( (_DWORD)v5 != -1 )
        CmpDereferenceSecurityNode(v1[1], v5);
      ExFreePoolWithTag(v1, 0x77554D43u);
      *(_QWORD *)(a1 + 104) = 0LL;
      return;
    }
    if ( v3 != 10 )
    {
      if ( v3 != 12 )
        return;
LABEL_11:
      CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL), *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL), 0);
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL) = *(_DWORD *)(a1 + 88);
      *(_DWORD *)(a1 + 88) = 0;
      v1 = *(ULONG_PTR **)(a1 + 104);
LABEL_12:
      if ( v1 )
      {
        CmpLightWeightCleanupModifyKeyDataUoW(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL));
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v4 = *(_QWORD **)(a1 + 112);
      if ( v4 )
      {
        CmpCleanupDiscardReplaceContext(v4);
        CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 112));
LABEL_16:
        *(_QWORD *)(a1 + 112) = 0LL;
        return;
      }
      return;
    }
    goto LABEL_25;
  }
  CmpLightWeightCleanupSetValueKeyUoW(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL), *(_QWORD *)(a1 + 104));
  v6 = *(unsigned int **)(a1 + 112);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( v6 )
  {
    v7 = *v6;
    if ( (_DWORD)v7 != -1 )
    {
      CmpFreeValue(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL), v7);
      v6 = *(unsigned int **)(a1 + 112);
    }
    CmpFreeTransientPoolWithTag(v6, 0x77554D43u);
    goto LABEL_16;
  }
}

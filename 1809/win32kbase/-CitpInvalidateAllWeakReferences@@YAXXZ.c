/*
 * XREFs of ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C018479C
 * Callers:
 *     ?CitpResetTracking@@YAJXZ @ 0x1C0185170 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C0033808 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C003B2DC (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 */

void CitpInvalidateAllWeakReferences(void)
{
  __int64 i; // rbx
  __int64 v1; // rcx

  for ( i = gppiList; i; i = *(_QWORD *)(i + 384) )
  {
    if ( CitpProcessInfoIsValid(*(struct _CIT_PROCESS **)(i + 928)) )
    {
      *(_DWORD *)(v1 + 24) = 0;
      CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(*(_QWORD *)(i + 928) + 16LL));
    }
  }
}

/*
 * XREFs of ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0082E28
 * Callers:
 *     CitProcessCallout @ 0x1C003625C (CitProcessCallout.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C00367D8 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00810B8 (-CitpContextTrackingDataCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C01C739C (-CitpInvalidateAllWeakReferences@@YAXXZ.c)
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C01C7B64 (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C0082F74 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 */

void __fastcall CitpInteractionSummaryDelete(struct _CIT_INTERACTION_SUMMARY **a1)
{
  struct _CIT_INTERACTION_SUMMARY *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *(struct _CIT_INTERACTION_SUMMARY **)v1 != v1 )
      CitpInteractionSummaryStopTracking(
        *a1,
        (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    Win32FreePool((__int64)v1);
    *a1 = 0LL;
  }
}

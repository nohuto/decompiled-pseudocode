/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x14092130C
 * Callers:
 *     VfThunkAddTargetNotify @ 0x140920F24 (VfThunkAddTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x140920FFC (ViThunkCreateSharedExportInformation.c)
 *     VfThunkRemoveTargetNotify @ 0x140921448 (VfThunkRemoveTargetNotify.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall ViThunkFreeSharedThunksArray(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x54496656u);
    *a1 = 0LL;
  }
}

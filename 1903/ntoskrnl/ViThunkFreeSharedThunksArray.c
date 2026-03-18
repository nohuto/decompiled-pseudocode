/*
 * XREFs of ViThunkFreeSharedThunksArray @ 0x14096037C
 * Callers:
 *     VfThunkAddTargetNotify @ 0x140960028 (VfThunkAddTargetNotify.c)
 *     ViThunkCreateSharedExportInformation @ 0x140960100 (ViThunkCreateSharedExportInformation.c)
 *     VfThunkRemoveTargetNotify @ 0x1409604EC (VfThunkRemoveTargetNotify.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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

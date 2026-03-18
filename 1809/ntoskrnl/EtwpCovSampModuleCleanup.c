/*
 * XREFs of EtwpCovSampModuleCleanup @ 0x1408C6CE4
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x1408C4EA4 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampContextPruneModules @ 0x1408C5CF8 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x1408C6240 (EtwpCovSampContextRemoveAndFreeModule.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x1408C6E80 (EtwpCovSampModuleNameInfoCleanup.c)
 */

void __fastcall EtwpCovSampModuleCleanup(__int64 a1)
{
  _QWORD *v2; // rcx
  void *v3; // rcx

  v2 = (_QWORD *)(a1 + 104);
  if ( *v2 )
  {
    EtwpCovSampModuleNameInfoCleanup(v2);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_WORD *)(a1 + 120) = 0;
  }
  v3 = *(void **)(a1 + 48);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_DWORD *)(a1 + 56) = 0;
  }
}

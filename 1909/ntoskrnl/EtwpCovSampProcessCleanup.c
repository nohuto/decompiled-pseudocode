/*
 * XREFs of EtwpCovSampProcessCleanup @ 0x140903F1C
 * Callers:
 *     EtwExitProcess @ 0x14065288C (EtwExitProcess.c)
 *     EtwpCovSampContextCleanup @ 0x140901650 (EtwpCovSampContextCleanup.c)
 *     EtwpCovSampProcessEnsureContext @ 0x140903FA4 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCoverageSamplerStop @ 0x140905C54 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpCovSampModuleDereference @ 0x140903AF4 (EtwpCovSampModuleDereference.c)
 */

void __fastcall EtwpCovSampProcessCleanup(__int64 a1, char a2)
{
  void *v4; // rcx
  unsigned int v5; // r9d
  int v6; // r9d

  v4 = *(void **)(a1 + 24);
  if ( v4 )
  {
    v5 = 0;
    if ( *(_DWORD *)(a1 + 32) )
    {
      do
      {
        EtwpCovSampModuleDereference(*(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v5 + 8));
        v5 = v6 + 1;
      }
      while ( v5 < *(_DWORD *)(a1 + 32) );
      v4 = *(void **)(a1 + 24);
    }
    ExFreePoolWithTag(v4, 0x56777445u);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
  }
  if ( *(_QWORD *)a1 )
  {
    if ( a2 )
      ObfDereferenceObject(**(PVOID **)a1);
    *(_QWORD *)a1 = 0LL;
  }
}

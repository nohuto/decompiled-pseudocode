/*
 * XREFs of EtwpCovSampProcessCleanup @ 0x1408C83F0
 * Callers:
 *     EtwExitProcess @ 0x1406090F8 (EtwExitProcess.c)
 *     EtwpCovSampContextCleanup @ 0x1408C5D5C (EtwpCovSampContextCleanup.c)
 *     EtwpCovSampProcessEnsureContext @ 0x1408C8478 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCoverageSamplerStop @ 0x1408CA0F0 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpCovSampModuleDereference @ 0x1408C7FD4 (EtwpCovSampModuleDereference.c)
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

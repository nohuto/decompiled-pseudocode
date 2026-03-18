/*
 * XREFs of IopLiveDumpFreeDumpBuffers @ 0x14085A0A8
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x140859D00 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x14085A3FC (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x14085A768 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14085A994 (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x14010DB20 (MmFreeIndependentPages.c)
 *     VslIsSecureKernelRunning @ 0x14013D5C0 (VslIsSecureKernelRunning.c)
 *     VslAbortLiveDump @ 0x14028EE8C (VslAbortLiveDump.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpFreeDumpBuffers(__int64 a1)
{
  unsigned __int64 i; // rdi
  unsigned __int64 v3; // rcx
  void *v4; // rcx

  if ( a1 )
  {
    if ( VslIsSecureKernelRunning() )
      VslAbortLiveDump();
    for ( i = 0LL; i < *(_QWORD *)(a1 + 56); ++i )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * i);
      if ( v3 )
      {
        MmFreeIndependentPages(v3, 0x40000uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * i) = 0LL;
      }
    }
    v4 = *(void **)(a1 + 64);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x706D644Cu);
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_DWORD *)(a1 + 32) = 0;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}

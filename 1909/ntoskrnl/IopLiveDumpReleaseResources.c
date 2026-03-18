/*
 * XREFs of IopLiveDumpReleaseResources @ 0x140859AFC
 * Callers:
 *     DbgkpWerCleanupContext @ 0x14084BB5C (DbgkpWerCleanupContext.c)
 *     IoCaptureLiveDump @ 0x140858644 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140858C90 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140858E28 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x14010D210 (MmFreeIndependentPages.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1408597A8 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpFreeMappingResources @ 0x140859840 (IopLiveDumpFreeMappingResources.c)
 */

void __fastcall IopLiveDumpReleaseResources(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx

  if ( a1 )
  {
    IopLiveDumpFreeMappingResources(a1);
    v2 = *(void **)(a1 + 384);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x706D644Cu);
      *(_QWORD *)(a1 + 384) = 0LL;
    }
    v3 = *(void **)(a1 + 416);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x706D644Cu);
      *(_QWORD *)(a1 + 416) = 0LL;
    }
    v4 = *(void **)(a1 + 456);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x706D644Cu);
      *(_QWORD *)(a1 + 456) = 0LL;
    }
    v5 = *(void **)(a1 + 480);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x706D644Cu);
      *(_QWORD *)(a1 + 480) = 0LL;
    }
    v6 = *(_QWORD *)(a1 + 128);
    if ( v6 )
    {
      MmFreeIndependentPages(v6, *(unsigned int *)(a1 + 136));
      *(_QWORD *)(a1 + 128) = 0LL;
    }
    IopLiveDumpFreeDumpBuffers(a1 + 488);
    v7 = *(void **)(a1 + 576);
    if ( v7 )
    {
      ZwClose(v7);
      *(_QWORD *)(a1 + 576) = 0LL;
    }
    v8 = *(void **)(a1 + 584);
    if ( v8 )
    {
      ZwClose(v8);
      *(_QWORD *)(a1 + 584) = 0LL;
    }
    v9 = *(void **)(a1 + 592);
    if ( v9 )
    {
      ZwClose(v9);
      *(_QWORD *)(a1 + 592) = 0LL;
    }
  }
}

/*
 * XREFs of DbgkpWerCleanupContext @ 0x140813C10
 * Callers:
 *     DbgkWerCaptureLiveKernelDump @ 0x1408136F0 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140813DF0 (DbgkpWerDeferredWriteRoutine.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1402860EC (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140286194 (IopLiveDumpTraceInterfaceStart.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopLiveDumpReleaseResources @ 0x140821590 (IopLiveDumpReleaseResources.c)
 */

void __fastcall DbgkpWerCleanupContext(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  void *v4; // rcx
  _QWORD *v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  _QWORD *v8; // rdi
  void *v9; // rcx
  _QWORD *v10; // rsi
  void *v11; // rcx
  void *v12; // rcx
  int v13; // eax
  int v14; // eax

  DbgPrintEx(5u, 3u, "DBGK: DbgkpWerCleanupContext: Context 0x%p\n", (const void *)a1);
  if ( a1 )
  {
    v2 = *(void **)(a1 + 136);
    if ( v2 )
    {
      IopLiveDumpTraceInterfaceStart();
      IopLiveDumpTraceInterfaceEnd(v3, 2LL, 0);
      IopLiveDumpReleaseResources(v2);
      ExFreePoolWithTag(v2, 0x706D644Cu);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v4 = *(void **)(a1 + 120);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x57676244u);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    v5 = *(_QWORD **)(a1 + 128);
    if ( v5 )
    {
      v6 = (void *)v5[2];
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        *(_QWORD *)(*(_QWORD *)(a1 + 128) + 16LL) = 0LL;
        v5 = *(_QWORD **)(a1 + 128);
      }
      v7 = (void *)v5[1];
      if ( v7 )
      {
        ZwClose(v7);
        *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) = 0LL;
        v5 = *(_QWORD **)(a1 + 128);
      }
      v8 = (_QWORD *)v5[5];
      v5[5] = 0LL;
      if ( v8 )
      {
        do
        {
          v9 = (void *)v8[2];
          v10 = (_QWORD *)v8[4];
          if ( v9 )
            ExFreePoolWithTag(v9, 0x57676244u);
          ExFreePoolWithTag(v8, 0x57676244u);
          v8 = v10;
        }
        while ( v10 );
      }
      v11 = *(void **)(a1 + 128);
      if ( v11 )
        ExFreePoolWithTag(v11, 0x57676244u);
      *(_QWORD *)(a1 + 128) = 0LL;
    }
    v12 = *(void **)(a1 + 144);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0x57676244u);
      *(_QWORD *)(a1 + 144) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 104) )
    {
      if ( (*(_DWORD *)(a1 + 112) & 1) == 0 )
      {
        v13 = WerLiveKernelCancelReport();
        if ( v13 < 0 )
          DbgPrintEx(5u, 1u, "DBGK: DbgkpWerCleanupContext: WerLiveKernelCancelReport failed, 0x%X\n", v13);
      }
      v14 = WerLiveKernelCloseHandle(*(_QWORD *)(a1 + 104));
      if ( v14 < 0 )
        DbgPrintEx(5u, 1u, "DBGK: DbgkpWerCleanupContext: WerLiveKernelCloseHandle failed, 0x%X\n", v14);
      *(_QWORD *)(a1 + 104) = 0LL;
    }
  }
}

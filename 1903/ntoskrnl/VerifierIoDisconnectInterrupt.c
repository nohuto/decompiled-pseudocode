/*
 * XREFs of VerifierIoDisconnectInterrupt @ 0x140967190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall VerifierIoDisconnectInterrupt(__int64 a1)
{
  void *v1; // rbx

  v1 = 0LL;
  if ( ViCtxInitializedIsrStateBlocks )
    v1 = *(void **)(a1 + 48);
  ((void (*)(void))pXdvIoDisconnectInterrupt)();
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}

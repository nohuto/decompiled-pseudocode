/*
 * XREFs of ndisMDeferredDpc @ 0x1C00A1460
 * Callers:
 *     <none>
 * Callees:
 *     ndisMProcessDeferred @ 0x1C009B2BC (ndisMProcessDeferred.c)
 */

void __fastcall ndisMDeferredDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KSPIN_LOCK *v5; // rdi
  unsigned int v6; // [rsp+38h] [rbp+10h]

  v5 = DeferredContext + 12;
  while ( 1 )
  {
    KeAcquireSpinLockAtDpcLevel(v5);
    DeferredContext[65] = KeGetCurrentThread();
    if ( !*((_BYTE *)DeferredContext + 89) )
      break;
    DeferredContext[65] = 0LL;
    KeReleaseSpinLockFromDpcLevel(v5);
    v6 = 0;
    do
      ++v6;
    while ( v6 < 0x32 );
  }
  *((_BYTE *)DeferredContext + 89) = 1;
  DeferredContext[233] = KeGetCurrentThread();
  ndisMProcessDeferred((__int64)DeferredContext);
  DeferredContext[233] = 0LL;
  DeferredContext[65] = 0LL;
  *((_BYTE *)DeferredContext + 89) = 0;
  KeReleaseSpinLockFromDpcLevel(v5);
}

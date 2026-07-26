/*
 * XREFs of ndisMDeferredDpc @ 0x1C00661F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisMProcessDeferred @ 0x1C00632D4 (ndisMProcessDeferred.c)
 */

void __fastcall ndisMDeferredDpc(
        struct _KDPC *Dpc,
        KSPIN_LOCK *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KSPIN_LOCK *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // [rsp+38h] [rbp+10h]

  v4 = DeferredContext + 12;
  KeAcquireSpinLockAtDpcLevel(DeferredContext + 12);
  CurrentThread = KeGetCurrentThread();
  for ( *((_DWORD *)DeferredContext + 466) = 656901; ; *((_DWORD *)DeferredContext + 466) = 656903 )
  {
    DeferredContext[65] = (KSPIN_LOCK)CurrentThread;
    if ( !*((_BYTE *)DeferredContext + 89) )
      break;
    DeferredContext[65] = 0LL;
    *((_DWORD *)DeferredContext + 466) = 0;
    KeReleaseSpinLockFromDpcLevel(v4);
    v7 = 0;
    do
      ++v7;
    while ( v7 < 0x32 );
    KeAcquireSpinLockAtDpcLevel(v4);
    CurrentThread = KeGetCurrentThread();
  }
  *((_BYTE *)DeferredContext + 89) = 1;
  *((_DWORD *)DeferredContext + 467) = 656903;
  DeferredContext[234] = (KSPIN_LOCK)KeGetCurrentThread();
  ndisMProcessDeferred((__int64)DeferredContext);
  *((_DWORD *)DeferredContext + 467) = 0;
  DeferredContext[234] = 0LL;
  DeferredContext[65] = 0LL;
  *((_DWORD *)DeferredContext + 466) = 0;
  *((_BYTE *)DeferredContext + 89) = 0;
  KeReleaseSpinLockFromDpcLevel(v4);
}

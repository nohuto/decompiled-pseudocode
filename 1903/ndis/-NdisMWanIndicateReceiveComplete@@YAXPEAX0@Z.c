/*
 * XREFs of ?NdisMWanIndicateReceiveComplete@@YAXPEAX0@Z @ 0x1C00961A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NdisMWanIndicateReceiveComplete(KSPIN_LOCK *a1, void *a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v5; // al
  KSPIN_LOCK v6; // rsi
  KIRQL v7; // bp

  v2 = a1 + 12;
  v5 = KeAcquireSpinLockRaiseToDpc(a1 + 12);
  v6 = a1[7];
  v7 = v5;
  while ( 1 )
  {
    a1[65] = 0LL;
    if ( !v6 )
      break;
    KeReleaseSpinLockFromDpcLevel(v2);
    (*(void (__fastcall **)(void *))(v6 + 136))(a2);
    KeAcquireSpinLockAtDpcLevel(v2);
    a1[65] = (KSPIN_LOCK)KeGetCurrentThread();
    v6 = *(_QWORD *)(v6 + 392);
  }
  KeReleaseSpinLock(v2, v7);
}

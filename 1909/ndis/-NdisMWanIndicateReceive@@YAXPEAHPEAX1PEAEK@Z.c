/*
 * XREFs of ?NdisMWanIndicateReceive@@YAXPEAHPEAX1PEAEK@Z @ 0x1C0096290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NdisMWanIndicateReceive(int *a1, KSPIN_LOCK *a2, void *a3, unsigned __int8 *a4, unsigned int a5)
{
  KSPIN_LOCK *v5; // rdi
  KIRQL v10; // al
  KSPIN_LOCK v11; // rsi
  KIRQL v12; // bp

  v5 = a2 + 12;
  v10 = KeAcquireSpinLockRaiseToDpc(a2 + 12);
  v11 = a2[7];
  v12 = v10;
  while ( 1 )
  {
    a2[65] = 0LL;
    if ( !v11 )
      break;
    KeReleaseSpinLockFromDpcLevel(v5);
    *a1 = (*(__int64 (__fastcall **)(void *, unsigned __int8 *, _QWORD))(*(_QWORD *)(v11 + 24) + 264LL))(a3, a4, a5);
    KeAcquireSpinLockAtDpcLevel(v5);
    a2[65] = (KSPIN_LOCK)KeGetCurrentThread();
    v11 = *(_QWORD *)(v11 + 392);
  }
  KeReleaseSpinLock(v5, v12);
}

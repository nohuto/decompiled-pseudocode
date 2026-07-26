/*
 * XREFs of ndisCleanupUserOpenContext @ 0x1C0094C0C
 * Callers:
 *     ndisCloseHandler @ 0x1C0094D08 (ndisCloseHandler.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisCleanupUserOpenContext(__int64 a1, _BYTE *P)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v5; // al
  KIRQL v6; // al
  __int64 v7; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 4432);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4432));
  if ( P[24] )
    --*(_DWORD *)(a1 + 3752);
  else
    --*(_DWORD *)(a1 + 3676);
  KeReleaseSpinLock(v2, v5);
  ExFreePoolWithTag(P, 0);
  ndisReferencePackage((__int64)&ndisPkgs);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  --*(_DWORD *)(a1 + 1800);
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  ndisDereferenceMiniport(a1, 0x56u);
  if ( (*(_DWORD *)(a1 + 124) & 0x2000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 3984);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD))(v7 + 40))(*(_QWORD *)(v7 + 8));
  }
}

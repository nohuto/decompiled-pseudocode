/*
 * XREFs of ndisCleanupUserOpenContext @ 0x1C005F834
 * Callers:
 *     ndisCloseHandler @ 0x1C005F928 (ndisCloseHandler.c)
 *     NdisWdfCleanupUserOpenContext @ 0x1C00651D0 (NdisWdfCleanupUserOpenContext.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 */

void __fastcall ndisCleanupUserOpenContext(__int64 a1, _BYTE *a2)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v5; // al
  KIRQL v6; // al
  __int64 v7; // rcx

  v2 = (KSPIN_LOCK *)(a1 + 4472);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4472));
  if ( a2[24] )
    --*(_DWORD *)(a1 + 3784);
  else
    --*(_DWORD *)(a1 + 3700);
  KeReleaseSpinLock(v2, v5);
  ExFreePoolWithTag(a2, 0);
  ndisReferencePackage(&ndisPkgs);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  --*(_DWORD *)(a1 + 1800);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  ndisDereferencePackage(&ndisPkgs);
  ndisDereferenceMiniport(a1, 0x56u);
  if ( (*(_DWORD *)(a1 + 124) & 0x2000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 4016);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD))(v7 + 40))(*(_QWORD *)(v7 + 8));
  }
}

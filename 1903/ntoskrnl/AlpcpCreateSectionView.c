/*
 * XREFs of AlpcpCreateSectionView @ 0x1406495FC
 * Callers:
 *     NtAlpcCreateSectionView @ 0x1406492C0 (NtAlpcCreateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x14068CDB8 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     AlpcpUnlockBlob @ 0x1405E4790 (AlpcpUnlockBlob.c)
 *     AlpcpCreateRegion @ 0x1406496F0 (AlpcpCreateRegion.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14064A878 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14064B150 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateView @ 0x14064B228 (AlpcpCreateView.c)
 */

__int64 __fastcall AlpcpCreateSectionView(
        ULONG_PTR BugCheckParameter2,
        signed __int64 *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *BugCheckParameter2a)
{
  int Region; // ebx
  int View; // esi
  __int64 v10; // [rsp+20h] [rbp-28h]

  *BugCheckParameter2a = 0LL;
  AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
  Region = AlpcpCreateRegion(BugCheckParameter2);
  AlpcpUnlockBlob(BugCheckParameter2);
  if ( Region < 0 )
    return (unsigned int)Region;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a2 + 44), 0LL);
  AlpcpLockForCachedReferenceBlob((ULONG_PTR)BugCheckParameter2a);
  View = AlpcpCreateView((ULONG_PTR)BugCheckParameter2a, a2);
  AlpcpUnlockBlob((ULONG_PTR)BugCheckParameter2a);
  if ( _InterlockedCompareExchange64(a2 + 44, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 44);
  KeAbPostRelease((ULONG_PTR)(a2 + 44));
  AlpcpDereferenceBlobEx((ULONG_PTR)BugCheckParameter2a);
  if ( View < 0 )
    return (unsigned int)View;
  *BugCheckParameter2a = v10;
  return 0LL;
}

/*
 * XREFs of AlpcpCreateSectionView @ 0x14065D26C
 * Callers:
 *     NtAlpcCreateSectionView @ 0x14065CF30 (NtAlpcCreateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x1406C6E38 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     AlpcpUnlockBlob @ 0x1405E4F60 (AlpcpUnlockBlob.c)
 *     AlpcpCreateRegion @ 0x14065D360 (AlpcpCreateRegion.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14065E4F8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14065EDF0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateView @ 0x14065EEC8 (AlpcpCreateView.c)
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

/*
 * XREFs of AlpcpCreateSectionView @ 0x14061767C
 * Callers:
 *     NtAlpcCreateSectionView @ 0x140617470 (NtAlpcCreateSectionView.c)
 *     AlpcpMapLegacyPortView @ 0x14061DCE4 (AlpcpMapLegacyPortView.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     AlpcpCreateRegion @ 0x140617770 (AlpcpCreateRegion.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140617E4C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpCreateView @ 0x140618D0C (AlpcpCreateView.c)
 *     AlpcpDereferenceBlobEx @ 0x140619C70 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x140638060 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpCreateSectionView(
        ULONG_PTR BugCheckParameter2,
        signed __int64 *Object,
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
  ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
  AlpcpLockForCachedReferenceBlob((ULONG_PTR)BugCheckParameter2a);
  View = AlpcpCreateView((ULONG_PTR)BugCheckParameter2a, Object);
  AlpcpUnlockBlob((ULONG_PTR)BugCheckParameter2a);
  if ( _InterlockedCompareExchange64(Object + 44, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(Object + 44);
  KeAbPostRelease((ULONG_PTR)(Object + 44));
  AlpcpDereferenceBlobEx((ULONG_PTR)BugCheckParameter2a);
  if ( View < 0 )
    return (unsigned int)View;
  *BugCheckParameter2a = v10;
  return 0LL;
}

/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x14065F4F0
 * Callers:
 *     AlpcpLookupMessage @ 0x1405E3E30 (AlpcpLookupMessage.c)
 *     NtAlpcCreateSectionView @ 0x14065CF30 (NtAlpcCreateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14065E5E8 (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x14065ECF0 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14065F3F8 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeletePortSection @ 0x1406D16E0 (NtAlpcDeletePortSection.c)
 *     NtAlpcRevokeSecurityContext @ 0x140884E20 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x140885E10 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140108CE8 (ExfAcquireReleasePushLockExclusive.c)
 *     AlpcpReferenceBlob @ 0x14065F5C0 (AlpcpReferenceBlob.c)
 */

ULONG_PTR __fastcall AlpcReferenceBlobByHandle(_QWORD *a1, int a2, _DWORD *a3)
{
  signed __int64 *v6; // rdi
  ULONG_PTR v7; // rbx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !a1 )
    return 0LL;
  v6 = a1 + 1;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 1), 0LL);
  if ( (unsigned __int64)(unsigned int)(a2 - 16) < a1[2]
    && (v7 = *(_QWORD *)(*a1 + 8LL * (unsigned int)(a2 - 16))) != 0
    && *(unsigned __int8 *)(v7 - 31) == *a3
    && AlpcpReferenceBlob(v7) )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( (*(_BYTE *)(v7 - 32) & 4) != 0 )
    {
      _InterlockedOr(v9, 0);
      if ( (*(_QWORD *)(v7 - 16) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v7 - 16));
    }
    return v7;
  }
  else
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    return 0LL;
  }
}

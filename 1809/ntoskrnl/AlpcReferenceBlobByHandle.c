/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x140619368
 * Callers:
 *     NtAlpcCreateSectionView @ 0x140617470 (NtAlpcCreateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140618818 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140619274 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x140619B00 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcDeletePortSection @ 0x14061D3E0 (NtAlpcDeletePortSection.c)
 *     AlpcpLookupMessage @ 0x140637990 (AlpcpLookupMessage.c)
 *     NtAlpcRevokeSecurityContext @ 0x14084B3A0 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x14084C2F0 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14012F3D0 (ExfAcquireReleasePushLockExclusive.c)
 *     AlpcpReferenceBlob @ 0x140619428 (AlpcpReferenceBlob.c)
 */

ULONG_PTR __fastcall AlpcReferenceBlobByHandle(_QWORD *a1, int a2, _DWORD *a3)
{
  signed __int64 *v6; // rbx
  unsigned __int64 v7; // rcx
  ULONG_PTR v8; // rdi
  signed __int32 v10[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( !a1 )
    return 0LL;
  v6 = a1 + 1;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 1), 0LL);
  v7 = (unsigned int)(a2 - 16);
  if ( v7 >= a1[2]
    || (v8 = *(_QWORD *)(*a1 + 8 * v7)) == 0
    || *(unsigned __int8 *)(v8 - 31) != *a3
    || !AlpcpReferenceBlob(v8) )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    return 0LL;
  }
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  if ( (*(_BYTE *)(v8 - 32) & 4) != 0 )
  {
    _InterlockedOr(v10, 0);
    if ( (*(_QWORD *)(v8 - 16) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v8 - 16));
  }
  return v8;
}

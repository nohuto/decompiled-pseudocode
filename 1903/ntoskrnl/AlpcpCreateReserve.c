/*
 * XREFs of AlpcpCreateReserve @ 0x1406C84A8
 * Callers:
 *     NtAlpcCreateResourceReserve @ 0x1406C83C0 (NtAlpcCreateResourceReserve.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     AlpcpAllocateMessage @ 0x14064A798 (AlpcpAllocateMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x14064B150 (AlpcpDereferenceBlobEx.c)
 *     AlpcpInsertResourcePort @ 0x14064B47C (AlpcpInsertResourcePort.c)
 *     AlpcpReferenceBlob @ 0x14064B920 (AlpcpReferenceBlob.c)
 *     AlpcpChargePagedPoolQuota @ 0x14064B958 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpAllocateBlob @ 0x14064B994 (AlpcpAllocateBlob.c)
 *     AlpcpEndInitialization @ 0x14064BB54 (AlpcpEndInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x14064BB94 (AlpcAddHandleTableEntry.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14064C2B4 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpCaptureMessageData @ 0x1406C86F8 (AlpcpCaptureMessageData.c)
 */

__int64 __fastcall AlpcpCreateReserve(signed __int64 *Object, unsigned __int64 a2, _QWORD *a3)
{
  char *Blob; // rax
  ULONG_PTR v8; // rdi
  struct _KPROCESS *Process; // r14
  int v10; // ebx
  ULONG_PTR v11; // rbx
  int v12; // eax
  int v13; // esi
  volatile signed __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR v18; // [rsp+78h] [rbp+20h] BYREF

  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  if ( a2 < 0x28 )
    return 3221225485LL;
  Blob = AlpcpAllocateBlob((__int64)&AlpcReserveType, 48LL, 1);
  v8 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x30uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = AlpcpChargePagedPoolQuota((__int64)Process, 0x318uLL);
  if ( v10 < 0 )
    goto LABEL_8;
  v10 = AlpcpAllocateMessage(&BugCheckParameter2, a2, 1LL);
  if ( v10 < 0 )
  {
    AlpcpReleasePagedPoolQuota(Process, 0x318uLL);
LABEL_8:
    AlpcpDereferenceBlobEx(v8, 1);
    return (unsigned int)v10;
  }
  ObfReferenceObjectWithTag(Process, 0x63706C41u);
  v11 = BugCheckParameter2;
  *(_QWORD *)(BugCheckParameter2 + 48) = Process;
  *(_QWORD *)(v8 + 24) = v11;
  *(_QWORD *)(v8 + 32) = a2;
  *(_QWORD *)(v11 + 96) = v8;
  v12 = AlpcpCaptureMessageData(*(_QWORD *)(v8 + 24), a2, 0LL);
  *(_DWORD *)(v8 + 40) = 1;
  v13 = v12;
  AlpcpReferenceBlob(v8);
  AlpcpUnlockMessage(v11);
  if ( v13 >= 0 )
  {
    v14 = Object + 44;
    ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
    if ( (Object[52] & 0x20) != 0 )
    {
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      v13 = -1073741769;
    }
    else
    {
      AlpcpReferenceBlob(v8);
      ExAcquirePushLockExclusiveEx(v8 - 16, 0LL);
      *(_BYTE *)(v8 - 32) |= 4u;
      v15 = Object[2] + 40;
      v18 = v8;
      *(_QWORD *)(v8 + 8) = v15;
      v16 = AlpcAddHandleTableEntry(Object[2] + 40, &v18);
      *(_QWORD *)(v8 + 16) = v16;
      if ( v16 == -1 )
      {
        if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        *(_QWORD *)(v8 + 8) = 0LL;
        AlpcpEndInitialization(v8);
        AlpcpDereferenceBlobEx(v8, 2);
        return 3221225626LL;
      }
      *(_QWORD *)v8 = Object;
      ObfReferenceObject(Object);
      AlpcpInsertResourcePort((__int64)Object, v8);
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      *a3 = *(_QWORD *)(v8 + 16);
      AlpcpEndInitialization(v8);
      v13 = 0;
    }
  }
  AlpcpDereferenceBlobEx(v8, 1);
  return (unsigned int)v13;
}

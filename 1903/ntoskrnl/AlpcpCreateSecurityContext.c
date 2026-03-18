/*
 * XREFs of AlpcpCreateSecurityContext @ 0x14064B500
 * Callers:
 *     NtAlpcCreateSecurityContext @ 0x14064AE60 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14064B758 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcCreateSecurityContext @ 0x140885260 (AlpcCreateSecurityContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     IoThreadToProcess @ 0x14000E240 (IoThreadToProcess.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCreateClientSecurity @ 0x1405E4A70 (SeCreateClientSecurity.c)
 *     AlpcpDereferenceBlobEx @ 0x14064B150 (AlpcpDereferenceBlobEx.c)
 *     AlpcpInsertResourcePort @ 0x14064B47C (AlpcpInsertResourcePort.c)
 *     AlpcpReferenceBlob @ 0x14064B920 (AlpcpReferenceBlob.c)
 *     AlpcpChargePagedPoolQuota @ 0x14064B958 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpAllocateBlob @ 0x14064B994 (AlpcpAllocateBlob.c)
 *     AlpcpEndInitialization @ 0x14064BB54 (AlpcpEndInitialization.c)
 *     AlpcAddHandleTableEntry @ 0x14064BB94 (AlpcAddHandleTableEntry.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14064C2B4 (AlpcpReleasePagedPoolQuota.c)
 */

__int64 __fastcall AlpcpCreateSecurityContext(
        volatile signed __int64 *Object,
        PETHREAD ClientThread,
        char a3,
        struct _SECURITY_QUALITY_OF_SERVICE *a4,
        ULONG_PTR *a5)
{
  PEPROCESS v9; // rdi
  void *Blob; // rax
  ULONG_PTR v11; // rbx
  NTSTATUS ClientSecurity; // ebp
  volatile signed __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  ULONG_PTR v17[7]; // [rsp+20h] [rbp-38h] BYREF

  v9 = IoThreadToProcess(ClientThread);
  Blob = (void *)AlpcpAllocateBlob(&AlpcSecurityType, 112LL, 0LL);
  v11 = (ULONG_PTR)Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x70uLL);
  *(_QWORD *)(v11 + 8) = -1LL;
  ClientSecurity = AlpcpChargePagedPoolQuota(v9, 160LL);
  if ( ClientSecurity >= 0 )
  {
    ClientSecurity = SeCreateClientSecurity(ClientThread, a4, 0, (PSECURITY_CLIENT_CONTEXT)(v11 + 32));
    if ( ClientSecurity < 0 )
    {
      AlpcpReleasePagedPoolQuota(v9, 160LL);
    }
    else
    {
      ObfReferenceObjectWithTag(v9, 0x63706C41u);
      *(_QWORD *)(v11 + 16) = v9;
      if ( !a3 )
      {
LABEL_5:
        *a5 = v11;
        return 0LL;
      }
      v14 = Object + 44;
      ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
      if ( (Object[52] & 0x20) == 0 )
      {
        ExAcquirePushLockExclusiveEx(v11 - 16, 0LL);
        *(_BYTE *)(v11 - 32) |= 4u;
        AlpcpReferenceBlob(v11);
        v15 = *((_QWORD *)Object + 2) + 40LL;
        v17[0] = v11;
        *(_QWORD *)v11 = v15;
        v16 = AlpcAddHandleTableEntry(v15, v17);
        *(_QWORD *)(v11 + 8) = v16;
        if ( v16 != -1 )
        {
          ObfReferenceObject((PVOID)Object);
          *(_QWORD *)(v11 + 24) = Object;
          AlpcpInsertResourcePort((__int64)Object, v11);
          if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)Object + 44);
          KeAbPostRelease((ULONG_PTR)(Object + 44));
          AlpcpEndInitialization(v11);
          goto LABEL_5;
        }
        if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)Object + 44);
        KeAbPostRelease((ULONG_PTR)(Object + 44));
        *(_QWORD *)v11 = 0LL;
        AlpcpEndInitialization(v11);
        AlpcpDereferenceBlobEx(v11, 2);
        return 3221225626LL;
      }
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      KeAbPostRelease((ULONG_PTR)(Object + 44));
      ClientSecurity = -1073741670;
    }
  }
  AlpcpDereferenceBlobEx(v11, 1);
  return (unsigned int)ClientSecurity;
}

/*
 * XREFs of AlpcpDeleteBlob @ 0x14064BD0C
 * Callers:
 *     AlpcpFlushResourcesPort @ 0x14064A1EC (AlpcpFlushResourcesPort.c)
 *     NtAlpcCreateSecurityContext @ 0x14064AE60 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x14064B050 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14064B758 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpDeleteView @ 0x14064BCD8 (AlpcpDeleteView.c)
 *     NtAlpcCreatePortSection @ 0x14068A860 (NtAlpcCreatePortSection.c)
 *     NtAlpcDeletePortSection @ 0x1406D2380 (NtAlpcDeletePortSection.c)
 *     NtAlpcDeleteResourceReserve @ 0x140886600 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

char __fastcall AlpcpDeleteBlob(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  char v3; // al

  v1 = (volatile signed __int64 *)(a1 - 16);
  ExAcquirePushLockExclusiveEx(a1 - 16, 0LL);
  v3 = *(_BYTE *)(a1 - 32);
  if ( (v3 & 8) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 - 32) = v3 | 8;
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    (*(void (__fastcall **)(__int64))(AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 31)] + 32LL))(a1);
    return 1;
  }
}

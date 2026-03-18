/*
 * XREFs of AlpcpDeleteBlob @ 0x14065F99C
 * Callers:
 *     NtAlpcCreatePortSection @ 0x140650980 (NtAlpcCreatePortSection.c)
 *     AlpcpFlushResourcesPort @ 0x14065DE64 (AlpcpFlushResourcesPort.c)
 *     NtAlpcCreateSecurityContext @ 0x14065EB00 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcDeleteSecurityContext @ 0x14065ECF0 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14065F3F8 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpDeleteView @ 0x14065F968 (AlpcpDeleteView.c)
 *     NtAlpcDeletePortSection @ 0x1406D16E0 (NtAlpcDeletePortSection.c)
 *     NtAlpcDeleteResourceReserve @ 0x140885E10 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
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

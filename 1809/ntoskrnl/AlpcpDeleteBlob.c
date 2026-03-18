/*
 * XREFs of AlpcpDeleteBlob @ 0x140618BF4
 * Callers:
 *     NtAlpcCreateSecurityContext @ 0x140617600 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140618274 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpDeleteView @ 0x140618AC0 (AlpcpDeleteView.c)
 *     NtAlpcDeleteSecurityContext @ 0x140618B00 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpFlushResourcesPort @ 0x140619228 (AlpcpFlushResourcesPort.c)
 *     NtAlpcCreatePortSection @ 0x14061B620 (NtAlpcCreatePortSection.c)
 *     NtAlpcDeletePortSection @ 0x14061C3E0 (NtAlpcDeletePortSection.c)
 *     AlpcpMapLegacyPortView @ 0x14061CCE4 (AlpcpMapLegacyPortView.c)
 *     NtAlpcDeleteResourceReserve @ 0x14084B0B0 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
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

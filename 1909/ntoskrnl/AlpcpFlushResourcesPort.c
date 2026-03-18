/*
 * XREFs of AlpcpFlushResourcesPort @ 0x14065DE64
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 *     AlpcpDoPortCleanup @ 0x14065DF68 (AlpcpDoPortCleanup.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     AlpcpDereferenceBlobEx @ 0x14065EDF0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x14065F5C0 (AlpcpReferenceBlob.c)
 *     AlpcpDeleteBlob @ 0x14065F99C (AlpcpDeleteBlob.c)
 */

char __fastcall AlpcpFlushResourcesPort(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  _QWORD **v2; // rsi
  _QWORD *v3; // rax
  _QWORD *v5; // rcx
  ULONG_PTR v6; // rbp

  v1 = (volatile signed __int64 *)(a1 + 328);
  v2 = (_QWORD **)(a1 + 336);
  ExAcquirePushLockExclusiveEx(a1 + 328, 0LL);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v5 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v5;
    v6 = (ULONG_PTR)(v3 + 6);
    v5[1] = v2;
    v3[1] = v3;
    *v3 = v3;
    if ( AlpcpReferenceBlob((ULONG_PTR)(v3 + 6)) )
    {
      if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v1);
      KeAbPostRelease((ULONG_PTR)v1);
      if ( (unsigned __int8)AlpcpDeleteBlob(v6) )
        AlpcpDereferenceBlobEx(v6);
      AlpcpDereferenceBlobEx(v6);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
    }
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}

/*
 * XREFs of AlpcpFlushResourcesPort @ 0x14061A228
 * Callers:
 *     AlpcpDoPortCleanup @ 0x14061A108 (AlpcpDoPortCleanup.c)
 *     AlpcpAcceptConnectPort @ 0x14061ACD8 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     AlpcpReferenceBlob @ 0x140619428 (AlpcpReferenceBlob.c)
 *     AlpcpDeleteBlob @ 0x140619BF4 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140619C70 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpFlushResourcesPort(__int64 a1)
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
      if ( AlpcpDeleteBlob(v6) )
        AlpcpDereferenceBlobEx(v6, 1);
      AlpcpDereferenceBlobEx(v6, 1);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
    }
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}

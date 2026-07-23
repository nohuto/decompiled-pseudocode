/*
 * XREFs of PspStorageEmptyArray @ 0x140890674
 * Callers:
 *     PspJobDeleteStorageArrays @ 0x1406077C8 (PspJobDeleteStorageArrays.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageEmptyArray(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // edi
  volatile signed __int64 *v3; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // r14
  void *v6; // rbp

  v2 = 0;
  v3 = (volatile signed __int64 *)BugCheckParameter2;
  if ( a2 )
  {
    v4 = (_QWORD *)(BugCheckParameter2 + 8);
    v5 = a2;
    do
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
      v6 = (void *)(*v4 & 0xFFFFFFFFFFFFFFFEuLL);
      *v4 = 1LL;
      if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v3);
      KeAbPostRelease((ULONG_PTR)v3);
      if ( v6 )
      {
        ObfDereferenceObject(v6);
        ++v2;
      }
      v3 += 2;
      v4 += 2;
      --v5;
    }
    while ( v5 );
  }
  return v2;
}

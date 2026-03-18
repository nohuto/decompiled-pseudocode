/*
 * XREFs of PspStorageEmptyArray @ 0x1408CD0C8
 * Callers:
 *     PspJobDeleteStorageArrays @ 0x14068A608 (PspJobDeleteStorageArrays.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageEmptyArray(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbp
  void *v5; // rsi

  v2 = 0;
  if ( a2 )
  {
    v4 = a2;
    do
    {
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v5 = (void *)(*(_QWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
      *(_QWORD *)(BugCheckParameter2 + 8) = 1LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      if ( v5 )
      {
        ObfDereferenceObject(v5);
        ++v2;
      }
      BugCheckParameter2 += 16LL;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}

/*
 * XREFs of AlpcpFlushQueue @ 0x14065DC34
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x14065DA78 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     AlpcpUnlockMessage @ 0x1405E5210 (AlpcpUnlockMessage.c)
 *     AlpcpCancelMessage @ 0x14065B22C (AlpcpCancelMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14065E4F8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReferenceBlob @ 0x14065F5C0 (AlpcpReferenceBlob.c)
 */

char __fastcall AlpcpFlushQueue(__int64 a1, ULONG_PTR *a2, unsigned int a3)
{
  __int64 v6; // rax
  ULONG_PTR v7; // r14
  volatile signed __int64 *v8; // rdi
  volatile signed __int64 *v10; // rbp
  __int64 v11; // rax

  if ( a3 <= 2 )
  {
    v6 = 136LL;
  }
  else
  {
    v6 = 176LL;
    if ( a3 != 3 )
      v6 = 200LL;
  }
  ExAcquirePushLockExclusiveEx(v6 + a1, 0LL);
  while ( 1 )
  {
    v7 = *a2;
    if ( (ULONG_PTR *)*a2 == a2 )
      break;
    AlpcpReferenceBlob(*a2);
    if ( a3 > 2 )
    {
      if ( a3 == 3 )
        v10 = (volatile signed __int64 *)(a1 + 176);
      else
        v10 = (volatile signed __int64 *)(a1 + 200);
    }
    else
    {
      v10 = (volatile signed __int64 *)(a1 + 136);
    }
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    AlpcpLockForCachedReferenceBlob(v7);
    --*(_WORD *)(v7 - 30);
    if ( *(_QWORD *)(v7 + 16) == a1 )
      AlpcpCancelMessage(a1, v7, 0x10000);
    else
      AlpcpUnlockMessage(v7);
    if ( a3 > 2 )
    {
      v11 = 176LL;
      if ( a3 != 3 )
        v11 = 200LL;
    }
    else
    {
      v11 = 136LL;
    }
    ExAcquirePushLockExclusiveEx(v11 + a1, 0LL);
  }
  if ( a3 > 2 )
  {
    if ( a3 == 3 )
      v8 = (volatile signed __int64 *)(a1 + 176);
    else
      v8 = (volatile signed __int64 *)(a1 + 200);
  }
  else
  {
    v8 = (volatile signed __int64 *)(a1 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  return KeAbPostRelease((ULONG_PTR)v8);
}

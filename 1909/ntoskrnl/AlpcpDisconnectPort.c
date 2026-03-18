/*
 * XREFs of AlpcpDisconnectPort @ 0x14065D4DC
 * Callers:
 *     AlpcpDoPortCleanup @ 0x14065DF68 (AlpcpDoPortCleanup.c)
 *     NtAlpcDisconnectPort @ 0x1406DAA80 (NtAlpcDisconnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectSafe @ 0x140107F50 (ObReferenceObjectSafe.c)
 *     AlpcpUnlockMessage @ 0x1405E5210 (AlpcpUnlockMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14065D830 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14065E4F8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpSignalPortAndUnlock @ 0x1406C2EFC (AlpcpSignalPortAndUnlock.c)
 *     AlpcpWalkConnectionList @ 0x1406E54E8 (AlpcpWalkConnectionList.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x1406EB44C (AlpcpInsertMessageCanceledQueue.c)
 */

__int64 __fastcall AlpcpDisconnectPort(char *Object, char a2)
{
  __int64 *v2; // r12
  volatile signed __int64 *v5; // rdi
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // ecx
  __int64 v9; // r15
  __int64 v10; // r14
  int v11; // edi
  int v12; // edi
  int v13; // edi
  _QWORD *v14; // rdi
  ULONG_PTR v16; // rdi
  _QWORD *v17; // [rsp+30h] [rbp-10h] BYREF
  _QWORD **v18; // [rsp+38h] [rbp-8h]
  __int64 v19; // [rsp+70h] [rbp+30h]

  v2 = (__int64 *)*((_QWORD *)Object + 2);
  v17 = 0LL;
  v18 = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 - 2), 0LL);
  v5 = (volatile signed __int64 *)(Object + 352);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object + 352), 0LL);
  if ( (a2 & 1) != 0 )
    *((_DWORD *)Object + 104) |= 0x80u;
  v6 = *((_DWORD *)Object + 104);
  if ( (v6 & 0x20) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 44);
    KeAbPostRelease((ULONG_PTR)(Object + 352));
    if ( (_InterlockedExchangeAdd64(v2 - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 - 2);
    KeAbPostRelease((ULONG_PTR)(v2 - 2));
    return 3221225527LL;
  }
  else
  {
    *((_DWORD *)Object + 104) = v6 | 0x20;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 44);
    KeAbPostRelease((ULONG_PTR)(Object + 352));
    v7 = *((_DWORD *)Object + 104);
    if ( (v7 & 6) == 2 )
    {
      AlpcpWalkConnectionList(Object);
      v7 = *((_DWORD *)Object + 104);
    }
    v8 = ((v7 >> 1) & 3) - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v9 = *v2;
        v10 = (__int64)Object;
      }
      else
      {
        v9 = v2[2];
        v10 = *v2;
      }
    }
    else
    {
      v9 = 0LL;
      v10 = 0LL;
    }
    v19 = v10;
    if ( v9 )
      v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
    if ( v10 )
    {
      v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
      v19 = v10;
    }
    if ( (_InterlockedExchangeAdd64(v2 - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2 - 2);
    KeAbPostRelease((ULONG_PTR)(v2 - 2));
    if ( v9 )
    {
      v18 = &v17;
      v17 = &v17;
      do
      {
        v11 = AlpcpCancelMessagesByRequestor((_DWORD)Object, v9, (int)v9 + 144, 1, (__int64)&v17);
        v12 = AlpcpCancelMessagesByRequestor((_DWORD)Object, v9, (int)v9 + 160, 2, (__int64)&v17) | v11;
        v13 = AlpcpCancelMessagesByRequestor((_DWORD)Object, v9, (int)v9 + 184, 3, (__int64)&v17) | v12;
      }
      while ( v13 | (unsigned int)AlpcpCancelMessagesByRequestor((_DWORD)Object, v9, (int)v9 + 208, 4, (__int64)&v17) );
      ObfDereferenceObject((PVOID)v9);
      v10 = v19;
      while ( 1 )
      {
        v14 = v17;
        if ( v17 == &v17 )
          break;
        v17 = (_QWORD *)*v17;
        v16 = (ULONG_PTR)(v14 - 10);
        v17[1] = &v17;
        AlpcpLockForCachedReferenceBlob(v16);
        if ( v19 )
        {
          ExAcquirePushLockSharedEx(v19 + 352, 0LL);
          if ( (*(_DWORD *)(v19 + 416) & 0x40) != 0 )
          {
            --*(_WORD *)(v16 - 30);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 352), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v19 + 352));
            KeAbPostRelease(v19 + 352);
          }
          else
          {
            *(_DWORD *)(v16 + 72) = _InterlockedIncrement((volatile signed __int32 *)Object + 100);
            *(_QWORD *)(v16 + 128) = *((_QWORD *)Object + 7);
            *(_QWORD *)(v16 + 56) = Object;
            *(_QWORD *)(v16 + 64) = v19;
            AlpcpInsertMessageCanceledQueue(v19, v16);
            AlpcpSignalPortAndUnlock(v19);
          }
        }
        else
        {
          --*(_WORD *)(v16 - 30);
        }
        AlpcpUnlockMessage(v16);
      }
    }
    if ( v10 )
      ObfDereferenceObject((PVOID)v10);
    return 0LL;
  }
}

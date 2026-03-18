/*
 * XREFs of CmpVolumeContextSendDeviceUsageNotification @ 0x14077FF60
 * Callers:
 *     CmpHandlePageFileOpenNotification @ 0x14077FE28 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PiPagePathSetState @ 0x14078175C (PiPagePathSetState.c)
 */

__int64 __fastcall CmpVolumeContextSendDeviceUsageNotification(__int64 a1)
{
  signed __int64 *v2; // rbx
  int v3; // esi
  char v5; // bp
  char v6; // al

  if ( *(_QWORD *)(a1 + 48) )
  {
    v2 = (signed __int64 *)(a1 + 56);
    ExAcquirePushLockSharedEx(a1 + 56, 0LL);
    if ( *(_BYTE *)(a1 + 64) )
    {
      v3 = 0;
      if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v2);
      KeAbPostRelease((ULONG_PTR)v2);
    }
    else
    {
      if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v2);
      KeAbPostRelease((ULONG_PTR)v2);
      v5 = 1;
      v3 = PiPagePathSetState(*(PVOID *)(a1 + 48));
      if ( v3 >= 0 )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
        if ( !*(_BYTE *)(a1 + 64) )
        {
          *(_BYTE *)(a1 + 64) = 1;
          v5 = 0;
        }
        v6 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
          ExfTryToWakePushLock(v2);
        KeAbPostRelease((ULONG_PTR)v2);
        v3 = 0;
        if ( v5 )
          PiPagePathSetState(*(PVOID *)(a1 + 48));
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v3;
}

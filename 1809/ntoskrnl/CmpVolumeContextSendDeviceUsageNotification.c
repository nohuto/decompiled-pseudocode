/*
 * XREFs of CmpVolumeContextSendDeviceUsageNotification @ 0x14075A930
 * Callers:
 *     CmpHandlePageFileOpenNotification @ 0x14075A7D4 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PiPagePathSetState @ 0x14075D3CC (PiPagePathSetState.c)
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

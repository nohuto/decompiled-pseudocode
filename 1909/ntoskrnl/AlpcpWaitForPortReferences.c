/*
 * XREFs of AlpcpWaitForPortReferences @ 0x1406B463C
 * Callers:
 *     NtAlpcQueryInformation @ 0x1406B43B0 (NtAlpcQueryInformation.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall AlpcpWaitForPortReferences(__int64 a1, _DWORD *a2, int a3, _DWORD *a4, char a5)
{
  __int64 v9; // rax
  volatile signed __int64 *v11; // rsi
  unsigned int v12; // edi
  char v13; // al
  char v14; // bl
  _BYTE Event[32]; // [rsp+30h] [rbp-28h] BYREF

  memset(Event, 0, sizeof(Event));
  if ( !a1 || a3 != 4 )
    return 3221225485LL;
  if ( a5 )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a2;
    *(_DWORD *)&Event[24] = *(_DWORD *)v9;
    if ( a4 )
      *a4 = 0;
  }
  else
  {
    *(_DWORD *)&Event[24] = *a2;
    if ( a4 )
      *a4 = 0;
  }
  if ( *(_DWORD *)(a1 + 404) == *(_DWORD *)&Event[24] )
    return 0LL;
  KeInitializeEvent((PRKEVENT)Event, SynchronizationEvent, 0);
  v11 = (volatile signed __int64 *)(a1 + 352);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( *(_QWORD *)(a1 + 408) )
  {
    v12 = -1073741811;
  }
  else if ( *(_DWORD *)(a1 + 404) == *(_DWORD *)&Event[24] )
  {
    v12 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 408) = Event;
    v13 = _InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    while ( 1 )
    {
      v12 = KeWaitForSingleObject(Event, WrUserRequest, 0, 1u, 0LL);
      if ( !v12 )
        break;
      if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
      {
        v12 = -1073741749;
        break;
      }
    }
    ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  v14 = _InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  return v12;
}

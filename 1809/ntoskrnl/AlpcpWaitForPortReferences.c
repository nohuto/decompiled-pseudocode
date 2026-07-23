/*
 * XREFs of AlpcpWaitForPortReferences @ 0x14068FCBC
 * Callers:
 *     NtAlpcQueryInformation @ 0x14068FA30 (NtAlpcQueryInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 */

__int64 __fastcall AlpcpWaitForPortReferences(__int64 a1, int *a2, int a3, _DWORD *a4, char a5)
{
  __int64 v6; // rax
  volatile signed __int64 *v8; // rsi
  unsigned int v9; // edi
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-10h]

  if ( !a1 || a3 != 4 )
    return 3221225485LL;
  if ( a5 )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a2;
    v11 = *(_DWORD *)v6;
    if ( a4 )
      *a4 = 0;
  }
  else
  {
    v11 = *a2;
    if ( a4 )
      *a4 = 0;
  }
  if ( *(_DWORD *)(a1 + 404) == v11 )
    return 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v8 = (volatile signed __int64 *)(a1 + 352);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( *(_QWORD *)(a1 + 408) )
  {
    v9 = -1073741811;
  }
  else if ( *(_DWORD *)(a1 + 404) == v11 )
  {
    v9 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 408) = &Event;
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    while ( 1 )
    {
      v9 = KeWaitForSingleObject(&Event, WrUserRequest, 0, 1u, 0LL);
      if ( !v9 )
        break;
      if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
      {
        v9 = -1073741749;
        break;
      }
    }
    ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  return v9;
}

/*
 * XREFs of _HamIpcChannelRundown@4 @ 0x10007110
 * Callers:
 *     _HamDisconnectFromServer@4 @ 0x10006F70 (_HamDisconnectFromServer@4.c)
 *     _HamConnectToServerEx@12 @ 0x10008300 (_HamConnectToServerEx@12.c)
 *     _HampConnectionCreate@20 @ 0x1000A120 (_HampConnectionCreate@20.c)
 *     _HamConnectForExtendedExecution@8 @ 0x1000B2B0 (_HamConnectForExtendedExecution@8.c)
 *     _HamConnectForSessionState@4 @ 0x1000BF00 (_HamConnectForSessionState@4.c)
 *     _HamConnectForDebugging@8 @ 0x1000BF50 (_HamConnectForDebugging@8.c)
 *     _HamConnectForServicing@4 @ 0x1000BFC0 (_HamConnectForServicing@4.c)
 *     _HamConnectForStateChangeNotifications@16 @ 0x1000C010 (_HamConnectForStateChangeNotifications@16.c)
 *     _RmpClientConnectionCleanup@4 @ 0x10011807 (_RmpClientConnectionCleanup@4.c)
 *     _HamConnectForFullTrust@8 @ 0x10012220 (_HamConnectForFullTrust@8.c)
 *     _HamDisconnectForFullTrust@4 @ 0x100125C0 (_HamDisconnectForFullTrust@4.c)
 * Callees:
 *     _HampIpcChannelObjectMakeZombieUnsafe@8 @ 0x100135F1 (_HampIpcChannelObjectMakeZombieUnsafe@8.c)
 */

int __thiscall HamIpcChannelRundown(int this)
{
  int v2; // ebx
  DWORD CurrentThreadId; // eax
  int v4; // eax
  _DWORD *j; // edi
  int result; // eax
  _DWORD **v7; // eax
  _DWORD *v8; // ecx
  _DWORD *i; // ecx

  v2 = this + 4;
  RtlAcquireSRWLockExclusive(this + 4);
  CurrentThreadId = GetCurrentThreadId();
  *(_DWORD *)(this + 12) |= 1u;
  *(_DWORD *)(this + 8) = CurrentThreadId;
  v4 = *(_DWORD *)(this + 20);
  if ( (v4 & 1) != 0 )
  {
    if ( v4 == 1 )
      goto LABEL_4;
    j = (_DWORD *)(v4 ^ ((this + 16) | 1));
  }
  else
  {
    j = *(_DWORD **)(this + 20);
  }
  while ( j )
  {
    HampIpcChannelObjectMakeZombieUnsafe(j, this);
    v7 = (_DWORD **)j[1];
    v8 = j;
    if ( v7 )
    {
      j = (_DWORD *)j[1];
      for ( i = *v7; i; i = (_DWORD *)*i )
        j = i;
    }
    else
    {
      for ( j = (_DWORD *)(j[2] & 0xFFFFFFFC); j; j = (_DWORD *)(j[2] & 0xFFFFFFFC) )
      {
        if ( (_DWORD *)*j == v8 )
          break;
        v8 = j;
      }
    }
  }
LABEL_4:
  *(_DWORD *)(this + 8) = 0;
  result = RtlReleaseSRWLockExclusive(v2);
  if ( *(_DWORD *)this )
    return RmpClientWnfDestroySubscription(*(PVOID *)this);
  return result;
}

/*
 * XREFs of LdrpTryAcquireLoaderLock @ 0x1800CFBF0
 * Callers:
 *     LdrLockLoaderLock @ 0x180081050 (LdrLockLoaderLock.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlTryEnterCriticalSection @ 0x180068C50 (RtlTryEnterCriticalSection.c)
 *     LdrpLogEtwEvent @ 0x1800D1238 (LdrpLogEtwEvent.c)
 */

char LdrpTryAcquireLoaderLock()
{
  __int64 v0; // rsi
  __int64 v1; // rcx
  __int64 v2; // rdi
  int v3; // r8d
  int v4; // r9d
  char *v5; // rcx
  LOGICAL v6; // ebx
  ULONG CurrentServiceSessionId; // eax
  int v8; // r8d
  int v9; // r9d
  int v11; // r8d
  int v12; // r9d

  v0 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v1 = 2147353476LL;
  v2 = 2147353477LL;
  if ( *(_BYTE *)v1 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v5 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v5 & 0x20) != 0 )
    {
      LOBYTE(v4) = -1;
      LOBYTE(v3) = -1;
      LdrpLogEtwEvent(5248, -1, v3, v4, 0LL, 0LL);
    }
  }
  v6 = RtlTryEnterCriticalSection(&LdrpLoaderLock);
  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  if ( v6 )
  {
    if ( CurrentServiceSessionId )
      v0 = (__int64)NtCurrentPeb()->SharedData + 554;
    if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v2 = (__int64)NtCurrentPeb()->SharedData + 555;
      if ( (*(_BYTE *)v2 & 0x20) != 0 )
      {
        LOBYTE(v9) = -1;
        LOBYTE(v8) = -1;
        LdrpLogEtwEvent(5249, -1, v8, v9, 0LL, 0LL);
      }
    }
    return 1;
  }
  else
  {
    if ( CurrentServiceSessionId )
      v0 = (__int64)NtCurrentPeb()->SharedData + 554;
    if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v2 = (__int64)NtCurrentPeb()->SharedData + 555;
      if ( (*(_BYTE *)v2 & 0x20) != 0 )
      {
        LOBYTE(v12) = -1;
        LOBYTE(v11) = -1;
        LdrpLogEtwEvent(5250, -1, v11, v12, 0LL, 0LL);
      }
    }
    return 0;
  }
}

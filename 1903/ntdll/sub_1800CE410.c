/*
 * XREFs of sub_1800CE410 @ 0x1800CE410
 * Callers:
 *     LdrLockLoaderLock @ 0x18007BF50 (LdrLockLoaderLock.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlTryEnterCriticalSection @ 0x180046C20 (RtlTryEnterCriticalSection.c)
 *     sub_1800CFA48 @ 0x1800CFA48 (sub_1800CFA48.c)
 */

char sub_1800CE410()
{
  __int64 v0; // rsi
  __int64 v1; // rcx
  __int64 v2; // rdi
  int v3; // r8d
  int v4; // r9d
  USHORT *v5; // rcx
  LOGICAL v6; // ebx
  ULONG CurrentServiceSessionId; // eax
  int v8; // r8d
  int v9; // r9d
  int v11; // r8d
  int v12; // r9d

  v0 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v1 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
  else
    v1 = 2147353476LL;
  v2 = 2147353477LL;
  if ( *(_BYTE *)v1 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v5 = RtlGetCurrentServiceSessionId()
       ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
       : (USHORT *)2147353477;
    if ( (*(_BYTE *)v5 & 0x20) != 0 )
    {
      LOBYTE(v4) = -1;
      LOBYTE(v3) = -1;
      sub_1800CFA48(5248, -1, v3, v4, 0LL, 0LL);
    }
  }
  v6 = RtlTryEnterCriticalSection(&stru_18015F4F8);
  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  if ( v6 )
  {
    if ( CurrentServiceSessionId )
      v0 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v2 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
      if ( (*(_BYTE *)v2 & 0x20) != 0 )
      {
        LOBYTE(v9) = -1;
        LOBYTE(v8) = -1;
        sub_1800CFA48(5249, -1, v8, v9, 0LL, 0LL);
      }
    }
    return 1;
  }
  else
  {
    if ( CurrentServiceSessionId )
      v0 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v2 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
      if ( (*(_BYTE *)v2 & 0x20) != 0 )
      {
        LOBYTE(v12) = -1;
        LOBYTE(v11) = -1;
        sub_1800CFA48(5250, -1, v11, v12, 0LL, 0LL);
      }
    }
    return 0;
  }
}

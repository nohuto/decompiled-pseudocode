/*
 * XREFs of LdrpLogEtwEvent @ 0x1800D1238
 * Callers:
 *     LdrpFindLoadedDllByName @ 0x18000A7C8 (LdrpFindLoadedDllByName.c)
 *     LdrpCompleteMapModule @ 0x180021B40 (LdrpCompleteMapModule.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpCallInitRoutine @ 0x180025CC8 (LdrpCallInitRoutine.c)
 *     LdrpLogDllState @ 0x180026314 (LdrpLogDllState.c)
 *     LdrpMapDllNtFileName @ 0x18002ABA0 (LdrpMapDllNtFileName.c)
 *     LdrpReleaseLoaderLock @ 0x18002AFD4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18002B034 (LdrpAcquireLoaderLock.c)
 *     LdrpLogDllStateEx2 @ 0x180054588 (LdrpLogDllStateEx2.c)
 *     RtlpWaitOnCriticalSection @ 0x18005EA34 (RtlpWaitOnCriticalSection.c)
 *     LdrpLogError @ 0x18007168C (LdrpLogError.c)
 *     LdrpProcessInitializationComplete @ 0x1800844F0 (LdrpProcessInitializationComplete.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800CFBF0 (LdrpTryAcquireLoaderLock.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 *     LdrpEventAddUnicodeString @ 0x1800D0E7C (LdrpEventAddUnicodeString.c)
 */

_BYTE *__fastcall LdrpLogEtwEvent(__int16 a1, __int64 a2, char a3, char a4, unsigned __int16 *a5, unsigned __int16 *a6)
{
  _BYTE *v6; // rdi
  unsigned int v7; // ebx
  _BYTE *result; // rax
  char v12; // [rsp+20h] [rbp-288h]
  int v13[3]; // [rsp+24h] [rbp-284h] BYREF
  _BYTE v14[576]; // [rsp+30h] [rbp-278h] BYREF

  v6 = v14;
  v7 = 0;
  v12 = a3;
  if ( a5 )
  {
    v7 = *a5 + 2;
    if ( a6 )
      v7 += *a6 + 2;
  }
  if ( v7 > 0x214 )
  {
    result = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7 + 42);
    v6 = result;
    if ( !result )
      return result;
    a3 = v12;
  }
  *((_WORD *)v6 + 3) = a1;
  if ( a2 != -1 )
  {
    *((_QWORD *)v6 + 4) = a2;
    v6[40] = a3;
    v6[41] = a4;
    if ( v7 )
    {
      LdrpEventAddUnicodeString((__int64)a5, (_WORD *)v6 + 21, v7, v13);
      if ( a6 )
        LdrpEventAddUnicodeString((__int64)a6, &v6[v13[0] + 42], v7 - v13[0], v13);
      RtlGetCurrentServiceSessionId();
      NtTraceEvent();
    }
  }
  result = v14;
  if ( v14 != v6 )
    return (_BYTE *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v6);
  return result;
}

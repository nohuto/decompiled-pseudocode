/*
 * XREFs of LdrpLogEtwEvent @ 0x1800CFB08
 * Callers:
 *     LdrpFindLoadedDllByName @ 0x180022698 (LdrpFindLoadedDllByName.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     LdrpCallInitRoutine @ 0x180024FBC (LdrpCallInitRoutine.c)
 *     LdrpLogDllState @ 0x1800255A8 (LdrpLogDllState.c)
 *     LdrpCompleteMapModule @ 0x18002A370 (LdrpCompleteMapModule.c)
 *     LdrpMapDllNtFileName @ 0x18002D3B4 (LdrpMapDllNtFileName.c)
 *     LdrpReleaseLoaderLock @ 0x18002D75C (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18002D7BC (LdrpAcquireLoaderLock.c)
 *     LdrpLogDllStateEx2 @ 0x180032198 (LdrpLogDllStateEx2.c)
 *     LdrpLogError @ 0x18007EA24 (LdrpLogError.c)
 *     LdrpProcessInitializationComplete @ 0x18007FC50 (LdrpProcessInitializationComplete.c)
 *     LdrpTryAcquireLoaderLock @ 0x1800CE4D0 (LdrpTryAcquireLoaderLock.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     LdrpEventAddUnicodeString @ 0x1800CF74C (LdrpEventAddUnicodeString.c)
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
    return (_BYTE *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v6);
  return result;
}

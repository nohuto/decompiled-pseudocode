/*
 * XREFs of EtwpStartUmLogger @ 0x18004FFC8
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x18004FE80 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     EtwpInitializeCompression @ 0x180002870 (EtwpInitializeCompression.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     EtwpSendSessionNotification @ 0x180050354 (EtwpSendSessionNotification.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x180050F34 (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpCreateEtwThread @ 0x180051000 (EtwpCreateEtwThread.c)
 *     EtwpAllocateTraceBufferPool @ 0x18005125C (EtwpAllocateTraceBufferPool.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800514D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x180051D88 (EtwpInitLoggerContext.c)
 *     EtwpGetNextAvailableLoggerId @ 0x180052238 (EtwpGetNextAvailableLoggerId.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x180052320 (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpFreeLoggerContext @ 0x18005A9DC (EtwpFreeLoggerContext.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtQuerySystemInformation @ 0x1800A09C0 (NtQuerySystemInformation.c)
 *     EtwpRegisterPrivateSession @ 0x18010F744 (EtwpRegisterPrivateSession.c)
 */

ULONG __fastcall EtwpStartUmLogger(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  bool v4; // cf
  __int64 v7; // r15
  unsigned int v8; // r12d
  int v9; // r8d
  unsigned __int64 v10; // rcx
  int v11; // eax
  ULONG result; // eax
  __int64 NumberOfProcessors; // r8
  __int64 v14; // r14
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // r9
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  int v20; // ecx
  ULONG TraceBufferPool; // esi
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 EtwThread; // rax
  _DWORD *v25; // rcx
  unsigned int v26; // edx
  NTSTATUS v27; // eax
  ULONG v28; // eax
  void *v29; // rcx
  char v30[8]; // [rsp+30h] [rbp-59h] BYREF
  __int64 inited; // [rsp+38h] [rbp-51h]
  unsigned int v32; // [rsp+40h] [rbp-49h] BYREF
  __int64 v33; // [rsp+48h] [rbp-41h] BYREF
  _DWORD *v34; // [rsp+50h] [rbp-39h]
  char SystemInformation[8]; // [rsp+60h] [rbp-29h] BYREF
  int v36; // [rsp+68h] [rbp-21h]

  v34 = a3;
  v4 = *(_DWORD *)a4 < 0xB0u;
  inited = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( v4 )
    return 87;
  v9 = *(_DWORD *)(a4 + 64);
  *(_QWORD *)(a4 + 152) = a4 + 176;
  *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
  if ( (v9 & 0x40B) != 0 )
  {
    v10 = (v9 & 0x40B) - (((unsigned __int64)(v9 & 0x40B) >> 1) & 0x5555555555555555LL);
    if ( (0x101010101010101LL
        * (((v10 & 0x3333333333333333LL)
          + ((v10 >> 2) & 0x3333333333333333LL)
          + (((v10 & 0x3333333333333333LL) + ((v10 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56 != 1 )
      return 87;
  }
  else
  {
    v9 |= 1u;
    *(_DWORD *)(a4 + 64) = v9;
  }
  if ( (v9 & 0x2000000) != 0 )
    return 87;
  if ( (v9 & 0x400) != 0 )
  {
    if ( *(_WORD *)(a4 + 128) || *(_DWORD *)(a4 + 68) || *(_DWORD *)(a4 + 76) )
      return 87;
  }
  else
  {
    v11 = *(_DWORD *)(a4 + 76);
    if ( v11 && (*(_DWORD *)(a4 + 68) || v11 < 0) )
      return 87;
  }
  if ( (v9 & 6) == 6
    || (v9 & 0xC000) == 0xC000
    || (v9 & 0x4000000) != 0 && ((v9 & 2) != 0 || (v9 & 4) != 0 || (v9 & 0x20) != 0 || (v9 & 0x400) != 0) )
  {
    return 87;
  }
  if ( !(unsigned int)EtwpGetPrivateLoggerContextByName((PUNICODE_STRING)(a4 + 144)) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(inited + 20) + 8));
    return 183;
  }
  result = EtwpGetNextAvailableLoggerId(a4, &v32);
  if ( !result )
  {
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v26 = (*(unsigned __int16 *)(a4 + 130) + *(unsigned __int16 *)(a4 + 146) + 183) & 0xFFFFFFF8;
      v8 = *(_DWORD *)a4 - v26;
      v7 = a4 + v26;
      NumberOfProcessors = 0xFFFFFFFFLL;
    }
    else if ( (*(_DWORD *)(a4 + 64) & 0x10000000) != 0 )
    {
      NumberOfProcessors = 1LL;
    }
    else
    {
      NumberOfProcessors = NtCurrentPeb()->NumberOfProcessors;
    }
    v14 = v32;
    inited = EtwpInitLoggerContext(a4, v32, NumberOfProcessors, v7, v8);
    v15 = inited;
    if ( !inited )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v14 + 8));
      return 8;
    }
    v16 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    if ( v16 < 0 )
      return RtlNtStatusToDosError(v16);
    *(_DWORD *)(inited + 208) = ~(v36 - 1) & (*(_DWORD *)(inited + 208) + v36 - 1);
    if ( (*(_DWORD *)(v15 + 324) & 0x4000000) != 0 )
    {
      v27 = EtwpInitializeCompression(v15);
      if ( v27 )
      {
        v28 = RtlNtStatusToDosError(v27);
        TraceBufferPool = v28;
        if ( v28 )
          goto LABEL_61;
      }
    }
    if ( (*(_DWORD *)(v15 + 324) & 0x400) == 0 )
    {
      LOBYTE(v17) = (*(_DWORD *)(v15 + 324) & 4) != 0;
      v18 = EtwpAddLogHeaderToLogFile(v15, v7, v8, v17);
      if ( v18 )
      {
        TraceBufferPool = RtlNtStatusToDosError(v18);
        if ( TraceBufferPool )
          goto LABEL_61;
      }
    }
    v19 = *(unsigned int *)(v15 + 208);
    v20 = 0xFFFF;
    if ( (unsigned __int64)(v19 - 72) < 0xFFFF )
      v20 = v19 - 72;
    *(_DWORD *)(v15 + 212) = v20 & 0xFFFFFFF8;
    TraceBufferPool = EtwpAllocateTraceBufferPool(v15);
    if ( TraceBufferPool )
      goto LABEL_61;
    if ( (*(_DWORD *)(v15 + 324) & 0x20000) == 0 )
    {
      TraceBufferPool = EtwpRegisterPrivateSession(*(unsigned __int16 *)(v15 + 20), &v33, v30);
      if ( TraceBufferPool )
        goto LABEL_61;
      *(_QWORD *)(v15 + 544) = v33;
    }
    v22 = 2 * v14;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v22 + 8));
    v23 = inited;
    if ( (*(_DWORD *)(v15 + 324) & 0x400) == 0 )
    {
      EtwThread = EtwpCreateEtwThread(EtwpLogger, inited);
      if ( !EtwThread )
      {
        TraceBufferPool = NtCurrentTeb()->LastErrorValue;
        goto LABEL_28;
      }
      *(_QWORD *)(v23 + 32) = EtwThread;
    }
    EtwpGetUmLoggerInfoFromContext(a4, v23, v30);
    _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 8 * v22), v23);
    EtwpSendSessionNotification(inited, 5LL, 0LL);
LABEL_28:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v22 + 8));
    if ( !TraceBufferPool )
    {
      v25 = v34;
      *a2 = *(_DWORD *)a4;
      *v25 = *(_DWORD *)a4;
      return TraceBufferPool;
    }
    v15 = inited;
LABEL_61:
    v29 = *(void **)(a4 + 88);
    if ( v29 )
    {
      NtClose(v29);
      *(_QWORD *)(a4 + 88) = 0LL;
      *(_QWORD *)(v15 + 144) = 0LL;
    }
    EtwpFreeLoggerContext((PVOID)v15);
    return TraceBufferPool;
  }
  return result;
}

/*
 * XREFs of EtwpStartUmLogger @ 0x1800059B8
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180004440 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     EtwpGetPrivateLoggerContextByName @ 0x18000456C (EtwpGetPrivateLoggerContextByName.c)
 *     EtwpGetNextAvailableLoggerId @ 0x180004634 (EtwpGetNextAvailableLoggerId.c)
 *     EtwpInitLoggerContext @ 0x18000471C (EtwpInitLoggerContext.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180004BA8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpAllocateTraceBufferPool @ 0x180005400 (EtwpAllocateTraceBufferPool.c)
 *     EtwpCreateEtwThread @ 0x180005680 (EtwpCreateEtwThread.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x1800058F4 (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpSendSessionNotification @ 0x180005D10 (EtwpSendSessionNotification.c)
 *     RtlNtStatusToDosError @ 0x180053CB0 (RtlNtStatusToDosError.c)
 *     EtwpFreeLoggerContext @ 0x180087B98 (EtwpFreeLoggerContext.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtQuerySystemInformation @ 0x18009D550 (NtQuerySystemInformation.c)
 *     EtwpRegisterPrivateSession @ 0x18010D964 (EtwpRegisterPrivateSession.c)
 *     EtwpInitializeCompression @ 0x18010E534 (EtwpInitializeCompression.c)
 */

ULONG __fastcall EtwpStartUmLogger(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  bool v4; // cf
  void *v7; // r15
  unsigned int v8; // r12d
  int v9; // r8d
  unsigned __int64 v10; // rcx
  int v11; // eax
  ULONG result; // eax
  unsigned int NumberOfProcessors; // r8d
  __int64 v14; // r14
  char *v15; // rdi
  int v16; // eax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  int v19; // ecx
  int TraceBufferPool; // esi
  __int64 v21; // r14
  char *v22; // r15
  HANDLE EtwThread; // rax
  _DWORD *v24; // rcx
  unsigned int v25; // edx
  NTSTATUS v26; // eax
  void *v27; // rcx
  unsigned __int16 v28; // [rsp+30h] [rbp-59h] BYREF
  char *inited; // [rsp+38h] [rbp-51h] BYREF
  int v30; // [rsp+40h] [rbp-49h] BYREF
  __int64 v31; // [rsp+48h] [rbp-41h] BYREF
  _DWORD *v32; // [rsp+50h] [rbp-39h]
  char SystemInformation[8]; // [rsp+60h] [rbp-29h] BYREF
  int v34; // [rsp+68h] [rbp-21h]

  v32 = a3;
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
  if ( !(unsigned int)EtwpGetPrivateLoggerContextByName((PUNICODE_STRING)(a4 + 144), &inited) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *((unsigned int *)inited + 5) + 8));
    return 183;
  }
  result = EtwpGetNextAvailableLoggerId(a4, (unsigned int *)&v30);
  if ( !result )
  {
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v25 = (*(unsigned __int16 *)(a4 + 130) + *(unsigned __int16 *)(a4 + 146) + 183) & 0xFFFFFFF8;
      v8 = *(_DWORD *)a4 - v25;
      v7 = (void *)(a4 + v25);
      NumberOfProcessors = -1;
    }
    else if ( (*(_DWORD *)(a4 + 64) & 0x10000000) != 0 )
    {
      NumberOfProcessors = 1;
    }
    else
    {
      NumberOfProcessors = NtCurrentPeb()->NumberOfProcessors;
    }
    v14 = (unsigned int)v30;
    inited = EtwpInitLoggerContext(a4, v30, NumberOfProcessors, (__int64)v7, v8);
    v15 = inited;
    if ( !inited )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16 * v14 + 8));
      return 8;
    }
    v16 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    if ( v16 < 0 )
      return RtlNtStatusToDosError(v16);
    *((_DWORD *)v15 + 52) = ~(v34 - 1) & (*((_DWORD *)v15 + 52) + v34 - 1);
    if ( (*((_DWORD *)v15 + 81) & 0x4000000) != 0 )
    {
      v26 = EtwpInitializeCompression(v15);
      if ( v26 )
      {
        TraceBufferPool = RtlNtStatusToDosError(v26);
        if ( TraceBufferPool )
          goto LABEL_60;
      }
    }
    if ( (*((_DWORD *)v15 + 81) & 0x400) == 0 )
    {
      v17 = EtwpAddLogHeaderToLogFile((__int64)v15, v7, v8, (*((_DWORD *)v15 + 81) & 4) != 0);
      if ( v17 )
      {
        TraceBufferPool = RtlNtStatusToDosError(v17);
        if ( TraceBufferPool )
          goto LABEL_60;
      }
    }
    v18 = *((unsigned int *)v15 + 52);
    v19 = 0xFFFF;
    if ( (unsigned __int64)(v18 - 72) < 0xFFFF )
      v19 = v18 - 72;
    *((_DWORD *)v15 + 53) = v19 & 0xFFFFFFF8;
    TraceBufferPool = EtwpAllocateTraceBufferPool((__int64)v15);
    if ( TraceBufferPool )
      goto LABEL_60;
    if ( (*((_DWORD *)v15 + 81) & 0x20000) == 0 )
    {
      TraceBufferPool = EtwpRegisterPrivateSession(*((unsigned __int16 *)v15 + 10), &v31, &v28);
      if ( TraceBufferPool )
        goto LABEL_60;
      *((_QWORD *)v15 + 70) = v31;
    }
    v21 = 2 * v14;
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v21 + 8));
    v22 = inited;
    if ( (*((_DWORD *)v15 + 81) & 0x400) == 0 )
    {
      EtwThread = EtwpCreateEtwThread((NTSTATUS (__cdecl *)(PVOID))EtwpLogger, inited);
      if ( !EtwThread )
      {
        TraceBufferPool = NtCurrentTeb()->LastErrorValue;
        goto LABEL_28;
      }
      *((_QWORD *)v22 + 4) = EtwThread;
    }
    EtwpGetUmLoggerInfoFromContext(a4, (__int64)v22, &v28);
    _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 8 * v21), (__int64)v22);
    EtwpSendSessionNotification(inited, 5LL);
LABEL_28:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v21 + 8));
    if ( !TraceBufferPool )
    {
      v24 = v32;
      *a2 = *(_DWORD *)a4;
      *v24 = *(_DWORD *)a4;
      return TraceBufferPool;
    }
    v15 = inited;
LABEL_60:
    v27 = *(void **)(a4 + 88);
    if ( v27 )
    {
      NtClose(v27);
      *(_QWORD *)(a4 + 88) = 0LL;
      *((_QWORD *)v15 + 18) = 0LL;
    }
    EtwpFreeLoggerContext(v15);
    return TraceBufferPool;
  }
  return result;
}

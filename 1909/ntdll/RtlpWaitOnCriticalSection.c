/*
 * XREFs of RtlpWaitOnCriticalSection @ 0x180007200
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x18001B3D0 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x180007424 (RtlpWaitOnAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180007850 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180033A40 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrintEx @ 0x180052820 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x18009CF10 (NtWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x18009D410 (ZwTerminateProcess.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     RtlpGetCriticalSectionContentionCount @ 0x1800E6B84 (RtlpGetCriticalSectionContentionCount.c)
 *     RtlpPossibleDeadlock @ 0x1800E6D78 (RtlpPossibleDeadlock.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

int __fastcall RtlpWaitOnCriticalSection(__int64 a1, int a2)
{
  struct _TEB *v2; // r13
  unsigned int v4; // r12d
  LARGE_INTEGER *v5; // rdi
  __int64 v6; // rax
  int v7; // r15d
  void *v8; // r14
  __int64 v9; // rcx
  struct _PEB *v10; // rax
  _DWORD *v11; // rcx
  struct _TEB *v12; // rcx
  __int64 WowTebOffset; // rax
  __int64 v14; // rcx
  int v15; // eax
  _DWORD *SharedData; // rcx
  __int64 v17; // rcx
  struct _TEB *v18; // rsi
  unsigned __int64 v19; // rdx
  int v20; // eax
  int CriticalSectionContentionCount; // eax
  int v22; // esi
  char v24; // [rsp+40h] [rbp-98h]
  int v25; // [rsp+48h] [rbp-90h] BYREF
  struct _TEB *v26; // [rsp+50h] [rbp-88h]
  _BYTE Fields[6]; // [rsp+58h] [rbp-80h] BYREF
  __int16 v28; // [rsp+5Eh] [rbp-7Ah]
  int v29; // [rsp+78h] [rbp-60h]
  int v30; // [rsp+7Ch] [rbp-5Ch]
  __int64 v31; // [rsp+80h] [rbp-58h]
  __int64 v32; // [rsp+88h] [rbp-50h]

  v2 = NtCurrentTeb();
  v25 = a2;
  v24 = 0;
  v26 = v2;
  v4 = 0;
  if ( (_RTL_CRITICAL_SECTION *)a1 == &LdrpLoaderLock )
  {
    v24 = 1;
    v2->WaitingOnLoaderLock = 1;
  }
  if ( byte_180165408 )
    goto LABEL_32;
  if ( UseWOW64 )
  {
    v12 = NtCurrentTeb();
    WowTebOffset = v12->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v12 = (struct _TEB *)((char *)v12 + WowTebOffset);
    }
    else
    {
      v12 = 0LL;
    }
    v14 = *(unsigned int *)(LODWORD(v12->NtTib.Self) + 0xCLL);
    if ( v14 )
    {
      if ( *(_BYTE *)(v14 + 40) )
LABEL_32:
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
    }
  }
  v5 = (LARGE_INTEGER *)&RtlpTimeout;
  if ( RtlpTimeoutDisable )
    v5 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    RtlpCreateDeferredCriticalSectionEvent(a1);
  v6 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 == -1LL )
  {
    v6 = -1LL;
    if ( (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
    {
      RtlpAddDebugInfoToCriticalSection(a1);
      v6 = *(_QWORD *)a1;
    }
  }
  v7 = 0;
  if ( v6 != -1 )
    ++*(_DWORD *)(v6 + 36);
  v8 = *(void **)(a1 + 24);
  while ( 1 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 552;
    else
      v9 = 2147353474LL;
    if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v15 = *(_DWORD *)(a1 + 32) & 0xFFFFFF;
      v28 = 5922;
      v30 = v15;
      v29 = *(_DWORD *)(a1 + 8);
      v31 = *(_QWORD *)(a1 + 16);
      v32 = a1;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v17 = (__int64)NtCurrentPeb()->SharedData + 552;
      else
        v17 = 2147353474LL;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v17, 0x20402u, 0x18u, Fields);
    }
    if ( v8 == (void *)-1LL )
    {
      while ( 1 )
      {
        LODWORD(v10) = RtlpWaitOnAddress((int)a1 + 8, (unsigned int)&v25, 4, (_DWORD)v5, 0);
        if ( (_DWORD)v10 == 258 )
          goto LABEL_42;
        v25 = *(_DWORD *)(a1 + 8);
        if ( (v25 & 2) == 0 )
          goto LABEL_19;
      }
    }
    LODWORD(v10) = NtWaitForSingleObject(v8, 0, v5);
LABEL_19:
    if ( (_DWORD)v10 != 258 )
      break;
LABEL_42:
    v18 = NtCurrentTeb();
    v19 = (__int64)(((unsigned __int128)(v5->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v5->QuadPart) >> 23;
    DbgPrintEx(0x65u, 1u, "RTL: Enter CriticalSection Timeout (%I64u secs) %d\n", v19 + (v19 >> 63), v4);
    if ( *(_QWORD *)a1 == -1LL )
      v20 = 0;
    else
      v20 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    DbgPrintEx(
      0x65u,
      0,
      "RTL: Pid.Tid %p.%p, owner tid %p Critical Section %p - ContentionCount == %u\n",
      v18->ClientId.UniqueProcess,
      v18->ClientId.UniqueThread,
      *(const void **)(a1 + 16),
      (const void *)a1,
      v20);
    ++v4;
    CriticalSectionContentionCount = RtlpGetCriticalSectionContentionCount(a1);
    v22 = CriticalSectionContentionCount;
    if ( v4 > 2 && (_RTL_CRITICAL_SECTION *)a1 != &LdrpLoaderLock && CriticalSectionContentionCount == v7 )
      RtlpPossibleDeadlock();
    v7 = v22;
    DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
  }
  if ( (int)v10 < 0 )
    RtlRaiseStatus((NTSTATUS)v10);
  if ( v24 )
  {
    v26->WaitingOnLoaderLock = 0;
    v10 = NtCurrentPeb();
    v11 = v10->SharedData;
    if ( v11 )
    {
      if ( *v11 )
        LODWORD(v10) = (unsigned int)NtCurrentPeb();
    }
  }
  return (int)v10;
}

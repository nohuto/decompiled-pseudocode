/*
 * XREFs of RtlpWaitOnCriticalSection @ 0x18005EA34
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x1800143C0 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrintEx @ 0x18004D290 (DbgPrintEx.c)
 *     RtlpWaitOnAddress @ 0x18005EBE8 (RtlpWaitOnAddress.c)
 *     RtlpWaitCouldDeadlock @ 0x18005EDEC (RtlpWaitCouldDeadlock.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18005F030 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180061B00 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     NtWaitForSingleObject @ 0x1800A0380 (NtWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x1800A0880 (ZwTerminateProcess.c)
 *     LdrpLogEtwEvent @ 0x1800D1238 (LdrpLogEtwEvent.c)
 *     RtlpDbgPrintCriticalSectionTimeout @ 0x1800E9768 (RtlpDbgPrintCriticalSectionTimeout.c)
 *     RtlpLogWaitForCriticalSection @ 0x1800E9884 (RtlpLogWaitForCriticalSection.c)
 *     RtlpPossibleDeadlock @ 0x1800E9A20 (RtlpPossibleDeadlock.c)
 */

int __fastcall RtlpWaitOnCriticalSection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // r14
  unsigned int v6; // r15d
  LARGE_INTEGER *v7; // rsi
  __int64 v8; // rcx
  int v9; // r12d
  void *v10; // r13
  __int64 v11; // rcx
  struct _PEB *v12; // rax
  __int64 v13; // rcx
  int v14; // edi
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rcx
  char v19; // [rsp+70h] [rbp+8h]
  int v20; // [rsp+78h] [rbp+10h] BYREF
  struct _TEB *v21; // [rsp+80h] [rbp+18h]

  v20 = a2;
  v4 = NtCurrentTeb();
  v21 = v4;
  v19 = 0;
  v6 = 0;
  if ( (_RTL_CRITICAL_SECTION *)a1 == &LdrpLoaderLock )
  {
    v19 = 1;
    v4->WaitingOnLoaderLock = 1;
  }
  if ( (unsigned __int8)RtlpWaitCouldDeadlock(a1, a2, a3, a4) )
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
  v7 = &RtlpTimeout;
  if ( RtlpTimeoutDisable )
    v7 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    RtlpCreateDeferredCriticalSectionEvent(a1);
  v8 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 == -1LL )
  {
    v8 = -1LL;
    if ( (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
    {
      RtlpAddDebugInfoToCriticalSection(a1);
      v8 = *(_QWORD *)a1;
    }
  }
  v9 = 0;
  if ( v8 != -1 )
    ++*(_DWORD *)(v8 + 36);
  v10 = *(void **)(a1 + 24);
  while ( 1 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 552;
    else
      v11 = 2147353474LL;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
      RtlpLogWaitForCriticalSection(a1);
    if ( v10 == (void *)-1LL )
    {
      while ( 1 )
      {
        LODWORD(v12) = RtlpWaitOnAddress((int)a1 + 8, (unsigned int)&v20, 4, (_DWORD)v7, 0);
        if ( (_DWORD)v12 == 258 )
          goto LABEL_33;
        v20 = *(_DWORD *)(a1 + 8);
        if ( (v20 & 2) == 0 )
          goto LABEL_19;
      }
    }
    LODWORD(v12) = NtWaitForSingleObject(v10, 0, v7);
LABEL_19:
    if ( (_DWORD)v12 != 258 )
      break;
LABEL_33:
    RtlpDbgPrintCriticalSectionTimeout(a1, v7, v6++);
    if ( *(_QWORD *)a1 == -1LL )
      v14 = 0;
    else
      v14 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( v6 > 2 && (_RTL_CRITICAL_SECTION *)a1 != &LdrpLoaderLock && v14 == v9 )
      RtlpPossibleDeadlock(a1);
    v9 = v14;
    DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
  }
  if ( (int)v12 < 0 )
    RtlRaiseStatus((NTSTATUS)v12);
  if ( v19 )
  {
    v21->WaitingOnLoaderLock = 0;
    LODWORD(v12) = RtlGetCurrentServiceSessionId();
    if ( (_DWORD)v12 )
    {
      v12 = NtCurrentPeb();
      v13 = (__int64)v12->SharedData + 554;
    }
    else
    {
      v13 = 2147353476LL;
    }
    if ( *(_BYTE *)v13 )
    {
      v12 = NtCurrentPeb();
      if ( (v12->TracingFlags & 4) != 0 )
      {
        LODWORD(v12) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v12 )
        {
          v12 = NtCurrentPeb();
          v17 = (__int64)v12->SharedData + 555;
        }
        else
        {
          v17 = 2147353477LL;
        }
        if ( (*(_BYTE *)v17 & 0x20) != 0 )
        {
          LOBYTE(v16) = -1;
          LOBYTE(v15) = -1;
          LODWORD(v12) = LdrpLogEtwEvent(5251, -1, v15, v16, 0LL, 0LL);
        }
      }
    }
  }
  return (int)v12;
}

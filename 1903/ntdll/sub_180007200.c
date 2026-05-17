/*
 * XREFs of sub_180007200 @ 0x180007200
 * Callers:
 *     sub_18001B3D0 @ 0x18001B3D0 (sub_18001B3D0.c)
 * Callees:
 *     sub_180007424 @ 0x180007424 (sub_180007424.c)
 *     sub_180007850 @ 0x180007850 (sub_180007850.c)
 *     sub_180033A40 @ 0x180033A40 (sub_180033A40.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     sub_1800E6A94 @ 0x1800E6A94 (sub_1800E6A94.c)
 *     sub_1800E6C88 @ 0x1800E6C88 (sub_1800E6C88.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

struct _PEB *__fastcall sub_180007200(__int64 a1, int a2)
{
  struct _TEB *v2; // r13
  unsigned int v4; // r12d
  __int64 *v5; // rdi
  __int64 v6; // rax
  int v7; // r15d
  __int64 v8; // r14
  __int64 v9; // rcx
  struct _PEB *result; // rax
  _DWORD *v11; // rcx
  struct _TEB *v12; // rcx
  __int64 SpareUlong0; // rax
  __int64 v14; // rcx
  int v15; // eax
  _DWORD *HotpatchInformation; // rcx
  __int64 v17; // rcx
  struct _TEB *v18; // rsi
  unsigned __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  int v22; // esi
  char v23; // [rsp+40h] [rbp-98h]
  int v24; // [rsp+48h] [rbp-90h] BYREF
  struct _TEB *v25; // [rsp+50h] [rbp-88h]
  _BYTE v26[6]; // [rsp+58h] [rbp-80h] BYREF
  __int16 v27; // [rsp+5Eh] [rbp-7Ah]
  int v28; // [rsp+78h] [rbp-60h]
  int v29; // [rsp+7Ch] [rbp-5Ch]
  __int64 v30; // [rsp+80h] [rbp-58h]
  __int64 v31; // [rsp+88h] [rbp-50h]

  v2 = NtCurrentTeb();
  v24 = a2;
  v23 = 0;
  v25 = v2;
  v4 = 0;
  if ( (_UNKNOWN **)a1 == &off_18015F4F8 )
  {
    v23 = 1;
    v2->WaitingOnLoaderLock = 1;
  }
  if ( byte_180165408 )
    goto LABEL_32;
  if ( dword_180165428 )
  {
    v12 = NtCurrentTeb();
    SpareUlong0 = (int)v12->SpareUlong0;
    if ( (_DWORD)SpareUlong0 )
    {
      if ( (int)SpareUlong0 >= 0 )
        v12 = (struct _TEB *)((char *)v12 + SpareUlong0);
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
        ZwTerminateProcess(-1LL, 3221225547LL);
    }
  }
  v5 = &qword_180164F00;
  if ( byte_180164EF8 )
    v5 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    sub_180007850(a1);
  v6 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 == -1LL )
  {
    v6 = -1LL;
    if ( (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
    {
      sub_180033A40(a1);
      v6 = *(_QWORD *)a1;
    }
  }
  v7 = 0;
  if ( v6 != -1 )
    ++*(_DWORD *)(v6 + 36);
  v8 = *(_QWORD *)(a1 + 24);
  while ( 1 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
    else
      v9 = 2147353474LL;
    if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v15 = *(_DWORD *)(a1 + 32) & 0xFFFFFF;
      v27 = 5922;
      v29 = v15;
      v28 = *(_DWORD *)(a1 + 8);
      v30 = *(_QWORD *)(a1 + 16);
      v31 = a1;
      HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
      if ( HotpatchInformation && *HotpatchInformation )
        v17 = (__int64)NtCurrentPeb()->HotpatchInformation + 552;
      else
        v17 = 2147353474LL;
      ZwTraceEvent(*(unsigned __int8 *)v17, 132098LL, 24LL, v26);
    }
    if ( v8 == -1 )
    {
      while ( 1 )
      {
        result = (struct _PEB *)sub_180007424((int)a1 + 8, (unsigned int)&v24, 4, (_DWORD)v5, 0);
        if ( (_DWORD)result == 258 )
          goto LABEL_42;
        v24 = *(_DWORD *)(a1 + 8);
        if ( (v24 & 2) == 0 )
          goto LABEL_19;
      }
    }
    result = (struct _PEB *)ZwWaitForSingleObject(v8, 0LL, v5);
LABEL_19:
    if ( (_DWORD)result != 258 )
      break;
LABEL_42:
    v18 = NtCurrentTeb();
    v19 = (__int64)(((unsigned __int128)(*v5 * (__int128)0x29406B2A1A85BD43LL) >> 64) - *v5) >> 23;
    DbgPrintEx(101LL, 1LL, "RTL: Enter CriticalSection Timeout (%I64u secs) %d\n", v19 + (v19 >> 63), v4);
    if ( *(_QWORD *)a1 == -1LL )
      v20 = 0;
    else
      v20 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    DbgPrintEx(
      101LL,
      0LL,
      "RTL: Pid.Tid %p.%p, owner tid %p Critical Section %p - ContentionCount == %u\n",
      v18->ClientId.UniqueProcess,
      v18->ClientId.UniqueThread,
      *(const void **)(a1 + 16),
      (const void *)a1,
      v20);
    ++v4;
    v21 = sub_1800E6A94(a1);
    v22 = v21;
    if ( v4 > 2 && (_UNKNOWN **)a1 != &off_18015F4F8 && v21 == v7 )
      sub_1800E6C88();
    v7 = v22;
    DbgPrintEx(101LL, 0LL, "RTL: Re-Waiting\n");
  }
  if ( (int)result < 0 )
    RtlRaiseStatus((unsigned int)result);
  if ( v23 )
  {
    v25->WaitingOnLoaderLock = 0;
    result = NtCurrentPeb();
    v11 = result->HotpatchInformation;
    if ( v11 )
    {
      if ( *v11 )
        return NtCurrentPeb();
    }
  }
  return result;
}

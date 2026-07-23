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

int __fastcall sub_180007200(__int64 a1, int a2)
{
  struct _TEB *v2; // r13
  unsigned int v4; // r12d
  LARGE_INTEGER *v5; // rdi
  __int64 v6; // rax
  int v7; // r15d
  void *v8; // r14
  __int64 v9; // rcx
  struct _PEB *v10; // rax
  _DWORD *p_ServiceSessionId; // rcx
  struct _TEB *v12; // rcx
  __int64 WowTebOffset; // rax
  __int64 v14; // rcx
  int v15; // eax
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v17; // rcx
  struct _TEB *v18; // rsi
  unsigned __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
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
  if ( (_RTL_CRITICAL_SECTION *)a1 == &stru_18015F4F8 )
  {
    v24 = 1;
    v2->WaitingOnLoaderLock = 1;
  }
  if ( byte_180165408 )
    goto LABEL_32;
  if ( dword_180165428 )
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
  v5 = (LARGE_INTEGER *)&qword_180164F00;
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
  v8 = *(void **)(a1 + 24);
  while ( 1 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[1];
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
      if ( SharedData && SharedData->ServiceSessionId )
        v17 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[1];
      else
        v17 = 2147353474LL;
      ZwTraceEvent((HANDLE)*(unsigned __int8 *)v17, 0x20402u, 0x18u, Fields);
    }
    if ( v8 == (void *)-1LL )
    {
      while ( 1 )
      {
        LODWORD(v10) = sub_180007424((int)a1 + 8, (unsigned int)&v25, 4, (_DWORD)v5, 0);
        if ( (_DWORD)v10 == 258 )
          goto LABEL_42;
        v25 = *(_DWORD *)(a1 + 8);
        if ( (v25 & 2) == 0 )
          goto LABEL_19;
      }
    }
    LODWORD(v10) = ZwWaitForSingleObject(v8, 0, v5);
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
    v21 = sub_1800E6A94(a1);
    v22 = v21;
    if ( v4 > 2 && (_RTL_CRITICAL_SECTION *)a1 != &stru_18015F4F8 && v21 == v7 )
      sub_1800E6C88();
    v7 = v22;
    DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
  }
  if ( (int)v10 < 0 )
    RtlRaiseStatus((NTSTATUS)v10);
  if ( v24 )
  {
    v26->WaitingOnLoaderLock = 0;
    v10 = NtCurrentPeb();
    p_ServiceSessionId = &v10->SharedData->ServiceSessionId;
    if ( p_ServiceSessionId )
    {
      if ( *p_ServiceSessionId )
        LODWORD(v10) = (unsigned int)NtCurrentPeb();
    }
  }
  return (int)v10;
}

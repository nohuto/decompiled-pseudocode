/*
 * XREFs of TppAlpcpExecuteCallback @ 0x180069EA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetThreadSubProcessTag @ 0x180015920 (RtlSetThreadSubProcessTag.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800237A0 (RtlActivateActivationContextUnsafeFast.c)
 *     TpCallbackMayRunLong @ 0x1800304C0 (TpCallbackMayRunLong.c)
 *     LdrAddRefDll @ 0x180045070 (LdrAddRefDll.c)
 *     TppIteWakeWaiters @ 0x180073E38 (TppIteWakeWaiters.c)
 *     NtSetInformationThread @ 0x1800A0480 (NtSetInformationThread.c)
 *     NtAlpcSetInformation @ 0x1800A1430 (NtAlpcSetInformation.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x180110BA0 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x180110C3C (RtlpTpETWCallbackStop.c)
 */

struct _PEB *__fastcall TppAlpcpExecuteCallback(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  signed __int32 v7; // eax
  char v8; // r15
  signed __int64 v9; // rbx
  signed __int64 v10; // rdi
  signed __int64 v11; // rbx
  __int64 v12; // r13
  _QWORD *v13; // rdi
  void *v14; // rcx
  _QWORD *v15; // rbp
  __int64 v16; // rbx
  _DWORD *SharedData; // rcx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // rdx
  _DWORD *ThreadPoolData; // rcx
  int v23; // eax
  unsigned int v24; // eax
  _QWORD *v25; // r8
  struct _PEB *result; // rax
  _DWORD *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rbx
  int v31; // [rsp+88h] [rbp+10h] BYREF
  __int64 v32; // [rsp+90h] [rbp+18h]

  v32 = a3;
  v4 = *(_QWORD *)(a2 + 208);
  v5 = a2;
  if ( v4 )
  {
    result = (struct _PEB *)LdrAddRefDll(0, *(_QWORD *)(a2 + 208), a3, a4);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 72));
  if ( (*(_BYTE *)(v5 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      a3 = MEMORY[0x7FFE03C0];
      v7 = *(_DWORD *)(v5 + 284);
      a2 = (unsigned int)(MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(v5 + 216) + 420LL));
      a4 = (unsigned int)(a2 + MEMORY[0x7FFE03C0]);
      if ( v7 >= (int)a2 && v7 <= (int)a4 + MEMORY[0x7FFE03C0] )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 284), a4, v7) )
      {
        v29 = *(_QWORD *)(v5 + 272);
        v31 = a4;
        NtAlpcSetInformation(v29, 8LL, &v31);
      }
    }
  }
  v8 = 0;
  _m_prefetchw((const void *)(v5 + 128));
  v9 = *(_QWORD *)(v5 + 128);
  do
  {
    if ( v8 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 136));
      v8 = 0;
    }
    v10 = v9;
    v11 = (v9 ^ (v9 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v9;
    if ( v10 < 0 && (v11 & 0xFFFFFFFFFFFFFFFLL) == 0 )
    {
      v11 &= ~0x8000000000000000uLL;
      v8 = 1;
      RtlAcquireSRWLockExclusive(v5 + 136, a2, (unsigned __int64 *)a3, a4);
    }
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 128), v11, v10);
  }
  while ( v10 != v9 );
  v12 = v32;
  v13 = 0LL;
  if ( v8 )
  {
    v30 = *(_QWORD *)(v5 + 144);
    *(_QWORD *)(v5 + 144) = 0LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v5 + 136));
    TppIteWakeWaiters(v30);
  }
  if ( (unsigned __int64)(*(_QWORD *)(v5 + 168) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)a1 = 72LL;
    *(_DWORD *)(a1 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(v5 + 168));
    *(_BYTE *)(a1 + 76) |= 1u;
  }
  *(_DWORD *)(a1 + 144) |= 0x240u;
  *(_QWORD *)(a1 + 184) = v5 + 72;
  if ( (*(_DWORD *)(v5 + 240) & 3) == 1 )
    TpCallbackMayRunLong(a1);
  v14 = *(void **)(v5 + 176);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 80) = v14;
    RtlSetThreadSubProcessTag(v14);
  }
  NtCurrentTeb()->ActivityId = *(_GUID *)(v5 + 184);
  v15 = (_QWORD *)(v5 + 200);
  if ( v5 != -200LL
    && *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket != *v15
    && (int)NtSetInformationThread(-2LL, 44LL, v15, 8LL) >= 0 )
  {
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v15;
  }
  v16 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v18 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v18 = 2147353478LL;
  if ( *(_BYTE *)v18 )
    RtlpTpETWCallbackStart(
      *(_QWORD *)(v5 + 216),
      v5,
      *(_QWORD *)(v5 + 152),
      *(_QWORD *)(v5 + 160),
      *(_QWORD *)(v5 + 176));
  v19 = *(_QWORD *)(v5 + 176);
  v20 = *(_QWORD *)(v5 + 160);
  v21 = *(_QWORD *)(v5 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v23 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v24 = ((_BYTE)v23 - 1) & 1;
    ThreadPoolData[3] = v24;
    v25 = &ThreadPoolData[8 * v24];
    v13 = v25 + 4;
    v25[4] = v21;
    v25[5] = v20;
    v25[6] = v19;
    v25[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    v21 = *(_QWORD *)(v5 + 152);
  }
  *(_QWORD *)(a1 + 88) = v21;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(v5 + 160);
  if ( (*(_BYTE *)(v5 + 288) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 136) = v5;
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, __int64))(v5 + 152))(a1, *(_QWORD *)(v5 + 160), v5, v12);
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64, __int64))(v5 + 152))(a1, *(_QWORD *)(v5 + 160), v5, v19);
  }
  result = NtCurrentPeb();
  v27 = result->SharedData;
  if ( v27 && *v27 )
  {
    result = NtCurrentPeb();
    v16 = (__int64)result->SharedData + 556;
  }
  if ( *(_BYTE *)v16 )
    result = (struct _PEB *)RtlpTpETWCallbackStop(
                              *(_QWORD *)(v5 + 216),
                              v5,
                              *(_QWORD *)(v5 + 152),
                              *(_QWORD *)(v5 + 160),
                              *(_QWORD *)(v5 + 176));
  if ( v13 )
  {
    v28 = v13[3];
    result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v28 )
    {
      result = (struct _PEB *)((char *)result - v28);
      v13[3] = result;
    }
  }
  return result;
}

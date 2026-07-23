/*
 * XREFs of TppWorkCallbackPrologRelease @ 0x180032F0C
 * Callers:
 *     TppExecuteWaitCallback @ 0x180030488 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x180030680 (TppTimerpExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180030770 (TppWorkpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180032D70 (TppSimplepExecuteCallback.c)
 * Callees:
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrAddRefDll @ 0x18002F760 (LdrAddRefDll.c)
 *     TpPostTask @ 0x1800318A8 (TpPostTask.c)
 *     RtlSetThreadSubProcessTag @ 0x180035BB0 (RtlSetThreadSubProcessTag.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x180066E0C (TppBarrierAdjust.c)
 *     TpCallbackMayRunLong @ 0x180070840 (TpCallbackMayRunLong.c)
 *     LdrLockLoaderLock @ 0x18007C5F0 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x18007D300 (LdrUnlockLoaderLock.c)
 *     TppWorkCancelPendingCallbacks @ 0x180084EB0 (TppWorkCancelPendingCallbacks.c)
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackEnqueue @ 0x18010F2F4 (RtlpTpETWCallbackEnqueue.c)
 */

__int64 __fastcall TppWorkCallbackPrologRelease(_DWORD *Instance, __int64 a2, int a3)
{
  void *v3; // rsi
  int v4; // r12d
  unsigned __int32 v8; // ecx
  signed __int32 v9; // eax
  int v10; // r15d
  int v11; // ebp
  unsigned __int32 v12; // ecx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  void *v15; // rcx
  _QWORD *v16; // rbx
  __int64 v18; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  PVOID Cookie; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(void **)(a2 + 136);
  v4 = 0;
  Cookie = 0LL;
  if ( v3 )
    LdrLockLoaderLock(0, 0LL, &Cookie);
  _m_prefetchw((const void *)(a2 + 232));
  v8 = *(_DWORD *)(a2 + 232);
  do
  {
    v9 = v8;
    if ( v8 < 2 )
    {
      v10 = 0;
      v11 = 0;
      v12 = v8 | 1;
    }
    else
    {
      v10 = 1;
      v11 = 1;
      v12 = v8 & 1 | (2 * (v8 >> 1) - 2);
      if ( v12 < 2 )
      {
        v11 = 0;
        v12 |= 1u;
      }
    }
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 232), v12, v9);
  }
  while ( v9 != v8 );
  if ( v3 )
  {
    if ( v10 )
    {
      if ( LdrAddRefDll(0, v3) < 0 )
      {
        v10 = 0;
        v11 = 0;
        v4 = 1;
      }
      else
      {
        Instance[36] |= 0x100u;
        *((_QWORD *)Instance + 21) = v3;
      }
    }
    LdrUnlockLoaderLock(0, Cookie);
    if ( v4 )
    {
      TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL);
      TppWorkCancelPendingCallbacks(a2);
    }
  }
  if ( v11 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a2, 2u);
    if ( RtlGetCurrentServiceSessionId() )
      v18 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v18 = 2147353478LL;
    if ( *(_BYTE *)v18 )
      RtlpTpETWCallbackEnqueue(
        *(_QWORD *)(a2 + 144),
        a2 + 200,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    TpPostTask(a2 + 200, *(_RTL_SRWLOCK **)(a2 + 144), *(unsigned int *)(a2 + 192), 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
  }
  if ( a3 )
  {
    _m_prefetchw((const void *)(a2 + 168));
    v13 = *(_DWORD *)(a2 + 168);
    do
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 168), v13 | 0x10000, v13);
    }
    while ( v14 != v13 );
    if ( (v13 & 0x30000) == 0 )
    {
      *(_QWORD *)(a2 + 184) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    }
  }
  if ( v10 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      *(_QWORD *)Instance = 72LL;
      Instance[2] = 1;
      RtlActivateActivationContextUnsafeFast((__int64)Instance, *(_QWORD *)(a2 + 96));
      *((_BYTE *)Instance + 76) |= 1u;
    }
    Instance[36] |= 0x240u;
    *((_QWORD *)Instance + 23) = a2;
    if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
      TpCallbackMayRunLong((PTP_CALLBACK_INSTANCE)Instance);
    v15 = *(void **)(a2 + 104);
    if ( v15 )
    {
      *((_QWORD *)Instance + 10) = v15;
      RtlSetThreadSubProcessTag(v15);
    }
    NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 112);
    v16 = (_QWORD *)(a2 + 128);
    if ( v16
      && *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket != *v16
      && NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, v16, 8u) >= 0 )
    {
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v16;
    }
    return 1LL;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    return 0LL;
  }
}

/*
 * XREFs of TppIopExecuteCallback @ 0x180033520
 * Callers:
 *     <none>
 * Callees:
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrAddRefDll @ 0x18002F760 (LdrAddRefDll.c)
 *     RtlSetThreadWorkOnBehalfTicket @ 0x1800337C0 (RtlSetThreadWorkOnBehalfTicket.c)
 *     RtlSetThreadSubProcessTag @ 0x180035BB0 (RtlSetThreadSubProcessTag.c)
 *     TpCallbackMayRunLong @ 0x180070840 (TpCallbackMayRunLong.c)
 *     LdrLockLoaderLock @ 0x18007C5F0 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x18007D300 (LdrUnlockLoaderLock.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x18010F390 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x18010F42C (RtlpTpETWCallbackStop.c)
 */

__int64 __fastcall TppIopExecuteCallback(_QWORD *Instance, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v7; // r15
  void *v8; // r12
  int v9; // r14d
  signed __int32 v10; // ecx
  bool v11; // zf
  signed __int32 v12; // eax
  int v13; // esi
  void *v14; // rcx
  _DWORD *SharedData; // rcx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // rdx
  _QWORD *ThreadPoolData; // rcx
  unsigned int v22; // eax
  __int64 v23; // r9
  __int64 result; // rax
  _DWORD *v25; // rcx
  char *v26; // [rsp+38h] [rbp-40h]
  PVOID Cookie; // [rsp+40h] [rbp-38h] BYREF

  Cookie = 0LL;
  v7 = (volatile signed __int32 *)(a2 - 200);
  v8 = *(void **)(a2 - 64);
  if ( v8 )
  {
    v9 = 1;
    LdrLockLoaderLock(0, 0LL, &Cookie);
  }
  else
  {
    v9 = 0;
  }
  _m_prefetchw((const void *)(a2 + 80));
  v10 = *(_DWORD *)(a2 + 80);
  while ( v10 > 0 )
  {
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 80), v10 - 1, v10);
    v11 = v10 == v12;
    v10 = v12;
    if ( v11 )
    {
      v13 = 1;
      goto LABEL_7;
    }
  }
  v13 = 0;
LABEL_7:
  if ( v9 && v13 )
  {
    if ( LdrAddRefDll(0, v8) >= 0 )
    {
      Instance[21] = v8;
      *((_DWORD *)Instance + 36) |= 0x100u;
    }
    else
    {
      v13 = 0;
    }
  }
  if ( v9 )
    LdrUnlockLoaderLock(0, Cookie);
  if ( v13 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a2 - 104) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      *Instance = 72LL;
      *((_DWORD *)Instance + 2) = 1;
      RtlActivateActivationContextUnsafeFast((__int64)Instance, *(_QWORD *)(a2 - 104));
      *((_BYTE *)Instance + 76) |= 1u;
    }
    Instance[23] = v7;
    *((_DWORD *)Instance + 36) |= 0x240u;
    if ( (*(_DWORD *)(a2 - 32) & 3) == 1 )
      TpCallbackMayRunLong((PTP_CALLBACK_INSTANCE)Instance);
    v14 = *(void **)(a2 - 96);
    if ( v14 )
    {
      Instance[10] = v14;
      RtlSetThreadSubProcessTag(v14);
    }
    NtCurrentTeb()->ActivityId = *(_GUID *)(a2 - 88);
    RtlSetThreadWorkOnBehalfTicket((PVOID)(a2 - 72));
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
    {
      v17 = (__int64)NtCurrentPeb()->SharedData + 556;
      v16 = 2147353478LL;
    }
    else
    {
      v16 = 2147353478LL;
      v17 = 2147353478LL;
    }
    if ( *(_BYTE *)v17 )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(a2 - 56),
        a2,
        *(_QWORD *)(a2 - 120),
        *(_QWORD *)(a2 - 112),
        *(_QWORD *)(a2 - 96));
    v18 = *(_QWORD *)(a2 - 96);
    v19 = *(_QWORD *)(a2 - 112);
    v20 = *(_QWORD *)(a2 - 120);
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v22 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      *((_DWORD *)ThreadPoolData + 3) = v22;
      v23 = 4LL * v22;
      ThreadPoolData[v23 + 4] = v20;
      ThreadPoolData[v23 + 5] = v19;
      ThreadPoolData[v23 + 6] = v18;
      ThreadPoolData[v23 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
      v26 = (char *)&ThreadPoolData[v23 + 4];
      v20 = *(_QWORD *)(a2 - 120);
    }
    else
    {
      v26 = 0LL;
    }
    Instance[11] = v20;
    Instance[12] = *(_QWORD *)(a2 - 112);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, volatile signed __int32 *))(a2 - 120))(
      Instance,
      *(_QWORD *)(a2 - 112),
      a3,
      a4,
      v7);
    result = (__int64)NtCurrentPeb();
    v25 = *(_DWORD **)(result + 144);
    if ( v25 && *v25 )
    {
      result = (__int64)NtCurrentPeb();
      v16 = *(_QWORD *)(result + 144) + 556LL;
    }
    if ( *(_BYTE *)v16 )
      result = RtlpTpETWCallbackStop(
                 *(_QWORD *)(a2 - 56),
                 a2,
                 *(_QWORD *)(a2 - 120),
                 *(_QWORD *)(a2 - 112),
                 *(_QWORD *)(a2 - 96));
    if ( v26 )
    {
      result = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= *((_QWORD *)v26 + 3) )
      {
        result -= *((_QWORD *)v26 + 3);
        *((_QWORD *)v26 + 3) = result;
      }
    }
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd(v7, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(volatile signed __int32 *))(a2 - 192))(v7);
  }
  return result;
}

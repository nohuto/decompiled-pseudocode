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

__int64 __fastcall TppIopExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v7; // r15
  unsigned __int64 v8; // r12
  int v9; // r14d
  signed __int32 v10; // ecx
  bool v11; // zf
  signed __int32 v12; // eax
  int v13; // esi
  __int64 v14; // rcx
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
  __int64 v27; // [rsp+40h] [rbp-38h] BYREF

  v27 = 0LL;
  v7 = (volatile signed __int32 *)(a2 - 200);
  v8 = *(_QWORD *)(a2 - 64);
  if ( v8 )
  {
    v9 = 1;
    LdrLockLoaderLock(0LL, 0LL, &v27);
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
    if ( (int)LdrAddRefDll(0, v8) >= 0 )
    {
      *(_QWORD *)(a1 + 168) = v8;
      *(_DWORD *)(a1 + 144) |= 0x100u;
    }
    else
    {
      v13 = 0;
    }
  }
  if ( v9 )
    LdrUnlockLoaderLock(0LL, v27);
  if ( v13 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(a2 - 104) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      *(_QWORD *)a1 = 72LL;
      *(_DWORD *)(a1 + 8) = 1;
      RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(a2 - 104));
      *(_BYTE *)(a1 + 76) |= 1u;
    }
    *(_QWORD *)(a1 + 184) = v7;
    *(_DWORD *)(a1 + 144) |= 0x240u;
    if ( (*(_DWORD *)(a2 - 32) & 3) == 1 )
      TpCallbackMayRunLong(a1);
    v14 = *(_QWORD *)(a2 - 96);
    if ( v14 )
    {
      *(_QWORD *)(a1 + 80) = v14;
      RtlSetThreadSubProcessTag(v14);
    }
    NtCurrentTeb()->ActivityId = *(_GUID *)(a2 - 88);
    RtlSetThreadWorkOnBehalfTicket(a2 - 72);
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
    *(_QWORD *)(a1 + 88) = v20;
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 - 112);
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, volatile signed __int32 *))(a2 - 120))(
      a1,
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

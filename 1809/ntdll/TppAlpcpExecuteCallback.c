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
 *     TppIteWakeWaiters @ 0x180073E48 (TppIteWakeWaiters.c)
 *     NtSetInformationThread @ 0x1800A04A0 (NtSetInformationThread.c)
 *     NtAlpcSetInformation @ 0x1800A1450 (NtAlpcSetInformation.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x180110BA0 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x180110C3C (RtlpTpETWCallbackStop.c)
 */

int __fastcall TppAlpcpExecuteCallback(_DWORD *Instance, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  signed __int32 v6; // eax
  int v7; // edx
  signed __int32 v8; // r9d
  char v9; // r15
  signed __int64 v10; // rbx
  signed __int64 v11; // rdi
  signed __int64 v12; // rbx
  __int64 v13; // r13
  _QWORD *v14; // rdi
  void *v15; // rcx
  _QWORD *v16; // rbp
  __int64 v17; // rbx
  _DWORD *SharedData; // rcx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rdx
  _DWORD *ThreadPoolData; // rcx
  int v24; // eax
  unsigned int v25; // eax
  _QWORD *v26; // r8
  struct _PEB *v27; // rax
  _DWORD *v28; // rcx
  __int64 v29; // rcx
  void *v30; // rcx
  __int64 v31; // rbx
  signed __int32 PortInformation; // [rsp+88h] [rbp+10h] BYREF
  __int64 v34; // [rsp+90h] [rbp+18h]

  v34 = a3;
  v3 = *(_QWORD *)(a2 + 208);
  if ( v3 )
  {
    LODWORD(v27) = LdrAddRefDll(0, *(PVOID *)(a2 + 208));
    if ( (int)v27 < 0 )
      return (int)v27;
    Instance[36] |= 0x100u;
    *((_QWORD *)Instance + 21) = v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  if ( (*(_BYTE *)(a2 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(a2 + 284);
      v7 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(a2 + 216) + 420LL);
      v8 = v7 + MEMORY[0x7FFE03C0];
      if ( v6 >= v7 && v6 <= v8 + MEMORY[0x7FFE03C0] )
        break;
      if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 284), v8, v6) )
      {
        v30 = *(void **)(a2 + 272);
        PortInformation = v8;
        NtAlpcSetInformation(v30, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
      }
    }
  }
  v9 = 0;
  _m_prefetchw((const void *)(a2 + 128));
  v10 = *(_QWORD *)(a2 + 128);
  do
  {
    if ( v9 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
      v9 = 0;
    }
    v11 = v10;
    v12 = (v10 ^ (v10 + 1)) & 0xFFFFFFFFFFFFFFFLL ^ v10;
    if ( v11 < 0 && (v12 & 0xFFFFFFFFFFFFFFFLL) == 0 )
    {
      v12 &= ~0x8000000000000000uLL;
      v9 = 1;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
    }
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 128), v12, v11);
  }
  while ( v11 != v10 );
  v13 = v34;
  v14 = 0LL;
  if ( v9 )
  {
    v31 = *(_QWORD *)(a2 + 144);
    *(_QWORD *)(a2 + 144) = 0LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 136));
    TppIteWakeWaiters(v31);
  }
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 168) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)Instance = 72LL;
    Instance[2] = 1;
    RtlActivateActivationContextUnsafeFast((__int64)Instance, *(_QWORD *)(a2 + 168));
    *((_BYTE *)Instance + 76) |= 1u;
  }
  Instance[36] |= 0x240u;
  *((_QWORD *)Instance + 23) = a2 + 72;
  if ( (*(_DWORD *)(a2 + 240) & 3) == 1 )
    TpCallbackMayRunLong((PTP_CALLBACK_INSTANCE)Instance);
  v15 = *(void **)(a2 + 176);
  if ( v15 )
  {
    *((_QWORD *)Instance + 10) = v15;
    RtlSetThreadSubProcessTag(v15);
  }
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 184);
  v16 = (_QWORD *)(a2 + 200);
  if ( a2 != -200
    && *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket != *v16
    && NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, v16, 8u) >= 0 )
  {
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v16;
  }
  v17 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v19 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v19 = 2147353478LL;
  if ( *(_BYTE *)v19 )
    RtlpTpETWCallbackStart(
      *(_QWORD *)(a2 + 216),
      a2,
      *(_QWORD *)(a2 + 152),
      *(_QWORD *)(a2 + 160),
      *(_QWORD *)(a2 + 176));
  v20 = *(_QWORD *)(a2 + 176);
  v21 = *(_QWORD *)(a2 + 160);
  v22 = *(_QWORD *)(a2 + 152);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v24 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v25 = ((_BYTE)v24 - 1) & 1;
    ThreadPoolData[3] = v25;
    v26 = &ThreadPoolData[8 * v25];
    v14 = v26 + 4;
    v26[4] = v22;
    v26[5] = v21;
    v26[6] = v20;
    v26[7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    v22 = *(_QWORD *)(a2 + 152);
  }
  *((_QWORD *)Instance + 11) = v22;
  *((_QWORD *)Instance + 12) = *(_QWORD *)(a2 + 160);
  if ( (*(_BYTE *)(a2 + 288) & 1) != 0 )
  {
    *((_QWORD *)Instance + 17) = a2;
    (*(void (__fastcall **)(_DWORD *, _QWORD, __int64, __int64))(a2 + 152))(Instance, *(_QWORD *)(a2 + 160), a2, v13);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *, _QWORD, __int64, __int64))(a2 + 152))(Instance, *(_QWORD *)(a2 + 160), a2, v20);
  }
  v27 = NtCurrentPeb();
  v28 = v27->SharedData;
  if ( v28 && *v28 )
  {
    v27 = NtCurrentPeb();
    v17 = (__int64)v27->SharedData + 556;
  }
  if ( *(_BYTE *)v17 )
    LODWORD(v27) = RtlpTpETWCallbackStop(
                     *(_QWORD *)(a2 + 216),
                     a2,
                     *(_QWORD *)(a2 + 152),
                     *(_QWORD *)(a2 + 160),
                     *(_QWORD *)(a2 + 176));
  if ( v14 )
  {
    v29 = v14[3];
    v27 = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v29 )
    {
      v27 = (struct _PEB *)((char *)v27 - v29);
      v14[3] = v27;
    }
  }
  return (int)v27;
}

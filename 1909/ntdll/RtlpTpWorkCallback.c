/*
 * XREFs of RtlpTpWorkCallback @ 0x18002F4F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlpTpWorkUnposted @ 0x18002F180 (RtlpTpWorkUnposted.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     TppStartThreadData @ 0x180030888 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x180030918 (TppCompleteThreadData.c)
 *     RtlSetThreadSubProcessTag @ 0x180035BB0 (RtlSetThreadSubProcessTag.c)
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     TpCallbackMayRunLong @ 0x180070840 (TpCallbackMayRunLong.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18007EE6C (TpPoolReferenceExistingGlobalPool.c)
 *     TpDereferenceGlobalPool @ 0x180080A64 (TpDereferenceGlobalPool.c)
 *     RtlpTpImpersonate @ 0x180085538 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpTpETWCallbackStart @ 0x18010F390 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x18010F42C (RtlpTpETWCallbackStop.c)
 *     RtlTpETWCallbackDequeue @ 0x18010FE6C (RtlTpETWCallbackDequeue.c)
 */

__int64 __fastcall RtlpTpWorkCallback(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD v17[4]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v18; // [rsp+60h] [rbp-78h] BYREF
  int v19; // [rsp+68h] [rbp-70h]
  _BYTE v20[56]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v21; // [rsp+E8h] [rbp+10h]
  void (__fastcall *v22)(__int64); // [rsp+F0h] [rbp+18h]

  v18 = 72LL;
  v19 = 1;
  memset(v20, 0, sizeof(v20));
  v4 = 0LL;
  v6 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v5) )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
    RtlTpETWCallbackDequeue(v7, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_BYTE *)(a2 + 48) & 0x10) != 0 && (*(_BYTE *)(a2 + 48) & 0xC0) == 0 )
  {
    v15 = *(_QWORD *)(a2 + 32);
    if ( !v15 )
    {
      v15 = TpPoolReferenceExistingGlobalPool();
      v4 = v15;
    }
    *(_QWORD *)(a1 + 128) = v15;
    TpCallbackMayRunLong(a1);
  }
  v8 = *(_QWORD *)(a2 + 40);
  if ( v8 )
    RtlpTpImpersonate();
  v22 = *(void (__fastcall **)(__int64))(a2 + 56);
  v21 = *(_QWORD *)(a2 + 64);
  v9 = *(_QWORD *)(a2 + 72);
  v10 = *(_QWORD *)(a2 + 80);
  v17[1] = v10;
  v11 = *(_QWORD *)(a2 + 96);
  v17[3] = v11;
  if ( v11 )
    RtlSetThreadSubProcessTag(v11);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 104);
  if ( v9 != -1 )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v10 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    RtlpTpWorkUnposted(a2, *(_QWORD *)(a2 + 32));
  if ( v9 != -1 )
    RtlActivateActivationContextUnsafeFast((__int64)&v18, v9);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v8) )
    v12 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v12 = 2147353478LL;
  if ( *(_BYTE *)v12 )
    RtlpTpETWCallbackStart(0, a2, (_DWORD)v22, v21, v11);
  TppStartThreadData(v17, v22, v21, NtCurrentTeb()->SubProcessTag);
  v22(v21);
  if ( v9 != -1 )
  {
    RtlDeactivateActivationContextUnsafeFast((__int64)&v18);
    RtlReleaseActivationContext(v9);
  }
  if ( v10 )
    LdrUnloadDll(v10);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v16 = 0LL;
    NtSetInformationThread(-2LL, 5LL, &v16);
  }
  if ( v4 )
    TpDereferenceGlobalPool(v4);
  if ( v11 )
    RtlSetThreadSubProcessTag(0LL);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v13) )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v6 )
    RtlpTpETWCallbackStop(0, a2, (_DWORD)v22, v21, v11);
  return TppCompleteThreadData(v17[0]);
}

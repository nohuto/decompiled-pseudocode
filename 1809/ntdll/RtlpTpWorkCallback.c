/*
 * XREFs of RtlpTpWorkCallback @ 0x18002F9F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetThreadSubProcessTag @ 0x180015920 (RtlSetThreadSubProcessTag.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800237A0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180025950 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlReleaseActivationContext @ 0x18002D7A0 (RtlReleaseActivationContext.c)
 *     TppCompleteThreadData @ 0x18002EBE8 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x18002EC24 (TppStartThreadData.c)
 *     RtlpTpWorkUnposted @ 0x18002FD50 (RtlpTpWorkUnposted.c)
 *     TpCallbackMayRunLong @ 0x1800304C0 (TpCallbackMayRunLong.c)
 *     TpDereferenceGlobalPool @ 0x18003135C (TpDereferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800313A4 (TpPoolReferenceExistingGlobalPool.c)
 *     LdrUnloadDll @ 0x1800425D0 (LdrUnloadDll.c)
 *     RtlpTpImpersonate @ 0x1800891A0 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x1800A0480 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpTpETWCallbackStart @ 0x180110BA0 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x180110C3C (RtlpTpETWCallbackStop.c)
 *     RtlTpETWCallbackDequeue @ 0x18011160C (RtlTpETWCallbackDequeue.c)
 */

void __fastcall RtlpTpWorkCallback(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rsi
  __int64 v8; // r12
  void *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v15[4]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v16; // [rsp+60h] [rbp-78h] BYREF
  int v17; // [rsp+68h] [rbp-70h]
  _BYTE v18[56]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v19; // [rsp+E8h] [rbp+10h]
  void (__fastcall *v20)(__int64); // [rsp+F0h] [rbp+18h]

  v16 = 72LL;
  v17 = 1;
  memset(v18, 0, sizeof(v18));
  v4 = 0LL;
  v5 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    RtlTpETWCallbackDequeue(v6, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_BYTE *)(a2 + 48) & 0x10) != 0 && (*(_BYTE *)(a2 + 48) & 0xC0) == 0 )
  {
    v13 = *(_QWORD *)(a2 + 32);
    if ( !v13 )
    {
      v13 = TpPoolReferenceExistingGlobalPool();
      v4 = v13;
    }
    *(_QWORD *)(a1 + 128) = v13;
    TpCallbackMayRunLong(a1);
  }
  if ( *(_QWORD *)(a2 + 40) )
    RtlpTpImpersonate();
  v20 = *(void (__fastcall **)(__int64))(a2 + 56);
  v19 = *(_QWORD *)(a2 + 64);
  v7 = *(volatile signed __int32 **)(a2 + 72);
  v8 = *(_QWORD *)(a2 + 80);
  v15[1] = v8;
  v9 = *(void **)(a2 + 96);
  v15[3] = (__int64)v9;
  if ( v9 )
    RtlSetThreadSubProcessTag(v9);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 104);
  if ( v7 != (volatile signed __int32 *)-1LL )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v8 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    RtlpTpWorkUnposted(a2, *(_QWORD *)(a2 + 32));
  if ( v7 != (volatile signed __int32 *)-1LL )
    RtlActivateActivationContextUnsafeFast((__int64)&v16, (__int64)v7);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v10 = 2147353478LL;
  if ( *(_BYTE *)v10 )
    RtlpTpETWCallbackStart(0, a2, (_DWORD)v20, v19, (__int64)v9);
  TppStartThreadData(v15, (__int64)v20, v19, (__int64)NtCurrentTeb()->SubProcessTag);
  v20(v19);
  if ( v7 != (volatile signed __int32 *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast((__int64)&v16);
    RtlReleaseActivationContext(v7);
  }
  if ( v8 )
    LdrUnloadDll(v8, v11, v12);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v14 = 0LL;
    NtSetInformationThread(-2LL, 5LL, &v14, 8LL);
  }
  if ( v4 )
    TpDereferenceGlobalPool(v4);
  if ( v9 )
    RtlSetThreadSubProcessTag(0LL);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v5 )
    RtlpTpETWCallbackStop(0, a2, (_DWORD)v20, v19, (__int64)v9);
  TppCompleteThreadData(v15[0]);
}

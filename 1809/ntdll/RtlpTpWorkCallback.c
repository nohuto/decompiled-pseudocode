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
 *     RtlpTpImpersonate @ 0x1800891B0 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x1800A04A0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpTpETWCallbackStart @ 0x180110BA0 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x180110C3C (RtlpTpETWCallbackStop.c)
 *     RtlTpETWCallbackDequeue @ 0x18011160C (RtlTpETWCallbackDequeue.c)
 */

void __fastcall RtlpTpWorkCallback(_TP_CALLBACK_INSTANCE *Instance, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  _ACTIVATION_CONTEXT *v10; // rsi
  void *v11; // r12
  void *v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 ThreadInformation; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v16[4]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v17; // [rsp+60h] [rbp-78h] BYREF
  int v18; // [rsp+68h] [rbp-70h]
  _BYTE v19[56]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v20; // [rsp+E8h] [rbp+10h]
  void (__fastcall *v21)(__int64); // [rsp+F0h] [rbp+18h]

  v17 = 72LL;
  v18 = 1;
  memset(v19, 0, sizeof(v19));
  v4 = 0LL;
  v7 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    RtlTpETWCallbackDequeue(v8, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_BYTE *)(a2 + 48) & 0x10) != 0 && (*(_BYTE *)(a2 + 48) & 0xC0) == 0 )
  {
    v14 = *(_QWORD *)(a2 + 32);
    if ( !v14 )
    {
      v14 = TpPoolReferenceExistingGlobalPool();
      v4 = v14;
    }
    *((_QWORD *)Instance + 16) = v14;
    TpCallbackMayRunLong(Instance);
  }
  v9 = *(_QWORD *)(a2 + 40);
  if ( v9 )
    RtlpTpImpersonate(v9, v5, v6);
  v21 = *(void (__fastcall **)(__int64))(a2 + 56);
  v20 = *(_QWORD *)(a2 + 64);
  v10 = *(_ACTIVATION_CONTEXT **)(a2 + 72);
  v11 = *(void **)(a2 + 80);
  v16[1] = (__int64)v11;
  v12 = *(void **)(a2 + 96);
  v16[3] = (__int64)v12;
  if ( v12 )
    RtlSetThreadSubProcessTag(v12);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 104);
  if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v11 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    RtlpTpWorkUnposted(a2, *(_QWORD *)(a2 + 32));
  if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlActivateActivationContextUnsafeFast((__int64)&v17, (__int64)v10);
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    RtlpTpETWCallbackStart(0, a2, (_DWORD)v21, v20, (__int64)v12);
  TppStartThreadData(v16, (__int64)v21, v20, (__int64)NtCurrentTeb()->SubProcessTag);
  v21(v20);
  if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast((__int64)&v17);
    RtlReleaseActivationContext(v10);
  }
  if ( v11 )
    LdrUnloadDll(v11);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  if ( v4 )
    TpDereferenceGlobalPool(v4);
  if ( v12 )
    RtlSetThreadSubProcessTag(0LL);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v7 )
    RtlpTpETWCallbackStop(0, a2, (_DWORD)v21, v20, (__int64)v12);
  TppCompleteThreadData(v16[0]);
}

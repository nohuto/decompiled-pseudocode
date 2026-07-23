/*
 * XREFs of sub_18002F4F0 @ 0x18002F4F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_18002F180 @ 0x18002F180 (sub_18002F180.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     sub_180030888 @ 0x180030888 (sub_180030888.c)
 *     sub_180030918 @ 0x180030918 (sub_180030918.c)
 *     RtlSetThreadSubProcessTag @ 0x180035BB0 (RtlSetThreadSubProcessTag.c)
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     TpCallbackMayRunLong @ 0x1800705F0 (TpCallbackMayRunLong.c)
 *     sub_18007E7CC @ 0x18007E7CC (sub_18007E7CC.c)
 *     sub_1800803C4 @ 0x1800803C4 (sub_1800803C4.c)
 *     sub_180084E98 @ 0x180084E98 (sub_180084E98.c)
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_18010F260 @ 0x18010F260 (sub_18010F260.c)
 *     sub_18010F2FC @ 0x18010F2FC (sub_18010F2FC.c)
 *     sub_18010FD3C @ 0x18010FD3C (sub_18010FD3C.c)
 */

__int64 __fastcall sub_18002F4F0(_TP_CALLBACK_INSTANCE *Instance, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  _ACTIVATION_CONTEXT *v10; // rdi
  void *v11; // r12
  void *v12; // r15
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 ThreadInformation; // [rsp+38h] [rbp-A0h] BYREF
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
  v7 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    sub_18010FD3C(v8, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_BYTE *)(a2 + 48) & 0x10) != 0 && (*(_BYTE *)(a2 + 48) & 0xC0) == 0 )
  {
    v15 = *(_QWORD *)(a2 + 32);
    if ( !v15 )
    {
      v15 = sub_18007E7CC();
      v4 = v15;
    }
    *((_QWORD *)Instance + 16) = v15;
    TpCallbackMayRunLong(Instance);
  }
  v9 = *(_QWORD *)(a2 + 40);
  if ( v9 )
    sub_180084E98(v9, v5, v6);
  v22 = *(void (__fastcall **)(__int64))(a2 + 56);
  v21 = *(_QWORD *)(a2 + 64);
  v10 = *(_ACTIVATION_CONTEXT **)(a2 + 72);
  v11 = *(void **)(a2 + 80);
  v17[1] = v11;
  v12 = *(void **)(a2 + 96);
  v17[3] = v12;
  if ( v12 )
    RtlSetThreadSubProcessTag(v12);
  NtCurrentTeb()->ActivityId = *(GUID *)(a2 + 104);
  if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v11 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    sub_18002F180(a2, *(_QWORD *)(a2 + 32));
  if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlActivateActivationContextUnsafeFast((__int64)&v18, (__int64)v10);
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    sub_18010F260(0, a2, (_DWORD)v22, v21, (__int64)v12);
  sub_180030888(v17, v22, v21, NtCurrentTeb()->SubProcessTag);
  v22(v21);
  if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast((__int64)&v18);
    RtlReleaseActivationContext(v10);
  }
  if ( v11 )
    LdrUnloadDll(v11);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  if ( v4 )
    sub_1800803C4(v4);
  if ( v12 )
    RtlSetThreadSubProcessTag(0LL);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  if ( *(_BYTE *)v7 )
    sub_18010F2FC(0, a2, (_DWORD)v22, v21, (__int64)v12);
  return sub_180030918(v17[0]);
}

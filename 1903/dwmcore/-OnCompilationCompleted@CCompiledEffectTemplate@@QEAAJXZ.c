/*
 * XREFs of ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x1800CB710
 * Callers:
 *     ?HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ @ 0x1800CB614 (-HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18007DF14 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x1800CB7E0 (-SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x1800CB81C (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompiledEffectTemplate::OnCompilationCompleted(CCompiledEffectTemplate *this)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  CNotificationResource *v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // r10d
  signed int v7; // eax
  __int64 v8; // rcx
  CNotificationResource *v10; // rcx
  __int64 ChannelCallbackId; // rcx
  __int64 v12; // rax
  unsigned int v13; // r10d
  __int64 v14; // r8
  int v15; // r9d
  signed int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-38h]
  int v19; // [rsp+30h] [rbp-28h]
  __int64 v20; // [rsp+38h] [rbp-20h]
  __int64 v21; // [rsp+40h] [rbp-18h] BYREF
  __int64 v22; // [rsp+48h] [rbp-10h]

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1224LL) + 48LL);
  CCompiledEffectTemplate::SignalCompileCompletedEvent(this);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 64LL) == 2 )
  {
    if ( CNotificationResource::ShouldNotify(this) )
    {
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId(v10);
      v12 = *((unsigned int *)this + 14);
      v21 = ChannelCallbackId;
      v22 = v12;
      LOWORD(v18) = 1;
      v16 = CoreUICallSend(v3, &v21, v13, 5LL, v18, &unk_1802B2E3D, v15, v14);
      v2 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x8Eu, 0LL);
    }
  }
  else if ( *(_DWORD *)(*((_QWORD *)this + 9) + 64LL) == 3 )
  {
    if ( CNotificationResource::ShouldNotify(this)
      && (v5 = CNotificationResource::GetChannelCallbackId(v4),
          v22 = *((unsigned int *)this + 14),
          v21 = v5,
          LOWORD(v18) = 0,
          v7 = CoreUICallSend(v3, &v21, v6, 5LL, v18, &unk_1802B2E2E, v19, v20),
          v2 = v7,
          v7 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x80u, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(CCompiledEffectTemplate *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
    }
  }
  return v2;
}

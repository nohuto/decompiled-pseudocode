/*
 * XREFs of ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x180054C28
 * Callers:
 *     ?HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ @ 0x180054DDC (-HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800518CC (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x180054DA0 (-SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ.c)
 *     ?LogShaderStats@CComposition@@QEAAXPEAVCChannelContext@@IIIMMM@Z @ 0x180055028 (-LogShaderStats@CComposition@@QEAAXPEAVCChannelContext@@IIIMMM@Z.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180055090 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompiledEffectTemplate::OnCompilationCompleted(CCompiledEffectTemplate *this)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  CNotificationResource *v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // r10d
  int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // rsi
  struct _TP_WORK *v10; // rcx
  __int64 v11; // rax
  struct CChannelContext *v12; // rdx
  CComposition *v13; // rcx
  __m128 v14; // xmm2
  CNotificationResource *v16; // rcx
  __int64 ChannelCallbackId; // rcx
  __int64 v18; // rax
  unsigned int v19; // r10d
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // [rsp+40h] [rbp-28h] BYREF
  __int64 v23; // [rsp+48h] [rbp-20h]
  float v24[4]; // [rsp+50h] [rbp-18h]

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1208LL) + 56LL);
  CCompiledEffectTemplate::SignalCompileCompletedEvent(this);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 64LL) == 2 )
  {
    if ( CNotificationResource::ShouldNotify(this) )
    {
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId(v16);
      v18 = *((unsigned int *)this + 14);
      v22 = ChannelCallbackId;
      v23 = v18;
      v20 = CoreUICallSend(v3, &v22, v19, 5LL, 1, &unk_1802763DD);
      v2 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x9Fu);
    }
  }
  else if ( *(_DWORD *)(*((_QWORD *)this + 9) + 64LL) == 3 )
  {
    if ( CNotificationResource::ShouldNotify(this) )
    {
      v5 = CNotificationResource::GetChannelCallbackId(v4);
      v23 = *((unsigned int *)this + 14);
      v22 = v5;
      v7 = CoreUICallSend(v3, &v22, v6, 5LL, 0, &unk_1802763CE);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x82u);
        return v2;
      }
      v9 = *((_QWORD *)this + 9);
      v10 = *(struct _TP_WORK **)(v9 + 56);
      if ( v10 )
      {
        WaitForThreadpoolWorkCallbacks(v10, 0);
        CloseThreadpoolWork(*(PTP_WORK *)(v9 + 56));
        *(_QWORD *)(v9 + 56) = 0LL;
      }
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v9 + 72) + 24LL) + 88LL))(*(_QWORD *)(*(_QWORD *)(v9 + 72) + 24LL));
      v12 = (struct CChannelContext *)*((_QWORD *)this + 6);
      v13 = (CComposition *)*((_QWORD *)this + 2);
      v14 = *(__m128 *)v11;
      *(_QWORD *)v24 = *(_QWORD *)(v11 + 16);
      CComposition::LogShaderStats(
        v13,
        v12,
        _mm_cvtsi128_si32((__m128i)v14),
        v14.m128_u32[1],
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v14, 8)),
        _mm_shuffle_ps(v14, v14, 255).m128_f32[0],
        v24[0],
        v24[1]);
    }
    (*(void (__fastcall **)(CCompiledEffectTemplate *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
  return v2;
}

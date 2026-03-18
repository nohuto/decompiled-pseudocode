/*
 * XREFs of ?UpdateEdgyInput@CGlobalInputManager@@UEAAJAEBUEdgyCompositionConfigurationUpdate@@@Z @ 0x1802375A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRenderThreadCanSendInputThreadMessages@CGlobalInputManager@@AEAAJXZ @ 0x1802374F4 (-EnsureRenderThreadCanSendInputThreadMessages@CGlobalInputManager@@AEAAJXZ.c)
 */

__int64 __fastcall CGlobalInputManager::UpdateEdgyInput(
        CGlobalInputManager *this,
        const struct EdgyCompositionConfigurationUpdate *a2)
{
  signed int CanSendInputThreadMessages; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx

  CanSendInputThreadMessages = CGlobalInputManager::EnsureRenderThreadCanSendInputThreadMessages(this);
  v6 = CanSendInputThreadMessages;
  if ( CanSendInputThreadMessages < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, CanSendInputThreadMessages, 0x1DFu, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct EdgyCompositionConfigurationUpdate *, int))(**((_QWORD **)this + 33) + 160LL))(
           *((_QWORD *)this + 33),
           *((_QWORD *)this + 36),
           4LL,
           a2,
           56);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1E5u, 0LL);
  }
  return v6;
}

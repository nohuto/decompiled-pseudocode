/*
 * XREFs of ?UpdateEdgyInput@CGlobalInputManager@@UEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180235F30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRenderThreadCanSendInputThreadMessages@CGlobalInputManager@@AEAAJXZ @ 0x180235DE4 (-EnsureRenderThreadCanSendInputThreadMessages@CGlobalInputManager@@AEAAJXZ.c)
 */

__int64 __fastcall CGlobalInputManager::UpdateEdgyInput(
        CGlobalInputManager *this,
        const struct EdgyCompositionConfigurationUpdateEx *a2)
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
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, CanSendInputThreadMessages, 0x1F6u, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct EdgyCompositionConfigurationUpdateEx *, int))(**((_QWORD **)this + 33) + 160LL))(
           *((_QWORD *)this + 33),
           *((_QWORD *)this + 36),
           4LL,
           a2,
           152);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1FCu, 0LL);
  }
  return v6;
}

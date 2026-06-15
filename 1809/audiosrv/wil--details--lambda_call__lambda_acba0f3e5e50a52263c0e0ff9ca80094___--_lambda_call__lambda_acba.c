/*
 * XREFs of wil::details::lambda_call__lambda_acba0f3e5e50a52263c0e0ff9ca80094___::_lambda_call__lambda_acba0f3e5e50a52263c0e0ff9ca80094___ @ 0x18011D4BC
 * Callers:
 *     _DynamicAudioEndpointManager::AddRule_::_1_::dtor$5 @ 0x18011DD17 (_DynamicAudioEndpointManager--AddRule_--_1_--dtor$5.c)
 * Callees:
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_N@Z @ 0x18011EF1C (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_N@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_acba0f3e5e50a52263c0e0ff9ca80094___::_lambda_call__lambda_acba0f3e5e50a52263c0e0ff9ca80094___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return DynamicAudioEndpointManager::RemoveRule(
             *(DynamicAudioEndpointManager **)a1,
             **(struct IAudioProcess ***)(a1 + 8),
             **(struct IUnknown ***)(a1 + 16),
             1);
  }
  return result;
}

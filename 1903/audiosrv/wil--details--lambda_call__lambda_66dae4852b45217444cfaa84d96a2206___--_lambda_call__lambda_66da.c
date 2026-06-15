/*
 * XREFs of wil::details::lambda_call__lambda_66dae4852b45217444cfaa84d96a2206___::_lambda_call__lambda_66dae4852b45217444cfaa84d96a2206___ @ 0x180129ECC
 * Callers:
 *     _DynamicAudioEndpointManager::AddRule_::_1_::dtor$5 @ 0x18012A799 (_DynamicAudioEndpointManager--AddRule_--_1_--dtor$5.c)
 * Callees:
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x18012BAEC (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_66dae4852b45217444cfaa84d96a2206___::_lambda_call__lambda_66dae4852b45217444cfaa84d96a2206___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return DynamicAudioEndpointManager::RemoveRule(
             *(DynamicAudioEndpointManager **)a1,
             **(struct IAudioProcess ***)(a1 + 8),
             **(struct IUnknown ***)(a1 + 16),
             1,
             *(bool (*const *)[9])(a1 + 24));
  }
  return result;
}

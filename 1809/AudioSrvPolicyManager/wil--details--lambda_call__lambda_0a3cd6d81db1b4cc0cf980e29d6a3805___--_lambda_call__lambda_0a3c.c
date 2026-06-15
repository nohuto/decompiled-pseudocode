/*
 * XREFs of wil::details::lambda_call__lambda_0a3cd6d81db1b4cc0cf980e29d6a3805___::_lambda_call__lambda_0a3cd6d81db1b4cc0cf980e29d6a3805___ @ 0x180021834
 * Callers:
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$11 @ 0x18003945A (_CApplicationManager--RpcGetProcess_--_1_--dtor$11.c)
 * Callees:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001C494 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_0a3cd6d81db1b4cc0cf980e29d6a3805___::_lambda_call__lambda_0a3cd6d81db1b4cc0cf980e29d6a3805___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return CApplicationManager::Unregister(*(CApplicationManager **)a1, **(struct CProcess ***)(a1 + 8));
  }
  return result;
}

/*
 * XREFs of wil::details::lambda_call__lambda_3752109e28d6ea02fd1f915d996064c2___::_lambda_call__lambda_3752109e28d6ea02fd1f915d996064c2___ @ 0x180154BBC
 * Callers:
 *     _CApplicationViewManager::RemoveApplicationView_::_1_::dtor$0 @ 0x180156C12 (_CApplicationViewManager--RemoveApplicationView_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x180155340 (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_3752109e28d6ea02fd1f915d996064c2___::_lambda_call__lambda_3752109e28d6ea02fd1f915d996064c2___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_3752109e28d6ea02fd1f915d996064c2_::operator()();
  }
  return result;
}

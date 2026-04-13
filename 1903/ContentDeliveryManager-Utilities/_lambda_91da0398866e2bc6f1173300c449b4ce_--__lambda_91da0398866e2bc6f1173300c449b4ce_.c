/*
 * XREFs of _lambda_91da0398866e2bc6f1173300c449b4ce_::__lambda_91da0398866e2bc6f1173300c449b4ce_ @ 0x18000EF18
 * Callers:
 *     _ContentManagement::IdentityManager::TryGetSecondaryMSATicketAsync_::_1_::dtor$1 @ 0x1800CC501 (_ContentManagement--IdentityManager--TryGetSecondaryMSATicketAsync_--_1_--dtor$1.c)
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CHSTRINGResult_HSTRING_____Windows::Internal::ComTaskPoolHandler__lambda_91da0398866e2bc6f1173300c449b4ce____::_1_::dtor$2 @ 0x1800CC9CE (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CHSTRINGResult_HSTRING____ea_1800CC9CE.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall lambda_91da0398866e2bc6f1173300c449b4ce_::__lambda_91da0398866e2bc6f1173300c449b4ce_(__int64 a1)
{
  HRESULT result; // eax

  result = WindowsDeleteString(*(HSTRING *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}

/*
 * XREFs of wil::details::lambda_call__lambda_1a19eda420d26f754031790a40bd90be___::_lambda_call__lambda_1a19eda420d26f754031790a40bd90be___ @ 0x1800F5188
 * Callers:
 *     _CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup_::_1_::dtor$3 @ 0x1800F5EE2 (_CAudioResourceManager--ConfigureAuxiliaryInputStreamForStreamGroup_--_1_--dtor$3.c)
 * Callees:
 *     _lambda_1a19eda420d26f754031790a40bd90be_::operator() @ 0x1800F52E4 (_lambda_1a19eda420d26f754031790a40bd90be_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_1a19eda420d26f754031790a40bd90be___::_lambda_call__lambda_1a19eda420d26f754031790a40bd90be___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_1a19eda420d26f754031790a40bd90be_::operator()();
  }
  return result;
}

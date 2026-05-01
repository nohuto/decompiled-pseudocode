/*
 * XREFs of wil::details::lambda_call__lambda_3dd83140c10da3261b5d5d26950d48f2___::_lambda_call__lambda_3dd83140c10da3261b5d5d26950d48f2___ @ 0x1801C60C8
 * Callers:
 *     __lambda_4003b582d2de643f8f6d5cb83a00bbb0_::operator()_::_1_::dtor$1 @ 0x1801C6525 (__lambda_4003b582d2de643f8f6d5cb83a00bbb0_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_3dd83140c10da3261b5d5d26950d48f2___::_lambda_call__lambda_3dd83140c10da3261b5d5d26950d48f2___(
        __int64 *a1)
{
  __int64 v1; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 16) = 0;
    *(_BYTE *)(v1 + 784) = 0;
  }
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 1);
}

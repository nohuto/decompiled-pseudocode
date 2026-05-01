/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_53b5c290c68dcef29a9df5086c06bf0e___::Run @ 0x180250B70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_53b5c290c68dcef29a9df5086c06bf0e_::operator() @ 0x18024F498 (_lambda_53b5c290c68dcef29a9df5086c06bf0e_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_53b5c290c68dcef29a9df5086c06bf0e___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_53b5c290c68dcef29a9df5086c06bf0e_::operator()((HSTRING **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}

/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_83f724922fe841c2aa34b3f6c33178ad___::Run @ 0x1802AF4E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_83f724922fe841c2aa34b3f6c33178ad_::operator() @ 0x1802AE0D8 (_lambda_83f724922fe841c2aa34b3f6c33178ad_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_83f724922fe841c2aa34b3f6c33178ad___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_83f724922fe841c2aa34b3f6c33178ad_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 48) = result;
  return result;
}

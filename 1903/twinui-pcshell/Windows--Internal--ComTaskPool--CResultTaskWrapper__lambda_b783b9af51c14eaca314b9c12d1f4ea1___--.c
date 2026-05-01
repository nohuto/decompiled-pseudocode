/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b783b9af51c14eaca314b9c12d1f4ea1___::Run @ 0x1802A7900
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b783b9af51c14eaca314b9c12d1f4ea1_::operator() @ 0x1802A624C (_lambda_b783b9af51c14eaca314b9c12d1f4ea1_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b783b9af51c14eaca314b9c12d1f4ea1___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_b783b9af51c14eaca314b9c12d1f4ea1_::operator()((HSTRING **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}

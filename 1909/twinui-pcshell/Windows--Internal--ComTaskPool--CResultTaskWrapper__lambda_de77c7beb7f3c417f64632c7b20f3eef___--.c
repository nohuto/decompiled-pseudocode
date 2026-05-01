/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_de77c7beb7f3c417f64632c7b20f3eef___::Run @ 0x18001B210
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_de77c7beb7f3c417f64632c7b20f3eef_::operator() @ 0x18001B234 (_lambda_de77c7beb7f3c417f64632c7b20f3eef_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_de77c7beb7f3c417f64632c7b20f3eef___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_de77c7beb7f3c417f64632c7b20f3eef_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}

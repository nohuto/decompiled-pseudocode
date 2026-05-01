/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_68891fd7acf34f77316d42659bd39f51___::Run @ 0x1800625B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_68891fd7acf34f77316d42659bd39f51_::operator() @ 0x1800625D4 (_lambda_68891fd7acf34f77316d42659bd39f51_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_68891fd7acf34f77316d42659bd39f51___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_68891fd7acf34f77316d42659bd39f51_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}

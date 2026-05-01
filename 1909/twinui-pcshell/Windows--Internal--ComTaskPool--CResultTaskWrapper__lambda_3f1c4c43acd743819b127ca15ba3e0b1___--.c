/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3f1c4c43acd743819b127ca15ba3e0b1___::Run @ 0x1802C05C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3f1c4c43acd743819b127ca15ba3e0b1_::operator() @ 0x1802BE610 (_lambda_3f1c4c43acd743819b127ca15ba3e0b1_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3f1c4c43acd743819b127ca15ba3e0b1___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_3f1c4c43acd743819b127ca15ba3e0b1_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}

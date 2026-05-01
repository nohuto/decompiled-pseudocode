/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_88a6f648851480fde846e948b133eaba___::Run @ 0x18003D800
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_88a6f648851480fde846e948b133eaba_::operator() @ 0x18003D604 (_lambda_88a6f648851480fde846e948b133eaba_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_88a6f648851480fde846e948b133eaba___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_88a6f648851480fde846e948b133eaba_::operator()((_QWORD *)(a1 + 16));
  **(_DWORD **)(a1 + 48) = result;
  return result;
}

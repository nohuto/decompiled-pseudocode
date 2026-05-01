/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_4bbaa23fff4f7893ed40dfc26589fcad___::Run @ 0x18001E9F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4bbaa23fff4f7893ed40dfc26589fcad_::operator() @ 0x18001EA14 (_lambda_4bbaa23fff4f7893ed40dfc26589fcad_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_4bbaa23fff4f7893ed40dfc26589fcad___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_4bbaa23fff4f7893ed40dfc26589fcad_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}

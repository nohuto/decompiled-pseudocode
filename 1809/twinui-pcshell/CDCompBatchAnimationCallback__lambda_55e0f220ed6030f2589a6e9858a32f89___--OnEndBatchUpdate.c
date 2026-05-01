/*
 * XREFs of CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::OnEndBatchUpdate @ 0x180312AF0
 * Callers:
 *     <none>
 * Callees:
 *     CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_InvokeCallback @ 0x180313224 (CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___--_InvokeCallback.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::OnEndBatchUpdate(
        __int64 a1)
{
  bool v1; // zf
  __int64 result; // rax

  v1 = (*(_DWORD *)(a1 + 48))-- == 1;
  if ( v1 )
  {
    v1 = *(_DWORD *)(a1 + 32) == 0;
    *(_DWORD *)(a1 + 36) = 2;
    if ( v1 || !*(_QWORD *)(a1 + 40) )
      return CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_InvokeCallback();
  }
  return result;
}

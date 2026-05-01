/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::Run @ 0x18004FE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::Run(
        __int64 a1)
{
  char result; // al

  result = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 40LL);
  if ( result )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 24LL) + 56LL))(
             *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL),
             *(_QWORD *)(a1 + 40),
             2LL);
  return result;
}

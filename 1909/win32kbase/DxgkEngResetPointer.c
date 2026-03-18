/*
 * XREFs of DxgkEngResetPointer @ 0x1C012DDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DxgkEngResetPointer()
{
  __int64 result; // rax

  result = IsUserResetPointerSupported();
  if ( (int)result >= 0 )
    return UserResetPointer();
  return result;
}

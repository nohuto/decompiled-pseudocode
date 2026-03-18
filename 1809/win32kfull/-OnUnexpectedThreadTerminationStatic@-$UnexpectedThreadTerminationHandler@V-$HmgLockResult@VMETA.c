/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgLockResult@VMETA@@@@@@SAXPEAX@Z @ 0x1C0162390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(result + 12));
    *a1 = 0LL;
  }
  return result;
}

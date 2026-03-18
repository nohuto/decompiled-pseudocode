/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@SAXPEAX@Z @ 0x1C015F0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 32);
  if ( result )
    _InterlockedDecrement((volatile signed __int32 *)(result + 12));
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}

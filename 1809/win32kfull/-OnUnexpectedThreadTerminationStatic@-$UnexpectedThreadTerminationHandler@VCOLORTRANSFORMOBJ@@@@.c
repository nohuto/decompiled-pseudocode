/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VCOLORTRANSFORMOBJ@@@@SAXPEAX@Z @ 0x1C015EB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    result = DEC_SHARE_REF_CNT(v2);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return result;
}

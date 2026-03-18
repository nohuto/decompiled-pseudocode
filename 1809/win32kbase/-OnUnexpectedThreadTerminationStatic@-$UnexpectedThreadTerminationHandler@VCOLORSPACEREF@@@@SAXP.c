/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@SAXPEAX@Z @ 0x1C00A9940
 * Callers:
 *     <none>
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic(__int64 a1)
{
  struct OBJECT *v2; // rcx
  __int64 result; // rax

  v2 = *(struct OBJECT **)(a1 + 32);
  if ( v2 )
  {
    result = DEC_SHARE_REF_CNT(v2);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return result;
}

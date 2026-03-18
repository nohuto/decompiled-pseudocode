/*
 * XREFs of CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback @ 0x140832CE0
 * Callers:
 *     <none>
 * Callees:
 *     CmpPrepareForSubtreeInvalidation @ 0x14074969C (CmpPrepareForSubtreeInvalidation.c)
 */

__int64 __fastcall CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax

  v4 = CmpPrepareForSubtreeInvalidation(a1, *(_QWORD *)(a3 + 8));
  if ( v4 == -1073741267 )
  {
    *(_DWORD *)(a3 + 4) = -1073741267;
    return 0LL;
  }
  if ( v4 >= 0 )
    return 0LL;
  *(_DWORD *)(a3 + 4) = v4;
  return 1LL;
}

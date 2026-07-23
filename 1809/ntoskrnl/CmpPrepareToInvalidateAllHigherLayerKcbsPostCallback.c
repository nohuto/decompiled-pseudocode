/*
 * XREFs of CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback @ 0x1407FB500
 * Callers:
 *     <none>
 * Callees:
 *     CmpPrepareForSubtreeInvalidation @ 0x14071FC9C (CmpPrepareForSubtreeInvalidation.c)
 */

__int64 __fastcall CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = CmpPrepareForSubtreeInvalidation(a1, *(_DWORD *)(a2 + 16), *(_QWORD *)(a2 + 8));
  if ( v3 == -1073741267 )
  {
    *(_DWORD *)a2 = -1073741267;
    return 0LL;
  }
  if ( v3 >= 0 )
    return 0LL;
  *(_DWORD *)a2 = v3;
  return 1LL;
}

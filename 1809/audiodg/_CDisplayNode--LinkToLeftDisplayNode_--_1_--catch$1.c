/*
 * XREFs of _CDisplayNode::LinkToLeftDisplayNode_::_1_::catch$1 @ 0x14003F608
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CDisplayNode::LinkToLeftDisplayNode_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 112) = *v3;
  return &loc_14003F5C6;
}

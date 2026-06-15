/*
 * XREFs of _CVpoContext::Initialize_::_1_::catch$1 @ 0x140040DD4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CVpoContext::Initialize_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 120) = *v3;
  return &loc_140040D30;
}

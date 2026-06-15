/*
 * XREFs of _CSubmixImpl::OnLeftSubmixConnected_::_1_::catch$9 @ 0x14001AF4F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CSubmixImpl::OnLeftSubmixConnected_::_1_::catch_9(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 88);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 160) = *v3;
  return &loc_140023609;
}

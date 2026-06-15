/*
 * XREFs of _CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::AddInterface_::_1_::catch$3 @ 0x1800BAC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::AddInterface_::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 56);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 160) = *v3;
  return &loc_1800BAB45;
}

/*
 * XREFs of _util::InterfaceMap_IAudioStreamInfo_Sarm::CStreamResource_::Add_::_1_::catch$4 @ 0x18011F3E2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall util::InterfaceMap_IAudioStreamInfo_Sarm::CStreamResource_::Add_::_1_::catch_4(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 192);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 264) = *v3;
  return &loc_18011F349;
}

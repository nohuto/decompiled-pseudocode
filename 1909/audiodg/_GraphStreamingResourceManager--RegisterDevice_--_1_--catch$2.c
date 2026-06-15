/*
 * XREFs of _GraphStreamingResourceManager::RegisterDevice_::_1_::catch$2 @ 0x14001B093
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall GraphStreamingResourceManager::RegisterDevice_::_1_::catch_2(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 152);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 248) = *v3;
  return &loc_140023AC4;
}

/*
 * XREFs of _InputSiteManager::GetInputSiteFromInputSinkHandle_::_1_::dtor$1 @ 0x18002F308
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18002B024 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall InputSiteManager::GetInputSiteFromInputSinkHandle_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 56) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(*(_QWORD **)(a2 + 72));
  }
  return result;
}

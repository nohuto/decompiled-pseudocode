/*
 * XREFs of _MPCInputRouter::UpdateFocusedInputTarget3D_::_1_::dtor$4 @ 0x18012DFCA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180004C90 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall MPCInputRouter::UpdateFocusedInputTarget3D_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 208) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 208) &= ~2u;
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((__int64 *)(a2 + 80));
  }
}

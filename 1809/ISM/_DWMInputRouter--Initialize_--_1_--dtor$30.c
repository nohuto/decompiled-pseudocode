/*
 * XREFs of _DWMInputRouter::Initialize_::_1_::dtor$30 @ 0x180132340
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180004C90 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall DWMInputRouter::Initialize_::_1_::dtor_30(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 568) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 568) &= ~1u;
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((__int64 *)(a2 + 344));
  }
}

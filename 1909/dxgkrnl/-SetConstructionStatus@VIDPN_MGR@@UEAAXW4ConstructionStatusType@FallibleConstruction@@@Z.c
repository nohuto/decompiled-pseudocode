/*
 * XREFs of ?SetConstructionStatus@VIDPN_MGR@@UEAAXW4ConstructionStatusType@FallibleConstruction@@@Z @ 0x1C001BA60
 * Callers:
 *     ?SetConstructionStatus@VIDPN_MGR@@WCA@EAAXW4ConstructionStatusType@FallibleConstruction@@@Z @ 0x1C00256C0 (-SetConstructionStatus@VIDPN_MGR@@WCA@EAAXW4ConstructionStatusType@FallibleConstruction@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDPN_MGR::SetConstructionStatus(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 48) = a2;
}

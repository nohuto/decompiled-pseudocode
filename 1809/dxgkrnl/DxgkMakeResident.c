/*
 * XREFs of DxgkMakeResident @ 0x1C0123580
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C01235A0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 */

__int64 __fastcall DxgkMakeResident(struct D3DDDI_MAKERESIDENT *a1)
{
  return DxgkMakeResidentInternal(a1, 1);
}

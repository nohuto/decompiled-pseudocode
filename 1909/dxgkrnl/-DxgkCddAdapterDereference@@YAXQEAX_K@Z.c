/*
 * XREFs of ?DxgkCddAdapterDereference@@YAXQEAX_K@Z @ 0x1C0150480
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkCddAdapterDereference(DXGADAPTER *a1)
{
  DXGADAPTER::ReleaseReferenceNoTracking(a1);
}

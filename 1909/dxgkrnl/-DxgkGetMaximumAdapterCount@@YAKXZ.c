/*
 * XREFs of ?DxgkGetMaximumAdapterCount@@YAKXZ @ 0x1C01504F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00CF5C0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 */

__int64 __fastcall DxgkGetMaximumAdapterCount(__int64 a1, __int64 a2)
{
  DXGGLOBAL *Global; // rax
  __int64 v3; // rdx

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  return DXGGLOBAL::GetMaximumAdapterCount(Global, v3);
}

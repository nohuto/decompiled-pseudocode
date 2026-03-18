/*
 * XREFs of DpiGetDriverVersion @ 0x1C016BB70
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0168F90 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C016A924 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?_InitColorSpaceTransformCaps@DXGMONITOR@@AEAAJXZ @ 0x1C01788FC (-_InitColorSpaceTransformCaps@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDriverVersion(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL);
}

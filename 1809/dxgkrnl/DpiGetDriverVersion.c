/*
 * XREFs of DpiGetDriverVersion @ 0x1C014EA10
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C014F6C0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDriverVersion(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL);
}

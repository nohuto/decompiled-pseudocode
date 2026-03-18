/*
 * XREFs of DxgkDWCloneCheckTargetID @ 0x1C01467FC
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C0146340 (DpiFdoEnumChildDevices.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

_BOOL8 __fastcall DxgkDWCloneCheckTargetID(__int64 a1)
{
  int v1; // ebx

  v1 = a1;
  DXGGLOBAL::GetGlobal(a1);
  return (v1 & 0xFF000000) == 0;
}

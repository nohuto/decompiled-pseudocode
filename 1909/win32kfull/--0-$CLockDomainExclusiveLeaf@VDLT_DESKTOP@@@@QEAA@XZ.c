/*
 * XREFs of ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C0021E80
 * Callers:
 *     MapDesktop @ 0x1C0021C00 (MapDesktop.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C0021EB8 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C007A04C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CLockDomainExclusiveLeaf<DLT_DESKTOP>::CLockDomainExclusiveLeaf<DLT_DESKTOP>(_QWORD *a1)
{
  unsigned int DLT; // eax

  DLT = DLT_DESKTOP::getDLT();
  *a1 = GetDomainLockRef(DLT);
  return a1;
}

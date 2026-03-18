/*
 * XREFs of ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C001A060
 * Callers:
 *     MapDesktop @ 0x1C0019DE0 (MapDesktop.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C001A098 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00DA35C (-InitiateWin32kCleanup@@YAHXZ.c)
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

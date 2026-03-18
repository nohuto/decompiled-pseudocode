/*
 * XREFs of GetDesktopView @ 0x1C0021DE0
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C000E4C0 (NtUserPostThreadMessage.c)
 *     NtUserDwmValidateWindow @ 0x1C0021240 (NtUserDwmValidateWindow.c)
 *     MapDesktop @ 0x1C0021C00 (MapDesktop.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C0021EB8 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     _MapDesktopObject @ 0x1C0021FD0 (_MapDesktopObject.c)
 *     zzzSetDesktop @ 0x1C0029750 (zzzSetDesktop.c)
 *     IsHotKey @ 0x1C00E88C8 (IsHotKey.c)
 *     UserCommitDesktopMemory @ 0x1C0104300 (UserCommitDesktopMemory.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetDesktopView(__int64 a1, __int64 a2)
{
  unsigned int DLT; // eax
  _QWORD *result; // rax

  DLT = DLT_DESKTOP::getDLT();
  GetDomainLockRef(DLT);
  for ( result = *(_QWORD **)(a1 + 696); result && result[1] != a2; result = (_QWORD *)*result )
    ;
  return result;
}

/*
 * XREFs of GetDesktopView @ 0x1C0019FC0
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C000F5C0 (NtUserPostThreadMessage.c)
 *     NtUserDwmValidateWindow @ 0x1C0019590 (NtUserDwmValidateWindow.c)
 *     _MapDesktopObject @ 0x1C0019980 (_MapDesktopObject.c)
 *     MapDesktop @ 0x1C0019DE0 (MapDesktop.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C001A098 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     zzzSetDesktop @ 0x1C00232E0 (zzzSetDesktop.c)
 *     IsHotKey @ 0x1C010E548 (IsHotKey.c)
 *     UserCommitDesktopMemory @ 0x1C0129310 (UserCommitDesktopMemory.c)
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

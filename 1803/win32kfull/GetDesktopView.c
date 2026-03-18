/*
 * XREFs of GetDesktopView @ 0x1C0011D20
 * Callers:
 *     NtUserDwmValidateWindow @ 0x1C0011820 (NtUserDwmValidateWindow.c)
 *     MapDesktop @ 0x1C0011B90 (MapDesktop.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C0011D80 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     _MapDesktopObject @ 0x1C0012750 (_MapDesktopObject.c)
 *     NtUserPostThreadMessage @ 0x1C001B330 (NtUserPostThreadMessage.c)
 *     IsHotKey @ 0x1C00EA190 (IsHotKey.c)
 *     UserCommitDesktopMemory @ 0x1C0100F90 (UserCommitDesktopMemory.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetDesktopView(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(a1 + 696); result && result[1] != a2; result = (_QWORD *)*result )
    ;
  return result;
}

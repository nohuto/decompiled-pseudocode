/*
 * XREFs of GetDesktopView @ 0x1C00B2670
 * Callers:
 *     _MapDesktopObject @ 0x1C00B1DC0 (_MapDesktopObject.c)
 *     NtUserDwmValidateWindow @ 0x1C00B1E40 (NtUserDwmValidateWindow.c)
 *     MapDesktop @ 0x1C00B24C0 (MapDesktop.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C00B26DC (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     NtUserPostThreadMessage @ 0x1C00D48B0 (NtUserPostThreadMessage.c)
 *     IsHotKey @ 0x1C00E0094 (IsHotKey.c)
 *     UserCommitDesktopMemory @ 0x1C0121370 (UserCommitDesktopMemory.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetDesktopView(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(a1 + 704); result && result[1] != a2; result = (_QWORD *)*result )
    ;
  return result;
}

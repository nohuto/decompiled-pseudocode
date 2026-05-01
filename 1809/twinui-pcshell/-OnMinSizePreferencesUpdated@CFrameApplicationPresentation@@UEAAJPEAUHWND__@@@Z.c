/*
 * XREFs of ?OnMinSizePreferencesUpdated@CFrameApplicationPresentation@@UEAAJPEAUHWND__@@@Z @ 0x180068020
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_01e80890f4c1ff00bc9de130578f9558___ @ 0x18006804C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_01e80890f4c1ff00bc9de130578f9558___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::OnMinSizePreferencesUpdated(
        CFrameApplicationPresentation *this,
        HWND a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = this;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_01e80890f4c1ff00bc9de130578f9558___(this, v3);
}

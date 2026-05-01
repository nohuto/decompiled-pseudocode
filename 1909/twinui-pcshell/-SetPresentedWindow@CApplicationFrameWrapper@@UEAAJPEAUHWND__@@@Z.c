/*
 * XREFs of ?SetPresentedWindow@CApplicationFrameWrapper@@UEAAJPEAUHWND__@@@Z @ 0x180081960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetPresentedWindow(CApplicationFrameWrapper *this, HWND a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 14) + 48LL))(*((_QWORD *)this + 14), a2);
}

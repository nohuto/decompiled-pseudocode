/*
 * XREFs of ?IsEqualByWindow@CApplicationFrameWrapper@@UEAA_NPEAUHWND__@@@Z @ 0x180115320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CApplicationFrameWrapper::IsEqualByWindow(CApplicationFrameWrapper *this, HWND a2)
{
  return *((_QWORD *)this + 10) == (_QWORD)a2;
}

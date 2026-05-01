/*
 * XREFs of ?GetSystemVisualFadeTime@CApplicationFrameWrapper@@UEAAJPEAK@Z @ 0x18007ED50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::GetSystemVisualFadeTime(CApplicationFrameWrapper *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 14) + 168LL))(
           *((_QWORD *)this + 14),
           a2);
}

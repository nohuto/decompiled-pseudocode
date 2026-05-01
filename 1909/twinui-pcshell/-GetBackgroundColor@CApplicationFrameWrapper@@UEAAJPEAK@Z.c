/*
 * XREFs of ?GetBackgroundColor@CApplicationFrameWrapper@@UEAAJPEAK@Z @ 0x18015BD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::GetBackgroundColor(CApplicationFrameWrapper *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 14) + 152LL))(
           *((_QWORD *)this + 14),
           a2);
}

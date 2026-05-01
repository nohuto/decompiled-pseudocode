/*
 * XREFs of ?SetApplicationId@CApplicationFrameWrapper@@UEAAJPEBGH@Z @ 0x1800820C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::SetApplicationId(
        CApplicationFrameWrapper *this,
        const unsigned __int16 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *))(**((_QWORD **)this + 14) + 72LL))(
           *((_QWORD *)this + 14),
           a2);
}

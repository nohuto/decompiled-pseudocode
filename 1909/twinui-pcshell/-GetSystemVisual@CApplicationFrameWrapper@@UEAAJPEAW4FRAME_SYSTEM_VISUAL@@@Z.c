/*
 * XREFs of ?GetSystemVisual@CApplicationFrameWrapper@@UEAAJPEAW4FRAME_SYSTEM_VISUAL@@@Z @ 0x18015BDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameWrapper::GetSystemVisual(
        CApplicationFrameWrapper *this,
        enum FRAME_SYSTEM_VISUAL *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, enum FRAME_SYSTEM_VISUAL *))(**((_QWORD **)this + 14) + 64LL))(
           *((_QWORD *)this + 14),
           a2);
}

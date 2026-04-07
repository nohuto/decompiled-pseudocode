/*
 * XREFs of ?AddRef@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAKXZ @ 0x18003C310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::AddRef(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this)
{
  __int64 result; // rax

  result = (unsigned int)(*((_DWORD *)this + 2) + 1);
  *((_DWORD *)this + 2) = result;
  return result;
}

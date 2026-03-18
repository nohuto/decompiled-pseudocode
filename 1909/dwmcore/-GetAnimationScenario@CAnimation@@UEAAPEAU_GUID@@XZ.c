/*
 * XREFs of ?GetAnimationScenario@CAnimation@@UEAAPEAU_GUID@@XZ @ 0x1800DB6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CAnimation::GetAnimationScenario(CAnimation *this)
{
  return (struct _GUID *)*((_QWORD *)this + 9);
}

/*
 * XREFs of ?Release@CJumpViewExperienceEventArgs@@UEAAKXZ @ 0x18007FCA0
 * Callers:
 *     ?Release@?$EventInvocationContext@$00@details@wil@@W7EAAKXZ @ 0x18009F020 (-Release@-$EventInvocationContext@$00@details@wil@@W7EAAKXZ.c)
 *     ?Release@CJumpViewExperienceEventArgs@@WBA@EAAKXZ @ 0x18009F030 (-Release@CJumpViewExperienceEventArgs@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CJumpViewExperienceEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(this);
}

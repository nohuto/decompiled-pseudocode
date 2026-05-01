/*
 * XREFs of ??1?$com_ptr@Uimmersive_shell_component@winrt@@@winrt@@QEAA@XZ @ 0x1800C06BC
 * Callers:
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$0 @ 0x1800C183C (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Uimmersive_shell_component@winrt@@@winrt@@AEAAXXZ @ 0x1800C515C (-unconditional_release_ref@-$com_ptr@Uimmersive_shell_component@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::immersive_shell_component>::~com_ptr<winrt::immersive_shell_component>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::immersive_shell_component>::unconditional_release_ref();
  return result;
}

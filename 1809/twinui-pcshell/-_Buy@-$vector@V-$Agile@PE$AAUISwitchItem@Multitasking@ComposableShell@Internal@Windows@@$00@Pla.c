/*
 * XREFs of ?_Buy@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@AEAA_N_K@Z @ 0x180277058
 * Callers:
 *     ??$_Assign_range@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEAAXPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@0Uforward_iterator_tag@1@@Z @ 0x180267444 (--$_Assign_range@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Wi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

char __fastcall std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>::_Buy(
        _QWORD *a1,
        unsigned __int64 a2)
{
  char result; // al
  __int64 v4; // rdi
  _QWORD *v5; // rax

  result = 0;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v4 = 32 * a2;
    v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(32 * a2);
    *a1 = v5;
    a1[1] = v5;
    result = 1;
    a1[2] = v4 + *a1;
  }
  return result;
}

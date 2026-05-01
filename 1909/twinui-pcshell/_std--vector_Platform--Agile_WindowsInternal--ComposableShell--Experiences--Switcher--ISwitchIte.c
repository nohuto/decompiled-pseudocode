/*
 * XREFs of _std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1_____::_Emplace_reallocate_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___&__::_1_::catch$25 @ 0x1802DFD4D
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@AEAAXPEAV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@0@Z @ 0x1802F0324 (-_Destroy@-$vector@V-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00.c)
 */

void __fastcall __noreturn std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1_____::_Emplace_reallocate_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata______::_1_::catch_25(
        __int64 a1,
        __int64 a2)
{
  std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>::_Destroy(
    a1,
    *(_QWORD *)(a2 + 128),
    *(_QWORD *)(a2 + 152));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(32LL * *(_QWORD *)(a2 + 32)));
  throw;
}

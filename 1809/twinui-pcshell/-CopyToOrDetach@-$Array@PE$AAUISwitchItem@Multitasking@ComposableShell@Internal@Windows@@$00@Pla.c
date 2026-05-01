/*
 * XREFs of ?CopyToOrDetach@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AE$AAAXPEAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAI@Z @ 0x18026E428
 * Callers:
 *     ?__abi_Platform_?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_get_Value@?Q?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJPEAIPEAPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180278290 (-__abi_Platform_-$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Composable.c)
 * Callees:
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@KAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEBQE$AAU34567@I@Z @ 0x18026D5F4 (-AllocateAndCopyElements@-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Interna.c)
 */

void __fastcall Platform::Array<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::CopyToOrDetach(
        __int64 a1,
        __int64 **a2,
        _DWORD *a3)
{
  if ( !a2 || !a3 )
  {
    __abi_WinRTraiseNullReferenceException();
    JUMPOUT(0x18026E4E5LL);
  }
  if ( !*(_DWORD *)(a1 + 72) )
  {
    *a2 = 0LL;
    *a3 = 0;
    return;
  }
  if ( !*(_QWORD *)(a1 + 80) )
    goto LABEL_14;
  if ( !*(_BYTE *)(a1 + 76) && *(_QWORD *)(a1 + 88) && *(_DWORD *)(*(_QWORD *)(a1 + 88) + 12LL) == 1 )
  {
    *a2 = *(__int64 **)(a1 + 80);
    *a3 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 72) = 0;
    *(_BYTE *)(a1 + 76) = 0;
    *(_QWORD *)(a1 + 80) = 0LL;
    return;
  }
  if ( !*(_BYTE *)(a1 + 76) && (!*(_QWORD *)(a1 + 88) || *(int *)(*(_QWORD *)(a1 + 88) + 12LL) <= 1) )
  {
LABEL_14:
    __abi_WinRTraiseFailureException();
    __debugbreak();
  }
  *a2 = Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::AllocateAndCopyElements(
          *(__int64 **)(a1 + 80),
          *(_DWORD *)(a1 + 72));
  *a3 = *(_DWORD *)(a1 + 72);
}

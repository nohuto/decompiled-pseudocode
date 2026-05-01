/*
 * XREFs of ?GetContextMenu@IXamlMultitaskingViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@3456@@Z @ 0x180270080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall IXamlMultitaskingViewController::GetContextMenu(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  return result;
}

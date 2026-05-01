/*
 * XREFs of ?add_ref@?$com_ptr@UIUnknown@@@winrt@@AEBAXXZ @ 0x1800C48BC
 * Callers:
 *     ??$_Ucopy@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAPEAUservice_description@immersive_shell_component@winrt@@PEBU234@0PEAU234@@Z @ 0x1800BFA14 (--$_Ucopy@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@Uservice_descriptio.c)
 *     ?QueryService@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800C1B00 (-QueryService@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<IUnknown>::add_ref(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}

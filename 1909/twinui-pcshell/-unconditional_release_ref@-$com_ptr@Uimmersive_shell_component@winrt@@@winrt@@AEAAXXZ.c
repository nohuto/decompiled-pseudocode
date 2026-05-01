/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@Uimmersive_shell_component@winrt@@@winrt@@AEAAXXZ @ 0x1800C515C
 * Callers:
 *     ??1?$com_ptr@Uimmersive_shell_component@winrt@@@winrt@@QEAA@XZ @ 0x1800C06BC (--1-$com_ptr@Uimmersive_shell_component@winrt@@@winrt@@QEAA@XZ.c)
 *     ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800C1590 (-PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService.c)
 *     ?make_weak_ref@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800C4BE4 (-make_weak_ref@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServicePr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::immersive_shell_component>::unconditional_release_ref(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}

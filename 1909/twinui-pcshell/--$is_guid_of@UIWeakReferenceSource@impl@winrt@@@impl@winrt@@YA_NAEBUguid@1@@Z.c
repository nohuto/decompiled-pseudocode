/*
 * XREFs of ??$is_guid_of@UIWeakReferenceSource@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1800C028C
 * Callers:
 *     ?QueryInterface@?$weak_source@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800C1A90 (-QueryInterface@-$weak_source@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z.c)
 *     ?query_interface@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800C4FF0 (-query_interface@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIService.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::impl::is_guid_of<winrt::impl::IWeakReferenceSource>(_DWORD *a1)
{
  return *a1 == 56 && !a1[1] && a1[2] == 192 && a1[3] == 1174405120;
}

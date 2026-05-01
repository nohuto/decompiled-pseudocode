/*
 * XREFs of ??$_Buynode@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@?$_List_buy@U?$pair@$$CBUHostIdentifierKey@@I@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUHostIdentifierKey@@I@std@@PEAX@1@PEAU21@0AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@Z @ 0x1803A444C
 * Callers:
 *     ??$emplace@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_N@1@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@Z @ 0x1803A4870 (--$emplace@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@-$_Hash@V-$_Um.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@PEAX@2@PEAU32@0@Z @ 0x18021DA64 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$ComPtr@UIVirtualDesktop@@@WRL@Micros.c)
 */

_DWORD *__fastcall std::_List_buy<std::pair<HostIdentifierKey const,unsigned int>>::_Buynode<Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier &,unsigned int &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  _DWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>::_Buynode0(
             a1,
             a2,
             a3);
  result[4] = *a4;
  result[5] = a4[1];
  result[6] = a4[2];
  result[7] = *a5;
  return result;
}

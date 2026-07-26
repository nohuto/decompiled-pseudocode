/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C001CA9C
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00C7EC0 (ndisPnPAddDevice.c)
 *     ?ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C899C (-ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00C8AA0 (ndisCheckNetworkInterfaceDataMismatch.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C00C8C90 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 *     ndisIfReadHiddenFlag @ 0x1C00C93F0 (ndisIfReadHiddenFlag.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F3FB8 (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v4; // rcx
  NTSTATUS result; // eax

  v4 = *a1;
  if ( v4 )
    result = ZwClose(v4);
  *a1 = a2;
  return result;
}

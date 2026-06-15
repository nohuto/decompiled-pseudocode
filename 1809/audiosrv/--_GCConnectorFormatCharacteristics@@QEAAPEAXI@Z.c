/*
 * XREFs of ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x180108758
 * Callers:
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x18004D008 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x18010878C (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18010C808 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

LPVOID *__fastcall CConnectorFormatCharacteristics::`scalar deleting destructor'(LPVOID *this)
{
  CoTaskMemFree(*this);
  *this = 0LL;
  operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}

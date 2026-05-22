/*
 * XREFs of ??_V@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C2AC
 * Callers:
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x18007715C (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
 *     ?ExtractReportDescriptorsFromPreparsedData@ConsumerControlNexusDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@VHidChannelValueInfo@@U?$default_delete@$$BY0A@VHidChannelValueInfo@@@std@@@std@@PEAI@Z @ 0x1800777A8 (-ExtractReportDescriptorsFromPreparsedData@ConsumerControlNexusDevice@@AEAAJQEAU_HIDP_PREPARSED_.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x180079740 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x18007AFBC (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ??1ParsedHidReportDescriptor@@QEAA@XZ @ 0x18007B800 (--1ParsedHidReportDescriptor@@QEAA@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@QEAA@XZ @ 0x18007C4DC (--1-$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U-$default_delete@$$BY0A@UParsedHidReportDesc.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1800DE32C (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800DE440 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     _ConsumerControlNexusDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::dtor$1 @ 0x180131B2A (_ConsumerControlNexusDevice--ExtractReportDescriptorsFromPreparsedData_--_1_--dtor$1.c)
 *     _HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::dtor$3 @ 0x180131BF6 (_HidLampArrayDevice--ExtractReportDescriptorsFromPreparsedData_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete[](void *a1, const struct std::nothrow_t *a2)
{
  operator delete(a1, a2);
}

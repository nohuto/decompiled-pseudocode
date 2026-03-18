/*
 * XREFs of rimHidP_GetSpecificButtonCaps @ 0x1C011C7F0
 * Callers:
 *     RIMAssignTouchType @ 0x1C0114FC4 (RIMAssignTouchType.c)
 *     RIMGetDeviceButtons @ 0x1C0116E4C (RIMGetDeviceButtons.c)
 *     RIMGetPointerDeviceProperties @ 0x1C0117A90 (RIMGetPointerDeviceProperties.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0118CAC (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMDeliverConfigRequest @ 0x1C011A884 (RIMDeliverConfigRequest.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C011B7F4 (RIMSendLatencyMgtDeviceRequest.c)
 *     rimIDECheckConfidenceSupport @ 0x1C011D270 (rimIDECheckConfidenceSupport.c)
 *     RIMExtractCustomPTPSetting @ 0x1C01303F0 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetSpecificButtonCaps(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        struct _HIDP_BUTTON_CAPS *a5,
        unsigned __int16 *a6,
        struct _HIDP_PREPARSED_DATA *a7)
{
  if ( gpfnHidP_GetSpecificButtonCaps )
    return gpfnHidP_GetSpecificButtonCaps(a1, a2, a3, a4, a5, a6, a7);
  else
    return -1073741637;
}

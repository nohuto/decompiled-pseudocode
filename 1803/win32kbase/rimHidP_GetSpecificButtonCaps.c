/*
 * XREFs of rimHidP_GetSpecificButtonCaps @ 0x1C004DA3C
 * Callers:
 *     RIMGetPointerDeviceProperties @ 0x1C004D5E0 (RIMGetPointerDeviceProperties.c)
 *     RIMAssignTouchType @ 0x1C00EA3D4 (RIMAssignTouchType.c)
 *     RIMGetDeviceButtons @ 0x1C00EC198 (RIMGetDeviceButtons.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C00ED92C (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMDeliverConfigRequest @ 0x1C00EF068 (RIMDeliverConfigRequest.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C00F0344 (RIMSendLatencyMgtDeviceRequest.c)
 *     rimIDECheckConfidenceSupport @ 0x1C00F2810 (rimIDECheckConfidenceSupport.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C01039A0 (rimContainsCustomHidKeyboardUsages.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C0103EB4 (rimHidKeyboardIsButtonDevice.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C01045DC (rimValidateCustomHidKeyboardUsages.c)
 *     RIMExtractCustomPTPSetting @ 0x1C0108CD0 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
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

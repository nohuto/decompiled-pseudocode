/*
 * XREFs of McTemplateK0p @ 0x1C0006A6C
 * Callers:
 *     HUBPARENT_ResetHub @ 0x1C00075F0 (HUBPARENT_ResetHub.c)
 *     HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes @ 0x1C0007E40 (HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure @ 0x1C0008300 (HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset @ 0x1C0008AE0 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x1C000BFA0 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0016580 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0017E20 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBDSM_ValidatingMSOSContainerIdDescriptor @ 0x1C001E4E0 (HUBDSM_ValidatingMSOSContainerIdDescriptor.c)
 *     HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor @ 0x1C001E670 (HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor.c)
 *     HUBDSM_ValidatingMSOSDescriptor @ 0x1C001E7C0 (HUBDSM_ValidatingMSOSDescriptor.c)
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1C001E8B0 (HUBDSM_ValidatingMSOSExtendedConfigDescriptor.c)
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader @ 0x1C001EA50 (HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader.c)
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x1C001F510 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1C001F690 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 *     HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C001F810 (HUBDSM_ValidatingMsOs20DescriptorSetIfPresent.c)
 *     HUBDSM_ValidatingDeviceQualifierDescriptor @ 0x1C001FA30 (HUBDSM_ValidatingDeviceQualifierDescriptor.c)
 *     HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader @ 0x1C00211F0 (HUBDSM_ValidatingMSOSExtendedPropertyDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C002726C (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0027724 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDTX_ValidateAndCacheConfigDescriptor @ 0x1C0027D84 (HUBDTX_ValidateAndCacheConfigDescriptor.c)
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0028314 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C0028598 (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 *     HUBDTX_ValidateAndCacheLanguageIdStringDescriptor @ 0x1C0028794 (HUBDTX_ValidateAndCacheLanguageIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheProductIdStringDescriptor @ 0x1C0028AD4 (HUBDTX_ValidateAndCacheProductIdStringDescriptor.c)
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C0028CAC (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 *     HUBMISC_LogDeviceReEnumeration @ 0x1C002A914 (HUBMISC_LogDeviceReEnumeration.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C002A9A8 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode @ 0x1C002CFA8 (HUBMISC_LogTelemetryIfSuperSpeedDeviceWorkingInHighSpeedMode.c)
 *     HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor @ 0x1C002E63C (HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor.c)
 *     HUBMISC_LogResetTimeout @ 0x1C002FCC0 (HUBMISC_LogResetTimeout.c)
 *     HUBIDLE_AddEvent @ 0x1C003AB30 (HUBIDLE_AddEvent.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0070DB0 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C0071660 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_EvtDeviceSurpriseRemoval @ 0x1C0071870 (HUBFDO_EvtDeviceSurpriseRemoval.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0074BD0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C00757C0 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C0075ED0 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0001254 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 */

ULONG McTemplateK0p(struct _MCGEN_TRACE_CONTEXT *a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  return McGenEventWrite(a1, a2, a3, 2u, &v4);
}

/*
 * XREFs of ViErrorReport1 @ 0x14030AE3C
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140926DB0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140926FB0 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x14092EC8C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14092F1BC (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x14092F4F4 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x14092F620 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x14092FA30 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x14092FB98 (IovpExamineIrpStackForwarding.c)
 *     VfAfterCallDriver @ 0x14092FEB4 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x14093027C (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x140930428 (VfIoInitializeIrp.c)
 *     VfPnpVerifyIrpStackDownward @ 0x140940620 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409407B0 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x1409409A0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140940A7C (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x140940DA0 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x140940EA0 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x140940EE0 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x140940FF0 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x140941100 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14017DE94 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14030994C (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140936124 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140936178 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}

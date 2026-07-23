/*
 * XREFs of ViErrorReport1 @ 0x14030B12C
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140927DB0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140927FB0 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x14092FC8C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1409301BC (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x1409304F4 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x140930620 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x140930A30 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x140930B98 (IovpExamineIrpStackForwarding.c)
 *     VfAfterCallDriver @ 0x140930EB4 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x14093127C (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x140931428 (VfIoInitializeIrp.c)
 *     VfPnpVerifyIrpStackDownward @ 0x140941620 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409417B0 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x1409419A0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140941A7C (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x140941DA0 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x140941EA0 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x140941EE0 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x140941FF0 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x140942100 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14017DFF4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x140309C3C (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140937124 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140937178 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}

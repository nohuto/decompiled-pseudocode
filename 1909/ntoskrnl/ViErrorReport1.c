/*
 * XREFs of ViErrorReport1 @ 0x14032867C
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1409652E0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x1409654E0 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x14096D504 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14096DA34 (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x14096DD74 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x14096DEA0 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x14096E2B0 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x14096E418 (IovpExamineIrpStackForwarding.c)
 *     VfAfterCallDriver @ 0x14096E734 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x14096EAF8 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x14096ECA4 (VfIoInitializeIrp.c)
 *     VfErrorReport1 @ 0x1409755E4 (VfErrorReport1.c)
 *     VfPnpVerifyIrpStackDownward @ 0x14097FEC0 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyNewRequest @ 0x140980240 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14098031C (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x140980640 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x140980740 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x140980780 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x140980890 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x1409809A0 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14018C564 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x140327014 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409757DC (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140975830 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}

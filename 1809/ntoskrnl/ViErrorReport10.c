/*
 * XREFs of ViErrorReport10 @ 0x14030AFC0
 * Callers:
 *     IovpCallDriver2 @ 0x14092F1BC (IovpCallDriver2.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409407B0 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140940A7C (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfWmiVerifyIrpStackUpward @ 0x140941070 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14017DEB4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x140309A4C (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140936124 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140936178 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport10(unsigned int a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-A8h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", a2, a3, a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, a4);
}

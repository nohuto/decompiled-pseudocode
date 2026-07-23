/*
 * XREFs of ViErrorReport6 @ 0x14030B2E8
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140927DB0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140927FB0 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver2 @ 0x1409301BC (IovpCallDriver2.c)
 *     IovpCompleteRequest2 @ 0x140930620 (IovpCompleteRequest2.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14017DFF4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x140309C3C (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140937124 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140937178 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport6(__int64 a1, const void *a2, const void *a3, int a4)
{
  __int64 v4; // rbp
  unsigned int v7; // ebx
  char pszDest[96]; // [rsp+30h] [rbp-98h] BYREF

  v4 = a4;
  v7 = a1;
  ViErrorDisplayDescription(a1);
  if ( RtlStringCbPrintfA(pszDest, 0x57uLL, "CulpritAddress = %p, Irp = %p, Status = 0x%x.\n", a2, a3, v4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(v7, a2, a3, v4);
}

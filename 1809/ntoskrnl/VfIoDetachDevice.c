/*
 * XREFs of VfIoDetachDevice @ 0x14093529C
 * Callers:
 *     IovDetachDevice @ 0x1409251CC (IovDetachDevice.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14017DFF4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x140309C3C (VfUtilDbgPrint.c)
 *     IovUtilFlushStackCache @ 0x14093645C (IovUtilFlushStackCache.c)
 *     ViErrorDisplayDescription @ 0x140937124 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140937178 (ViErrorFinishReport.c)
 */

__int64 __fastcall VfIoDetachDevice(_QWORD *a1, const void *a2)
{
  char pszDest[80]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a1[3] )
  {
    ViErrorDisplayDescription(514LL);
    if ( RtlStringCbPrintfA(pszDest, 0x49uLL, "CulpritAddress = %p, DeviceObject = %p.\n", a2, a1) >= 0 )
      VfUtilDbgPrint(pszDest);
    ViErrorFinishReport(514LL, a2, a1, 0LL);
  }
  return IovUtilFlushStackCache(a1);
}

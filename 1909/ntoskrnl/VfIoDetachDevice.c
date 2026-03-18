/*
 * XREFs of VfIoDetachDevice @ 0x140973840
 * Callers:
 *     IovDetachDevice @ 0x140963350 (IovDetachDevice.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14018C564 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x140327014 (VfUtilDbgPrint.c)
 *     IovUtilFlushStackCache @ 0x140974A88 (IovUtilFlushStackCache.c)
 *     ViErrorDisplayDescription @ 0x1409757DC (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140975830 (ViErrorFinishReport.c)
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

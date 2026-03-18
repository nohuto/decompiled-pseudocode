/*
 * XREFs of VfErrorReport9 @ 0x140975718
 * Callers:
 *     VfIoDeleteDevice @ 0x140973760 (VfIoDeleteDevice.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14018BBD4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1403275C4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409757DC (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140975830 (ViErrorFinishReport.c)
 */

__int64 __fastcall VfErrorReport9(__int64 a1, const void *a2)
{
  unsigned int v3; // ebx
  char pszDest[40]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a1;
  ViErrorDisplayDescription(a1);
  if ( RtlStringCbPrintfA(pszDest, 0x26uLL, "CulpritAddress = %p.\n", a2) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(v3, a2, 0LL, 0LL);
}

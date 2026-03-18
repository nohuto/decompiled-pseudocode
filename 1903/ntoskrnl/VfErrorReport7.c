/*
 * XREFs of VfErrorReport7 @ 0x1409755F8
 * Callers:
 *     PpvUtilFailDriver @ 0x1402A14B0 (PpvUtilFailDriver.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14018BBD4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1403275C4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409757DC (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140975830 (ViErrorFinishReport.c)
 */

__int64 __fastcall VfErrorReport7(__int64 a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-98h] BYREF

  ViErrorDisplayDescription(585LL);
  if ( RtlStringCbPrintfA(
         pszDest,
         0x6EuLL,
         "CulpritAddress = %p, DeviceObject1 = %p, DeviceObject2 = %p.\n",
         a2,
         a3,
         a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(585LL, a2, a3, a4);
}

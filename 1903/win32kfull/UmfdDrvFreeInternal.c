/*
 * XREFs of UmfdDrvFreeInternal @ 0x1C02D4010
 * Callers:
 *     UmfdQueryFontTree @ 0x1C0075C50 (UmfdQueryFontTree.c)
 *     UmfdQueryFont @ 0x1C0123040 (UmfdQueryFont.c)
 *     UmfdDrvFree @ 0x1C012C360 (UmfdDrvFree.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0072960 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C0072FE8 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

__int64 __fastcall UmfdDrvFreeInternal(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD v7[9]; // [rsp+20h] [rbp-48h] BYREF

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v7, 9);
  v7[5] = a1;
  v7[0] = &FreeRequest::`vftable';
  v7[6] = a2;
  return UmfdClientSendAndWaitForCompletion(a3, (__int64)v7);
}

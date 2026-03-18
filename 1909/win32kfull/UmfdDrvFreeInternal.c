/*
 * XREFs of UmfdDrvFreeInternal @ 0x1C02D3B60
 * Callers:
 *     UmfdQueryFontTree @ 0x1C0095C90 (UmfdQueryFontTree.c)
 *     UmfdQueryFont @ 0x1C00FD960 (UmfdQueryFont.c)
 *     UmfdDrvFree @ 0x1C0107370 (UmfdDrvFree.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C0096898 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0096A40 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
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

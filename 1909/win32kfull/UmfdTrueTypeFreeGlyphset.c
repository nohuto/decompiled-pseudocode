/*
 * XREFs of UmfdTrueTypeFreeGlyphset @ 0x1C0095AB0
 * Callers:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0097390 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C0095B34 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C0096898 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0096A40 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall UmfdTrueTypeFreeGlyphset(__int64 a1, int a2, void *a3)
{
  _QWORD v6[6]; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+50h] [rbp-18h]

  FontDriverDdiRequest::FontDriverDdiRequest(v6, 15LL);
  v6[5] = a1;
  v6[0] = &TrueTypeFreeGlyphsetRequest::`vftable';
  v7 = a2;
  UmfdClientSendAndWaitForCompletion(0LL, v6);
  UmfdAllocation::ReleaseKernelmodeAllocation(a3);
}

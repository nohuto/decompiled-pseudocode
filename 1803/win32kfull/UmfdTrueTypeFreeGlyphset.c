/*
 * XREFs of UmfdTrueTypeFreeGlyphset @ 0x1C00CAAE8
 * Callers:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00CCD0C (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00815E8 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0083010 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C00CAB6C (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall UmfdTrueTypeFreeGlyphset(__int64 a1, int a2, void *a3)
{
  struct _SLIST_ENTRY v6[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v6, 15);
  v7 = a1;
  v6[0].Next = (struct _SLIST_ENTRY *)&TrueTypeFreeGlyphsetRequest::`vftable';
  v8 = a2;
  UmfdClientSendAndWaitForCompletion(0, v6);
  UmfdAllocation::ReleaseKernelmodeAllocation(a3);
}

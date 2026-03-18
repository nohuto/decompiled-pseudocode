/*
 * XREFs of ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C0096898
 * Callers:
 *     UmfdTrueTypeFreeGlyphset @ 0x1C0095AB0 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdQueryFontTree @ 0x1C0095C90 (UmfdQueryFontTree.c)
 *     UmfdQueryTrueTypeTable @ 0x1C00967C0 (UmfdQueryTrueTypeTable.c)
 *     UmfdDestroyFont @ 0x1C0098BF0 (UmfdDestroyFont.c)
 *     UmfdLoadFontFile @ 0x1C00F9F20 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00FD088 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryFont @ 0x1C00FD960 (UmfdQueryFont.c)
 *     UmfdQueryFontFile @ 0x1C0103FE0 (UmfdQueryFontFile.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C014BF40 (UmfdQueryTrueTypeOutline.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1C0167B38 (UmfdQueryGlyphMetricsPlusBits.c)
 *     UmfdDrvFreeInternal @ 0x1C02D3B60 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02D3BC0 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02D3C70 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02D3D30 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02D3DB0 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall FontDriverDdiRequest::FontDriverDdiRequest(__int64 a1, int a2)
{
  _QWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &FontDriverDdiRequest::`vftable';
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  *(_BYTE *)(a1 + 32) = 0;
  v4[0] = 0LL;
  v4[1] = 0LL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, v4, 0x10u, 0LL) >= 0 )
  {
    *(_QWORD *)(a1 + 24) = v4[0];
    *(_BYTE *)(a1 + 32) = 1;
  }
  return a1;
}

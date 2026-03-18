/*
 * XREFs of ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C01011A0
 * Callers:
 *     UmfdDestroyFont @ 0x1C0082580 (UmfdDestroyFont.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C00872B4 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdLoadFontFile @ 0x1C0100E70 (UmfdLoadFontFile.c)
 *     UmfdQueryFontFile @ 0x1C0100FB0 (UmfdQueryFontFile.c)
 *     UmfdQueryFont @ 0x1C0101040 (UmfdQueryFont.c)
 *     UmfdQueryFontTree @ 0x1C01010F0 (UmfdQueryFontTree.c)
 *     UmfdUnloadFontFileInternal @ 0x1C011A088 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C0149740 (UmfdQueryTrueTypeOutline.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1C0162CE0 (UmfdQueryGlyphMetricsPlusBits.c)
 *     UmfdDrvFreeInternal @ 0x1C02C0F00 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02C0F60 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02C1010 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02C10D0 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02C1150 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall FontDriverDdiRequest::FontDriverDdiRequest(__int64 a1, int a2)
{
  __int64 ThreadInformation; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &FontDriverDdiRequest::`vftable';
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  *(_BYTE *)(a1 + 32) = 0;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    *(_QWORD *)(a1 + 24) = ThreadInformation;
    *(_BYTE *)(a1 + 32) = 1;
  }
  return a1;
}

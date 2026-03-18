/*
 * XREFs of ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C0072FE8
 * Callers:
 *     UmfdDestroyFont @ 0x1C004F3E0 (UmfdDestroyFont.c)
 *     UmfdQueryTrueTypeTable @ 0x1C0072F10 (UmfdQueryTrueTypeTable.c)
 *     UmfdQueryFontTree @ 0x1C0075C50 (UmfdQueryFontTree.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C0076464 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdLoadFontFile @ 0x1C011F240 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C0122088 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryFont @ 0x1C0123040 (UmfdQueryFont.c)
 *     UmfdQueryFontFile @ 0x1C0128F30 (UmfdQueryFontFile.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C014B190 (UmfdQueryTrueTypeOutline.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1C0165F18 (UmfdQueryGlyphMetricsPlusBits.c)
 *     UmfdDrvFreeInternal @ 0x1C02D4010 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02D4070 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02D4120 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02D41E0 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02D4260 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
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

/*
 * XREFs of ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00815E8
 * Callers:
 *     UmfdQueryFontTree @ 0x1C007E5A0 (UmfdQueryFontTree.c)
 *     UmfdQueryTrueTypeTable @ 0x1C00804B0 (UmfdQueryTrueTypeTable.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00BE1F0 (UmfdUnloadFontFileInternal.c)
 *     UmfdLoadFontFile @ 0x1C00BE2A0 (UmfdLoadFontFile.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C00CAAE8 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdDestroyFont @ 0x1C00CAF30 (UmfdDestroyFont.c)
 *     UmfdQueryFont @ 0x1C00F1150 (UmfdQueryFont.c)
 *     UmfdQueryFontFile @ 0x1C00F9F20 (UmfdQueryFontFile.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C0125C10 (UmfdQueryTrueTypeOutline.c)
 *     UmfdDrvFreeInternal @ 0x1C02AEEF8 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02AEF60 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02AF010 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02AF0D0 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02AF150 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
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

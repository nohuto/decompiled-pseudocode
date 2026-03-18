/*
 * XREFs of UmfdDestroyFont @ 0x1C0082580
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00428C0 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     FONTOBJ_GetCachedGlyphAttrs @ 0x1C00825F4 (FONTOBJ_GetCachedGlyphAttrs.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C01011A0 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     FONTOBJ_SetCachedGlyphAttrs @ 0x1C028C00C (FONTOBJ_SetCachedGlyphAttrs.c)
 */

__int64 __fastcall UmfdDestroyFont(__int64 a1)
{
  void *CachedGlyphAttrs; // rax
  void *v3; // rax
  struct _SLIST_ENTRY v5[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  CachedGlyphAttrs = (void *)FONTOBJ_GetCachedGlyphAttrs(a1, 0LL);
  if ( CachedGlyphAttrs )
  {
    EngFreeMem(CachedGlyphAttrs);
    FONTOBJ_SetCachedGlyphAttrs(a1, 0LL, 0LL);
  }
  v3 = (void *)FONTOBJ_GetCachedGlyphAttrs(a1, 1LL);
  if ( v3 )
  {
    EngFreeMem(v3);
    FONTOBJ_SetCachedGlyphAttrs(a1, 1LL, 0LL);
  }
  FontDriverDdiRequest::FontDriverDdiRequest(v5, 3LL);
  v7 = 0LL;
  v5[0].Next = (struct _SLIST_ENTRY *)&DestroyFontRequest::`vftable';
  v6 = a1;
  return UmfdClientSendAndWaitForCompletion(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL), v5);
}

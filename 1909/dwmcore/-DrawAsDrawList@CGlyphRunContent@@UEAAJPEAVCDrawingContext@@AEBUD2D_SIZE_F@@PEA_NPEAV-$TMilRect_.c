/*
 * XREFs of ?DrawAsDrawList@CGlyphRunContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1802051A0
 * Callers:
 *     ?Draw@CGlyphRunContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D4EB0 (-Draw@CGlyphRunContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlyphRunContent::DrawAsDrawList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v6; // rbx
  _QWORD *v8; // rsi
  int v11; // eax
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = *(_QWORD **)(a1 + 56);
  v8 = *(_QWORD **)(a1 + 64);
  if ( v6 == v8 )
    return 0LL;
  while ( 1 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)*v6 + 288LL))(
            *v6,
            a2,
            a3,
            a4,
            a5,
            a6);
    v12 = v11;
    if ( v11 < 0 )
      break;
    if ( ++v6 == v8 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\glyphruncontent.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}

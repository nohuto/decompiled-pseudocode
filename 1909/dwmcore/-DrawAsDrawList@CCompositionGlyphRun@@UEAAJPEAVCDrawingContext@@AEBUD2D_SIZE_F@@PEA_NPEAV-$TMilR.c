/*
 * XREFs of ?DrawAsDrawList@CCompositionGlyphRun@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801CF550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositionGlyphRun::DrawAsDrawList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 288LL))(v3, a2, a3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF5,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionglyphrun.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}

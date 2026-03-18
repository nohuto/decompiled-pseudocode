/*
 * XREFs of ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C00890CC
 * Callers:
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0098060 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0098F00 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     NtGdiGetETM @ 0x1C0143A60 (NtGdiGetETM.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C025F43C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall SURFACE::pSurfobj(SURFACE *this)
{
  if ( this )
    return (struct _SURFOBJ *)((char *)this + 24);
  else
    return 0LL;
}

/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00824F8
 * Callers:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C007D8D0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     bAddFlEntry @ 0x1C0080280 (bAddFlEntry.c)
 *     cjIFIMetricsToOTMW @ 0x1C0081D4C (cjIFIMetricsToOTMW.c)
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x1C00C1D94 (-vLookupScript@@YAXKPEAGK@Z.c)
 *     vProcessEntry @ 0x1C00C2010 (vProcessEntry.c)
 *     bUnloadEudcFont @ 0x1C00CB0C4 (bUnloadEudcFont.c)
 *     DrvSetGraphicsDevices @ 0x1C00EA48C (DrvSetGraphicsDevices.c)
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C026DABC (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     FontAssocDefaultRoutine @ 0x1C027BB40 (FontAssocDefaultRoutine.c)
 *     ?FindDefaultLinkedFontEntry@@YAHPEBG0@Z @ 0x1C027BC60 (-FindDefaultLinkedFontEntry@@YAHPEBG0@Z.c)
 *     bDeleteFlEntry @ 0x1C027C558 (bDeleteFlEntry.c)
 *     InitializeDefaultFamilyFonts @ 0x1C036D780 (InitializeDefaultFamilyFonts.c)
 *     DefaultFontQueryRoutine @ 0x1C036E5E0 (DefaultFontQueryRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(char *a1, __int64 a2, char *a3)
{
  signed int v3; // r9d
  __int64 v4; // r10
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax
  unsigned __int16 *v7; // rax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    if ( a2 )
    {
      v4 = 2147483646 - a2;
      v5 = a3 - a1;
      do
      {
        if ( !(v4 + a2) )
          break;
        v6 = *(_WORD *)&a1[v5];
        if ( !v6 )
          break;
        *(_WORD *)a1 = v6;
        a1 += 2;
        --a2;
      }
      while ( a2 );
    }
    v7 = (unsigned __int16 *)(a1 - 2);
    if ( a2 )
      v7 = (unsigned __int16 *)a1;
    v3 = a2 == 0 ? 0x8007007A : 0;
    *v7 = 0;
  }
  return (unsigned int)v3;
}

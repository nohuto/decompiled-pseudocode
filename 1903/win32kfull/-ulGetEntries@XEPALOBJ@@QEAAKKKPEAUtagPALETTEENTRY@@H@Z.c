/*
 * XREFs of ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C00EDF9C
 * Callers:
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C00360A0 (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     GreGetPaletteEntries @ 0x1C00EDF20 (GreGetPaletteEntries.c)
 *     EngQueryPalette @ 0x1C02888E0 (EngQueryPalette.c)
 *     NtGdiColorCorrectPalette @ 0x1C02AF130 (NtGdiColorCorrectPalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02B03A0 (GreGetSystemPaletteEntries.c)
 *     PALOBJ_cGetColors @ 0x1C02B5EB0 (PALOBJ_cGetColors.c)
 *     XLATEOBJ_cGetPalette @ 0x1C02B7C90 (XLATEOBJ_cGetPalette.c)
 * Callees:
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall XEPALOBJ::ulGetEntries(
        XEPALOBJ *this,
        unsigned int a2,
        unsigned int a3,
        struct tagPALETTEENTRY *a4,
        int a5)
{
  unsigned int v5; // edi
  struct tagPALETTEENTRY *v6; // rbx
  __int64 result; // rax
  unsigned int v8; // eax
  struct tagPALETTEENTRY *v9; // rcx

  v5 = a3;
  v6 = a4;
  result = *(unsigned int *)(*(_QWORD *)this + 28LL);
  if ( a4 )
  {
    if ( a2 >= (unsigned int)result )
    {
      return 0LL;
    }
    else
    {
      v8 = result - a2;
      if ( a3 > v8 )
        v5 = v8;
      memmove(a4, (const void *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 4LL * a2), 4LL * v5);
      if ( a5 )
      {
        v9 = &v6[v5];
        while ( v6 < v9 )
        {
          v6->peFlags = 0;
          ++v6;
        }
      }
      return v5;
    }
  }
  return result;
}

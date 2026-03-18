/*
 * XREFs of ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C00CCB8C
 * Callers:
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C00C07BC (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     GreGetPaletteEntries @ 0x1C00CCB10 (GreGetPaletteEntries.c)
 *     EngQueryPalette @ 0x1C0288250 (EngQueryPalette.c)
 *     NtGdiColorCorrectPalette @ 0x1C02AEC80 (NtGdiColorCorrectPalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02AFEF0 (GreGetSystemPaletteEntries.c)
 *     PALOBJ_cGetColors @ 0x1C02B5A00 (PALOBJ_cGetColors.c)
 *     XLATEOBJ_cGetPalette @ 0x1C02B77E0 (XLATEOBJ_cGetPalette.c)
 * Callees:
 *     memmove @ 0x1C0168100 (memmove.c)
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

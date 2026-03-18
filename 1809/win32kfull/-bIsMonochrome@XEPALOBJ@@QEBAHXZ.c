/*
 * XREFs of ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C010E12C
 * Callers:
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1C00127DC (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C004AB70 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiMonoBitmap @ 0x1C029B290 (NtGdiMonoBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XEPALOBJ::bIsMonochrome(XEPALOBJ *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *(_QWORD *)this;
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 24) & 0x2000) != 0;
  return v2;
}

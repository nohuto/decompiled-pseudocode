/*
 * XREFs of DxEngSelectPaletteToSurface @ 0x1C0011F50
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0011920 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngBltViaGDI @ 0x1C025A990 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00127A8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall DxEngSelectPaletteToSurface(__int64 a1, HPALETTE a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v8, a2);
  v4 = v8;
  if ( a1 )
  {
    if ( !v8 )
      return v3;
    v5 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    v6 = *(_QWORD **)(v5 + 128);
    *(_QWORD *)(v5 + 128) = v4;
    INC_SHARE_REF_CNT(v4);
    if ( v6 )
    {
      v3 = *v6;
      v8 = v6;
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v8);
    }
  }
  if ( v4 )
    DEC_SHARE_REF_CNT(v4);
  return v3;
}

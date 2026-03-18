/*
 * XREFs of ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C000EF58
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00163D0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00780DC (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C008CDD0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00BAC30 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     GreCreateRectRgn @ 0x1C012F350 (GreCreateRectRgn.c)
 * Callees:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0022E70 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 */

struct HOBJ__ *__fastcall HmgInsertObjectHelper::Insert(
        HmgInsertObjectHelper *this,
        struct OBJECT *a2,
        unsigned __int8 a3,
        char a4,
        unsigned __int8 a5)
{
  struct HOBJ__ *result; // rax
  int v8; // edx

  result = 0LL;
  if ( !*(_QWORD *)this )
  {
    v8 = (2 * a3) | 8;
    if ( !a4 )
      v8 = 2 * a3;
    result = HmgInsertObjectInternal(a2, v8 | 1u, a5);
    if ( result )
      *(_QWORD *)this = a2;
  }
  return result;
}

/*
 * XREFs of ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C01258E4
 * Callers:
 *     GrePlgBlt @ 0x1C0008764 (GrePlgBlt.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0008AF8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C0026080 (GreCreateDIBitmapReal.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00A2320 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00BDE20 (GreCreateCompatibleBitmapInternal.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00DE848 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreMaskBlt @ 0x1C0124474 (GreMaskBlt.c)
 *     GreGetDIBColorTable @ 0x1C0125780 (GreGetDIBColorTable.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0278848 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreSetDIBColorTable @ 0x1C02AFFB0 (GreSetDIBColorTable.c)
 * Callees:
 *     <none>
 */

struct SURFACE *__fastcall XDCOBJ::pSurfaceEff(XDCOBJ *this)
{
  struct SURFACE *result; // rax

  result = *(struct SURFACE **)(*(_QWORD *)this + 496LL);
  if ( !result )
    return SURFACE::pdibDefault;
  return result;
}

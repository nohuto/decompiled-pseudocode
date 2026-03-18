/*
 * XREFs of ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C007F0E4
 * Callers:
 *     GrePlgBlt @ 0x1C0008764 (GrePlgBlt.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0008AF8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C0030AC0 (GreCreateDIBitmapReal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0033C00 (GreCreateCompatibleBitmapInternal.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0058A1C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0073164 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreMaskBlt @ 0x1C007EAC4 (GreMaskBlt.c)
 *     GreGetDIBColorTable @ 0x1C007EF80 (GreGetDIBColorTable.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0278F08 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreSetDIBColorTable @ 0x1C02B0460 (GreSetDIBColorTable.c)
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

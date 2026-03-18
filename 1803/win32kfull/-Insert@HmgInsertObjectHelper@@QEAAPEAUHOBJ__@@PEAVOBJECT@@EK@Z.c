/*
 * XREFs of ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C00CA984
 * Callers:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00C6194 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00C7514 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C00C8074 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     hfontCreate @ 0x1C00CA860 (hfontCreate.c)
 *     NtGdiCreateClientObj @ 0x1C00FB1D0 (NtGdiCreateClientObj.c)
 *     EngCreateDriverObj @ 0x1C02570C0 (EngCreateDriverObj.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0264684 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     <none>
 */

struct HOBJ__ *__fastcall HmgInsertObjectHelper::Insert(
        HmgInsertObjectHelper *this,
        struct OBJECT *a2,
        unsigned __int8 a3,
        int a4)
{
  struct HOBJ__ *result; // rax

  result = 0LL;
  if ( !*(_QWORD *)this )
  {
    result = HmgInsertObjectInternal(a2, a4 | 1u, a3);
    if ( result )
      *(_QWORD *)this = a2;
  }
  return result;
}

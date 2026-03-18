/*
 * XREFs of ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00A17F8
 * Callers:
 *     NtGdiEngTextOut @ 0x1C00A0BA0 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C00A1240 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C014A3D0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C014A650 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C014AB20 (NtGdiEngBitBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02AAD90 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCheckAbort @ 0x1C02AB020 (NtGdiEngCheckAbort.c)
 *     NtGdiEngEraseSurface @ 0x1C02AB360 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02AB4E0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02AB6F0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02ABB20 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02ABD30 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02ABEE0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02AC350 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02AC680 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C02AC950 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02AD8A0 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C00A1868 (-GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
 */

UMPDSURFOBJ *__fastcall UMPDSURFOBJ::UMPDSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2, struct UMPDOBJ *a3)
{
  int v3; // ebx
  __int64 v5; // rax
  struct _SURFOBJ *LockedSURFOBJ; // rax

  v3 = 0;
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    if ( a2 == *((struct _SURFOBJ **)a3 + 9) )
    {
      v5 = *((_QWORD *)a3 + 8);
    }
    else if ( a2 == *((struct _SURFOBJ **)a3 + 11) )
    {
      v5 = *((_QWORD *)a3 + 10);
    }
    else if ( a2 == *((struct _SURFOBJ **)a3 + 13) )
    {
      v5 = *((_QWORD *)a3 + 12);
    }
    else
    {
      v5 = 0LL;
    }
    *(_QWORD *)this = v5;
    if ( !v5 )
    {
      LockedSURFOBJ = UMPDSURFOBJ::GetLockedSURFOBJ(this, a2);
      *(_QWORD *)this = LockedSURFOBJ;
      if ( LockedSURFOBJ )
        v3 = 1;
    }
  }
  *((_DWORD *)this + 2) = v3;
  return this;
}

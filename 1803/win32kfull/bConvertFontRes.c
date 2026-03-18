/*
 * XREFs of bConvertFontRes @ 0x1C0226134
 * Callers:
 *     bBmfdLoadFont @ 0x1C0225D40 (bBmfdLoadFont.c)
 *     bLoadNtFon @ 0x1C0227530 (bLoadNtFon.c)
 * Callees:
 *     bBMFDIFIMETRICS @ 0x1C0225BDC (bBMFDIFIMETRICS.c)
 *     bVerifyResource @ 0x1C0226408 (bVerifyResource.c)
 *     vAlignHdrData @ 0x1C02267A8 (vAlignHdrData.c)
 *     vBmfdFill_IFIMETRICS @ 0x1C02268EC (vBmfdFill_IFIMETRICS.c)
 *     vCheckOffsetTable @ 0x1C0226EC8 (vCheckOffsetTable.c)
 *     vDefFace @ 0x1C0227EC4 (vDefFace.c)
 *     pcpComputeGlyphset @ 0x1C02ADA2C (pcpComputeGlyphset.c)
 */

__int64 __fastcall bConvertFontRes(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rax
  HSEMAPHORE v12; // rcx

  v4 = a4 + 36;
  v9 = 0;
  vAlignHdrData(a4 + 36, a3);
  if ( (unsigned int)bVerifyResource(v4, a3) && (unsigned int)bBMFDIFIMETRICS(a1, a2, v4, a3, 0LL) )
  {
    vCheckOffsetTable(v4, a3);
    vDefFace(a4, a3);
    EngAcquireSemaphore(ghsemBMFD);
    LOBYTE(v10) = *(_BYTE *)(*a3 + 85LL);
    v11 = pcpComputeGlyphset(&gpcpGlyphsets, *(unsigned __int8 *)(a4 + 40), *(unsigned __int8 *)(a4 + 41), v10);
    v12 = ghsemBMFD;
    *(_QWORD *)(a4 + 72) = v11;
    EngReleaseSemaphore(v12);
    if ( *(_QWORD *)(a4 + 72) )
    {
      vBmfdFill_IFIMETRICS(a4, a3);
      return **(_DWORD **)(a4 + 80) != 0;
    }
    else
    {
      EngSetLastError(8u);
    }
  }
  return v9;
}

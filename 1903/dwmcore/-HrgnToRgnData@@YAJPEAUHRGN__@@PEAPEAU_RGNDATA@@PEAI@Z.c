/*
 * XREFs of ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x18003D270
 * Callers:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18003CFD0 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z @ 0x1801654D0 (-NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?ClipRect@CDwmMetaRegion@@SAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801818D4 (-ClipRect@CDwmMetaRegion@@SAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x180181C48 (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180181EC0 (-CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018227C (-GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z @ 0x1801823A4 (-GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall HrgnToRgnData(HRGN hrgn, struct _RGNDATA **a2, unsigned int *a3)
{
  signed int v5; // edi
  struct _RGNDATA *v6; // rbx
  DWORD RegionData; // esi
  HANDLE ProcessHeap; // rax
  unsigned int v9; // ecx
  __int64 result; // rax
  signed int LastError; // eax
  unsigned int v12; // ecx
  signed int v13; // eax
  unsigned int v14; // ecx

  v5 = 0;
  v6 = 0LL;
  SetLastError(0);
  RegionData = GetRegionData(hrgn, 0, 0LL);
  if ( !RegionData )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    if ( v5 >= 0 )
      v5 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v5, 0x82u, 0LL);
    goto LABEL_16;
  }
  ProcessHeap = GetProcessHeap();
  v6 = (struct _RGNDATA *)HeapAlloc(ProcessHeap, 0, RegionData);
  if ( !v6 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x85u, 0LL);
    goto LABEL_4;
  }
  SetLastError(0);
  if ( !GetRegionData(hrgn, RegionData, v6) )
  {
    v13 = GetLastError();
    v5 = v13;
    if ( v13 > 0 )
      v5 = (unsigned __int16)v13 | 0x80070000;
    if ( v5 >= 0 )
      v5 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v5, 0x88u, 0LL);
LABEL_16:
    if ( v6 )
    {
      operator delete(v6);
      v6 = 0LL;
    }
  }
LABEL_4:
  result = (unsigned int)v5;
  *a2 = v6;
  return result;
}

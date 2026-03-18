/*
 * XREFs of ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x1800A5298
 * Callers:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800A5348 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?ClipRect@CDwmMetaRegion@@SAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18017FC00 (-ClipRect@CDwmMetaRegion@@SAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAPEAU3@@Z @ 0x18017FF5C (-ClipRectWitRegion@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801801C0 (-CombineRegions@CDwmMetaRegion@@SAJPEAUHRGN__@@0PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018056C (-GetMaxRectFromRegion@CDwmMetaRegion@@SAJPEAUHRGN__@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z @ 0x180180690 (-GetMoveRects@CDwmMetaRegion@@QEAAPEAUtagRECT@@PEAI@Z.c)
 *     ?NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z @ 0x1802050C0 (-NotifyMetaData@CSwapChainBase@@UEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall HrgnToRgnData(HRGN hrgn, struct _RGNDATA **a2, unsigned int *a3)
{
  signed int v5; // ebx
  struct _RGNDATA *v6; // rdi
  DWORD RegionData; // esi
  unsigned int v8; // ecx
  __int64 result; // rax
  signed int LastError; // eax
  unsigned int v11; // ecx
  signed int v12; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]

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
    v13 = 135;
LABEL_12:
    if ( v5 >= 0 )
      v5 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v5, v13);
    goto LABEL_15;
  }
  v6 = (struct _RGNDATA *)HeapAlloc(WPF::g_processHeap, 0, RegionData);
  if ( v6 )
  {
    SetLastError(0);
    if ( GetRegionData(hrgn, RegionData, v6) )
      goto LABEL_4;
    v12 = GetLastError();
    v5 = v12;
    if ( v12 > 0 )
      v5 = (unsigned __int16)v12 | 0x80070000;
    v13 = 144;
    goto LABEL_12;
  }
  v5 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x8Du);
LABEL_15:
  if ( v6 )
  {
    WPF::ProcessHeapImpl::Free(v6);
    v6 = 0LL;
  }
LABEL_4:
  result = (unsigned int)v5;
  *a2 = v6;
  return result;
}

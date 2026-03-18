/*
 * XREFs of ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006F8F0
 * Callers:
 *     ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0HJ@@@@Z @ 0x18006F7D0 (-DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x1801B93D8 (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 * Callees:
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18006F964 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800B1484 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall COcclusionContext::DrawImage(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  int DoesImageOcclude; // eax
  unsigned int v8; // ecx
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // ecx
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v13 = 0;
  if ( !*(_DWORD *)(a1 + 1036) )
  {
    DoesImageOcclude = COcclusionContext::DoesImageOcclude(a1, a2, a4, &v13);
    v4 = DoesImageOcclude;
    if ( DoesImageOcclude < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, DoesImageOcclude, 0x51Cu);
    }
    else if ( v13 )
    {
      v10 = COcclusionContext::CollectRectangleForOcclusion(a1, a3, v9, 0LL);
      v4 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x522u);
    }
  }
  return v4;
}

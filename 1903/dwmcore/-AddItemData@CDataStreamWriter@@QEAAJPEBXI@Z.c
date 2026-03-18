/*
 * XREFs of ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800AEF40
 * Callers:
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x180020BA0 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180021CD0 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x18003F610 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x18003FA2C (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 *     ?GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x18003FB70 (-GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x18003FCE0 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z @ 0x180040320 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x180040AA0 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KK_N@Z @ 0x180041150 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x1800412D0 (-WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z @ 0x180041450 (-WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x1800415E0 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800418B4 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180041A0C (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x180044960 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x180044BA0 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x1800D7EB0 (-PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180157FC0 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180158270 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x180158A10 (-MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180159650 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x180159760 (-VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 */

__int64 __fastcall CDataStreamWriter::AddItemData(CDataStreamWriter *this, const void *a2, unsigned int a3)
{
  CDataStreamWriter *v3; // rbx
  __int64 v5; // r9
  __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rcx
  signed int v9; // edi
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rcx

  v3 = this;
  if ( (*((_QWORD *)this + 6) || *((_DWORD *)this + 14))
    && (this = (CDataStreamWriter *)*((_QWORD *)this + 4),
        v5 = *((unsigned int *)this + 5),
        *((_DWORD *)this + 4) - (int)v5 >= a3) )
  {
    if ( a3 )
    {
      memcpy_0((char *)this + v5 + 24, a2, a3);
      v6 = *((_QWORD *)v3 + 4);
      v7 = *(_DWORD *)(v6 + 20);
      v8 = v7 + a3;
      if ( (unsigned int)v8 < v7 )
      {
        v9 = -2147024362;
        v8 = 0xFFFFFFFFLL;
      }
      else
      {
        v9 = 0;
      }
      *(_DWORD *)(v6 + 20) = v8;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, 0x232u, 0LL);
      }
      else
      {
        v10 = *((_DWORD *)v3 + 11);
        v11 = v10 + a3;
        if ( (unsigned int)v11 < v10 )
        {
          v9 = -2147024362;
          v11 = 0xFFFFFFFFLL;
        }
        else
        {
          v9 = 0;
        }
        *((_DWORD *)v3 + 11) = v11;
        if ( v9 >= 0 )
        {
          *((_DWORD *)v3 + 14) += a3;
          return (unsigned int)v9;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v9, 0x233u, 0LL);
      }
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v9, 0xC2u, 0LL);
      return (unsigned int)v9;
    }
    return 0LL;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x8000FFFF, 0xB6u, 0LL);
    return 2147549183LL;
  }
}

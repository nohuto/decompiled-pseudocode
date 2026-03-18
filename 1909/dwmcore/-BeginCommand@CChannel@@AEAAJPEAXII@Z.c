/*
 * XREFs of ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180056B1C
 * Callers:
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x18001EC50 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180020100 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180054580 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z @ 0x180055430 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x180055BB0 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?VisualSetSize@CChannel@@UEAAJINN@Z @ 0x180055DC0 (-VisualSetSize@CChannel@@UEAAJINN@Z.c)
 *     ?VisualSetTouchTargetRect@CChannel@@UEAAJIAEBUtagRECT@@@Z @ 0x180055EA0 (-VisualSetTouchTargetRect@CChannel@@UEAAJIAEBUtagRECT@@@Z.c)
 *     ?WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@00@Z @ 0x180055F60 (-WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@00@Z.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x180056144 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x1800CC4B0 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800CEA00 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x1800D8470 (-PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801568E0 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180156B90 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x180157330 (-MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180157F70 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x180158080 (-VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z.c)
 * Callees:
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180056BDC (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?CreateRecorder@CChannel@@AEAAJXZ @ 0x180056DE8 (-CreateRecorder@CChannel@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x1800B7B10 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800B7BC0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 */

__int64 __fastcall CChannel::BeginCommand(CDataStreamWriter **this, void *a2, unsigned int a3, int a4)
{
  unsigned int v4; // ebp
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // ebx
  unsigned int v11; // ebp
  int Recorder; // eax

  v4 = a3 + a4;
  if ( a3 + a4 < a3 )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x98u, 0LL);
  }
  else
  {
    if ( this[20] || (Recorder = CChannel::CreateRecorder((CChannel *)this), v10 = Recorder, Recorder >= 0) )
    {
      if ( v4 + 4 < v4 )
      {
        v10 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0x165u, 0LL);
      }
      else
      {
        v8 = CDataStreamWriter::EnsureSize(this[20], v4 + 4);
        v10 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x167u, 0LL);
      }
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0x106u, 0LL);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, Recorder, 0x100u, 0LL);
    }
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v10, 0x99u, 0LL);
    }
    else
    {
      CDataStreamWriter::BeginItem(this[20]);
      CDataStreamWriter::AddItemData(this[20], a2, a3);
    }
  }
  return v11;
}

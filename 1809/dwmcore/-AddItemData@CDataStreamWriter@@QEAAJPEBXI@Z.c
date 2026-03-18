/*
 * XREFs of ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180057B70
 * Callers:
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x18001F3F0 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18001FE30 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x180077A90 (-PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x180096E70 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180099130 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KKH@Z @ 0x180099980 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180099A80 (-WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z @ 0x180099B60 (-WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x180099EE0 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x18009AA40 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009ABB0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x18009C6D0 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJIHIPEBUMilRectF@@0PEBK@Z @ 0x1800BDB40 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJIHIPEBUMilRectF@@0PEBK@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801462A0 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180146510 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x180146BB0 (-MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 *     ?PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z @ 0x180147010 (-PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801476F0 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x1801477F0 (-VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::AddItemData(CDataStreamWriter *this, const void *a2, unsigned int a3)
{
  size_t v4; // rsi
  _DWORD *v6; // rdi
  void *v7; // rax
  int *v8; // r14
  unsigned int v9; // ecx
  int v10; // edx
  int v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v15; // ecx

  v4 = a3;
  if ( (*((_QWORD *)this + 4) || *((_DWORD *)this + 10))
    && (v6 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2)),
        (***((unsigned int (__fastcall ****)(_QWORD))this + 2))(*((_QWORD *)this + 2)) - *v6 >= (unsigned int)v4) )
  {
    if ( (_DWORD)v4 )
    {
      v7 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
      memcpy_0(v7, a2, v4);
      v8 = (int *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
      v9 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
      v10 = v9 + v4;
      if ( v9 + (unsigned int)v4 < v9 )
      {
        v11 = -2147024362;
        v10 = -1;
      }
      else
      {
        v11 = 0;
      }
      *v8 = v10;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v11, 0x212u);
      }
      else
      {
        v12 = *((_DWORD *)this + 7);
        v13 = v12 + v4;
        if ( v12 + (unsigned int)v4 < v12 )
        {
          v11 = -2147024362;
          v13 = -1;
        }
        else
        {
          v11 = 0;
        }
        *((_DWORD *)this + 7) = v13;
        if ( v11 >= 0 )
        {
          *((_DWORD *)this + 10) += v4;
          return (unsigned int)v11;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v11, 0x213u);
      }
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v11, 0xAFu);
      return (unsigned int)v11;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147418113, 0xA3u);
    return 2147549183LL;
  }
}

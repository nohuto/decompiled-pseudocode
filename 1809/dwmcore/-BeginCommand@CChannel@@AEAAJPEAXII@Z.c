/*
 * XREFs of ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8
 * Callers:
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x18001F3F0 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18001FE30 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x180077A90 (-PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x180096E70 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180099130 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x180099EE0 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?VisualSetSize@CChannel@@UEAAJINN@Z @ 0x18009A100 (-VisualSetSize@CChannel@@UEAAJINN@Z.c)
 *     ?VisualSetTouchTargetRect@CChannel@@UEAAJIAEBUtagRECT@@@Z @ 0x18009A1C0 (-VisualSetTouchTargetRect@CChannel@@UEAAJIAEBUtagRECT@@@Z.c)
 *     ?WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@00@Z @ 0x18009A260 (-WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@00@Z.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18009A3F4 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x18009A510 (-GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x18009A614 (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x18009A730 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z @ 0x18009C6D0 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIIPEBII@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJIHIPEBUMilRectF@@0PEBK@Z @ 0x1800BDB40 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJIHIPEBUMilRectF@@0PEBK@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801462A0 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180146510 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x180146BB0 (-MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 *     ?PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z @ 0x180147010 (-PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1801476F0 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x1801477F0 (-VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z.c)
 * Callees:
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180057B70 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x1800584C0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18009AD64 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18009B7F0 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::BeginCommand(struct CCommandBatch **this, void *a2, unsigned int a3, int a4)
{
  unsigned int v4; // eax
  unsigned int v5; // r12d
  unsigned int v6; // ebx
  const void *v8; // rsi
  int v9; // edi
  CDataStreamWriter **v10; // r15
  CDataStreamWriter *v11; // rbp
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // r14
  int v18; // ebx
  int v19; // eax
  int v21; // eax
  int v22; // ebx
  unsigned int v23; // eax
  int NewBlock; // eax
  unsigned int v25; // ecx
  unsigned int v26; // [rsp+20h] [rbp-38h]

  v4 = a4 + a3;
  v5 = -1;
  v6 = -1;
  v8 = a2;
  if ( a4 + a3 >= a3 )
    v6 = a4 + a3;
  v9 = v4 < a3 ? 0x80070216 : 0;
  if ( v4 < a3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v9, 0x99u);
    return (unsigned int)v9;
  }
  v9 = 0;
  v10 = this + 20;
  if ( !this[20] )
  {
    v21 = CCommandBatch::Create((unsigned int)this, this + 20);
    v9 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v21, 0x11Au);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v9, 0xFFu);
    goto LABEL_39;
  }
  v11 = *v10;
  v12 = v6 + 4;
  v13 = -1;
  if ( v6 + 4 >= v6 )
    v13 = v6 + 4;
  v9 = v12 < v6 ? 0x80070216 : 0;
  if ( v12 < v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v9, 0x157u);
    goto LABEL_18;
  }
  v14 = 0LL;
  v15 = (v13 + 3) & 0xFFFFFFFC;
  v16 = v15;
  if ( v15 < v13 )
    v16 = v13;
  v9 = v15 < v13 ? 0x80070216 : 0;
  if ( v15 < v13 )
  {
    v26 = 367;
  }
  else
  {
    v17 = *((_QWORD *)v11 + 2);
    if ( v17 )
    {
      v18 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v17 + 8LL))(*((_QWORD *)v11 + 2), 0LL);
      v19 = (**(__int64 (__fastcall ***)(__int64))v17)(v17);
      v17 = *((_QWORD *)v11 + 2);
      v14 = (unsigned int)(v19 - v18);
      if ( v17 )
      {
        if ( (unsigned int)v14 >= v16 )
          goto LABEL_15;
      }
    }
    v22 = 0x10000;
    if ( *((_DWORD *)v11 + 6) < 0x10000u )
      v22 = *((_DWORD *)v11 + 6);
    if ( v17 && !*(_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 8LL))(v17, v14) )
    {
      WPF::ProcessHeapImpl::Free(*((void **)v11 + 2));
      *((_QWORD *)v11 + 2) = 0LL;
    }
    v23 = v16 + v22;
    if ( v16 + v22 >= v16 )
      v5 = v16 + v22;
    v9 = v23 < v16 ? 0x80070216 : 0;
    if ( v23 >= v16 )
    {
      NewBlock = CDataStreamWriter::AllocateNewBlock(v11, v5);
      v9 = NewBlock;
      if ( NewBlock < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, NewBlock, 0x1BBu);
      goto LABEL_15;
    }
    v26 = 441;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v9, v26);
LABEL_15:
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v9, 0x159u);
  v8 = a2;
LABEL_18:
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v9, 0x104u);
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v9, 0x9Au);
    return (unsigned int)v9;
  }
  CDataStreamWriter::BeginItem(*v10);
  CDataStreamWriter::AddItemData(*v10, v8, a3);
  return (unsigned int)v9;
}

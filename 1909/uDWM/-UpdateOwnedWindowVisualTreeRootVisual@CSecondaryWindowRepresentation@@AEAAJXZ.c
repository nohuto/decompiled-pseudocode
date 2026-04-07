/*
 * XREFs of ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x180032754
 * Callers:
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUMilPointAndSizeL@@@Z @ 0x180032538 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180032674 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800147A0 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001F3C8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800212F4 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021F8C (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18002343C (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800328F4 (-Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(
        CSecondaryWindowRepresentation *this)
{
  unsigned int v1; // ebx
  CBaseObject *v2; // rbp
  struct CBaseGeometryProxy *v3; // r14
  CRenderDataVisual *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  CBaseObject *v11; // rsi
  int v12; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  void *v17; // [rsp+28h] [rbp-30h]
  struct CBaseGeometryProxy *v18; // [rsp+60h] [rbp+8h] BYREF
  struct CRenderDataInstruction *v19; // [rsp+68h] [rbp+10h] BYREF
  CBaseObject *v20; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0;
  v2 = 0LL;
  v20 = 0LL;
  v3 = 0LL;
  v19 = 0LL;
  v5 = (CRenderDataVisual *)*((_QWORD *)this + 7);
  v18 = 0LL;
  if ( !v5 )
    return v1;
  CRenderDataVisual::ClearInstructions(v5);
  if ( *((_QWORD *)this + 65) )
  {
    v14 = ResourceHelper::CreateRectangleGeometry(
            *((_DWORD *)this + 132),
            *((_DWORD *)this + 133),
            *((_DWORD *)this + 134),
            *((_DWORD *)this + 135),
            &v18);
    v1 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xF4u, v17);
      v3 = v18;
LABEL_15:
      if ( v3 )
        CBaseObject::Release(v3);
      return v1;
    }
    v3 = v18;
    v15 = CDrawGeometryInstruction::Create(*((struct CBaseLegacyMilBrushProxy **)this + 65), v18, &v19);
    v1 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xF8u, v17);
      v2 = v19;
    }
    else
    {
      v2 = v19;
      v16 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 7), v19);
      v1 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xFAu, v17);
    }
LABEL_13:
    if ( v2 )
      CBaseObject::Release(v2);
    goto LABEL_15;
  }
  v6 = 0LL;
  v7 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) == 1 )
    goto LABEL_18;
  if ( *((_DWORD *)this + 18) != 2 )
  {
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_7;
    if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v7 + 440) + 80LL);
      goto LABEL_7;
    }
    goto LABEL_18;
  }
  v8 = *(_QWORD *)(v7 + 432);
  if ( !v8 )
  {
LABEL_18:
    v6 = v7;
    goto LABEL_7;
  }
  v6 = *(_QWORD *)(v8 + 32);
LABEL_7:
  v9 = *(_QWORD *)(v6 + 400);
  if ( v9 )
  {
    v10 = CDrawVisualTreeInstruction::Create(*(struct CVisual **)(v9 + 256), &v20);
    v11 = v20;
    v1 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x104u, v17);
    }
    else
    {
      v12 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 7), v20);
      v1 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x107u, v17);
    }
    if ( v11 )
    {
      CBaseObject::Release(v11);
      goto LABEL_13;
    }
  }
  return v1;
}

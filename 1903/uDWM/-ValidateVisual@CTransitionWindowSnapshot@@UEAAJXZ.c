/*
 * XREFs of ?ValidateVisual@CTransitionWindowSnapshot@@UEAAJXZ @ 0x18003CA00
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001EEF4 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021984 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180023738 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800276D0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::ValidateVisual(CTransitionWindowSnapshot *this)
{
  int v1; // eax
  CBaseObject *v2; // rsi
  struct CRectangleGeometryProxy **v4; // rsi
  int v5; // edx
  int v6; // r9d
  int v7; // eax
  int v8; // r8d
  int v9; // ecx
  int v10; // r8d
  int v11; // eax
  int RectangleGeometry; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  void *v18; // [rsp+28h] [rbp-10h]
  struct CRenderDataInstruction *v19; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 20);
  v2 = 0LL;
  v19 = 0LL;
  if ( (v1 & 0x1000) == 0 )
  {
LABEL_12:
    v16 = CRenderDataVisual::ValidateVisual(this);
    v13 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xABu, v18);
    goto LABEL_13;
  }
  if ( *((_DWORD *)this + 68) )
  {
LABEL_11:
    *((_DWORD *)this + 20) = v1 & 0xFFFFEFFF;
    goto LABEL_12;
  }
  v4 = (struct CRectangleGeometryProxy **)((char *)this + 304);
  v5 = *((_DWORD *)this + 85);
  v6 = 0;
  v7 = *((_DWORD *)this + 86);
  v8 = *((_DWORD *)this + 87) - v5;
  v9 = *((_DWORD *)this + 84);
  if ( v8 >= 0 )
    v6 = v8;
  v10 = 0;
  v11 = v7 - v9;
  if ( v11 >= 0 )
    v10 = v11;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(v9, v5, v10, v6, v4);
  v13 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0xA3u, v18);
    return v13;
  }
  v14 = CDrawGeometryInstruction::Create(*((struct CBaseLegacyMilBrushProxy **)this + 37), *v4, &v19);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xA4u, v18);
    v2 = v19;
  }
  else
  {
    v2 = v19;
    v15 = CRenderDataVisual::AddInstruction(this, v19);
    v13 = v15;
    if ( v15 >= 0 )
    {
      v1 = *((_DWORD *)this + 20);
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xA5u, v18);
  }
LABEL_13:
  if ( v2 )
    CBaseObject::Release(v2);
  return v13;
}

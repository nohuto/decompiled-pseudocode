/*
 * XREFs of ?UpdateBitmap@CImage@@QEAAJXZ @ 0x1800331EC
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x180033190 (-ValidateVisual@CImage@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000F790 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x1800332CC (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateOrUpdateImageBrush@CBitmapSource@@QEAAJPEAPEAVCResource@@00W4Enum@MilStretch@@@Z @ 0x180077E48 (-CreateOrUpdateImageBrush@CBitmapSource@@QEAAJPEAPEAVCResource@@00W4Enum@MilStretch@@@Z.c)
 */

__int64 __fastcall CImage::UpdateBitmap(CImage *this)
{
  CBaseObject *v1; // rsi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  struct CBitmapSource *v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v12; // rcx
  int updated; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  CBaseObject *v17; // [rsp+40h] [rbp+8h] BYREF
  struct CDrawGeometryInstruction *v18; // [rsp+48h] [rbp+10h] BYREF

  v17 = 0LL;
  v1 = 0LL;
  v18 = 0LL;
  if ( *((_QWORD *)this + 36) )
  {
    v12 = *((_QWORD *)this + 35);
    if ( v12 )
    {
      if ( !*((_QWORD *)this + 39) )
      {
        CVisual::SetDirtyFlags(this, 32);
        v12 = *((_QWORD *)this + 35);
      }
      updated = CBitmapSource::CreateOrUpdateImageBrush(
                  v12,
                  (char *)this + 296,
                  (char *)this + 304,
                  (char *)this + 312,
                  *((_DWORD *)this + 84));
      v7 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x7Cu);
        return v7;
      }
      if ( *((_DWORD *)this + 68) )
        return v7;
      v14 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 37), *((struct CResource **)this + 36), &v18);
      v7 = v14;
      if ( v14 >= 0 )
      {
        v1 = v18;
        v15 = CRenderDataVisual::AddInstruction(this, v18);
        v7 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x86u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x84u);
        v1 = v18;
      }
      goto LABEL_17;
    }
    v16 = CRenderDataVisual::ClearInstructions(this);
    v7 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x8Bu);
  }
  else
  {
    v3 = (CBaseObject *)*((_QWORD *)this + 37);
    if ( v3 )
    {
      CBaseObject::Release(v3);
      *((_QWORD *)this + 37) = 0LL;
    }
    v4 = (CBaseObject *)*((_QWORD *)this + 38);
    if ( v4 )
    {
      CBaseObject::Release(v4);
      *((_QWORD *)this + 38) = 0LL;
    }
    v5 = (CBaseObject *)*((_QWORD *)this + 39);
    if ( v5 )
    {
      CBaseObject::Release(v5);
      *((_QWORD *)this + 39) = 0LL;
    }
    v6 = CRenderDataVisual::ClearInstructions(this);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x94u);
      return v7;
    }
    v8 = (struct CBitmapSource *)*((_QWORD *)this + 35);
    if ( v8 )
    {
      v9 = CDrawNineGridInstruction::Create(v8, &v17);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1B0u);
      if ( (v7 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x98u);
      }
      else
      {
        v10 = CRenderDataVisual::AddInstruction(this, v17);
        v7 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x99u);
      }
      if ( v17 )
      {
        CBaseObject::Release(v17);
LABEL_17:
        if ( v1 )
          CBaseObject::Release(v1);
      }
    }
  }
  return v7;
}

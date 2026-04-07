/*
 * XREFs of ?UpdateBitmap@CImage@@QEAAJXZ @ 0x180031774
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x1800213A0 (-ValidateVisual@CImage@@UEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800212F4 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021F8C (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x1800317FC (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CImage::UpdateBitmap(struct CBitmapSource **this)
{
  int v2; // eax
  int v3; // ebx
  struct CBitmapSource *v4; // rcx
  int v5; // eax
  int v6; // eax
  void *v8; // [rsp+28h] [rbp-10h]
  CBaseObject *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v2 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x42u, v8);
  }
  else
  {
    v4 = this[35];
    if ( v4 )
    {
      v5 = CDrawNineGridInstruction::Create(v4, &v9);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1A4u, v8);
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x46u, v8);
      }
      else
      {
        v6 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v9);
        v3 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x47u, v8);
      }
      if ( v9 )
        CBaseObject::Release(v9);
    }
  }
  return (unsigned int)v3;
}

/*
 * XREFs of ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800AB594
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180008610 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180089E30 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x18008A1E0 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006B6C (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000F790 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18003B690 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@1AEBUtagRECT@@@Z @ 0x1800AAAC4 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::SetVisual(
        struct tagRECT *this,
        struct CDesktopThumbnailCVI *a2,
        const struct tagRECT *a3)
{
  volatile signed __int32 *v5; // rbx
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rdx
  int v10; // eax
  struct CResource *v11; // rdi
  volatile signed __int32 *v12; // rcx
  struct CResource *v14; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v15; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  CBaseObject *v17; // [rsp+70h] [rbp+30h] BYREF
  CBaseObject *v18; // [rsp+88h] [rbp+48h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  CopyRect(this + 20, a3);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v14);
  v7 = CDesktopThumbnailCVI::CreateBrush(a2, &v14, 0LL, &v18, a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 488LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_10;
  }
  v10 = CResource::Create(0x1Au, *(_QWORD *)(*(_QWORD *)&this[1].left + 16LL), &v17);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E9,
      (__int64)"windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v10);
    v5 = (volatile signed __int32 *)v17;
LABEL_10:
    v12 = (volatile signed __int32 *)v18;
    goto LABEL_20;
  }
  v5 = (volatile signed __int32 *)v17;
  v11 = v14;
  v7 = CDrawGeometryInstruction::Create(v14, v17, &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 490LL;
    goto LABEL_9;
  }
  v7 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 491LL;
    goto LABEL_9;
  }
  CVisual::SetInterpolationMode((unsigned int *)this, 1u);
  *(_QWORD *)&this[18].right = v11;
  if ( v11 )
  {
    _InterlockedAdd((volatile signed __int32 *)v11 + 2, 1u);
    v5 = (volatile signed __int32 *)v17;
  }
  *(_QWORD *)&this[17].right = v5;
  if ( v5 )
  {
    _InterlockedAdd(v5 + 2, 1u);
    v5 = (volatile signed __int32 *)v17;
  }
  *(_QWORD *)&this[19].left = a2;
  if ( a2 )
  {
    _InterlockedAdd((volatile signed __int32 *)a2 + 2, 1u);
    v5 = (volatile signed __int32 *)v17;
  }
  v12 = (volatile signed __int32 *)v18;
  *(_QWORD *)&this[18].left = v18;
  if ( v12 )
  {
    _InterlockedAdd(v12 + 2, 1u);
    v5 = (volatile signed __int32 *)v17;
    v12 = (volatile signed __int32 *)v18;
  }
  v8 = 0;
LABEL_20:
  if ( v12 )
    CBaseObject::Release((CBaseObject *)v12);
  if ( v5 )
    CBaseObject::Release((CBaseObject *)v5);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v14);
  if ( v15 )
    CBaseObject::Release(v15);
  return v8;
}

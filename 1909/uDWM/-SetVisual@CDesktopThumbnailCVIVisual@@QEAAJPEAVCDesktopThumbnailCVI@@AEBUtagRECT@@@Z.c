/*
 * XREFs of ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800AF574
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180027A30 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x18008FF10 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x1800902B0 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180002FE4 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021F8C (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18002343C (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180032424 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x180037540 (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCResource@@AEBUtagRECT@@@Z @ 0x1800AEAE0 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
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
  struct CBaseLegacyMilBrushProxy *v11; // rdi
  struct CResource *v12; // rax
  struct CBaseLegacyMilBrushProxy *v14; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v15; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  CBaseObject *v17; // [rsp+70h] [rbp+30h] BYREF
  struct CResource *v18; // [rsp+88h] [rbp+48h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  CopyRect(this + 20, a3);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v14);
  v7 = CDesktopThumbnailCVI::CreateBrush(a2, &v14, 0LL, &v18, a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 478LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_19;
  }
  v10 = CCompositor::CreateProxy<CRectangleGeometryProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          (__int64 *)&v17);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DF,
      (__int64)"windows\\dwm\\udwm\\desktopthumbnail.cpp",
      (const char *)(unsigned int)v10);
    v5 = (volatile signed __int32 *)v17;
    goto LABEL_19;
  }
  v5 = (volatile signed __int32 *)v17;
  v11 = v14;
  v7 = CDrawGeometryInstruction::Create(v14, v17, &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 480LL;
    goto LABEL_9;
  }
  v7 = CRenderDataVisual::AddInstruction((CRenderDataVisual *)this, v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 481LL;
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
  v12 = v18;
  *(_QWORD *)&this[18].left = v18;
  if ( v12 )
  {
    _InterlockedAdd((volatile signed __int32 *)v12 + 2, 1u);
    v5 = (volatile signed __int32 *)v17;
  }
  v8 = 0;
LABEL_19:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v18);
  if ( v5 )
    CBaseObject::Release((CBaseObject *)v5);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v14);
  if ( v15 )
    CBaseObject::Release(v15);
  return v8;
}

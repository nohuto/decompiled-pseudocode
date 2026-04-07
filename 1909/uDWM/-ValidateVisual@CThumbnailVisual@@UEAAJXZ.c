/*
 * XREFs of ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18000FFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180003834 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18000B444 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000DD38 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x18000E010 (-_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18000E300 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180010580 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180010610 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180014730 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800212F4 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x1800225F0 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18002D65C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180032424 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUMilPointAndSizeL@@@Z @ 0x180032538 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLe.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180032674 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180036AD8 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18004C15C (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0d @ 0x18007DFB8 (McTemplateU0d.c)
 */

__int64 __fastcall CThumbnailVisual::ValidateVisual(CThumbnailVisual *this)
{
  int v1; // eax
  int updated; // edi
  CSecondaryWindowRepresentation *v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  CSecondaryWindowRepresentation *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdx
  CBaseObject *v15; // rcx
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0x2000) != 0 )
  {
    updated = CThumbnailVisual::EnsureVisualBrush(this);
    if ( updated < 0 )
    {
      v14 = 62LL;
      goto LABEL_41;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
    *((_DWORD *)this + 20) &= ~0x2000u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x80u) != 0 )
  {
    v4 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 47);
    if ( v4 )
    {
      updated = CSecondaryWindowRepresentation::Validate(v4);
      if ( updated < 0 )
      {
        v14 = 73LL;
        goto LABEL_41;
      }
      v1 = *((_DWORD *)this + 20);
    }
    v1 &= ~0x80u;
    *((_DWORD *)this + 20) = v1;
  }
  if ( (v1 & 0x4000) != 0 )
  {
    updated = CThumbnailVisual::UpdateSourceRect(this);
    if ( updated < 0 )
    {
      v14 = 81LL;
      goto LABEL_41;
    }
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  updated = CRenderDataVisual::UpdateLayout(this, 0);
  if ( updated < 0 )
  {
    v14 = 86LL;
    goto LABEL_41;
  }
  v5 = *((_DWORD *)this + 20);
  if ( (v5 & 0x1000) != 0 )
  {
    updated = CThumbnailVisual::UpdateDestinationRect(this);
    if ( updated < 0 )
    {
      v14 = 93LL;
      goto LABEL_41;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
    *((_DWORD *)this + 20) &= ~0x1000u;
    v5 = *((_DWORD *)this + 20);
  }
  if ( (v5 & 0x8000) != 0 )
  {
    if ( CThumbnailVisual::_IsImmersiveIconic(this) )
    {
      if ( (*((_DWORD *)this + 20) & 0x10000) != 0 )
      {
        updated = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
        if ( updated < 0 )
        {
          v14 = 105LL;
          goto LABEL_41;
        }
        updated = CRenderDataVisual::ClearInstructions(this);
        if ( updated < 0 )
        {
          v14 = 106LL;
          goto LABEL_41;
        }
        v15 = (CBaseObject *)*((_QWORD *)this + 47);
        if ( v15 )
        {
          CBaseObject::Release(v15);
          *((_QWORD *)this + 47) = 0LL;
        }
        *((_BYTE *)this + 474) = 0;
        updated = CThumbnailVisual::EnsureVisualBrush(this);
        if ( updated < 0 )
        {
          v14 = 109LL;
          goto LABEL_41;
        }
        updated = CThumbnailVisual::UpdateSourceRect(this);
        if ( updated < 0 )
        {
          v14 = 110LL;
          goto LABEL_41;
        }
        updated = CThumbnailVisual::UpdateDestinationRect(this);
        if ( updated < 0 )
        {
          v14 = 111LL;
          goto LABEL_41;
        }
        *((_DWORD *)this + 20) &= 0xFFFE8F7F;
      }
    }
    else
    {
      if ( !CThumbnailVisual::_ShouldUseSecondaryWindowVisual(this) )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0d(v6, &UdwmThumbnailVisualValidated_Info, 0LL);
        updated = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
        if ( updated < 0 )
        {
          v14 = 128LL;
        }
        else
        {
          updated = CRenderDataVisual::ClearInstructions(this);
          if ( updated < 0 )
          {
            v14 = 129LL;
          }
          else
          {
            updated = CThumbnailVisual::EnsureVisualBrush(this);
            if ( updated >= 0 )
            {
              v7 = *((_QWORD *)this + 47);
              if ( v7 )
              {
                v8 = *(_QWORD *)(v7 + 48);
                if ( v8 )
                {
                  updated = CVisualProxy::SetClip(*(CVisualProxy **)(v8 + 16), 0LL);
                  if ( updated < 0 )
                  {
                    v14 = 134LL;
                    goto LABEL_41;
                  }
                }
              }
              if ( !*(_BYTE *)(*((_QWORD *)this + 46) + 42LL) )
                CVisual::ClearInterpolationMode(this);
              goto LABEL_28;
            }
            v14 = 130LL;
          }
        }
LABEL_41:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (unsigned int)"windows\\dwm\\udwm\\thumbnailvisual.cpp",
          (const char *)(unsigned int)updated,
          v16);
        return (unsigned int)updated;
      }
      updated = CRenderDataVisual::ClearInstructions(this);
      if ( updated < 0 )
      {
        v14 = 121LL;
        goto LABEL_41;
      }
      updated = CThumbnailVisual::EnsureSecondaryWindowVisual(this);
      if ( updated < 0 )
      {
        v14 = 122LL;
        goto LABEL_41;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0d(v13, &UdwmThumbnailVisualValidated_Info, 1LL);
    }
LABEL_28:
    *((_DWORD *)this + 20) &= ~0x8000u;
    v5 = *((_DWORD *)this + 20);
  }
  if ( (v5 & 0x20000) != 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 46) + 44LL) & 0x30000000) == 0x10000000 )
      CVisual::SetInterpolationMode(this, 6LL);
    else
      CVisual::ClearInterpolationMode(this);
    *((_DWORD *)this + 20) &= ~0x20000u;
    v5 = *((_DWORD *)this + 20);
  }
  if ( (v5 & 0x40000) != 0 )
  {
    v9 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 47);
    if ( v9 )
    {
      CSecondaryWindowRepresentation::SnapshotIfStatic(
        v9,
        *((struct CCachedVisualImageProxy **)this + 54),
        *((struct CImageLegacyMilBrushProxy **)this + 48),
        (CThumbnailVisual *)((char *)this + 500));
      v5 = *((_DWORD *)this + 20);
    }
    *((_DWORD *)this + 20) = v5 & 0xFFFBFFFF;
  }
  v10 = CRenderDataVisual::ValidateVisual(this);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAE,
    (unsigned int)"windows\\dwm\\udwm\\thumbnailvisual.cpp",
    (const char *)(unsigned int)v10,
    v16);
  return v11;
}

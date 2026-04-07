/*
 * XREFs of ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180008CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x180008760 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800089D0 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180008EA0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180009580 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18000976C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x18000984C (-_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x180009EE0 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18000A510 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180022DA0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x1800255D0 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800358A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180036ED8 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18003B690 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18004A468 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x1800779F8 (McTemplateU0d.c)
 */

__int64 __fastcall CThumbnailVisual::ValidateVisual(CThumbnailVisual *this)
{
  int v1; // eax
  int v3; // eax
  unsigned int v4; // edi
  CSecondaryWindowRepresentation *v5; // rcx
  int v6; // eax
  int updated; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  CSecondaryWindowRepresentation *v17; // rcx
  int v18; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  CBaseObject *v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // eax

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0x2000) != 0 )
  {
    v3 = CThumbnailVisual::EnsureVisualBrush(this);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x40u);
      return v4;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
    *((_DWORD *)this + 20) &= ~0x2000u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0x80u) != 0 )
  {
    v5 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 47);
    if ( v5 )
    {
      v6 = CSecondaryWindowRepresentation::Validate(v5);
      v4 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x4Bu);
        return v4;
      }
      v1 = *((_DWORD *)this + 20);
    }
    v1 &= ~0x80u;
    *((_DWORD *)this + 20) = v1;
  }
  if ( (v1 & 0x4000) != 0 )
  {
    updated = CThumbnailVisual::UpdateSourceRect(this);
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x53u);
      return v4;
    }
    *((_DWORD *)this + 20) &= ~0x4000u;
  }
  v8 = CRenderDataVisual::UpdateLayout(this, 0);
  v4 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x58u);
  }
  else
  {
    v9 = *((_DWORD *)this + 20);
    if ( (v9 & 0x1000) != 0 )
    {
      v10 = CThumbnailVisual::UpdateDestinationRect(this);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x5Fu);
        return v4;
      }
      CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
      *((_DWORD *)this + 20) &= ~0x1000u;
      v9 = *((_DWORD *)this + 20);
    }
    if ( (v9 & 0x8000) != 0 )
    {
      if ( CThumbnailVisual::_IsImmersiveIconic(this) )
      {
        if ( (*((_DWORD *)this + 20) & 0x10000) != 0 )
        {
          v23 = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
          v4 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x6Bu);
            return v4;
          }
          v24 = CRenderDataVisual::ClearInstructions(this);
          v4 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x6Cu);
            return v4;
          }
          v25 = (CBaseObject *)*((_QWORD *)this + 47);
          if ( v25 )
          {
            CBaseObject::Release(v25);
            *((_QWORD *)this + 47) = 0LL;
          }
          *((_BYTE *)this + 474) = 0;
          v26 = CThumbnailVisual::EnsureVisualBrush(this);
          v4 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x6Fu);
            return v4;
          }
          v27 = CThumbnailVisual::UpdateSourceRect(this);
          v4 = v27;
          if ( v27 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x70u);
            return v4;
          }
          v28 = CThumbnailVisual::UpdateDestinationRect(this);
          v4 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x71u);
            return v4;
          }
          *((_DWORD *)this + 20) &= 0xFFFE8F7F;
        }
      }
      else if ( CThumbnailVisual::_ShouldUseSecondaryWindowVisual(this) )
      {
        v20 = CRenderDataVisual::ClearInstructions(this);
        v4 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x7Bu);
          return v4;
        }
        v21 = CThumbnailVisual::EnsureSecondaryWindowVisual(this);
        v4 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x7Cu);
          return v4;
        }
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0d(v22, &UdwmThumbnailVisualValidated_Info, 1LL);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0d(v11, &UdwmThumbnailVisualValidated_Info, 0LL);
        v12 = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
        v4 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x82u);
          return v4;
        }
        v13 = CRenderDataVisual::ClearInstructions(this);
        v4 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x83u);
          return v4;
        }
        v14 = CThumbnailVisual::EnsureVisualBrush(this);
        v4 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x84u);
          return v4;
        }
        v15 = *((_QWORD *)this + 47);
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 48);
          if ( v16 )
          {
            v29 = *(_QWORD *)(v16 + 16);
            v30 = v29 ? *(unsigned int *)(v29 + 24) : 0LL;
            v31 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                        + 5)
                                                                     + 400LL))(
                    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                    v30,
                    0LL);
            v4 = v31;
            if ( v31 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x8Au);
              return v4;
            }
          }
        }
        if ( !*(_BYTE *)(*((_QWORD *)this + 46) + 42LL) )
          CVisual::ClearInterpolationMode(this);
      }
      *((_DWORD *)this + 20) &= ~0x8000u;
      v9 = *((_DWORD *)this + 20);
    }
    if ( (v9 & 0x20000) != 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)this + 46) + 44LL) & 0x30000000) == 0x10000000 )
        CVisual::SetInterpolationMode(this, 6LL);
      else
        CVisual::ClearInterpolationMode(this);
      *((_DWORD *)this + 20) &= ~0x20000u;
      v9 = *((_DWORD *)this + 20);
    }
    if ( (v9 & 0x40000) != 0 )
    {
      v17 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 47);
      if ( v17 )
      {
        CSecondaryWindowRepresentation::SnapshotIfStatic(
          v17,
          *((struct CResource **)this + 54),
          *((struct CResource **)this + 48),
          (CThumbnailVisual *)((char *)this + 500));
        v9 = *((_DWORD *)this + 20);
      }
      *((_DWORD *)this + 20) = v9 & 0xFFFBFFFF;
    }
    v18 = CRenderDataVisual::ValidateVisual(this);
    v4 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xB2u);
  }
  return v4;
}

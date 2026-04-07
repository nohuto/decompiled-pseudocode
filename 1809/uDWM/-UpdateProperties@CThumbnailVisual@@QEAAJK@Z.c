/*
 * XREFs of ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180009198
 * Callers:
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180008478 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180008670 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18002D8AC (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 * Callees:
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180008C34 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180008EA0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180009580 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18000976C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x1800097DC (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAPEAV4@@Z @ 0x180009D50 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAP.c)
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x18000A2BC (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180012470 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180018DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001D720 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180020D8C (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180021410 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1800247DC (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027500 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B57C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z @ 0x180084604 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x180086A9C (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateProperties(CSecondaryWindowRepresentation **this, unsigned int a2)
{
  int v2; // esi
  int v3; // edi
  int updated; // r14d
  CSecondaryWindowRepresentation *v6; // rax
  int v7; // edx
  int v8; // ecx
  LONG v9; // eax
  LONG v10; // eax
  int BrushForCVI; // eax
  CSecondaryWindowRepresentation *v12; // rax
  struct tagPOINT **v14; // r14
  struct tagPOINT v15; // rcx
  struct IDwmWindow *v16; // rax
  __m128i *v17; // rbp
  __int64 v18; // r10
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  CBaseObject *v22; // rcx
  CBaseObject *v23; // rcx
  CBaseObject *v24; // rcx
  CBaseObject *v25; // rcx
  CBaseObject *v26; // rcx
  CBaseObject *v27; // rcx
  CSecondaryWindowRepresentation *v28; // rax
  char v29; // al
  double v30; // xmm1_8
  int v31; // r9d
  CSecondaryWindowRepresentation *v32; // rax
  double v33; // xmm1_8
  CBaseObject *v34; // rcx
  CBaseObject *v35; // rcx
  CSecondaryWindowRepresentation *v36; // rdx
  bool v37; // r10
  int v38; // r8d
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  __int64 v44; // rdx
  CBaseObject *v45; // rcx
  CBaseObject *v46; // rcx
  CBaseObject *v47; // rcx
  CBaseObject *v48; // rcx
  CBaseObject *v49; // rcx
  unsigned int v50; // [rsp+20h] [rbp-38h]
  struct tagPOINT v51; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  v3 = 0;
  updated = CThumbnailVisual::_UpdateAnimatedProperties((CThumbnailVisual *)this, a2);
  if ( (v2 & 4) != 0 )
  {
    v28 = this[46];
    if ( v28 )
    {
      v29 = *((_BYTE *)v28 + 43);
      if ( *((_BYTE *)this + 356) != v29 )
      {
        *((_BYTE *)this + 356) = v29;
        if ( v29 )
        {
          v30 = 0.0;
          this[42] = this[23];
        }
        else
        {
          v30 = *((double *)this + 42);
        }
        CVisual::SetOpacity((CVisual *)this, v30);
      }
    }
  }
  if ( updated < 0 && (v2 & 1) != 0 && this[46] )
  {
    if ( CThumbnailVisual::_IsThumbnailCVIStatic((CThumbnailVisual *)this) )
    {
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x4000u);
    }
    else
    {
      v51 = (struct tagPOINT)*((_QWORD *)this[46] + 6);
      CVisual::SetOffset((CVisual *)this, &v51);
    }
    v6 = this[46];
    v7 = *((_DWORD *)v6 + 15) - *((_DWORD *)v6 + 13);
    v8 = *((_DWORD *)v6 + 14) - *((_DWORD *)v6 + 12);
    v9 = 0;
    if ( v8 >= 0 )
      v9 = v8;
    v51.x = v9;
    v10 = 0;
    if ( v7 >= 0 )
      v10 = v7;
    v51.y = v10;
    BrushForCVI = (*((__int64 (__fastcall **)(CSecondaryWindowRepresentation **, struct tagPOINT *))*this + 12))(
                    this,
                    &v51);
    v3 = BrushForCVI;
    if ( BrushForCVI < 0 )
    {
      v50 = 323;
      goto LABEL_76;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x1000u);
    if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this) )
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x10000u);
  }
  if ( !*((_BYTE *)this + 356) && updated < 0 && (v2 & 4) != 0 )
  {
    v32 = this[46];
    if ( v32 )
    {
      if ( (*((_BYTE *)v32 + 44) & 4) != 0 )
      {
        v33 = (double)*((unsigned __int8 *)v32 + 80) / 255.0;
        *((double *)this + 42) = v33;
        CVisual::SetOpacity((CVisual *)this, v33);
      }
    }
  }
  if ( (v2 & 2) != 0 )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x4000u);
  if ( (v2 & 0x10) != 0
    && (!CWindowData::IsImmersiveWindow(*((CWindowData **)this[46] + 3))
     || !AreAllMarginsZero((const struct _MARGINS *)(*((_QWORD *)this[46] + 3) + 64LL))) )
  {
    v25 = this[48];
    if ( v25 )
    {
      CBaseObject::Release(v25);
      this[48] = 0LL;
    }
    v26 = this[54];
    if ( v26 )
    {
      CBaseObject::Release(v26);
      this[54] = 0LL;
    }
    v27 = this[47];
    if ( v27 )
    {
      CBaseObject::Release(v27);
      this[47] = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000u);
  }
  if ( (v2 & 8) != 0 )
  {
    v12 = this[46];
    if ( v12 )
    {
      *((_BYTE *)this + 472) = *(_DWORD *)((char *)v12 + 81) != 0;
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000u);
    }
  }
  if ( (v2 & 0x80000) != 0 )
  {
    BrushForCVI = CVisual::MoveToFront((CVisual *)this, 0);
    v3 = BrushForCVI;
    if ( BrushForCVI < 0 )
    {
      v50 = 368;
      goto LABEL_76;
    }
  }
  if ( (v2 & 0x400000) != 0 )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000u);
  if ( (v2 & 0xC000000) == 0xC000000 )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000u);
  if ( (v2 & 0x30000000) == 0x30000000 )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x20000u);
  if ( (v2 & 0xC0000000) == 0xC0000000 )
  {
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000u);
    if ( (v2 & 0x40000000) != 0 )
    {
      BrushForCVI = CThumbnailVisual::EnsureVisualBrush((CThumbnailVisual *)this);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v50 = 391;
        goto LABEL_76;
      }
    }
    else
    {
      v34 = this[48];
      if ( v34 )
      {
        CBaseObject::Release(v34);
        this[48] = 0LL;
      }
      v35 = this[54];
      if ( v35 )
      {
        CBaseObject::Release(v35);
        this[54] = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000u);
    }
  }
  if ( (v2 & 0x100000) != 0 )
  {
    if ( this[47] && this[54] )
    {
      v36 = this[46];
      v37 = 0;
      if ( (*((_BYTE *)v36 + 44) & 3) == 3 && *((_BYTE *)this + 474) )
      {
        v38 = 0;
        if ( *((_DWORD *)v36 + 14) - *((_DWORD *)v36 + 12) >= 0 )
          v38 = *((_DWORD *)v36 + 14) - *((_DWORD *)v36 + 12);
        v39 = 0;
        if ( *((_DWORD *)v36 + 18) - *((_DWORD *)v36 + 16) >= 0 )
          v39 = *((_DWORD *)v36 + 18) - *((_DWORD *)v36 + 16);
        if ( v38 == v39 )
        {
          v40 = *((_DWORD *)v36 + 15) - *((_DWORD *)v36 + 13);
          v41 = *((_DWORD *)v36 + 19) - *((_DWORD *)v36 + 17);
          v42 = 0;
          if ( v40 >= 0 )
            v42 = v40;
          v43 = 0;
          if ( v41 >= 0 )
            v43 = v41;
          if ( v42 == v43 && v38 == *((_DWORD *)this + 127) )
            v37 = v42 == *((_DWORD *)this + 128);
        }
      }
      CSecondaryWindowRepresentation::MakeStatic(
        this[47],
        v37,
        (const struct MilPointAndSizeL *)((char *)this + 532),
        this + 54);
      v45 = this[48];
      if ( v45 )
      {
        CBaseObject::Release(v45);
        this[48] = 0LL;
      }
      BrushForCVI = CSecondaryWindowRepresentation::CreateBrushForCVI(v45, v44, this[54], this[50], 0LL, this + 48);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v50 = 428;
        goto LABEL_76;
      }
      if ( !*((_BYTE *)this[47] + 160) )
      {
        if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this) )
        {
          v2 = 0x800000;
          *((_DWORD *)this[46] + 11) |= 0x800000u;
        }
        else
        {
          CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000u);
          CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x40000u);
          CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x1000u);
          *((_BYTE *)this + 474) = 0;
          CVisual::RenderRecursive((CVisual *)this);
        }
      }
      goto LABEL_34;
    }
    v14 = (struct tagPOINT **)(this + 46);
    if ( !CWindowData::IsShellManaged(*((CWindowData **)this[46] + 3))
      || (v15 = (*v14)[3], *(_QWORD *)(*(_QWORD *)&v15 + 424LL))
      || (v16 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&v15 + 24LL) + 376LL))(*(_QWORD *)(*(_QWORD *)&v15 + 24LL))) == 0LL )
    {
LABEL_52:
      v22 = this[48];
      if ( v22 )
      {
        CBaseObject::Release(v22);
        this[48] = 0LL;
      }
      v23 = this[54];
      if ( v23 )
      {
        CBaseObject::Release(v23);
        this[54] = 0LL;
      }
      v24 = this[47];
      if ( v24 )
      {
        CBaseObject::Release(v24);
        this[47] = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000u);
      goto LABEL_34;
    }
    v51 = 0LL;
    BrushForCVI = CWindowList::GetSyncedWindowData(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                    v16,
                    0,
                    (struct CWindowData **)&v51);
    v3 = BrushForCVI;
    if ( BrushForCVI >= 0 )
    {
      DynArray<CThumbnailData *,0>::Remove(*(_QWORD *)&(*v14)[3] + 512LL, this + 46);
      v17 = (__m128i *)v51;
      v18 = *(_QWORD *)&v51 + 512LL;
      (*v14)[3] = v51;
      v19 = *(_DWORD *)(v18 + 24);
      v20 = v19 + 1;
      v3 = v19 + 1 < v19 ? 0x80070216 : 0;
      if ( v19 + 1 < v19 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v20 <= *(_DWORD *)(v18 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)v18 + 8LL * *(unsigned int *)(v18 + 24)) = *v14;
        *(_DWORD *)(v18 + 24) = v20;
      }
      else
      {
        v21 = DynArrayImpl<0>::AddMultipleAndSet(v18, 8LL, 1LL, this + 46);
        v3 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xC0u);
      }
      if ( v3 < 0 )
      {
        v50 = 461;
        v31 = v3;
        goto LABEL_78;
      }
      if ( (v2 & 0x10) == 0 )
        OffsetRect((LPRECT)&(*v14)[8], _mm_cvtsi128_si32(v17[5]), _mm_cvtsi128_si32(_mm_srli_si128(v17[5], 8)));
      goto LABEL_52;
    }
    v50 = 458;
LABEL_76:
    v31 = BrushForCVI;
LABEL_78:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, v50);
    goto LABEL_38;
  }
LABEL_34:
  if ( (v2 & 0x800000) != 0 )
  {
    v46 = this[48];
    if ( v46 )
    {
      CBaseObject::Release(v46);
      this[48] = 0LL;
    }
    v47 = this[54];
    if ( v47 )
    {
      CBaseObject::Release(v47);
      this[54] = 0LL;
    }
    v48 = this[47];
    if ( v48 )
    {
      CBaseObject::Release(v48);
      this[47] = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000u);
    CThumbnailVisual::OnRepresentationTypeUpdated((CThumbnailVisual *)this);
  }
  if ( *((_BYTE *)this + 472) && !*((_DWORD *)this + 68) )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000u);
LABEL_38:
  if ( v3 < 0 )
  {
    v49 = this[58];
    if ( v49 )
    {
      CBaseObject::Release(v49);
      this[58] = 0LL;
    }
    this[58] = 0LL;
  }
  return (unsigned int)v3;
}

/*
 * XREFs of ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002379C
 * Callers:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18000F484 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D830 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180026704 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18001286C (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180021410 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180022A28 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x180023664 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x1800239E4 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x1800240A8 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180025F84 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18002601C (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x1800260E4 (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x18007CDD4 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnRepresentationUpdated(CSecondaryWindowRepresentation *this)
{
  unsigned int v2; // ebp
  CWindowData *v3; // rcx
  CWindowData **v4; // rsi
  char v5; // r14
  char v6; // r12
  int v7; // ecx
  char v8; // r15
  CWindowData *v9; // rdx
  CWindowData *v10; // rdi
  int v11; // ecx
  CWindowData *v12; // rcx
  CWindowData *v13; // rdi
  CBaseObject *v14; // rcx
  CWindowData *v15; // rcx
  CWindowData *v16; // rdi
  CVisual *v17; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  CBaseObject *v25; // rcx
  int v26; // eax
  __int128 v27; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (CWindowData *)*((_QWORD *)this + 4);
  if ( !v3 || *((_BYTE *)this + 160) )
    return v2;
  v4 = (CWindowData **)((char *)this + 64);
  v5 = 1;
  v27 = *((_OWORD *)this + 4);
  if ( (*((_DWORD *)this + 10) & 0x800) != 0 )
  {
    *((_DWORD *)this + 18) = 3;
    *v4 = v3;
  }
  else
  {
    CWindowData::GetIdealWindowRepresentation(
      v3,
      (*((_DWORD *)this + 10) & 0x20) != 0,
      (CSecondaryWindowRepresentation *)((char *)this + 64));
  }
  v6 = 0;
  if ( (CWindowData *)v27 != *v4 || (v7 = *((_DWORD *)this + 18), DWORD2(v27) != v7) )
  {
    CSecondaryWindowRepresentation::ReleaseAllResources(this);
    v6 = 1;
    if ( *((_DWORD *)this + 18) == 3 && CWindowData::IsImmersiveWindow(*((CWindowData **)this + 4)) )
    {
      v25 = (CBaseObject *)*((_QWORD *)this + 64);
      if ( v25 )
      {
        CBaseObject::Release(v25);
        *((_QWORD *)this + 64) = 0LL;
      }
      v26 = CImmersiveWindowIconic::Create(
              *((struct CWindowData **)this + 4),
              *((_DWORD *)this + 41),
              (enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 30),
              (*((_DWORD *)this + 10) & 0x1000) != 0,
              (struct CImmersiveWindowIconic **)this + 64);
      v2 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x1CAu);
        return v2;
      }
    }
    v19 = CWindowData::ChangeSecondaryWindowRepresentation(
            *((CWindowData **)this + 4),
            this,
            (struct CWindowRepresentation *)&v27);
    v2 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x1CDu);
      return v2;
    }
    v20 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(this);
    v2 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x1CEu);
      return v2;
    }
    v7 = *((_DWORD *)this + 18);
  }
  v8 = *((_BYTE *)this + 472);
  v9 = 0LL;
  v10 = *v4;
  v11 = v7 - 1;
  if ( v11 )
  {
    v21 = v11 - 1;
    if ( v21 )
    {
      if ( v21 != 1 )
        goto LABEL_9;
      if ( !CWindowData::IsImmersiveWindow(*v4) )
      {
        v9 = *(CWindowData **)(*((_QWORD *)v10 + 54) + 80LL);
        goto LABEL_9;
      }
    }
    else
    {
      v22 = *((_QWORD *)v10 + 53);
      if ( v22 )
      {
        v9 = *(CWindowData **)(v22 + 32);
        goto LABEL_9;
      }
    }
  }
  v9 = v10;
LABEL_9:
  if ( CWindowData::IsSimpleClientArea(v9) && !*((_QWORD *)this + 6) )
  {
    v12 = 0LL;
    v13 = *v4;
    switch ( *((_DWORD *)this + 18) )
    {
      case 1:
LABEL_12:
        v12 = v13;
        break;
      case 2:
        v24 = *((_QWORD *)v13 + 53);
        if ( !v24 )
          goto LABEL_12;
        v12 = *(CWindowData **)(v24 + 32);
        break;
      case 3:
        if ( CWindowData::IsImmersiveWindow(*v4) )
          goto LABEL_12;
        v12 = *(CWindowData **)(*((_QWORD *)v13 + 54) + 80LL);
        break;
    }
    if ( !CWindowData::IsImmersiveWindow(v12) )
      goto LABEL_14;
  }
  v5 = 0;
LABEL_14:
  *((_BYTE *)this + 472) = v5;
  if ( !v6 )
  {
    if ( !v8 && !v5 )
      return v2;
    v14 = (CBaseObject *)*((_QWORD *)this + 50);
    if ( v14 )
    {
      CBaseObject::Release(v14);
      *((_QWORD *)this + 50) = 0LL;
    }
  }
  if ( (*((_BYTE *)this + 40) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD, CSecondaryWindowRepresentation *))(**((_QWORD **)this + 21) + 16LL))(
      *((_QWORD *)this + 21),
      this);
  CSecondaryWindowRepresentation::SetDirtyFlags(this, 4u);
  v15 = 0LL;
  v16 = *v4;
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v23 = *((_QWORD *)v16 + 53);
      if ( v23 )
      {
        v15 = *(CWindowData **)(v23 + 32);
        goto LABEL_22;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 18) != 3 )
        goto LABEL_22;
      if ( !CWindowData::IsImmersiveWindow(*v4) )
      {
        v15 = *(CWindowData **)(*((_QWORD *)v16 + 54) + 80LL);
        goto LABEL_22;
      }
    }
  }
  v15 = v16;
LABEL_22:
  v17 = (CVisual *)*((_QWORD *)v15 + 49);
  if ( v17 )
    CVisual::PropagateDirtyChildren(v17);
  CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(this);
  return v2;
}

/*
 * XREFs of ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180013190
 * Callers:
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800111A0 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180014EB4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180018E90 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x180012308 (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180012388 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800124D0 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x180012814 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180012850 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x180013464 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x1800134CC (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180013D98 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800147A0 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x180082C24 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnRepresentationUpdated(CSecondaryWindowRepresentation *this)
{
  unsigned int v2; // ebp
  CWindowData *v3; // rcx
  CWindowData **v4; // rsi
  char v5; // r14
  char v6; // r12
  __int64 v7; // r9
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  char v11; // r15
  CWindowData *v12; // rdx
  CWindowData *v13; // rdi
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rdx
  CWindowData *v17; // rcx
  CWindowData *v18; // rdi
  __int64 v19; // rcx
  CWindowData *v20; // rcx
  CWindowData *v21; // rdi
  __int64 v22; // rcx
  CVisual *v23; // rcx
  CBaseObject *v25; // rcx
  CBaseObject *v26; // rcx
  int v27; // eax
  void *v28; // [rsp+28h] [rbp-30h]
  __int128 v29; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (CWindowData *)*((_QWORD *)this + 4);
  if ( !v3 || *((_BYTE *)this + 160) )
    return v2;
  v4 = (CWindowData **)((char *)this + 64);
  v5 = 1;
  v29 = *((_OWORD *)this + 4);
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
  if ( (CWindowData *)v29 != *v4 || (v10 = *((_DWORD *)this + 18), DWORD2(v29) != v10) )
  {
    CSecondaryWindowRepresentation::ReleaseAllResources(this);
    v6 = 1;
    if ( *((_DWORD *)this + 18) == 3 && CWindowData::IsImmersiveWindow(*((CWindowData **)this + 4)) )
    {
      v26 = (CBaseObject *)*((_QWORD *)this + 64);
      if ( v26 )
      {
        CBaseObject::Release(v26);
        *((_QWORD *)this + 64) = 0LL;
      }
      v27 = CImmersiveWindowIconic::Create(
              *((struct CWindowData **)this + 4),
              *((_DWORD *)this + 41),
              (enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 30),
              (*((_DWORD *)this + 10) & 0x1000) != 0,
              (struct CImmersiveWindowIconic **)this + 64);
      v2 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x1C9u, v28);
        return v2;
      }
    }
    v8 = CWindowData::ChangeSecondaryWindowRepresentation(*((CWindowData **)this + 4), this, (CWindowData **)&v29, v7);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1CCu, v28);
      return v2;
    }
    v9 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(this);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1CDu, v28);
      return v2;
    }
    v10 = *((_DWORD *)this + 18);
  }
  v11 = *((_BYTE *)this + 472);
  v12 = 0LL;
  v13 = *v4;
  v14 = v10 - 1;
  if ( !v14 )
    goto LABEL_34;
  v15 = v14 - 1;
  if ( v15 )
  {
    if ( v15 != 1 )
      goto LABEL_14;
    if ( !CWindowData::IsImmersiveWindow(*v4) )
    {
      v12 = *(CWindowData **)(*((_QWORD *)v13 + 55) + 80LL);
      goto LABEL_14;
    }
    goto LABEL_34;
  }
  v16 = *((_QWORD *)v13 + 54);
  if ( !v16 )
  {
LABEL_34:
    v12 = v13;
    goto LABEL_14;
  }
  v12 = *(CWindowData **)(v16 + 32);
LABEL_14:
  if ( !CWindowData::IsSimpleClientArea(v12) || *((_QWORD *)this + 6) )
    goto LABEL_40;
  v17 = 0LL;
  v18 = *v4;
  switch ( *((_DWORD *)this + 18) )
  {
    case 1:
      goto LABEL_39;
    case 2:
      v19 = *((_QWORD *)v18 + 54);
      if ( v19 )
      {
        v17 = *(CWindowData **)(v19 + 32);
        break;
      }
      goto LABEL_39;
    case 3:
      if ( !CWindowData::IsImmersiveWindow(*v4) )
      {
        v17 = *(CWindowData **)(*((_QWORD *)v18 + 55) + 80LL);
        break;
      }
LABEL_39:
      v17 = v18;
      break;
  }
  if ( CWindowData::IsImmersiveWindow(v17) )
LABEL_40:
    v5 = 0;
  *((_BYTE *)this + 472) = v5;
  if ( !v6 )
  {
    if ( !v11 && !v5 )
      return v2;
    v25 = (CBaseObject *)*((_QWORD *)this + 50);
    if ( v25 )
    {
      CBaseObject::Release(v25);
      *((_QWORD *)this + 50) = 0LL;
    }
  }
  if ( (*((_BYTE *)this + 40) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD, CSecondaryWindowRepresentation *))(**((_QWORD **)this + 21) + 16LL))(
      *((_QWORD *)this + 21),
      this);
  CSecondaryWindowRepresentation::SetDirtyFlags(this, 4);
  v20 = 0LL;
  v21 = *v4;
  if ( *((_DWORD *)this + 18) == 1 )
    goto LABEL_35;
  if ( *((_DWORD *)this + 18) != 2 )
  {
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_28;
    if ( !CWindowData::IsImmersiveWindow(*v4) )
    {
      v20 = *(CWindowData **)(*((_QWORD *)v21 + 55) + 80LL);
      goto LABEL_28;
    }
    goto LABEL_35;
  }
  v22 = *((_QWORD *)v21 + 54);
  if ( !v22 )
  {
LABEL_35:
    v20 = v21;
    goto LABEL_28;
  }
  v20 = *(CWindowData **)(v22 + 32);
LABEL_28:
  v23 = (CVisual *)*((_QWORD *)v20 + 50);
  if ( v23 )
    CVisual::PropagateDirtyChildren(v23);
  CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(this);
  return v2;
}

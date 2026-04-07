/*
 * XREFs of ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180014580
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800146E8 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180015A80 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180006EF0 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180009580 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180022A28 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x180083EB0 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18008EA40 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowData::OnWindowSizeUpdated(CWindowData *this)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  _DWORD *v4; // rdx
  int v5; // eax
  int v6; // ecx
  CButton *v7; // rcx
  CBaseObject *v8; // r14
  CWindowIconic *v9; // rcx
  unsigned int v10; // edi
  CProjectionBorderVisual *v11; // rcx
  unsigned int i; // ebp
  bool v14; // zf
  CSecondaryWindowRepresentation *v15; // rcx
  CThumbnailVisual *v16; // rcx
  CBaseObject *v17; // rcx
  __int64 v18; // rcx
  int updated; // eax
  __int128 v20; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp+8h]

  v1 = *((_QWORD *)this + 49);
  v2 = 0;
  v4 = *(_DWORD **)(v1 + 720);
  v5 = v4[14] - v4[12];
  if ( v5 < 0 )
    v5 = 0;
  v6 = v4[15] - v4[13];
  LODWORD(v21) = v5;
  if ( v6 < 0 )
    v6 = 0;
  HIDWORD(v21) = v6;
  if ( *(_DWORD *)(v1 + 120) != v5 || *(_DWORD *)(v1 + 124) != v6 )
  {
    v14 = (*(_BYTE *)(v1 + 84) & 1) == 0;
    *(_QWORD *)(v1 + 120) = v21;
    if ( !v14 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 24LL))(v1, 16LL);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 24LL))(v1, 2LL);
  }
  v7 = *(CButton **)(v1 + 736);
  if ( v7 )
  {
    CButton::SetMouseCapture(v7, 0);
    v17 = *(CBaseObject **)(v1 + 736);
    if ( v17 )
    {
      CBaseObject::Release(v17);
      *(_QWORD *)(v1 + 736) = 0LL;
    }
  }
  v8 = *(CBaseObject **)(v1 + 728);
  if ( v8 )
  {
    *(_QWORD *)(v1 + 728) = 0LL;
    (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v8 + 120LL))(v8);
    v18 = *(_QWORD *)(v1 + 728);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 112LL))(v18);
    CBaseObject::Release(v8);
  }
  v9 = (CWindowIconic *)*((_QWORD *)this + 54);
  v10 = 0;
  if ( v9 && (updated = CWindowIconic::UpdateSizeOrMargins(v9, 0), v10 = updated, updated < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1C65u);
  }
  else
  {
    v11 = (CProjectionBorderVisual *)*((_QWORD *)this + 51);
    if ( v11 )
    {
      CProjectionBorderVisual::UpdateRectFromWindow(v11, this);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 48LL))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
        *((_QWORD *)this + 5));
    }
    for ( i = 0; i < *((_DWORD *)this + 116); ++i )
    {
      v15 = *(CSecondaryWindowRepresentation **)(*((_QWORD *)this + 55) + 8LL * i);
      v20 = *((_OWORD *)v15 + 4);
      if ( (CWindowData *)v20 == this && ((DWORD2(v20) - 1) & 0xFFFFFFFD) == 0 )
        CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(v15);
    }
    if ( *((_DWORD *)this + 126) )
    {
      do
      {
        v16 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)this + 60) + 8LL * v2) + 96LL);
        if ( v16 )
          CThumbnailVisual::SetDirtyFlags(v16, 0x1000u);
        ++v2;
      }
      while ( v2 < *((_DWORD *)this + 126) );
    }
  }
  return v10;
}

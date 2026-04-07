/*
 * XREFs of ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010478
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18000C6AC (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011800 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001A160 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001F010 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBU_MARGINS@@0@Z @ 0x180012F5C (--8@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x180022BE4 (-UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180025A50 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003F1F8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ceilf_0 @ 0x18004FD62 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowList::OnClientMarginsChange(CWindowList *this, struct CWindowData *a2)
{
  float v3; // xmm6_4
  int v4; // eax
  float v5; // xmm0_4
  int v6; // eax
  float v7; // xmm0_4
  int v8; // eax
  float v9; // xmm0_4
  int v10; // eax
  float v11; // xmm0_4
  _OWORD *v12; // rcx
  int v13; // r8d
  __int128 v14; // xmm0
  CVisual *v15; // rcx
  CWindowIconic *v16; // rcx
  __int64 i; // rdi
  __int64 j; // rdi
  CWindowData *v19; // rcx
  CThumbnailVisual *v20; // rcx
  __int64 v21; // rax
  CThumbnailVisual *v22; // rcx
  __int128 v23; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((float *)a2 + 76);
  v4 = (int)ceilf_0((float)*((int *)a2 + 61) * v3);
  v5 = (float)*((int *)a2 + 62);
  LODWORD(v23) = v4;
  v6 = (int)ceilf_0(v5 * v3);
  v7 = (float)*((int *)a2 + 63);
  DWORD1(v23) = v6;
  v8 = (int)ceilf_0(v7 * v3);
  v9 = (float)*((int *)a2 + 64);
  DWORD2(v23) = v8;
  v10 = (int)ceilf_0(v9 * v3);
  v11 = (float)*((int *)a2 + 69);
  HIDWORD(v23) = v10;
  ceilf_0(v11 * v3);
  if ( !(unsigned __int8)operator==((char *)a2 + 64, &v23) || *((_DWORD *)a2 + 24) != v13 )
  {
    v14 = v23;
    *((_DWORD *)a2 + 24) = v13;
    *v12 = v14;
    v15 = (CVisual *)*((_QWORD *)a2 + 50);
    if ( v15 )
    {
      CVisual::SetDirtyFlags(v15, 0x2000u);
      CWindowData::UnmetTabRequirementsMaybeUpdated(v19);
    }
    v16 = (CWindowIconic *)*((_QWORD *)a2 + 55);
    if ( v16 )
      CWindowIconic::UpdateSizeOrMargins(v16, 0);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 136); i = (unsigned int)(i + 1) )
    {
      v20 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 65) + 8 * i) + 96LL);
      if ( v20 )
      {
        v21 = *((_QWORD *)v20 + 46);
        if ( v21 )
        {
          if ( *(_DWORD *)(v21 + 85) )
            CThumbnailVisual::SetDirtyFlags(v20, 0x4000u);
        }
      }
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a2 + 128); j = (unsigned int)(j + 1) )
    {
      v22 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 61) + 8 * j) + 96LL);
      if ( v22 )
        CThumbnailVisual::SetDirtyFlags(v22, 0x1000u);
    }
    if ( *((_QWORD *)a2 + 52) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 56LL))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
        *((_QWORD *)a2 + 5));
  }
}

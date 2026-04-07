/*
 * XREFs of ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800245E8
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800146E8 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180015A80 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800243C0 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180009580 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x18000F424 (-UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ.c)
 *     ??8@YA_NAEBU_MARGINS@@0@Z @ 0x18002016C (--8@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ceilf_0 @ 0x18004E242 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18008EA40 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
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
  if ( !operator==((_DWORD *)a2 + 16, &v23) || *((_DWORD *)a2 + 24) != v13 )
  {
    v14 = v23;
    *((_DWORD *)a2 + 24) = v13;
    *v12 = v14;
    v15 = (CVisual *)*((_QWORD *)a2 + 49);
    if ( v15 )
    {
      CVisual::SetDirtyFlags(v15, 0x2000);
      CWindowData::UnmetTabRequirementsMaybeUpdated(v19);
    }
    v16 = (CWindowIconic *)*((_QWORD *)a2 + 54);
    if ( v16 )
      CWindowIconic::UpdateSizeOrMargins(v16, 0);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 134); i = (unsigned int)(i + 1) )
    {
      v20 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 64) + 8 * i) + 96LL);
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
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a2 + 126); j = (unsigned int)(j + 1) )
    {
      v22 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 60) + 8 * j) + 96LL);
      if ( v22 )
        CThumbnailVisual::SetDirtyFlags(v22, 0x1000u);
    }
    if ( *((_QWORD *)a2 + 51) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 65) + 56LL))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
        *((_QWORD *)a2 + 5));
  }
}

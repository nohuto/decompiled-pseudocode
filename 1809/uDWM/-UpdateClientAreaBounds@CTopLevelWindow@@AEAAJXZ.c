/*
 * XREFs of ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180019190
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180016B10 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18001937C (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800193B0 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180019504 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?SetSize@CHolographicSlate@@QEAAJII@Z @ 0x18007B1D4 (-SetSize@CHolographicSlate@@QEAAJII@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaBounds(CHolographicSlate **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CHolographicSlate *v4; // r8
  CHolographicSlate *v5; // rcx
  int v7; // r9d
  CHolographicSlate *v8; // rcx
  CHolographicSlate *v9; // rax
  unsigned int v10; // r8d
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // [rsp+20h] [rbp-40h]
  struct _MARGINS v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF

  v2 = CTopLevelWindow::EnsureClientAreaNode((CTopLevelWindow *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v13 = 5058;
LABEL_14:
    v7 = v2;
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v13);
    return v3;
  }
  if ( !this[59] )
    return v3;
  v15 = *((_OWORD *)this[90] + 3);
  CTopLevelWindow::GetOutsideMargins((CTopLevelWindow *)this, &v14);
  v4 = this[90];
  LODWORD(v15) = v14.cxLeftWidth + v15;
  DWORD1(v15) += v14.cyTopHeight;
  DWORD2(v15) -= v14.cxRightWidth;
  HIDWORD(v15) -= v14.cyBottomHeight;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64))(**(_QWORD **)(*((_QWORD *)this[59] + 2)
                                                                                          + 16LL)
                                                                            + 536LL))(
         *(_QWORD *)(*((_QWORD *)this[59] + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)this[59] + 2) + 24LL),
         (__int64)v4 + 180,
         (__int64)v4 + 196,
         (__int64)v4 + 212);
  v3 = v2;
  if ( v2 < 0 )
  {
    v13 = 5078;
    goto LABEL_14;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this[59] + 2) + 16LL) + 376LL))(
         *(_QWORD *)(*((_QWORD *)this[59] + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)this[59] + 2) + 24LL),
         (__int64)this[90] + 228);
  v3 = v2;
  if ( v2 < 0 )
  {
    v13 = 5082;
    goto LABEL_14;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(*((_QWORD *)this[59] + 2) + 16LL) + 528LL))(
         *(_QWORD *)(*((_QWORD *)this[59] + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)this[59] + 2) + 24LL),
         &v15);
  v3 = v2;
  if ( v2 < 0 )
  {
    v13 = 5086;
    goto LABEL_14;
  }
  v5 = this[104];
  if ( v5 )
  {
    (*(void (__fastcall **)(CHolographicSlate *, __int128 *))(*(_QWORD *)v5 + 40LL))(v5, &v15);
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 26) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26));
    v3 = v2;
    if ( v2 < 0 )
    {
      v13 = 5091;
      goto LABEL_14;
    }
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this[59] + 2) + 16LL) + 360LL))(
         *(_QWORD *)(*((_QWORD *)this[59] + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)this[59] + 2) + 24LL));
  v3 = v2;
  if ( v2 < 0 )
  {
    v13 = 5098;
    goto LABEL_14;
  }
  v2 = CTopLevelWindow::SendBoundsToSwapchainTarget((CTopLevelWindow *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v13 = 5101;
    goto LABEL_14;
  }
  v3 = 0;
  if ( (*((_BYTE *)this + 241) & 4) != 0 )
  {
    v8 = this[98];
    if ( v8 )
    {
      v9 = this[90];
      v10 = 0;
      if ( *((_DWORD *)v9 + 52) - *((_DWORD *)v9 + 50) >= 0 )
        v10 = *((_DWORD *)v9 + 52) - *((_DWORD *)v9 + 50);
      v11 = 0;
      if ( *((_DWORD *)v9 + 51) - *((_DWORD *)v9 + 49) >= 0 )
        v11 = *((_DWORD *)v9 + 51) - *((_DWORD *)v9 + 49);
      v12 = CHolographicSlate::SetSize(v8, v11, v10);
      v3 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1B0u);
    }
  }
  if ( (v3 & 0x80000000) != 0 )
  {
    v13 = 5103;
    v7 = v3;
    goto LABEL_29;
  }
  return v3;
}

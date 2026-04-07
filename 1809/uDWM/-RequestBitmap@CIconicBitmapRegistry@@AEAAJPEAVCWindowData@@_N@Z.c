/*
 * XREFs of ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180020DC4
 * Callers:
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x180005498 (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18001256C (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180020430 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18007B338 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x18007B788 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x18007BAA0 (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x18007BEA8 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180021410 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180030DD0 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0qp @ 0x18007826C (McTemplateU0qp.c)
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18007BC3C (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18007BD68 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x1800B3804 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::RequestBitmap(CIconicBitmapRegistry *this, struct CWindowData *a2, char a3)
{
  unsigned int v3; // ebx
  char *v4; // rsi
  __int64 v5; // rax
  char v8; // r14
  unsigned int v9; // ecx
  __int64 v10; // rdx
  struct CWindowData **v13; // rax
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  HWND v19; // rsi
  LPARAM v20; // r9
  UINT v21; // edx
  WPARAM v22; // r8
  __int64 WindowDpiAwarenessContext; // rax
  int AwarenessFromDpiAwarenessContext; // eax
  CDesktopManager *v25; // rcx
  int started; // eax
  __int128 v27; // [rsp+30h] [rbp-38h] BYREF
  struct tagSIZE v28; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (char *)this + 48;
  v5 = *((_QWORD *)this + 6);
  v8 = 0;
  v9 = *((_DWORD *)this + 18);
  v10 = 0LL;
  if ( v9 )
  {
    v13 = (struct CWindowData **)(v5 + 8);
    do
    {
      if ( *v13 == a2 )
        break;
      v10 = (unsigned int)(v10 + 1);
      v13 += 2;
    }
    while ( (unsigned int)v10 < v9 );
    if ( (unsigned int)v10 < v9 )
    {
      v8 = 1;
      v14 = DynArray<CIconicBitmapPending,0>::RemoveAt(v4, v10);
      v3 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x139u);
    }
  }
  if ( !a3 )
  {
    if ( v8 )
    {
      if ( a2 == (struct CWindowData *)-1LL )
        *((_BYTE *)this + 89) = 0;
      else
        CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 0);
      *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) = *((_DWORD *)this + 18) != 0;
    }
    return v3;
  }
  *((_QWORD *)&v27 + 1) = a2;
  v15 = *((unsigned int *)v4 + 6);
  v16 = v15 + 1;
  *(double *)&v27 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 40) + 10.0;
  v3 = (int)v15 + 1 < (unsigned int)v15 ? 0x80070216 : 0;
  if ( (int)v15 + 1 >= (unsigned int)v15 )
  {
    if ( v16 > *((_DWORD *)v4 + 5) )
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet(v4, 16LL, 1LL, &v27);
      v3 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)v4 + 16 * v15) = v27;
      *((_DWORD *)v4 + 6) = v16;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
  }
  if ( (v3 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x142u);
    return v3;
  }
  if ( a2 != (struct CWindowData *)-1LL )
  {
    v19 = (HWND)*((_QWORD *)a2 + 5);
    CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 1);
    if ( v8 )
      goto LABEL_31;
    if ( !v19 )
      goto LABEL_31;
    v28 = 0LL;
    WindowDpiAwarenessContext = GetWindowDpiAwarenessContext(v19);
    AwarenessFromDpiAwarenessContext = GetAwarenessFromDpiAwarenessContext(WindowDpiAwarenessContext);
    if ( !(unsigned int)DwmGetIdealIconicThumbnailSize(AwarenessFromDpiAwarenessContext != 0, &v28) )
      goto LABEL_31;
    if ( CWindowData::IsImmersiveWindow(a2) )
      v22 = *((_QWORD *)a2 + 5);
    else
      v22 = 0LL;
    v21 = 803;
    v20 = LOWORD(v28.cy) | (LOWORD(v28.cx) << 16);
    goto LABEL_30;
  }
  v18 = *(_QWORD *)(*((_QWORD *)this + 12) + 72LL);
  v19 = *(HWND *)(v18 + 40);
  *((_BYTE *)this + 89) = 1;
  if ( !v8 )
  {
    v20 = 0LL;
    v21 = 806;
    v22 = 0LL;
LABEL_30:
    PostMessageW(v19, v21, v22, v20);
  }
LABEL_31:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp(v18, &UdwmManageIconicThumbnail_Info, 3LL);
  v25 = CDesktopManager::s_pDesktopManagerInstance;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) )
  {
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) = 1;
    started = CDesktopManager::PostStartAnimations(v25);
    v3 = started;
    if ( started < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x164u);
  }
  return v3;
}

/*
 * XREFs of ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180012C64
 * Callers:
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x180003BA0 (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012D6C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18001434C (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x18003FD58 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18008163C (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x180081A00 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x180081CFC (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 * Callees:
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180006210 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800147A0 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18003F6AC (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800401A8 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qp @ 0x18007E53C (McTemplateU0qp.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x180081E98 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::RequestBitmap(CIconicBitmapRegistry *this, struct CWindowData *a2, char a3)
{
  unsigned int v3; // ebx
  char *v4; // rsi
  __int64 v5; // rax
  char v8; // r14
  unsigned int v9; // ecx
  unsigned int v10; // edx
  struct CWindowData **v13; // rax
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rcx
  HWND v18; // rsi
  LPARAM v19; // r9
  UINT v20; // edx
  WPARAM v21; // r8
  int v22; // eax
  __int64 WindowDpiAwarenessContext; // rax
  int AwarenessFromDpiAwarenessContext; // eax
  CDesktopManager *v25; // rcx
  int started; // eax
  void *v27; // [rsp+28h] [rbp-40h]
  __int128 v28; // [rsp+30h] [rbp-38h] BYREF
  struct tagSIZE v29; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (char *)this + 48;
  v5 = *((_QWORD *)this + 6);
  v8 = 0;
  v9 = *((_DWORD *)this + 18);
  v10 = 0;
  if ( v9 )
  {
    v13 = (struct CWindowData **)(v5 + 8);
    do
    {
      if ( *v13 == a2 )
        break;
      ++v10;
      v13 += 2;
    }
    while ( v10 < v9 );
    if ( v10 < v9 )
    {
      v8 = 1;
      v14 = DynArray<CIconicBitmapPending,0>::RemoveAt(v4);
      v3 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x139u, v27);
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
  *((_QWORD *)&v28 + 1) = a2;
  v15 = *((unsigned int *)v4 + 6);
  v16 = v15 + 1;
  *(double *)&v28 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 40) + 10.0;
  if ( (int)v15 + 1 < (unsigned int)v15 )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v27);
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x142u, v27);
    return v3;
  }
  if ( v16 > *((_DWORD *)v4 + 5) )
  {
    v22 = DynArrayImpl<0>::AddMultipleAndSet(v4, 16LL, 1LL, &v28);
    v3 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xC0u, v27);
    if ( (v3 & 0x80000000) != 0 )
      goto LABEL_21;
  }
  else
  {
    v3 = 0;
    *(_OWORD *)(*(_QWORD *)v4 + 16 * v15) = v28;
    *((_DWORD *)v4 + 6) = v16;
  }
  if ( a2 != (struct CWindowData *)-1LL )
  {
    v18 = (HWND)*((_QWORD *)a2 + 5);
    CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 1);
    if ( v8 )
      goto LABEL_31;
    if ( !v18 )
      goto LABEL_31;
    v29 = 0LL;
    WindowDpiAwarenessContext = GetWindowDpiAwarenessContext(v18);
    AwarenessFromDpiAwarenessContext = GetAwarenessFromDpiAwarenessContext(WindowDpiAwarenessContext);
    if ( !(unsigned int)DwmGetIdealIconicThumbnailSize(AwarenessFromDpiAwarenessContext != 0, &v29) )
      goto LABEL_31;
    if ( CWindowData::IsImmersiveWindow(a2) )
      v21 = *((_QWORD *)a2 + 5);
    else
      v21 = 0LL;
    v20 = 803;
    v19 = LOWORD(v29.cy) | (LOWORD(v29.cx) << 16);
    goto LABEL_30;
  }
  v17 = *(_QWORD *)(*((_QWORD *)this + 12) + 72LL);
  v18 = *(HWND *)(v17 + 40);
  *((_BYTE *)this + 89) = 1;
  if ( !v8 )
  {
    v19 = 0LL;
    v20 = 806;
    v21 = 0LL;
LABEL_30:
    PostMessageW(v18, v20, v21, v19);
  }
LABEL_31:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp(v17, &UdwmManageIconicThumbnail_Info, 3LL);
  v25 = CDesktopManager::s_pDesktopManagerInstance;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) )
  {
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) = 1;
    started = CDesktopManager::PostStartAnimations(v25);
    v3 = started;
    if ( started < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x164u, v27);
  }
  return v3;
}

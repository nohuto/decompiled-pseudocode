/*
 * XREFs of xxxRedrawHungWindow @ 0x1C01354AC
 * Callers:
 *     xxxHungAppDemon @ 0x1C0016EE0 (xxxHungAppDemon.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0030150 (xxxSimpleDoSyncPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0070780 (xxxInternalDoSyncPaint.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01EA8F8 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ProcessHungWindow @ 0x1C0008600 (ProcessHungWindow.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     IsHungWindow @ 0x1C0017040 (IsHungWindow.c)
 *     GetStyleWindow @ 0x1C0039EC0 (GetStyleWindow.c)
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C003C0C0 (PhysicalToLogicalInPlaceRgn.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxCalcClientRect @ 0x1C0068CE0 (xxxCalcClientRect.c)
 *     xxxDrawWindowFrame @ 0x1C0078D80 (xxxDrawWindowFrame.c)
 *     FillRect @ 0x1C007B5C0 (FillRect.c)
 *     xxxInternalPaintDesktop @ 0x1C012D518 (xxxInternalPaintDesktop.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     GreWatchVisRgnChange @ 0x1C02828C0 (GreWatchVisRgnChange.c)
 */

char __fastcall xxxRedrawHungWindow(struct tagWND *a1, __int64 a2)
{
  __int64 StyleWindow; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 EmptyRgn; // rdi
  __int64 ThreadWin32Thread; // rax
  HDC DCEx; // rax
  __int64 v13; // r9
  HDC v14; // rbx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 i; // r14
  __int64 v20; // r8
  int v21; // ebx
  __int64 v22; // r8
  HDC v23; // rdi
  __int64 DesktopWindow; // rbx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  RECT v30; // xmm0
  int v31; // edx
  int v32; // ecx
  int v33; // edx
  unsigned __int64 v34; // rbx
  int ObjectOwner; // r14d
  unsigned int BrushColor; // eax
  HBRUSH v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  _BYTE v41[8]; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v42[3]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v43[3]; // [rsp+48h] [rbp-11h] BYREF
  _DWORD v44[4]; // [rsp+60h] [rbp+7h] BYREF
  RECT v45; // [rsp+70h] [rbp+17h] BYREF

  StyleWindow = *((_QWORD *)a1 + 5);
  if ( !*(_QWORD *)(StyleWindow + 136) )
    return StyleWindow;
  LOBYTE(StyleWindow) = *(_BYTE *)(StyleWindow + 31);
  if ( (StyleWindow & 0x10) == 0 )
    return StyleWindow;
  if ( !a2 || (unsigned int)IsHungWindow((__int64)a1) )
  {
    LOBYTE(StyleWindow) = ProcessHungWindow();
    return StyleWindow;
  }
  StyleWindow = GetStyleWindow((__int64)a1, 2568);
  if ( StyleWindow )
    return StyleWindow;
  v8 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v8 + 136) <= 1uLL )
  {
    v45 = *(RECT *)(v8 + 88);
    EmptyRgn = GreCreateRectRgnIndirect(&v45);
    if ( !EmptyRgn )
      EmptyRgn = 1LL;
  }
  else
  {
    EmptyRgn = CreateEmptyRgn(v6, v5, v7);
    if ( !EmptyRgn )
    {
      EmptyRgn = 1LL;
      goto LABEL_11;
    }
    if ( !(unsigned int)GreCombineRgn(EmptyRgn, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 0LL, 5LL) )
    {
      GreDeleteObject(EmptyRgn);
      EmptyRgn = 1LL;
    }
  }
  if ( EmptyRgn != 1 && (unsigned int)GreCombineRgn(EmptyRgn, EmptyRgn, a2, 1LL) == 1 )
  {
    LOBYTE(StyleWindow) = GreDeleteObject(EmptyRgn);
    return StyleWindow;
  }
LABEL_11:
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
  v42[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v42;
  v42[1] = a1;
  _InterlockedAdd((volatile signed __int32 *)a1 + 2, 1u);
  if ( gihmodUserApiHook < 0 )
  {
    DCEx = (HDC)_GetDCEx(a1, EmptyRgn, 328833LL);
    v14 = DCEx;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0
      || (v15 = 8193LL, *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground) )
    {
      v15 = 0x2000LL;
    }
    xxxDrawWindowFrame((ULONG_PTR)a1, DCEx, v15, v13);
    _ReleaseDC(v14);
  }
  xxxInternalInvalidate(a1, (HRGN)EmptyRgn, 0x485u);
  v45 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
  xxxCalcClientRect((__int64)a1, &v45, 1);
  SetRectRgnIndirect(ghrgnInv2, &v45);
  if ( EmptyRgn <= 1 )
    goto LABEL_28;
  v16 = GreCombineRgn(EmptyRgn, EmptyRgn, ghrgnInv2, 1LL);
  if ( !v16 )
  {
    GreDeleteObject(EmptyRgn);
    EmptyRgn = 1LL;
LABEL_28:
    v17 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v17 + 31) & 2) == 0 )
    {
      v18 = *(_QWORD *)(v17 + 136);
      if ( v18 == 1 || !(unsigned int)GreGetRgnBox(v18, &v45) )
        v45 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
      for ( i = *((_QWORD *)a1 + 11); i; i = *(_QWORD *)(i + 64) )
      {
        v20 = *(_QWORD *)(i + 40);
        if ( (*(_BYTE *)(v20 + 31) & 0x10) != 0 && ((*(_BYTE *)(v20 + 20) & 4) != 0 || !*(_QWORD *)(v20 + 136)) )
        {
          if ( (unsigned int)IntersectRect(v44, &v45.left, (int *)(v20 + 88)) )
          {
            v21 = PhysicalToLogicalInPlaceRgn((struct tagWND *)i);
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v41);
            xxxInternalInvalidate((struct tagWND *)i, (HRGN)EmptyRgn, 0x485u);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v41);
            if ( v21 )
              GreDeleteObject(EmptyRgn);
          }
        }
      }
    }
    goto LABEL_41;
  }
  if ( v16 != 1 )
    goto LABEL_28;
  GreDeleteObject(EmptyRgn);
  EmptyRgn = 0LL;
LABEL_41:
  v22 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x8Bu;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) == 0 )
    v22 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x83u;
  v23 = (HDC)_GetDCEx(a1, EmptyRgn, v22);
  GreWatchVisRgnChange(v23);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
  {
    DesktopWindow = GetDesktopWindow((__int64)a1);
    v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25);
    v43[0] = *(_QWORD *)(v26 + 416);
    *(_QWORD *)(v26 + 416) = v43;
    v43[1] = DesktopWindow;
    if ( DesktopWindow )
      _InterlockedAdd((volatile signed __int32 *)(DesktopWindow + 8), 1u);
    xxxInternalPaintDesktop(DesktopWindow, v23, 1);
    ThreadUnlock1(v28, v27);
  }
  else
  {
    v29 = *((_QWORD *)a1 + 5);
    v45 = *(RECT *)(v29 + 88);
    v30 = v45;
    v31 = *(_DWORD *)(v29 + 92);
    v32 = -*(_DWORD *)(v29 + 88);
    v45.right -= *(_DWORD *)(v29 + 88);
    v33 = -v31;
    v45.bottom += v33;
    v45.top += v33;
    v45.left = v32 + _mm_cvtsi128_si32((__m128i)v30);
    v34 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 8LL) + 72LL);
    if ( v34 )
    {
      if ( v34 <= 0x1F )
        v34 = *(_QWORD *)(gpsi + 8 * v34 + 4688);
    }
    else if ( (*(_BYTE *)(v29 + 18) & 1) != 0 && (*(_BYTE *)(v29 + 21) & 2) != 0 )
    {
      v34 = *(_QWORD *)(gpsi + 4816LL);
    }
    else
    {
      v34 = *(_QWORD *)(gpsi + 4736LL);
    }
    ObjectOwner = GreGetObjectOwner(v34, 16LL);
    if ( !ObjectOwner || ObjectOwner == (unsigned int)PsGetCurrentProcessId() )
    {
      v37 = (HBRUSH)v34;
    }
    else
    {
      BrushColor = GreGetBrushColor(v34);
      if ( BrushColor == -1 )
        BrushColor = GreGetBrushColor(*(_QWORD *)(gpsi + 4736LL));
      GreSetSolidBrush(ghbrHungApp, BrushColor);
      v37 = (HBRUSH)ghbrHungApp;
    }
    FillRect(v23, &v45, v37);
  }
  GreWatchVisRgnChange(v23);
  _ReleaseDC(v23);
  SetOrClrWF(1, (__int64)a1, 0x108u, 1);
  SetOrClrWF(1, (__int64)a1, 0x102u, 1);
  SetOrClrWF(1, (__int64)a1, 0x120u, 1);
  LOBYTE(StyleWindow) = ThreadUnlock1(v39, v38);
  return StyleWindow;
}

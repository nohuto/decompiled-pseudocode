/*
 * XREFs of xxxRedrawHungWindow @ 0x1C015DC18
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C00253B4 (xxxSimpleDoSyncPaint.c)
 *     xxxHungAppDemon @ 0x1C00AE720 (xxxHungAppDemon.c)
 *     xxxInternalDoSyncPaint @ 0x1C00AFE00 (xxxInternalDoSyncPaint.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0200440 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0025520 (GetStyleWindow.c)
 *     xxxDrawWindowFrame @ 0x1C0028040 (xxxDrawWindowFrame.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     FillRect @ 0x1C008DA04 (FillRect.c)
 *     xxxCalcClientRect @ 0x1C0092864 (xxxCalcClientRect.c)
 *     IsHungWindow @ 0x1C00AE860 (IsHungWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C00C43B4 (PhysicalToLogicalInPlaceRgn.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     xxxInternalPaintDesktop @ 0x1C0138D90 (xxxInternalPaintDesktop.c)
 *     ProcessHungWindow @ 0x1C0150714 (ProcessHungWindow.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     GreWatchVisRgnChange @ 0x1C02995C4 (GreWatchVisRgnChange.c)
 */

char __fastcall xxxRedrawHungWindow(struct tagWND *a1, __int64 a2)
{
  __int64 StyleWindow; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 EmptyRgn; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ThreadWin32Thread; // rax
  HDC DCEx; // rax
  HDC v14; // rbx
  __int16 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 i; // r14
  __int64 v21; // r8
  int v22; // ebx
  __int64 v23; // r8
  HDC v24; // rdi
  __int64 DesktopWindow; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r8
  RECT v34; // xmm0
  int v35; // edx
  int v36; // ecx
  int v37; // edx
  unsigned __int64 v38; // rbx
  int ObjectOwner; // r14d
  unsigned int BrushColor; // eax
  HBRUSH v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  HRGN v46; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v47[8]; // [rsp+28h] [rbp-31h] BYREF
  __int64 v48; // [rsp+30h] [rbp-29h] BYREF
  struct tagWND *v49; // [rsp+38h] [rbp-21h]
  __int64 v50; // [rsp+40h] [rbp-19h]
  __int64 v51; // [rsp+48h] [rbp-11h] BYREF
  __int64 v52; // [rsp+50h] [rbp-9h]
  __int64 v53; // [rsp+58h] [rbp-1h]
  _QWORD v54[2]; // [rsp+60h] [rbp+7h] BYREF
  RECT v55; // [rsp+70h] [rbp+17h] BYREF

  *(_QWORD *)&v55.left = 0LL;
  *(_QWORD *)&v55.right = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  StyleWindow = *((_QWORD *)a1 + 5);
  if ( !*(_QWORD *)(StyleWindow + 136) )
    return StyleWindow;
  LOBYTE(StyleWindow) = *(_BYTE *)(StyleWindow + 31);
  if ( (StyleWindow & 0x10) == 0 )
    return StyleWindow;
  if ( !a2 || (unsigned int)IsHungWindow((__int64)a1) )
  {
    LOBYTE(StyleWindow) = ProcessHungWindow((__int64)a1);
    return StyleWindow;
  }
  StyleWindow = GetStyleWindow((__int64)a1, 2568);
  if ( StyleWindow )
    return StyleWindow;
  v7 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v7 + 136) <= 1uLL )
  {
    v55 = *(RECT *)(v7 + 88);
    EmptyRgn = GreCreateRectRgnIndirect(&v55);
    if ( !EmptyRgn )
      EmptyRgn = 1LL;
  }
  else
  {
    EmptyRgn = CreateEmptyRgn(v6, v5);
    if ( !EmptyRgn )
    {
      EmptyRgn = 1LL;
      goto LABEL_10;
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
LABEL_10:
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10, v11);
  v48 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v48;
  v49 = a1;
  HMLockObject(a1);
  if ( gihmodUserApiHook < 0 )
  {
    DCEx = (HDC)_GetDCEx(a1, EmptyRgn, 328833LL);
    v14 = DCEx;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0
      || (v15 = 8193, *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != gpqForeground) )
    {
      v15 = 0x2000;
    }
    xxxDrawWindowFrame(a1, DCEx, v15);
    _ReleaseDC(v14);
  }
  xxxInternalInvalidate(a1, (HRGN)EmptyRgn, 0x485u);
  v55 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
  xxxCalcClientRect((__int64 *)a1, (__int128 *)&v55.left, 1LL, v16);
  SetRectRgnIndirect(ghrgnInv2, &v55);
  if ( EmptyRgn <= 1 )
    goto LABEL_27;
  v17 = GreCombineRgn(EmptyRgn, EmptyRgn, ghrgnInv2, 1LL);
  if ( !v17 )
  {
    GreDeleteObject(EmptyRgn);
    EmptyRgn = 1LL;
LABEL_27:
    v18 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v18 + 31) & 2) == 0 )
    {
      v19 = *(_QWORD *)(v18 + 136);
      v54[0] = 0LL;
      v54[1] = 0LL;
      if ( v19 == 1 || !(unsigned int)GreGetRgnBox(v19, &v55) )
        v55 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
      for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
      {
        v21 = *(_QWORD *)(i + 40);
        if ( (*(_BYTE *)(v21 + 31) & 0x10) != 0 && ((*(_BYTE *)(v21 + 20) & 4) != 0 || !*(_QWORD *)(v21 + 136)) )
        {
          if ( (unsigned int)IntersectRect(v54, &v55.left, (int *)(v21 + 88)) )
          {
            v46 = (HRGN)EmptyRgn;
            v22 = PhysicalToLogicalInPlaceRgn(i, (__int64)&v46);
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v47);
            xxxInternalInvalidate((struct tagWND *)i, v46, 0x485u);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v47);
            if ( v22 )
              GreDeleteObject(v46);
          }
        }
      }
    }
    goto LABEL_40;
  }
  if ( v17 != 1 )
    goto LABEL_27;
  GreDeleteObject(EmptyRgn);
  EmptyRgn = 0LL;
LABEL_40:
  v23 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x8Bu;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) == 0 )
    v23 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x83u;
  v24 = (HDC)_GetDCEx(a1, EmptyRgn, v23);
  GreWatchVisRgnChange(v24);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
  {
    DesktopWindow = GetDesktopWindow((__int64)a1);
    v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28);
    v51 = *(_QWORD *)(v29 + 408);
    *(_QWORD *)(v29 + 408) = &v51;
    v52 = DesktopWindow;
    if ( DesktopWindow )
      HMLockObject(DesktopWindow);
    xxxInternalPaintDesktop(DesktopWindow, v24, 1);
    ThreadUnlock1(v31, v30, v32);
  }
  else
  {
    v33 = *((_QWORD *)a1 + 5);
    v55 = *(RECT *)(v33 + 88);
    v34 = v55;
    v35 = *(_DWORD *)(v33 + 92);
    v36 = -*(_DWORD *)(v33 + 88);
    v55.right -= *(_DWORD *)(v33 + 88);
    v37 = -v35;
    v55.bottom += v37;
    v55.top += v37;
    v55.left = v36 + _mm_cvtsi128_si32((__m128i)v34);
    v38 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 72LL);
    if ( v38 )
    {
      if ( v38 <= 0x1F )
        v38 = *(_QWORD *)(gpsi + 8 * v38 + 4688);
    }
    else if ( (*(_BYTE *)(v33 + 18) & 1) != 0 && (*(_BYTE *)(v33 + 21) & 2) != 0 )
    {
      v38 = *(_QWORD *)(gpsi + 4816LL);
    }
    else
    {
      v38 = *(_QWORD *)(gpsi + 4736LL);
    }
    ObjectOwner = GreGetObjectOwner(v38, 16LL);
    if ( !ObjectOwner || ObjectOwner == (unsigned int)PsGetCurrentProcessId() )
    {
      v41 = (HBRUSH)v38;
    }
    else
    {
      BrushColor = GreGetBrushColor(v38);
      if ( BrushColor == -1 )
        BrushColor = GreGetBrushColor(*(_QWORD *)(gpsi + 4736LL));
      GreSetSolidBrush(ghbrHungApp, BrushColor);
      v41 = (HBRUSH)ghbrHungApp;
    }
    FillRect(v24, &v55, v41);
  }
  GreWatchVisRgnChange(v24);
  _ReleaseDC(v24);
  SetOrClrWF(1, (__int64)a1, 0x108u, 1);
  SetOrClrWF(1, (__int64)a1, 0x102u, 1);
  SetOrClrWF(1, (__int64)a1, 0x120u, 1);
  LOBYTE(StyleWindow) = ThreadUnlock1(v43, v42, v44);
  return StyleWindow;
}

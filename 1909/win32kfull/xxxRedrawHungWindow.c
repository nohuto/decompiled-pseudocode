/*
 * XREFs of xxxRedrawHungWindow @ 0x1C015EBC8
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C002B824 (xxxSimpleDoSyncPaint.c)
 *     xxxHungAppDemon @ 0x1C004F540 (xxxHungAppDemon.c)
 *     xxxInternalDoSyncPaint @ 0x1C0050C60 (xxxInternalDoSyncPaint.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0200190 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     GetStyleWindow @ 0x1C002B990 (GetStyleWindow.c)
 *     xxxDrawWindowFrame @ 0x1C002E4B0 (xxxDrawWindowFrame.c)
 *     xxxCalcClientRect @ 0x1C003358C (xxxCalcClientRect.c)
 *     IsHungWindow @ 0x1C004F680 (IsHungWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C0065240 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0065A84 (PhysicalToLogicalInPlaceRgn.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxInternalPaintDesktop @ 0x1C0112D90 (xxxInternalPaintDesktop.c)
 *     FillRect @ 0x1C012BF54 (FillRect.c)
 *     ProcessHungWindow @ 0x1C01514D4 (ProcessHungWindow.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     GreWatchVisRgnChange @ 0x1C0299014 (GreWatchVisRgnChange.c)
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
  __int64 ThreadWin32Thread; // rax
  HDC DCEx; // rax
  HDC v13; // rbx
  __int16 v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 i; // r14
  __int64 v19; // r8
  int v20; // ebx
  __int64 v21; // r8
  HDC v22; // rdi
  __int64 DesktopWindow; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r8
  RECT v31; // xmm0
  int v32; // edx
  int v33; // ecx
  int v34; // edx
  unsigned __int64 v35; // rbx
  int ObjectOwner; // r14d
  unsigned int BrushColor; // eax
  HBRUSH v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  HRGN v43; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v44[8]; // [rsp+28h] [rbp-31h] BYREF
  __int64 v45; // [rsp+30h] [rbp-29h] BYREF
  struct tagWND *v46; // [rsp+38h] [rbp-21h]
  __int64 v47; // [rsp+40h] [rbp-19h]
  __int64 v48; // [rsp+48h] [rbp-11h] BYREF
  __int64 v49; // [rsp+50h] [rbp-9h]
  __int64 v50; // [rsp+58h] [rbp-1h]
  _QWORD v51[2]; // [rsp+60h] [rbp+7h] BYREF
  RECT v52; // [rsp+70h] [rbp+17h] BYREF

  *(_QWORD *)&v52.left = 0LL;
  *(_QWORD *)&v52.right = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
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
    v52 = *(RECT *)(v7 + 88);
    EmptyRgn = GreCreateRectRgnIndirect(&v52);
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
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10);
  v45 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v45;
  v46 = a1;
  HMLockObject(a1);
  if ( gihmodUserApiHook < 0 )
  {
    DCEx = (HDC)_GetDCEx(a1, EmptyRgn, 328833LL);
    v13 = DCEx;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0
      || (v14 = 8193, *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != gpqForeground) )
    {
      v14 = 0x2000;
    }
    xxxDrawWindowFrame(a1, DCEx, v14);
    _ReleaseDC(v13);
  }
  xxxInternalInvalidate(a1, (HRGN)EmptyRgn, 0x485u);
  v52 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
  xxxCalcClientRect((__int64)a1, (__int128 *)&v52.left, 1LL);
  SetRectRgnIndirect(ghrgnInv2, &v52);
  if ( EmptyRgn <= 1 )
    goto LABEL_27;
  v15 = GreCombineRgn(EmptyRgn, EmptyRgn, ghrgnInv2, 1LL);
  if ( !v15 )
  {
    GreDeleteObject(EmptyRgn);
    EmptyRgn = 1LL;
LABEL_27:
    v16 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v16 + 31) & 2) == 0 )
    {
      v17 = *(_QWORD *)(v16 + 136);
      v51[0] = 0LL;
      v51[1] = 0LL;
      if ( v17 == 1 || !(unsigned int)GreGetRgnBox(v17, &v52) )
        v52 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
      for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
      {
        v19 = *(_QWORD *)(i + 40);
        if ( (*(_BYTE *)(v19 + 31) & 0x10) != 0 && ((*(_BYTE *)(v19 + 20) & 4) != 0 || !*(_QWORD *)(v19 + 136)) )
        {
          if ( (unsigned int)IntersectRect(v51, &v52.left, (int *)(v19 + 88)) )
          {
            v43 = (HRGN)EmptyRgn;
            v20 = PhysicalToLogicalInPlaceRgn(i, (__int64)&v43);
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v44);
            xxxInternalInvalidate((struct tagWND *)i, v43, 0x485u);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v44);
            if ( v20 )
              GreDeleteObject(v43);
          }
        }
      }
    }
    goto LABEL_40;
  }
  if ( v15 != 1 )
    goto LABEL_27;
  GreDeleteObject(EmptyRgn);
  EmptyRgn = 0LL;
LABEL_40:
  v21 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x8Bu;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) == 0 )
    v21 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x83u;
  v22 = (HDC)_GetDCEx(a1, EmptyRgn, v21);
  GreWatchVisRgnChange(v22);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
  {
    DesktopWindow = GetDesktopWindow((__int64)a1);
    v26 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25);
    v48 = *(_QWORD *)(v26 + 408);
    *(_QWORD *)(v26 + 408) = &v48;
    v49 = DesktopWindow;
    if ( DesktopWindow )
      HMLockObject(DesktopWindow);
    xxxInternalPaintDesktop(DesktopWindow, v22, 1);
    ThreadUnlock1(v28, v27, v29);
  }
  else
  {
    v30 = *((_QWORD *)a1 + 5);
    v52 = *(RECT *)(v30 + 88);
    v31 = v52;
    v32 = *(_DWORD *)(v30 + 92);
    v33 = -*(_DWORD *)(v30 + 88);
    v52.right -= *(_DWORD *)(v30 + 88);
    v34 = -v32;
    v52.bottom += v34;
    v52.top += v34;
    v52.left = v33 + _mm_cvtsi128_si32((__m128i)v31);
    v35 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 72LL);
    if ( v35 )
    {
      if ( v35 <= 0x1F )
        v35 = *(_QWORD *)(gpsi + 8 * v35 + 4688);
    }
    else if ( (*(_BYTE *)(v30 + 18) & 1) != 0 && (*(_BYTE *)(v30 + 21) & 2) != 0 )
    {
      v35 = *(_QWORD *)(gpsi + 4816LL);
    }
    else
    {
      v35 = *(_QWORD *)(gpsi + 4736LL);
    }
    ObjectOwner = GreGetObjectOwner(v35, 16LL);
    if ( !ObjectOwner || ObjectOwner == (unsigned int)PsGetCurrentProcessId() )
    {
      v38 = (HBRUSH)v35;
    }
    else
    {
      BrushColor = GreGetBrushColor(v35);
      if ( BrushColor == -1 )
        BrushColor = GreGetBrushColor(*(_QWORD *)(gpsi + 4736LL));
      GreSetSolidBrush(ghbrHungApp, BrushColor);
      v38 = (HBRUSH)ghbrHungApp;
    }
    FillRect(v22, &v52, v38);
  }
  GreWatchVisRgnChange(v22);
  _ReleaseDC(v22);
  SetOrClrWF(1, (__int64)a1, 0x108u, 1);
  SetOrClrWF(1, (__int64)a1, 0x102u, 1);
  SetOrClrWF(1, (__int64)a1, 0x120u, 1);
  LOBYTE(StyleWindow) = ThreadUnlock1(v40, v39, v41);
  return StyleWindow;
}

/*
 * XREFs of xxxRedrawHungWindow @ 0x1C01360F8
 * Callers:
 *     xxxHungAppDemon @ 0x1C001DAC0 (xxxHungAppDemon.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0026490 (xxxSimpleDoSyncPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0029330 (xxxInternalDoSyncPaint.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01C5560 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     IsHungWindow @ 0x1C001E340 (IsHungWindow.c)
 *     xxxCalcClientRect @ 0x1C0022534 (xxxCalcClientRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetStyleWindow @ 0x1C0028180 (GetStyleWindow.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C002AE38 (PhysicalToLogicalInPlaceRgn.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     xxxDrawWindowFrame @ 0x1C0075134 (xxxDrawWindowFrame.c)
 *     FillRect @ 0x1C009F914 (FillRect.c)
 *     ProcessHungWindow @ 0x1C00BC598 (ProcessHungWindow.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     xxxInternalPaintDesktop @ 0x1C010C1E8 (xxxInternalPaintDesktop.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GreWatchVisRgnChange @ 0x1C026EBEC (GreWatchVisRgnChange.c)
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
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
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
  __int64 v40; // r8
  HRGN v42; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v43[8]; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v44[3]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v45[3]; // [rsp+48h] [rbp-11h] BYREF
  _DWORD v46[4]; // [rsp+60h] [rbp+7h] BYREF
  RECT v47; // [rsp+70h] [rbp+17h] BYREF

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
  v8 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v8 + 136) <= 1uLL )
  {
    v47 = *(RECT *)(v8 + 88);
    EmptyRgn = GreCreateRectRgnIndirect(&v47, v5, v7);
    if ( !EmptyRgn )
      EmptyRgn = 1LL;
  }
  else
  {
    EmptyRgn = CreateEmptyRgn(v6, v5);
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
  v44[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v44;
  v44[1] = a1;
  _InterlockedAdd((volatile signed __int32 *)a1 + 2, 1u);
  if ( gihmodUserApiHook < 0 )
  {
    DCEx = (HDC)_GetDCEx(a1, EmptyRgn, 328833LL);
    v13 = DCEx;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0
      || (v14 = 8193, *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != gpqForeground) )
    {
      v14 = 0x2000;
    }
    xxxDrawWindowFrame((ULONG_PTR)a1, DCEx, v14);
    _ReleaseDC(v13);
  }
  xxxInternalInvalidate(a1, (HRGN)EmptyRgn, 0x485u);
  v47 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
  xxxCalcClientRect(a1, &v47, 1);
  SetRectRgnIndirect(ghrgnInv2, &v47);
  if ( EmptyRgn <= 1 )
    goto LABEL_28;
  v15 = GreCombineRgn(EmptyRgn, EmptyRgn, ghrgnInv2, 1LL);
  if ( !v15 )
  {
    GreDeleteObject(EmptyRgn);
    EmptyRgn = 1LL;
LABEL_28:
    v16 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v16 + 31) & 2) == 0 )
    {
      v17 = *(_QWORD *)(v16 + 136);
      if ( v17 == 1 || !(unsigned int)GreGetRgnBox(v17, &v47) )
        v47 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
      for ( i = *((_QWORD *)a1 + 11); i; i = *(_QWORD *)(i + 64) )
      {
        v19 = *(_QWORD *)(i + 40);
        if ( (*(_BYTE *)(v19 + 31) & 0x10) != 0 && ((*(_BYTE *)(v19 + 20) & 4) != 0 || !*(_QWORD *)(v19 + 136)) )
        {
          if ( (unsigned int)IntersectRect(v46, &v47.left, (int *)(v19 + 88)) )
          {
            v42 = (HRGN)EmptyRgn;
            v20 = PhysicalToLogicalInPlaceRgn(i, &v42);
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v43);
            xxxInternalInvalidate((struct tagWND *)i, v42, 0x485u);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v43);
            if ( v20 )
              GreDeleteObject(v42);
          }
        }
      }
    }
    goto LABEL_41;
  }
  if ( v15 != 1 )
    goto LABEL_28;
  GreDeleteObject(EmptyRgn);
  EmptyRgn = 0LL;
LABEL_41:
  v21 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x8Bu;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) == 0 )
    v21 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x83u;
  v22 = (HDC)_GetDCEx(a1, EmptyRgn, v21);
  GreWatchVisRgnChange(v22);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
  {
    DesktopWindow = GetDesktopWindow((__int64)a1);
    v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24);
    v45[0] = *(_QWORD *)(v25 + 408);
    *(_QWORD *)(v25 + 408) = v45;
    v45[1] = DesktopWindow;
    if ( DesktopWindow )
      _InterlockedAdd((volatile signed __int32 *)(DesktopWindow + 8), 1u);
    xxxInternalPaintDesktop(DesktopWindow, v22, 1);
    ThreadUnlock1(v27, v26, v28);
  }
  else
  {
    v29 = *((_QWORD *)a1 + 5);
    v47 = *(RECT *)(v29 + 88);
    v30 = v47;
    v31 = *(_DWORD *)(v29 + 92);
    v32 = -*(_DWORD *)(v29 + 88);
    v47.right -= *(_DWORD *)(v29 + 88);
    v33 = -v31;
    v47.bottom += v33;
    v47.top += v33;
    v47.left = v32 + _mm_cvtsi128_si32((__m128i)v30);
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
    FillRect(v22, &v47, v37);
  }
  GreWatchVisRgnChange(v22);
  _ReleaseDC(v22);
  SetOrClrWF(1, (__int64)a1, 264, 1);
  SetOrClrWF(1, (__int64)a1, 258, 1);
  SetOrClrWF(1, (__int64)a1, 288, 1);
  LOBYTE(StyleWindow) = ThreadUnlock1(v39, v38, v40);
  return StyleWindow;
}

/*
 * XREFs of xxxScrollWindowEx @ 0x1C0028484
 * Callers:
 *     NtUserScrollWindowEx @ 0x1C0028290 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1C0226E04 (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1C02473A0 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     _IsDescendant @ 0x1C00247A4 (_IsDescendant.c)
 *     OffsetChildren @ 0x1C0025BAC (OffsetChildren.c)
 *     IsVisible @ 0x1C0028D70 (IsVisible.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     zzzInternalShowCaret @ 0x1C008B40C (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C008B4BC (zzzInternalHideCaret.c)
 *     GetDCOrgOnScreen @ 0x1C008E638 (GetDCOrgOnScreen.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00C3604 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C00C65E0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     GetRect @ 0x1C00CB3EC (GetRect.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     GreTransformPoints @ 0x1C00FD8FC (GreTransformPoints.c)
 *     UnionRect @ 0x1C010FF60 (UnionRect.c)
 *     MirrorRegion @ 0x1C01118F8 (MirrorRegion.c)
 *     ThreadLockExchangeAlways @ 0x1C011EE8C (ThreadLockExchangeAlways.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     SpbCheckRect @ 0x1C0209430 (SpbCheckRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxScrollWindowEx(
        struct tagWND *a1,
        int a2,
        int a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        __int64 a6,
        __int64 a7,
        __int16 a8)
{
  int v8; // r11d
  __int64 v9; // r14
  int v10; // r12d
  __int64 v11; // r10
  struct tagWND *v12; // rbx
  int v14; // edx
  int v15; // edx
  __int64 v16; // r9
  __int16 v17; // si
  __int64 ThreadWin32Thread; // rax
  int v19; // edi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // edi
  HDC DCEx; // r15
  unsigned int v26; // r15d
  unsigned int v27; // r12d
  int v28; // edi
  HDC v29; // rdi
  __int64 v30; // rax
  struct tagWND *v31; // rcx
  __int64 v32; // rcx
  unsigned int v33; // edx
  unsigned int v34; // eax
  struct tagRECT *v35; // r13
  bool v36; // zf
  __int64 v37; // rdx
  int v38; // edx
  LONG v39; // eax
  LONG v40; // edx
  int v41; // eax
  struct tagRECT v42; // xmm0
  LONG left; // r8d
  __int64 v44; // rax
  int v45; // ecx
  int v46; // edx
  int v47; // edi
  LONG v48; // edx
  int v49; // ecx
  __int64 v50; // rax
  int v51; // edx
  int v52; // r8d
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 DesktopWindow; // rax
  unsigned int v57; // ecx
  __int64 v58; // rcx
  __int64 v59; // rcx
  ULONG_PTR i; // rdi
  int v61; // [rsp+50h] [rbp-B0h]
  int v62; // [rsp+54h] [rbp-ACh]
  unsigned int v63; // [rsp+54h] [rbp-ACh]
  int v65; // [rsp+5Ch] [rbp-A4h]
  HRGN v67; // [rsp+68h] [rbp-98h]
  int v68; // [rsp+70h] [rbp-90h]
  struct tagRECT v69; // [rsp+80h] [rbp-80h] BYREF
  __int64 v70; // [rsp+90h] [rbp-70h] BYREF
  __int64 v71; // [rsp+98h] [rbp-68h]
  _DWORD v72[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v73; // [rsp+A8h] [rbp-58h] BYREF
  int v74; // [rsp+ACh] [rbp-54h]
  int v75; // [rsp+B0h] [rbp-50h]
  int v76; // [rsp+B4h] [rbp-4Ch]
  int v77; // [rsp+B8h] [rbp-48h]
  int v78; // [rsp+BCh] [rbp-44h]
  struct tagRECT *v79; // [rsp+C0h] [rbp-40h]
  HDC v80; // [rsp+C8h] [rbp-38h]
  __int64 v81; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v82; // [rsp+D8h] [rbp-28h]
  __int64 v83; // [rsp+E0h] [rbp-20h]
  struct tagRECT *v84; // [rsp+E8h] [rbp-18h]
  struct tagRECT *v85; // [rsp+F0h] [rbp-10h]
  char v86[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v87; // [rsp+100h] [rbp+0h] BYREF
  struct tagWND *v88; // [rsp+108h] [rbp+8h]
  __int64 v89; // [rsp+110h] [rbp+10h]
  _QWORD v90[3]; // [rsp+118h] [rbp+18h] BYREF
  struct tagRECT v91; // [rsp+130h] [rbp+30h] BYREF
  struct tagRECT v92; // [rsp+140h] [rbp+40h] BYREF
  struct tagRECT v93; // [rsp+150h] [rbp+50h] BYREF
  __int64 v94; // [rsp+160h] [rbp+60h] BYREF
  __int64 v95; // [rsp+168h] [rbp+68h]

  v72[0] = 0;
  v8 = 0;
  v72[1] = 0;
  v9 = 0LL;
  v65 = 0;
  v10 = a2;
  v11 = a6;
  v12 = a1;
  v92 = (struct tagRECT)0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v62 = a2;
  v79 = a4;
  v85 = a5;
  v67 = (HRGN)a6;
  v84 = (struct tagRECT *)a7;
  v61 = 0;
  if ( !a1 )
  {
    v65 = 1;
    v12 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 26LL) & 0x40) != 0 )
  {
    v10 = -a2;
    v62 = -a2;
    MirrorRegion(v12, a6, 1LL);
    if ( a4 )
    {
      v14 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a4->left;
      a4->left = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a4->right;
      a4->right = v14;
    }
    v11 = a6;
    v8 = 0;
    if ( a5 )
    {
      v15 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a5->left;
      a5->left = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a5->right;
      a5->right = v15;
    }
  }
  if ( !(v10 | a3) )
    goto LABEL_25;
  if ( (unsigned int)IsVisible(v12) )
  {
    v17 = a8;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 0x20) != 0 )
  {
LABEL_25:
    v17 = a8;
  }
  else
  {
    v17 = a8;
    if ( (a8 & 1) != 0 && !v16 )
    {
      v8 = 1;
      v17 = a8 & 0xFFFD;
      v61 = 1;
    }
  }
  if ( v11 )
  {
    SetEmptyRgn(v11);
    v8 = v61;
  }
  if ( a7 )
  {
    *(_QWORD *)a7 = 0LL;
    *(_QWORD *)(a7 + 8) = 0LL;
  }
  if ( !v8 )
    return 1LL;
LABEL_15:
  v68 = 0;
  if ( v65 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v87 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v87;
    v88 = v12;
    HMLockObject(v12);
  }
  if ( !v61 )
  {
    v9 = *(_QWORD *)(gptiCurrent + 424LL) + 304LL;
    if ( *(_QWORD *)v9 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)v9, (__int64)v12) )
      {
        v68 = 1;
        zzzInternalHideCaret();
      }
    }
  }
  v19 = 65538;
  v77 = v17 & 1;
  if ( v17 < 0 )
  {
    v19 = (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v12 + 17) + 8LL) + 8LL) & 0x60) != 0 ? 0x10000 : 65538;
    if ( (v17 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 2) != 0 )
      v19 |= 0x80002u;
  }
  else if ( (v17 & 1) != 0 )
  {
    v19 = 589826;
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v86);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v21, v22, v23);
  v24 = v19 | 0x40000000;
  DCEx = (HDC)_GetDCEx(v12, 0LL, v24);
  v80 = DCEx;
  v78 = v17 & 2;
  if ( (v17 & 2) != 0 )
  {
    GetDCOrgOnScreen(DCEx, v72);
    if ( !a6 )
      v67 = (HRGN)ghrgnSW;
  }
  if ( !a4 )
  {
    v79 = &v92;
    GetRect(v12, &v92, 17LL);
    if ( (v24 & 2) == 0 )
      GreTransformPoints((_DWORD)DCEx, (unsigned int)&v92, (unsigned int)&v92, 2, 0);
  }
  v26 = v10;
  v27 = a3;
  v91 = *v79;
  v28 = v24 & 2;
  if ( !v28 )
  {
    GreTransformPoints((_DWORD)v80, (unsigned int)&v91, (unsigned int)&v91, 2, 1);
    v74 = 0;
    v73 = 0;
    v75 = v62;
    v76 = a3;
    GreTransformPoints((_DWORD)v80, (unsigned int)&v73, (unsigned int)&v73, 2, 1);
    v26 = v75 - v73;
    v27 = v76 - v74;
  }
  if ( v61 )
  {
    v29 = v80;
    v63 = 1;
  }
  else
  {
    v30 = *((_QWORD *)v12 + 5);
    v31 = *(struct tagWND **)(v30 + 136);
    if ( v17 < 0 && (*(_BYTE *)(v30 + 21) & 1) == 0 )
    {
      if ( (unsigned __int64)v31 > 1 )
      {
        v94 = 0LL;
        v95 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v31, &v94) )
        {
          v32 = *((_QWORD *)v12 + 5);
          v33 = v27 - *(_DWORD *)(v32 + 108);
          v34 = v26 - *(_DWORD *)(v32 + 104);
          HIDWORD(v95) += v33;
          HIDWORD(v94) += v33;
          LODWORD(v94) = v34 + v94;
          LODWORD(v95) = v34 + v95;
          xxxRedrawWindow(v12);
        }
      }
      v31 = 0LL;
    }
    v35 = v84;
    v36 = v28 == 0;
    v29 = v80;
    v63 = InternalScrollDC(v31, v80, v62, a3, v79, v85, (HRGN)v31, v67, v84, v36);
    if ( v35 )
    {
      v37 = *((_QWORD *)v12 + 5);
      if ( (*(_BYTE *)(v37 + 26) & 0x40) != 0 )
      {
        v38 = *(_DWORD *)(v37 + 112) - *(_DWORD *)(v37 + 104);
        v39 = v38 - v35->right;
        v40 = v38 - v35->left;
        v35->left = v39;
        v35->right = v40;
      }
    }
  }
  _ReleaseDC(v29);
  v41 = v61;
  if ( !v61 )
  {
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
    {
      if ( a4 )
      {
        if ( v12 == (struct tagWND *)GetDesktopWindow(v12) )
        {
          v42 = v91;
          v92 = v91;
          left = v91.left;
        }
        else
        {
          v44 = *((_QWORD *)v12 + 5);
          v45 = *(_DWORD *)(v44 + 104);
          left = v45 + v91.left;
          v46 = *(_DWORD *)(v44 + 108);
          v92.right = v91.right + v45;
          v92.left = v45 + v91.left;
          v92.top = v46 + v91.top;
          v92.bottom = v46 + v91.bottom;
          v42 = v92;
        }
        v69.right = v26 + v42.right;
        v69.bottom = v27 + v42.bottom;
        v69.top = v27 + v42.top;
        v69.left = left + v26;
        UnionRect(&v69, &v69, &v92);
      }
      else
      {
        v69 = *(struct tagRECT *)(*((_QWORD *)v12 + 5) + 104LL);
      }
      SpbCheckRect(v12, &v69, 0);
    }
    v41 = 0;
  }
  v47 = v77;
  if ( v77 )
  {
    v93 = (struct tagRECT)0LL;
    if ( !v41 && v12 == *(struct tagWND **)v9 )
    {
      if ( !a4
        || (v48 = *(_DWORD *)(v9 + 24),
            v93.left = *(_DWORD *)(v9 + 20),
            v93.right = *(_DWORD *)(v9 + 32) + v93.left,
            v49 = *(_DWORD *)(v9 + 28),
            v93.top = v48,
            v93.bottom = v48 + v49,
            (unsigned int)IntersectRect(&v93, &v93, &v91)) )
      {
        *(_DWORD *)(v9 + 20) += v26;
        *(_DWORD *)(v9 + 24) += v27;
      }
    }
    if ( a4 )
    {
      if ( v12 == (struct tagWND *)GetDesktopWindow(v12) )
      {
        v93 = v91;
      }
      else
      {
        v50 = *((_QWORD *)v12 + 5);
        v51 = *(_DWORD *)(v50 + 104);
        v52 = *(_DWORD *)(v50 + 108);
        v93.left = v51 + v91.left;
        v93.right = v51 + v91.right;
        v93.top = v52 + v91.top;
        v93.bottom = v52 + v91.bottom;
      }
    }
    if ( *((_QWORD *)v12 + 14) )
    {
      OffsetChildren(v12, v26, v27, (unsigned __int64)&v93 & -(__int64)(a4 != 0LL), (v17 & 0x4000) == 0);
      zzzLockDisplayAreaAndInvalidateDCCache(v12, (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 2) != 0 ? 4 : 2, 0LL);
    }
  }
  if ( v78 )
  {
    if ( v67 != (HRGN)ghrgnSW )
      GreCombineRgn(ghrgnSW, v67, 0LL, 5LL);
    GreOffsetRgn(ghrgnSW, v72[0]);
    xxxInternalInvalidate(v12, ghrgnSW, v17 & 4 | 0x81);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v86);
  zzzEndDeferWinEventNotify();
  if ( v47 )
  {
    v90[0] = 0LL;
    v90[1] = 0LL;
    v70 = 0LL;
    v71 = 0LL;
    if ( a4 )
    {
      DesktopWindow = GetDesktopWindow(v12);
      if ( v53 == DesktopWindow )
      {
        LODWORD(v70) = v26 + v91.left;
        LODWORD(v71) = v26 + v91.right;
        HIDWORD(v70) = v27 + v91.top;
        v57 = v27 + v91.bottom;
      }
      else
      {
        v58 = *(_QWORD *)(v53 + 40);
        v53 = v26 + *(_DWORD *)(v58 + 104);
        v55 = v27 + *(_DWORD *)(v58 + 108);
        LODWORD(v70) = v53 + v91.left;
        LODWORD(v71) = v53 + v91.right;
        HIDWORD(v70) = v55 + v91.top;
        v57 = v55 + v91.bottom;
      }
      HIDWORD(v71) = v57;
    }
    v59 = gptiCurrent;
    v81 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v81;
    v82 = 0LL;
    for ( i = *((_QWORD *)v12 + 14); i; i = *(_QWORD *)(i + 88) )
    {
      if ( !a4 || (unsigned int)IntersectRect(v90, &v70, *(_QWORD *)(i + 40) + 88LL) )
      {
        ThreadLockExchangeAlways(i, &v81);
        GetDesktopWindow(v12);
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(i, 0, 0, 0LL, 1, 0);
      }
    }
    ThreadUnlock1(v59, v53, v55);
  }
  if ( v68 )
    zzzInternalShowCaret();
  if ( v65 )
    ThreadUnlock1(v54, v53, v55);
  return v63;
}

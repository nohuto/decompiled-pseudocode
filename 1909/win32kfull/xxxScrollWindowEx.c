/*
 * XREFs of xxxScrollWindowEx @ 0x1C002E8F4
 * Callers:
 *     NtUserScrollWindowEx @ 0x1C002E700 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1C02268C4 (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1C0246C60 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     zzzInternalShowCaret @ 0x1C002868C (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C002873C (zzzInternalHideCaret.c)
 *     _IsDescendant @ 0x1C002AC14 (_IsDescendant.c)
 *     OffsetChildren @ 0x1C002C01C (OffsetChildren.c)
 *     IsVisible @ 0x1C002F1E0 (IsVisible.c)
 *     UnionRect @ 0x1C0032D48 (UnionRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0064CD4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C0064FD8 (xxxRedrawWindow.c)
 *     xxxInternalInvalidate @ 0x1C0065240 (xxxInternalInvalidate.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0067CB0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     GetRect @ 0x1C006CABC (GetRect.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GreTransformPoints @ 0x1C00D963C (GreTransformPoints.c)
 *     MirrorRegion @ 0x1C00EC7A8 (MirrorRegion.c)
 *     ThreadLockExchangeAlways @ 0x1C00F9B60 (ThreadLockExchangeAlways.c)
 *     GetDCOrgOnScreen @ 0x1C012E2F8 (GetDCOrgOnScreen.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     SpbCheckRect @ 0x1C0209180 (SpbCheckRect.c)
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
  unsigned int v21; // edi
  HDC DCEx; // r15
  unsigned int v23; // r15d
  unsigned int v24; // r12d
  int v25; // edi
  HDC v26; // rdi
  __int64 v27; // rax
  struct tagWND *v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // edx
  unsigned int v31; // eax
  struct tagRECT *v32; // r13
  bool v33; // zf
  __int64 v34; // rdx
  int v35; // edx
  LONG v36; // eax
  LONG v37; // edx
  int v38; // eax
  struct tagRECT v39; // xmm0
  LONG left; // r8d
  __int64 v41; // rax
  int v42; // ecx
  int v43; // edx
  int v44; // edi
  LONG v45; // edx
  int v46; // ecx
  __int64 v47; // rax
  int v48; // edx
  int v49; // r8d
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 DesktopWindow; // rax
  unsigned int v54; // ecx
  __int64 v55; // rcx
  __int64 v56; // rcx
  ULONG_PTR i; // rdi
  int v58; // [rsp+50h] [rbp-B0h]
  int v59; // [rsp+54h] [rbp-ACh]
  unsigned int v60; // [rsp+54h] [rbp-ACh]
  int v62; // [rsp+5Ch] [rbp-A4h]
  HRGN v64; // [rsp+68h] [rbp-98h]
  int v65; // [rsp+70h] [rbp-90h]
  struct tagRECT v66; // [rsp+80h] [rbp-80h] BYREF
  __int64 v67; // [rsp+90h] [rbp-70h] BYREF
  __int64 v68; // [rsp+98h] [rbp-68h]
  _DWORD v69[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v70; // [rsp+A8h] [rbp-58h] BYREF
  int v71; // [rsp+ACh] [rbp-54h]
  int v72; // [rsp+B0h] [rbp-50h]
  int v73; // [rsp+B4h] [rbp-4Ch]
  int v74; // [rsp+B8h] [rbp-48h]
  int v75; // [rsp+BCh] [rbp-44h]
  struct tagRECT *v76; // [rsp+C0h] [rbp-40h]
  HDC v77; // [rsp+C8h] [rbp-38h]
  __int64 v78; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v79; // [rsp+D8h] [rbp-28h]
  __int64 v80; // [rsp+E0h] [rbp-20h]
  struct tagRECT *v81; // [rsp+E8h] [rbp-18h]
  struct tagRECT *v82; // [rsp+F0h] [rbp-10h]
  char v83[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v84; // [rsp+100h] [rbp+0h] BYREF
  struct tagWND *v85; // [rsp+108h] [rbp+8h]
  __int64 v86; // [rsp+110h] [rbp+10h]
  _QWORD v87[3]; // [rsp+118h] [rbp+18h] BYREF
  struct tagRECT v88; // [rsp+130h] [rbp+30h] BYREF
  struct tagRECT v89; // [rsp+140h] [rbp+40h] BYREF
  struct tagRECT v90; // [rsp+150h] [rbp+50h] BYREF
  __int64 v91; // [rsp+160h] [rbp+60h] BYREF
  __int64 v92; // [rsp+168h] [rbp+68h]

  v69[0] = 0;
  v8 = 0;
  v69[1] = 0;
  v9 = 0LL;
  v62 = 0;
  v10 = a2;
  v11 = a6;
  v12 = a1;
  v89 = (struct tagRECT)0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v59 = a2;
  v76 = a4;
  v82 = a5;
  v64 = (HRGN)a6;
  v81 = (struct tagRECT *)a7;
  v58 = 0;
  if ( !a1 )
  {
    v62 = 1;
    v12 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 26LL) & 0x40) != 0 )
  {
    v10 = -a2;
    v59 = -a2;
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
      v58 = 1;
    }
  }
  if ( v11 )
  {
    SetEmptyRgn(v11);
    v8 = v58;
  }
  if ( a7 )
  {
    *(_QWORD *)a7 = 0LL;
    *(_QWORD *)(a7 + 8) = 0LL;
  }
  if ( !v8 )
    return 1LL;
LABEL_15:
  v65 = 0;
  if ( v62 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v84 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v84;
    v85 = v12;
    HMLockObject(v12);
  }
  if ( !v58 )
  {
    v9 = *(_QWORD *)(gptiCurrent + 424LL) + 304LL;
    if ( *(_QWORD *)v9 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)v9, (__int64)v12) )
      {
        v65 = 1;
        zzzInternalHideCaret();
      }
    }
  }
  v19 = 65538;
  v74 = v17 & 1;
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
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v83);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v21 = v19 | 0x40000000;
  DCEx = (HDC)_GetDCEx(v12, 0LL, v21);
  v77 = DCEx;
  v75 = v17 & 2;
  if ( (v17 & 2) != 0 )
  {
    GetDCOrgOnScreen(DCEx, v69);
    if ( !a6 )
      v64 = (HRGN)ghrgnSW;
  }
  if ( !a4 )
  {
    v76 = &v89;
    GetRect(v12, &v89, 17LL);
    if ( (v21 & 2) == 0 )
      GreTransformPoints((_DWORD)DCEx, (unsigned int)&v89, (unsigned int)&v89, 2, 0);
  }
  v23 = v10;
  v24 = a3;
  v88 = *v76;
  v25 = v21 & 2;
  if ( !v25 )
  {
    GreTransformPoints((_DWORD)v77, (unsigned int)&v88, (unsigned int)&v88, 2, 1);
    v71 = 0;
    v70 = 0;
    v72 = v59;
    v73 = a3;
    GreTransformPoints((_DWORD)v77, (unsigned int)&v70, (unsigned int)&v70, 2, 1);
    v23 = v72 - v70;
    v24 = v73 - v71;
  }
  if ( v58 )
  {
    v26 = v77;
    v60 = 1;
  }
  else
  {
    v27 = *((_QWORD *)v12 + 5);
    v28 = *(struct tagWND **)(v27 + 136);
    if ( v17 < 0 && (*(_BYTE *)(v27 + 21) & 1) == 0 )
    {
      if ( (unsigned __int64)v28 > 1 )
      {
        v91 = 0LL;
        v92 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v28, &v91) )
        {
          v29 = *((_QWORD *)v12 + 5);
          v30 = v24 - *(_DWORD *)(v29 + 108);
          v31 = v23 - *(_DWORD *)(v29 + 104);
          HIDWORD(v92) += v30;
          HIDWORD(v91) += v30;
          LODWORD(v91) = v31 + v91;
          LODWORD(v92) = v31 + v92;
          xxxRedrawWindow(v12);
        }
      }
      v28 = 0LL;
    }
    v32 = v81;
    v33 = v25 == 0;
    v26 = v77;
    v60 = InternalScrollDC(v28, v77, v59, a3, v76, v82, (HRGN)v28, v64, v81, v33);
    if ( v32 )
    {
      v34 = *((_QWORD *)v12 + 5);
      if ( (*(_BYTE *)(v34 + 26) & 0x40) != 0 )
      {
        v35 = *(_DWORD *)(v34 + 112) - *(_DWORD *)(v34 + 104);
        v36 = v35 - v32->right;
        v37 = v35 - v32->left;
        v32->left = v36;
        v32->right = v37;
      }
    }
  }
  _ReleaseDC(v26);
  v38 = v58;
  if ( !v58 )
  {
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
    {
      if ( a4 )
      {
        if ( v12 == (struct tagWND *)GetDesktopWindow(v12) )
        {
          v39 = v88;
          v89 = v88;
          left = v88.left;
        }
        else
        {
          v41 = *((_QWORD *)v12 + 5);
          v42 = *(_DWORD *)(v41 + 104);
          left = v42 + v88.left;
          v43 = *(_DWORD *)(v41 + 108);
          v89.right = v88.right + v42;
          v89.left = v42 + v88.left;
          v89.top = v43 + v88.top;
          v89.bottom = v43 + v88.bottom;
          v39 = v89;
        }
        v66.right = v23 + v39.right;
        v66.bottom = v24 + v39.bottom;
        v66.top = v24 + v39.top;
        v66.left = left + v23;
        UnionRect(&v66, &v66, &v89);
      }
      else
      {
        v66 = *(struct tagRECT *)(*((_QWORD *)v12 + 5) + 104LL);
      }
      SpbCheckRect(v12, &v66, 0);
    }
    v38 = 0;
  }
  v44 = v74;
  if ( v74 )
  {
    v90 = (struct tagRECT)0LL;
    if ( !v38 && v12 == *(struct tagWND **)v9 )
    {
      if ( !a4
        || (v45 = *(_DWORD *)(v9 + 24),
            v90.left = *(_DWORD *)(v9 + 20),
            v90.right = *(_DWORD *)(v9 + 32) + v90.left,
            v46 = *(_DWORD *)(v9 + 28),
            v90.top = v45,
            v90.bottom = v45 + v46,
            (unsigned int)IntersectRect(&v90, &v90, &v88)) )
      {
        *(_DWORD *)(v9 + 20) += v23;
        *(_DWORD *)(v9 + 24) += v24;
      }
    }
    if ( a4 )
    {
      if ( v12 == (struct tagWND *)GetDesktopWindow(v12) )
      {
        v90 = v88;
      }
      else
      {
        v47 = *((_QWORD *)v12 + 5);
        v48 = *(_DWORD *)(v47 + 104);
        v49 = *(_DWORD *)(v47 + 108);
        v90.left = v48 + v88.left;
        v90.right = v48 + v88.right;
        v90.top = v49 + v88.top;
        v90.bottom = v49 + v88.bottom;
      }
    }
    if ( *((_QWORD *)v12 + 14) )
    {
      OffsetChildren(v12, v23, v24, (unsigned __int64)&v90 & -(__int64)(a4 != 0LL), (v17 & 0x4000) == 0);
      zzzLockDisplayAreaAndInvalidateDCCache(v12, (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 2) != 0 ? 4 : 2);
    }
  }
  if ( v75 )
  {
    if ( v64 != (HRGN)ghrgnSW )
      GreCombineRgn(ghrgnSW, v64, 0LL, 5LL);
    GreOffsetRgn(ghrgnSW, v69[0]);
    xxxInternalInvalidate(v12, ghrgnSW, v17 & 4 | 0x81);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v83);
  zzzEndDeferWinEventNotify();
  if ( v44 )
  {
    v87[0] = 0LL;
    v87[1] = 0LL;
    v67 = 0LL;
    v68 = 0LL;
    if ( a4 )
    {
      DesktopWindow = GetDesktopWindow(v12);
      if ( v50 == DesktopWindow )
      {
        LODWORD(v67) = v23 + v88.left;
        LODWORD(v68) = v23 + v88.right;
        HIDWORD(v67) = v24 + v88.top;
        v54 = v24 + v88.bottom;
      }
      else
      {
        v55 = *(_QWORD *)(v50 + 40);
        v50 = v23 + *(_DWORD *)(v55 + 104);
        v52 = v24 + *(_DWORD *)(v55 + 108);
        LODWORD(v67) = v50 + v88.left;
        LODWORD(v68) = v50 + v88.right;
        HIDWORD(v67) = v52 + v88.top;
        v54 = v52 + v88.bottom;
      }
      HIDWORD(v68) = v54;
    }
    v56 = gptiCurrent;
    v78 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v78;
    v79 = 0LL;
    for ( i = *((_QWORD *)v12 + 14); i; i = *(_QWORD *)(i + 88) )
    {
      if ( !a4 || (unsigned int)IntersectRect(v87, &v67, *(_QWORD *)(i + 40) + 88LL) )
      {
        ThreadLockExchangeAlways(i, &v78);
        GetDesktopWindow(v12);
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(i, 0, 0, 0LL, 1, 0);
      }
    }
    ThreadUnlock1(v56, v50, v52);
  }
  if ( v65 )
    zzzInternalShowCaret();
  if ( v62 )
    ThreadUnlock1(v51, v50, v52);
  return v60;
}

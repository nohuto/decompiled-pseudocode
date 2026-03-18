/*
 * XREFs of xxxScrollWindowEx @ 0x1C0079188
 * Callers:
 *     NtUserScrollWindowEx @ 0x1C0078FC0 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1C020F0B8 (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1C022EB74 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     GetRect @ 0x1C0021568 (GetRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C003A0C8 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C003AB88 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     _IsDescendant @ 0x1C0043A2C (_IsDescendant.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     OffsetChildren @ 0x1C006F050 (OffsetChildren.c)
 *     zzzInternalShowCaret @ 0x1C0073D24 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C0073DD4 (zzzInternalHideCaret.c)
 *     IsVisible @ 0x1C0079A24 (IsVisible.c)
 *     UnionRect @ 0x1C0079C20 (UnionRect.c)
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 *     MirrorRegion @ 0x1C00C7908 (MirrorRegion.c)
 *     ThreadLockExchangeAlways @ 0x1C00DF0E4 (ThreadLockExchangeAlways.c)
 *     GreTransformPoints @ 0x1C00F6EBC (GreTransformPoints.c)
 *     GetDCOrgOnScreen @ 0x1C010DCE4 (GetDCOrgOnScreen.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     SpbCheckRect @ 0x1C01F3180 (SpbCheckRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxScrollWindowEx(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        __int64 a6,
        __int64 a7,
        __int16 a8)
{
  int v8; // r10d
  __int64 v9; // r14
  int v10; // r12d
  struct tagWND *v11; // rbx
  struct tagRECT *v12; // rsi
  __int64 v13; // r11
  __int64 v14; // r9
  __int16 v15; // si
  __int64 v16; // rdx
  __int64 ThreadWin32Thread; // rax
  int v18; // edi
  unsigned int v20; // edi
  HDC DCEx; // r15
  unsigned int v22; // r15d
  unsigned int v23; // r12d
  int v24; // edi
  HDC v25; // rdi
  __int64 v26; // rax
  struct tagWND *v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // edx
  unsigned int v30; // eax
  struct tagRECT *v31; // r13
  bool v32; // zf
  __int64 v33; // rdx
  int v34; // edx
  LONG v35; // eax
  LONG v36; // edx
  int v37; // eax
  struct tagRECT v38; // xmm0
  LONG left; // r8d
  __int64 v40; // rax
  int v41; // ecx
  int v42; // edx
  int v43; // edi
  LONG v44; // edx
  int v45; // ecx
  __int64 v46; // rax
  int v47; // edx
  int v48; // r8d
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 DesktopWindow; // rax
  unsigned int v52; // ecx
  __int64 v53; // rcx
  unsigned int v54; // r8d
  __int64 v55; // rcx
  __int64 *i; // rdi
  __int64 v57; // rax
  int v58; // r9d
  int v59; // eax
  __int64 v60; // r8
  __int64 v61; // rdx
  int v62; // [rsp+50h] [rbp-B0h]
  unsigned int v63; // [rsp+54h] [rbp-ACh]
  unsigned int v64; // [rsp+54h] [rbp-ACh]
  unsigned int v65; // [rsp+58h] [rbp-A8h]
  int v66; // [rsp+5Ch] [rbp-A4h]
  struct tagRECT *v67; // [rsp+60h] [rbp-A0h]
  HRGN v68; // [rsp+68h] [rbp-98h]
  int v69; // [rsp+70h] [rbp-90h]
  struct tagRECT v70; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v71; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v72; // [rsp+94h] [rbp-6Ch]
  int v73; // [rsp+98h] [rbp-68h]
  int v74; // [rsp+9Ch] [rbp-64h]
  unsigned int v75; // [rsp+A0h] [rbp-60h]
  unsigned int v76; // [rsp+A4h] [rbp-5Ch]
  unsigned int v77; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v78; // [rsp+ACh] [rbp-54h]
  unsigned int v79; // [rsp+B0h] [rbp-50h]
  unsigned int v80; // [rsp+B4h] [rbp-4Ch]
  int v81; // [rsp+B8h] [rbp-48h]
  int v82; // [rsp+BCh] [rbp-44h]
  struct tagRECT *v83; // [rsp+C0h] [rbp-40h]
  HDC v84; // [rsp+C8h] [rbp-38h]
  struct tagRECT *v85; // [rsp+D0h] [rbp-30h]
  struct tagRECT *v86; // [rsp+D8h] [rbp-28h]
  char v87[8]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v88[3]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v89[3]; // [rsp+100h] [rbp+0h] BYREF
  int v90[6]; // [rsp+118h] [rbp+18h] BYREF
  struct tagRECT v91; // [rsp+130h] [rbp+30h] BYREF
  struct tagRECT v92; // [rsp+140h] [rbp+40h] BYREF
  struct tagRECT v93; // [rsp+150h] [rbp+50h] BYREF
  int v94; // [rsp+160h] [rbp+60h] BYREF
  int v95; // [rsp+164h] [rbp+64h]
  int v96; // [rsp+168h] [rbp+68h]
  int v97; // [rsp+16Ch] [rbp+6Ch]

  v8 = 0;
  v71 = 0;
  v9 = 0LL;
  v72 = 0;
  v10 = a2;
  v66 = 0;
  v11 = a1;
  v12 = a4;
  v13 = a6;
  v67 = a4;
  v65 = a3;
  v63 = a2;
  v83 = a4;
  v86 = a5;
  v68 = (HRGN)a6;
  v85 = (struct tagRECT *)a7;
  v62 = 0;
  if ( !a1 )
  {
    v66 = 1;
    v11 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)v11 + 5) + 26LL) & 0x40) != 0 )
  {
    v10 = -(int)a2;
    v63 = -(int)a2;
    MirrorRegion(v11, a6, 1LL);
    if ( v12 )
    {
      a2 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v11 + 5) + 112LL)
                        - *(_DWORD *)(*((_QWORD *)v11 + 5) + 104LL)
                        - v12->left);
      v12->left = *(_DWORD *)(*((_QWORD *)v11 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v11 + 5) + 104LL) - v12->right;
      v12->right = a2;
    }
    v13 = a6;
    a4 = v12;
    v8 = 0;
    if ( a5 )
    {
      a2 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v11 + 5) + 112LL)
                        - *(_DWORD *)(*((_QWORD *)v11 + 5) + 104LL)
                        - a5->left);
      a5->left = *(_DWORD *)(*((_QWORD *)v11 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v11 + 5) + 104LL) - a5->right;
      a5->right = a2;
    }
  }
  if ( !(v10 | v65) )
    goto LABEL_25;
  if ( (unsigned int)IsVisible(v11, a2, a3, a4) )
  {
    v15 = a8;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v11 + 5) + 31LL) & 0x20) != 0 )
  {
LABEL_25:
    v15 = a8;
  }
  else
  {
    v15 = a8;
    if ( (a8 & 1) != 0 && !v14 )
    {
      v8 = 1;
      v15 = a8 & 0xFFFD;
      v62 = 1;
    }
  }
  if ( v13 )
  {
    SetEmptyRgn(v13);
    v8 = v62;
  }
  if ( a7 )
  {
    *(_QWORD *)a7 = 0LL;
    *(_QWORD *)(a7 + 8) = 0LL;
  }
  if ( !v8 )
    return 1LL;
LABEL_15:
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v87);
  v69 = 0;
  if ( v66 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
    v89[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v89;
    v89[1] = v11;
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
  }
  if ( !v62 )
  {
    v9 = *(_QWORD *)(gptiCurrent + 432LL) + 296LL;
    if ( *(_QWORD *)v9 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)v9, (__int64)v11) )
      {
        v69 = 1;
        zzzInternalHideCaret();
      }
    }
  }
  v18 = 65538;
  v81 = v15 & 1;
  if ( v15 < 0 )
  {
    v18 = (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v11 + 14) + 8LL) + 8LL) & 0x60) != 0 ? 0x10000 : 65538;
    if ( (v15 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)v11 + 5) + 31LL) & 2) != 0 )
      v18 |= 0x80002u;
  }
  else if ( (v15 & 1) != 0 )
  {
    v18 = 589826;
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v20 = v18 | 0x40000000;
  DCEx = (HDC)_GetDCEx(v11, 0LL, v20);
  v84 = DCEx;
  v82 = v15 & 2;
  if ( (v15 & 2) != 0 )
  {
    GetDCOrgOnScreen(DCEx, &v71);
    if ( !a6 )
      v68 = (HRGN)ghrgnSW;
  }
  if ( !v67 )
  {
    v83 = &v92;
    GetRect((__int64)v11, (__int64)&v92, 17);
    if ( (v20 & 2) == 0 )
      GreTransformPoints(DCEx, 0);
  }
  v22 = v10;
  v23 = v65;
  v91 = *v83;
  v24 = v20 & 2;
  if ( !v24 )
  {
    GreTransformPoints(v84, 1);
    v74 = 0;
    v73 = 0;
    v75 = v63;
    v76 = v65;
    GreTransformPoints(v84, 1);
    v22 = v75 - v73;
    v23 = v76 - v74;
  }
  if ( v62 )
  {
    v25 = v84;
    v64 = 1;
  }
  else
  {
    v26 = *((_QWORD *)v11 + 5);
    v27 = *(struct tagWND **)(v26 + 136);
    if ( v15 < 0 && (*(_BYTE *)(v26 + 21) & 1) == 0 )
    {
      if ( (unsigned __int64)v27 > 1 && (unsigned int)GreGetRgnBox(v27, &v94) )
      {
        v28 = *((_QWORD *)v11 + 5);
        v29 = v23 - *(_DWORD *)(v28 + 108);
        v30 = v22 - *(_DWORD *)(v28 + 104);
        v97 += v29;
        v95 += v29;
        v94 += v30;
        v96 += v30;
        xxxRedrawWindow(v11);
      }
      v27 = 0LL;
    }
    v31 = v85;
    v32 = v24 == 0;
    v25 = v84;
    v64 = InternalScrollDC(v27, v84, v63, v65, v83, v86, (HRGN)v27, v68, v85, v32);
    if ( v31 )
    {
      v33 = *((_QWORD *)v11 + 5);
      if ( (*(_BYTE *)(v33 + 26) & 0x40) != 0 )
      {
        v34 = *(_DWORD *)(v33 + 112) - *(_DWORD *)(v33 + 104);
        v35 = v34 - v31->right;
        v36 = v34 - v31->left;
        v31->left = v35;
        v31->right = v36;
      }
    }
  }
  _ReleaseDC(v25);
  v37 = v62;
  if ( !v62 )
  {
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
    {
      if ( v67 )
      {
        if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
        {
          v38 = v91;
          v92 = v91;
          left = v91.left;
        }
        else
        {
          v40 = *((_QWORD *)v11 + 5);
          v41 = *(_DWORD *)(v40 + 104);
          left = v41 + v91.left;
          v42 = *(_DWORD *)(v40 + 108);
          v92.right = v91.right + v41;
          v92.left = v41 + v91.left;
          v92.top = v42 + v91.top;
          v92.bottom = v42 + v91.bottom;
          v38 = v92;
        }
        v70.right = v22 + v38.right;
        v70.bottom = v23 + v38.bottom;
        v70.top = v23 + v38.top;
        v70.left = left + v22;
        UnionRect(&v70, &v70, &v92);
      }
      else
      {
        v70 = *(struct tagRECT *)(*((_QWORD *)v11 + 5) + 104LL);
      }
      SpbCheckRect(v11, &v70, 0);
    }
    v37 = 0;
  }
  v43 = v81;
  if ( v81 )
  {
    if ( !v37 && v11 == *(struct tagWND **)v9 )
    {
      if ( !v67
        || (v44 = *(_DWORD *)(v9 + 24),
            v93.left = *(_DWORD *)(v9 + 20),
            v93.right = *(_DWORD *)(v9 + 32) + v93.left,
            v45 = *(_DWORD *)(v9 + 28),
            v93.top = v44,
            v93.bottom = v44 + v45,
            (unsigned int)IntersectRect(&v93, &v93.left, &v91.left)) )
      {
        *(_DWORD *)(v9 + 20) += v22;
        *(_DWORD *)(v9 + 24) += v23;
      }
    }
    if ( v67 )
    {
      if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
      {
        v93 = v91;
      }
      else
      {
        v46 = *((_QWORD *)v11 + 5);
        v47 = *(_DWORD *)(v46 + 104);
        v48 = *(_DWORD *)(v46 + 108);
        v93.left = v47 + v91.left;
        v93.right = v47 + v91.right;
        v93.top = v48 + v91.top;
        v93.bottom = v48 + v91.bottom;
      }
    }
    if ( *((_QWORD *)v11 + 11) )
    {
      OffsetChildren(v11, v22, v23, (int *)((unsigned __int64)&v93 & -(__int64)(v67 != 0LL)), (v15 & 0x4000) == 0);
      zzzLockDisplayAreaAndInvalidateDCCache(
        (__int64)v11,
        (*(_BYTE *)(*((_QWORD *)v11 + 5) + 31LL) & 2) != 0 ? 4 : 2,
        0LL);
    }
  }
  if ( v82 )
  {
    if ( v68 != (HRGN)ghrgnSW )
      GreCombineRgn(ghrgnSW, v68, 0LL, 5LL);
    GreOffsetRgn(ghrgnSW, v71, v72);
    xxxInternalInvalidate(v11, ghrgnSW, v15 & 4 | 0x81);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v87);
  zzzEndDeferWinEventNotify();
  if ( v43 )
  {
    if ( v67 )
    {
      DesktopWindow = GetDesktopWindow((__int64)v11);
      if ( v49 == DesktopWindow )
      {
        v77 = v22 + v91.left;
        v79 = v22 + v91.right;
        v78 = v23 + v91.top;
        v52 = v23 + v91.bottom;
      }
      else
      {
        v53 = *(_QWORD *)(v49 + 40);
        v49 = v22 + *(_DWORD *)(v53 + 104);
        v54 = v23 + *(_DWORD *)(v53 + 108);
        v77 = v49 + v91.left;
        v79 = v49 + v91.right;
        v78 = v54 + v91.top;
        v52 = v54 + v91.bottom;
      }
      v80 = v52;
    }
    v55 = gptiCurrent;
    v88[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v88;
    v88[1] = 0LL;
    for ( i = (__int64 *)*((_QWORD *)v11 + 11); i; i = (__int64 *)i[8] )
    {
      if ( !v67 || (unsigned int)IntersectRect(v90, (int *)&v77, (int *)(i[5] + 88)) )
      {
        ThreadLockExchangeAlways(i, v88);
        if ( v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
        {
          v57 = i[5];
          v58 = *(unsigned __int16 *)(v57 + 108);
          v59 = *(unsigned __int16 *)(v57 + 104);
        }
        else
        {
          v60 = i[5];
          v61 = *((_QWORD *)v11 + 5);
          v58 = (unsigned __int16)(*(_WORD *)(v60 + 108) - *(_WORD *)(v61 + 108));
          v59 = (unsigned __int16)(*(_WORD *)(v60 + 104) - *(_WORD *)(v61 + 104));
        }
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(i, 3u, 0LL, v59 | (v58 << 16), 0, 0, 0LL, 1, 0);
      }
    }
    ThreadUnlock1(v55, v49);
  }
  if ( v69 )
    zzzInternalShowCaret();
  if ( v66 )
    ThreadUnlock1(v50, v49);
  return v64;
}

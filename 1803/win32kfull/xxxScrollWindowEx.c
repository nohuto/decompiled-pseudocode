/*
 * XREFs of xxxScrollWindowEx @ 0x1C002F500
 * Callers:
 *     NtUserScrollWindowEx @ 0x1C002F350 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1C01E911C (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1C0205A4C (xxxMNUpdateShownMenu.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x1C002AA30 (xxxRedrawWindow.c)
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C002C73C (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     IsVisible @ 0x1C002FD68 (IsVisible.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0033D9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetRect @ 0x1C0038BE0 (GetRect.c)
 *     zzzInternalShowCaret @ 0x1C003A940 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C003AA10 (zzzInternalHideCaret.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     GetDCOrgOnScreen @ 0x1C00642A4 (GetDCOrgOnScreen.c)
 *     UnionRect @ 0x1C0072864 (UnionRect.c)
 *     OffsetChildren @ 0x1C0073D44 (OffsetChildren.c)
 *     _IsDescendant @ 0x1C00765A8 (_IsDescendant.c)
 *     ThreadLockExchangeAlways @ 0x1C00DACD0 (ThreadLockExchangeAlways.c)
 *     GreTransformPoints @ 0x1C00E552C (GreTransformPoints.c)
 *     MirrorRegion @ 0x1C00F5E18 (MirrorRegion.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     SpbCheckRect @ 0x1C01CEB18 (SpbCheckRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxScrollWindowEx(
        struct tagWND *a1,
        __int64 a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        __int64 a6,
        __int64 a7,
        __int16 a8)
{
  __int64 v9; // r10
  __int64 v10; // r12
  int v11; // esi
  struct tagWND *v12; // rbx
  int v13; // r9d
  __int16 v14; // si
  __int64 ThreadWin32Thread; // rax
  int v16; // edi
  unsigned int v18; // edi
  HDC DCEx; // r14
  unsigned int v20; // r14d
  unsigned int v21; // r15d
  int v22; // edi
  HDC v23; // rdi
  __int64 v24; // rax
  struct tagWND *v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // edx
  unsigned int v28; // eax
  struct tagRECT *v29; // r13
  bool v30; // zf
  __int64 v31; // rdx
  int v32; // edx
  LONG v33; // eax
  LONG v34; // edx
  int v35; // eax
  struct tagRECT *v36; // r13
  struct tagRECT v37; // xmm0
  LONG left; // r8d
  __int64 v39; // rax
  int v40; // ecx
  int v41; // edx
  int v42; // edi
  LONG v43; // edx
  LONG v44; // ecx
  __int64 v45; // rax
  int v46; // edx
  int v47; // r8d
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 DesktopWindow; // rax
  unsigned int v52; // ecx
  __int64 v53; // rcx
  __int64 v54; // rcx
  ULONG_PTR i; // rdi
  int v56; // [rsp+50h] [rbp-B0h]
  unsigned int v57; // [rsp+54h] [rbp-ACh]
  unsigned int v58; // [rsp+54h] [rbp-ACh]
  unsigned int v59; // [rsp+58h] [rbp-A8h]
  int v60; // [rsp+5Ch] [rbp-A4h]
  HRGN v61; // [rsp+60h] [rbp-A0h]
  int v62; // [rsp+68h] [rbp-98h]
  struct tagRECT v63; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v64; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v65; // [rsp+84h] [rbp-7Ch]
  int v66; // [rsp+88h] [rbp-78h]
  int v67; // [rsp+8Ch] [rbp-74h]
  unsigned int v68; // [rsp+90h] [rbp-70h]
  unsigned int v69; // [rsp+94h] [rbp-6Ch]
  unsigned int v70; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v71; // [rsp+9Ch] [rbp-64h]
  unsigned int v72; // [rsp+A0h] [rbp-60h]
  unsigned int v73; // [rsp+A4h] [rbp-5Ch]
  int v74; // [rsp+A8h] [rbp-58h]
  int v75; // [rsp+ACh] [rbp-54h]
  struct tagRECT *v76; // [rsp+B0h] [rbp-50h]
  HDC v77; // [rsp+B8h] [rbp-48h]
  struct tagRECT *v78; // [rsp+C0h] [rbp-40h]
  struct tagRECT *v79; // [rsp+C8h] [rbp-38h]
  struct tagRECT *v80; // [rsp+D0h] [rbp-30h]
  char v81[8]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v82[3]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v83[3]; // [rsp+F8h] [rbp-8h] BYREF
  int v84[4]; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT v85; // [rsp+120h] [rbp+20h] BYREF
  struct tagRECT v86; // [rsp+130h] [rbp+30h] BYREF
  struct tagRECT v87; // [rsp+140h] [rbp+40h] BYREF
  int v88; // [rsp+150h] [rbp+50h] BYREF
  int v89; // [rsp+154h] [rbp+54h]
  int v90; // [rsp+158h] [rbp+58h]
  int v91; // [rsp+15Ch] [rbp+5Ch]

  v9 = a6;
  v10 = 0LL;
  v11 = a2;
  v79 = a5;
  v12 = a1;
  v78 = a4;
  v76 = a4;
  v13 = 0;
  v64 = 0;
  v65 = 0;
  v60 = 0;
  v59 = (unsigned int)a3;
  v57 = a2;
  v61 = (HRGN)a6;
  v80 = (struct tagRECT *)a7;
  v56 = 0;
  if ( !a1 )
  {
    v60 = 1;
    v12 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 26LL) & 0x40) != 0 )
  {
    v11 = -(int)a2;
    v57 = -(int)a2;
    MirrorRegion(v12, a6, 1LL);
    if ( a4 )
    {
      a2 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL)
                        - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL)
                        - a4->left);
      a4->left = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a4->right;
      a4->right = a2;
    }
    a3 = v79;
    v13 = 0;
    v9 = a6;
    if ( v79 )
    {
      a2 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL)
                        - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL)
                        - v79->left);
      v79->left = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - v79->right;
      a3->right = a2;
    }
  }
  if ( !(v11 | v59) )
    goto LABEL_25;
  if ( (unsigned int)IsVisible(v12) )
  {
    v14 = a8;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 0x20) != 0 )
  {
LABEL_25:
    v14 = a8;
  }
  else
  {
    v14 = a8;
    if ( (a8 & 1) != 0 && !a4 )
    {
      v13 = 1;
      v14 = a8 & 0xFFFD;
      v56 = 1;
    }
  }
  if ( v9 )
  {
    SetEmptyRgn(v9, a2, a3);
    v13 = v56;
  }
  if ( a7 )
  {
    *(_QWORD *)a7 = 0LL;
    *(_QWORD *)(a7 + 8) = 0LL;
  }
  if ( !v13 )
    return 1LL;
LABEL_15:
  v62 = 0;
  if ( v60 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    v83[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v83;
    v83[1] = v12;
    _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
  }
  if ( !v56 )
  {
    v10 = *(_QWORD *)(gptiCurrent + 424LL) + 296LL;
    if ( *(_QWORD *)v10 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)v10, v12) )
      {
        v62 = 1;
        zzzInternalHideCaret();
      }
    }
  }
  v16 = 65538;
  v74 = v14 & 1;
  if ( v14 < 0 )
  {
    v16 = (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v12 + 14) + 8LL) + 8LL) & 0x60) != 0 ? 0x10000 : 65538;
    if ( (v14 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 2) != 0 )
      v16 |= 0x80002u;
  }
  else if ( (v14 & 1) != 0 )
  {
    v16 = 589826;
  }
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v81);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v18 = v16 | 0x40000000;
  DCEx = (HDC)_GetDCEx(v12, 0LL, v18);
  v77 = DCEx;
  v75 = v14 & 2;
  if ( (v14 & 2) != 0 )
  {
    GetDCOrgOnScreen(DCEx, &v64);
    if ( !a6 )
      v61 = (HRGN)ghrgnSW;
  }
  if ( !a4 )
  {
    v76 = &v86;
    GetRect(v12, &v86, 17LL);
    if ( (v18 & 2) == 0 )
      GreTransformPoints(DCEx, 0);
  }
  v20 = v57;
  v21 = v59;
  v85 = *v76;
  v22 = v18 & 2;
  if ( !v22 )
  {
    GreTransformPoints(v77, 1);
    v67 = 0;
    v66 = 0;
    v68 = v57;
    v69 = v59;
    GreTransformPoints(v77, 1);
    v20 = v68 - v66;
    v21 = v69 - v67;
  }
  if ( v56 )
  {
    v23 = v77;
    v58 = 1;
  }
  else
  {
    v24 = *((_QWORD *)v12 + 5);
    v25 = *(struct tagWND **)(v24 + 136);
    if ( v14 < 0 && (*(_BYTE *)(v24 + 21) & 1) == 0 )
    {
      if ( (unsigned __int64)v25 > 1 && (unsigned int)GreGetRgnBox(v25, &v88) )
      {
        v26 = *((_QWORD *)v12 + 5);
        v27 = v21 - *(_DWORD *)(v26 + 108);
        v28 = v20 - *(_DWORD *)(v26 + 104);
        v91 += v27;
        v89 += v27;
        v88 += v28;
        v90 += v28;
        xxxRedrawWindow(v12, (__int64)&v88, 0LL, 133);
      }
      v25 = 0LL;
    }
    v29 = v80;
    v30 = v22 == 0;
    v23 = v77;
    v58 = InternalScrollDC(v25, v77, v57, v59, (__m128i *)v76, v79, (HRGN)v25, v61, v80, v30);
    if ( v29 )
    {
      v31 = *((_QWORD *)v12 + 5);
      if ( (*(_BYTE *)(v31 + 26) & 0x40) != 0 )
      {
        v32 = *(_DWORD *)(v31 + 112) - *(_DWORD *)(v31 + 104);
        v33 = v32 - v29->right;
        v34 = v32 - v29->left;
        v29->left = v33;
        v29->right = v34;
      }
    }
  }
  _ReleaseDC(v23);
  v35 = v56;
  v36 = v78;
  if ( !v56 )
  {
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
    {
      if ( v78 )
      {
        if ( v12 == (struct tagWND *)GetDesktopWindow((__int64)v12) )
        {
          v37 = v85;
          v86 = v85;
          left = v85.left;
        }
        else
        {
          v39 = *((_QWORD *)v12 + 5);
          v40 = *(_DWORD *)(v39 + 104);
          left = v40 + v85.left;
          v41 = *(_DWORD *)(v39 + 108);
          v86.right = v85.right + v40;
          v86.left = v40 + v85.left;
          v86.top = v41 + v85.top;
          v86.bottom = v41 + v85.bottom;
          v37 = v86;
        }
        v63.right = v20 + v37.right;
        v63.bottom = v21 + v37.bottom;
        v63.top = v21 + v37.top;
        v63.left = left + v20;
        UnionRect(&v63, &v63, &v86);
      }
      else
      {
        v63 = *(struct tagRECT *)(*((_QWORD *)v12 + 5) + 104LL);
      }
      SpbCheckRect(v12, &v63, 0);
    }
    v35 = 0;
  }
  v42 = v74;
  if ( v74 )
  {
    if ( !v35 && v12 == *(struct tagWND **)v10 )
    {
      if ( !v36
        || (v43 = *(_DWORD *)(v10 + 24),
            v87.left = *(_DWORD *)(v10 + 20),
            v87.right = *(_DWORD *)(v10 + 32) + v87.left,
            v44 = v43 + *(_DWORD *)(v10 + 28),
            v87.top = v43,
            v87.bottom = v44,
            (unsigned int)IntersectRect(&v87, &v87.left, &v85.left)) )
      {
        *(_DWORD *)(v10 + 20) += v20;
        *(_DWORD *)(v10 + 24) += v21;
      }
    }
    if ( v36 )
    {
      if ( v12 == (struct tagWND *)GetDesktopWindow((__int64)v12) )
      {
        v87 = v85;
      }
      else
      {
        v45 = *((_QWORD *)v12 + 5);
        v46 = *(_DWORD *)(v45 + 104);
        v47 = *(_DWORD *)(v45 + 108);
        v87.left = v46 + v85.left;
        v87.right = v46 + v85.right;
        v87.top = v47 + v85.top;
        v87.bottom = v47 + v85.bottom;
      }
    }
    if ( *((_QWORD *)v12 + 11) )
    {
      OffsetChildren(v12, (v14 & 0x4000) == 0);
      zzzLockDisplayAreaAndInvalidateDCCache(v12, (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 2) != 0 ? 4 : 2, 0LL);
    }
  }
  if ( v75 )
  {
    if ( v61 != (HRGN)ghrgnSW )
      GreCombineRgn(ghrgnSW, v61, 0LL, 5LL);
    GreOffsetRgn(ghrgnSW, v64, v65);
    xxxInternalInvalidate(v12, ghrgnSW, v14 & 4 | 0x81);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v81);
  zzzEndDeferWinEventNotify();
  if ( v42 )
  {
    if ( v36 )
    {
      DesktopWindow = GetDesktopWindow((__int64)v12);
      if ( v48 == DesktopWindow )
      {
        v70 = v20 + v85.left;
        v72 = v20 + v85.right;
        v71 = v21 + v85.top;
        v52 = v21 + v85.bottom;
      }
      else
      {
        v53 = *(_QWORD *)(v48 + 40);
        v48 = v20 + *(_DWORD *)(v53 + 104);
        v50 = v21 + *(_DWORD *)(v53 + 108);
        v70 = v48 + v85.left;
        v72 = v48 + v85.right;
        v71 = v50 + v85.top;
        v52 = v50 + v85.bottom;
      }
      v73 = v52;
    }
    v54 = gptiCurrent;
    v82[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v82;
    v82[1] = 0LL;
    for ( i = *((_QWORD *)v12 + 11); i; i = *(_QWORD *)(i + 64) )
    {
      if ( !v36 || (unsigned int)IntersectRect(v84, (int *)&v70, (int *)(*(_QWORD *)(i + 40) + 88LL)) )
      {
        ThreadLockExchangeAlways(i, v82);
        GetDesktopWindow((__int64)v12);
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(i, 0, 0, 0LL, 1, 0);
      }
    }
    ThreadUnlock1(v54, v48, v50);
  }
  if ( v62 )
    zzzInternalShowCaret();
  if ( v60 )
    ThreadUnlock1(v49, v48, v50);
  return v58;
}

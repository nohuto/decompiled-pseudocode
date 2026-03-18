/*
 * XREFs of ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00591B0
 * Callers:
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C0059130 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 *     xxxComputeProposedPerMonRect @ 0x1C005AA38 (xxxComputeProposedPerMonRect.c)
 * Callees:
 *     GetWindowBordersWithDpiAwareness @ 0x1C0022390 (GetWindowBordersWithDpiAwareness.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     GetWindowExtendedMargin @ 0x1C0059034 (GetWindowExtendedMargin.c)
 *     IsValidMonitor @ 0x1C0059790 (IsValidMonitor.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C00721C4 (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     GetMonitorRectForWindow @ 0x1C0073764 (GetMonitorRectForWindow.c)
 *     GetMonitorRectForDpi @ 0x1C00737A0 (GetMonitorRectForDpi.c)
 *     ScaleDPIRect @ 0x1C0073820 (ScaleDPIRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01A3A74 (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01B0038 (xxxAppAdjustDpiCandidateRect.c)
 *     ExtendRectByWindowMargin @ 0x1C01BF574 (ExtendRectByWindowMargin.c)
 */

struct tagMONITOR *__fastcall xxxNormalizeRect(
        struct tagWND *a1,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagMONITORRECTS *a4,
        int a5,
        int a6,
        int a7)
{
  struct tagRECT v8; // xmm0
  __int64 v10; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int16 v16; // bx
  __int64 v17; // r9
  __int64 v18; // rdx
  INT v19; // eax
  LONG right; // r15d
  INT v21; // eax
  LONG top; // r8d
  int bottom; // edi
  __int128 v24; // xmm0
  struct tagRECT *v25; // rax
  __int64 ThreadWin32Thread; // rax
  struct tagMONITOR *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  INT v33; // eax
  INT v34; // eax
  BOOL v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int128 v40; // xmm0
  bool v41; // zf
  struct tagRECT v42; // xmm0
  int WindowBordersWithDpiAwareness; // eax
  int v44; // ecx
  LONG v45; // r8d
  int v46; // edx
  LONG v47; // eax
  _DWORD *v48; // rdx
  int v49; // eax
  int v50; // ebx
  int v51; // r10d
  int v52; // r12d
  int v53; // r11d
  int v54; // r13d
  int v55; // r10d
  int v56; // ecx
  _DWORD *v57; // rbx
  LONG v58; // edx
  LONG v59; // r8d
  LONG left; // ecx
  LONG v61; // r9d
  LONG v62; // r9d
  LONG v63; // r8d
  LONG v64; // ecx
  int v65; // eax
  int v66; // eax
  LONG v67; // r10d
  LONG v68; // ecx
  int v69; // eax
  int v70; // ecx
  int v71; // r11d
  int v72; // ecx
  int v73; // ebx
  unsigned __int16 v74; // [rsp+30h] [rbp-D0h]
  int v75; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v76; // [rsp+34h] [rbp-CCh]
  struct tagMONITOR *NewMonitor; // [rsp+38h] [rbp-C8h] BYREF
  struct tagRECT v78; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v79; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v80; // [rsp+52h] [rbp-AEh]
  __int16 v81; // [rsp+54h] [rbp-ACh]
  __int16 v82; // [rsp+56h] [rbp-AAh]
  int v83; // [rsp+58h] [rbp-A8h]
  struct tagRECT v84; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT *v85; // [rsp+70h] [rbp-90h]
  int v86; // [rsp+78h] [rbp-88h]
  struct tagRECT v87; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v88[3]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v89[3]; // [rsp+A8h] [rbp-58h] BYREF
  char v90[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v91; // [rsp+D0h] [rbp-30h] BYREF
  char v92[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v93; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v94; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v95[72]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v96[77]; // [rsp+158h] [rbp+58h] BYREF

  v8 = *a3;
  v83 = 0;
  v10 = 56LL * a5;
  v78 = v8;
  v85 = a3;
  v13 = ValidateHmonitor(*(_QWORD *)((char *)a4 + v10 + 48));
  NewMonitor = (struct tagMONITOR *)v13;
  v16 = 96;
  if ( !v13 || !(unsigned int)IsValidMonitor(v13, v14, v15, v13) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a4 + v10 + 8));
    v17 = (__int64)NewMonitor;
    if ( !NewMonitor )
    {
      v17 = *(_QWORD *)(GetDispInfo() + 96);
      NewMonitor = (struct tagMONITOR *)v17;
    }
  }
  v74 = *(_WORD *)((char *)a4 + v10 + 40);
  v18 = *(unsigned __int16 *)(*(_QWORD *)(v17 + 40) + 64LL);
  v76 = *(_WORD *)(*(_QWORD *)(v17 + 40) + 64LL);
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
  {
    if ( a7
      && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 640LL) & 0x2000000) == 0
      && !a6
      && (_WORD)v18 != *(_WORD *)((char *)a4 + v10 + 40) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
      v88[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v88;
      v88[1] = a1;
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
      v27 = NewMonitor;
      v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28);
      v89[0] = *(_QWORD *)(v29 + 408);
      *(_QWORD *)(v29 + 408) = v89;
      v89[1] = v27;
      _InterlockedIncrement((volatile signed __int32 *)v27 + 2);
      if ( (unsigned int)xxxAppAdjustDpiCandidateRect(a1, v76, &v78, &v78) )
      {
        bottom = v78.bottom;
        right = v78.right;
      }
      else
      {
        v33 = EngMulDiv(a3->right - a3->left, v76, v74);
        right = v78.left + v33;
        v34 = EngMulDiv(v85->bottom - v85->top, v76, v74);
        bottom = v78.top + v34;
      }
      v35 = ThreadUnlock1(v31, v30, v32) == 0;
      if ( v35 | (ThreadUnlock1(v37, v36, v38) == 0) )
        return 0LL;
      v17 = (__int64)NewMonitor;
      goto LABEL_12;
    }
LABEL_11:
    right = v78.right;
    bottom = v78.bottom;
LABEL_12:
    top = v78.top;
    goto LABEL_13;
  }
  memset(v95, 0, sizeof(v95));
  memset(v96, 0, 0x260uLL);
  v96[5] = v95;
  PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v95, (struct tagMONITORRECTS *)((char *)a4 + v10 + 8));
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 0 )
    v16 = *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
  v84 = *(struct tagRECT *)GetMonitorRectForDpi(v90, v96, v16);
  ScaleDPIRect(
    (unsigned int)&v78,
    (unsigned int)&v78,
    v74,
    v16,
    *(_QWORD *)((char *)a4 + v10 + 8),
    *(__int64 *)&v84.left);
  v83 = 1;
  if ( a6 )
  {
    v17 = (__int64)NewMonitor;
    goto LABEL_11;
  }
  v19 = EngMulDiv(a3->right - a3->left, v76, v16);
  right = v78.left + v19;
  v21 = EngMulDiv(v85->bottom - v85->top, v76, v16);
  top = v78.top;
  v17 = (__int64)NewMonitor;
  bottom = v78.top + v21;
LABEL_13:
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v24 = *GetMonitorWorkRectForWindow(&v91, v17, a1);
      v25 = (struct tagRECT *)&v93;
      v93 = v24;
    }
    else
    {
      v40 = *(_OWORD *)GetMonitorRectForWindow(v92, v17, a1);
      v25 = (struct tagRECT *)&v94;
      v94 = v40;
    }
    v41 = *((_DWORD *)a1 + 70) == 0;
    v42 = *v25;
    v84 = *v25;
    if ( v41 )
    {
      WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((__int64)a1);
      v44 = v84.left - WindowBordersWithDpiAwareness;
      v45 = v84.top - WindowBordersWithDpiAwareness;
      a2->left = v84.left - WindowBordersWithDpiAwareness;
      a2->top = v45;
      WindowBordersWithDpiAwareness *= 2;
      v46 = v45 + WindowBordersWithDpiAwareness - v84.top;
      v47 = v84.right + v44 + WindowBordersWithDpiAwareness - v84.left;
      a2->bottom = v84.bottom + v46;
      a2->right = v47;
    }
    else
    {
      v87 = v42;
      ExtendRectByWindowMargin(a1, &v87, &v84);
      *a2 = v84;
    }
  }
  else
  {
    v48 = *(_DWORD **)(v17 + 40);
    v75 = *(_DWORD *)((char *)a4 + v10 + 12);
    LODWORD(v85) = *(_DWORD *)((char *)a4 + v10 + 8);
    v49 = v48[8];
    v50 = v48[7] - (_DWORD)v85;
    v51 = *(_DWORD *)((char *)a4 + v10 + 16) - (_DWORD)v85;
    v52 = *(_DWORD *)((char *)a4 + v10 + 20) - v75;
    v53 = v48[9] - v48[7];
    v86 = v51;
    v54 = v51;
    v55 = v48[10] - v49;
    if ( v53 == v86 && v55 == v52 )
    {
      v56 = v49 - v75;
    }
    else
    {
      v50 += ((v78.left - (int)v85) * (v53 - v54) + v54 / 2) / v54;
      v56 = ((top - v75) * (v55 - v52) + v52 / 2) / v52 + v49 - v75;
    }
    a2->left = v50 + v78.left;
    a2->right = v50 + right;
    a2->top = v56 + top;
    a2->bottom = v56 + bottom;
    v57 = *(_DWORD **)(v17 + 40);
    GetWindowExtendedMargin((__int64)a1, (__int64)&v79);
    v58 = a2->right;
    v59 = v57[13];
    left = a2->left;
    if ( v58 > v59 )
    {
      left += v59 + v80 - v58;
      v58 = v59 + v80;
      a2->left = left;
      a2->right = v58;
    }
    v61 = v57[11];
    if ( left >= v61 )
    {
      v62 = left;
    }
    else
    {
      v62 = v61 - v79;
      v58 = v62 + v58 - left;
      a2->left = v62;
      a2->right = v58;
    }
    v63 = a2->bottom;
    v64 = v57[14];
    if ( v63 > v64 )
    {
      v65 = v82 - v63;
      a2->right = v58;
      v66 = v64 + v65;
      v63 += v66;
      a2->top += v66;
      a2->bottom = v63;
    }
    v67 = a2->top;
    v68 = v57[12];
    if ( v67 < v68 )
    {
      v69 = v81;
      a2->right = v58;
      v70 = v68 - v69 - v67;
      v63 += v70;
      v67 += v70;
      a2->bottom = v63;
      a2->top = v67;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
    {
      v71 = v57[13];
      v72 = 0;
      if ( v58 - v80 > v71 )
      {
        v58 = v80 + v71;
        v72 = 1;
        a2->right = v58;
      }
      v73 = v57[14];
      if ( v63 - v82 > v73 )
      {
        v63 = v82 + v73;
        ++v72;
        a2->bottom = v63;
      }
      if ( v72 == 2 )
      {
        a2->left = v62 + 1;
        a2->right = v58 - 1;
        a2->top = v67 + 1;
        a2->bottom = v63 - 1;
      }
    }
    if ( v83 )
      PhysicalToLogicalDPIRect(a2, a2, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), &NewMonitor);
  }
  return NewMonitor;
}

/*
 * XREFs of ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C0116B7C
 * Callers:
 *     xxxComputeProposedPerMonRect @ 0x1C008FE20 (xxxComputeProposedPerMonRect.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C0116AFC (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C0091874 (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     GetMonitorRectForDpi @ 0x1C0091AB8 (GetMonitorRectForDpi.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00920C8 (GetWindowBordersWithDpiAwareness.c)
 *     ScaleDPIRect @ 0x1C0094DA0 (ScaleDPIRect.c)
 *     GetMonitorRectForWindow @ 0x1C0095B2C (GetMonitorRectForWindow.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00970A8 (GetMonitorWorkRectForWindow.c)
 *     IsValidMonitor @ 0x1C0116FC4 (IsValidMonitor.c)
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C0116FF0 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01D9004 (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E7AEC (xxxAppAdjustDpiCandidateRect.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023C9B4 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 */

struct tagMONITOR *__fastcall xxxNormalizeRect(
        struct tagWND *a1,
        struct tagRECT *a2,
        __m128i *a3,
        struct tagMONITORRECTS *a4,
        int a5,
        int a6,
        int a7)
{
  __m128i v8; // xmm0
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int16 v14; // bx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  char v18; // cl
  __int32 v19; // r12d
  __int32 v20; // edi
  __int32 v21; // r8d
  _DWORD *v22; // rdx
  int v23; // ecx
  int v24; // r11d
  int v25; // eax
  int v26; // ebx
  int v27; // r10d
  int v28; // r15d
  int v29; // r13d
  int v30; // r10d
  _DWORD *v31; // rbx
  LONG right; // edx
  LONG v33; // r8d
  LONG left; // ecx
  LONG v35; // r9d
  LONG v36; // r9d
  LONG bottom; // r8d
  LONG v38; // ecx
  LONG top; // r10d
  LONG v40; // ecx
  INT v42; // eax
  INT v43; // eax
  int v44; // r11d
  int v45; // ecx
  int v46; // ebx
  __int128 v47; // xmm0
  struct tagRECT *v48; // rax
  bool v49; // zf
  int WindowBordersWithDpiAwareness; // eax
  int v51; // ecx
  LONG v52; // r8d
  int v53; // edx
  LONG v54; // eax
  __int128 v55; // xmm0
  int v56; // eax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 ThreadWin32Thread; // rax
  struct tagMONITOR *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  INT v69; // eax
  INT v70; // eax
  BOOL v71; // ebx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  int v75; // eax
  int v76; // ecx
  unsigned __int16 v77; // [rsp+30h] [rbp-D0h]
  int v78; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v79; // [rsp+34h] [rbp-CCh]
  int v80; // [rsp+34h] [rbp-CCh]
  __int64 v81; // [rsp+38h] [rbp-C8h] BYREF
  __m128i v82; // [rsp+40h] [rbp-C0h] BYREF
  struct tagMONITOR *NewMonitor; // [rsp+50h] [rbp-B0h] BYREF
  int v84; // [rsp+58h] [rbp-A8h]
  struct tagRECT v85; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT *v86; // [rsp+70h] [rbp-90h]
  int v87; // [rsp+78h] [rbp-88h]
  __int64 v88; // [rsp+80h] [rbp-80h] BYREF
  struct tagWND *v89; // [rsp+88h] [rbp-78h]
  __int64 v90; // [rsp+90h] [rbp-70h]
  __int64 v91; // [rsp+98h] [rbp-68h] BYREF
  struct tagMONITOR *v92; // [rsp+A0h] [rbp-60h]
  __int64 v93; // [rsp+A8h] [rbp-58h]
  __int64 v94; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v95; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v96; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v97; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v98; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v99[88]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v100[43]; // [rsp+158h] [rbp+58h] BYREF

  v8 = *a3;
  v84 = 0;
  v86 = (struct tagRECT *)a3;
  v12 = 48LL * a5;
  v82 = v8;
  v13 = ValidateHmonitor(*(_QWORD *)((char *)a4 + v12 + 48));
  NewMonitor = (struct tagMONITOR *)v13;
  v14 = 96;
  if ( !v13 || !(unsigned int)IsValidMonitor(v13) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a4 + v12 + 8));
    v15 = (__int64)NewMonitor;
    if ( !NewMonitor )
    {
      v15 = *(_QWORD *)(GetDispInfo(v59, v58) + 96);
      NewMonitor = (struct tagMONITOR *)v15;
    }
  }
  v16 = *(unsigned __int16 *)((char *)a4 + v12 + 40);
  v79 = *(_WORD *)((char *)a4 + v12 + 40);
  v17 = *(unsigned __int16 *)(*(_QWORD *)(v15 + 40) + 64LL);
  v77 = *(_WORD *)(*(_QWORD *)(v15 + 40) + 64LL);
  v18 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  v87 = 2;
  if ( v18 == 2 )
  {
    if ( a7 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 640LL) & 0x2000000) == 0 && !a6 && (_WORD)v17 != (_WORD)v16 )
    {
      v88 = 0LL;
      v89 = 0LL;
      v90 = 0LL;
      v91 = 0LL;
      v92 = 0LL;
      v93 = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v16, v15);
      v88 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v88;
      v89 = a1;
      HMLockObject(a1);
      v61 = NewMonitor;
      v65 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64);
      v91 = *(_QWORD *)(v65 + 408);
      *(_QWORD *)(v65 + 408) = &v91;
      v92 = v61;
      HMLockObject(v61);
      if ( (unsigned int)xxxAppAdjustDpiCandidateRect(a1, v77, &v82, &v82) )
      {
        v20 = v82.m128i_i32[3];
        v19 = v82.m128i_i32[2];
      }
      else
      {
        v69 = EngMulDiv(a3->m128i_i32[2] - a3->m128i_i32[0], v77, v79);
        v19 = v82.m128i_i32[0] + v69;
        v70 = EngMulDiv(v86->bottom - v86->top, v77, v79);
        v20 = v82.m128i_i32[1] + v70;
      }
      v71 = ThreadUnlock1(v67, v66, v68) == 0;
      if ( v71 | (ThreadUnlock1(v73, v72, v74) == 0) )
        return 0LL;
      v15 = (__int64)NewMonitor;
      goto LABEL_6;
    }
  }
  else
  {
    memset(v99, 0, sizeof(v99));
    memset(v100, 0, 0x150uLL);
    v100[5] = v99;
    PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v99, (struct tagMONITORRECTS *)((char *)a4 + v12 + 8));
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 0 )
      v14 = *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    v85 = *(struct tagRECT *)GetMonitorRectForDpi(&v94, (__int64)v100, v14);
    ScaleDPIRect(&v82, &v82, v79, v14, *(_QWORD *)((char *)a4 + v12 + 8), *(__int64 *)&v85.left);
    v84 = 1;
    if ( !a6 )
    {
      v42 = EngMulDiv(a3->m128i_i32[2] - a3->m128i_i32[0], v77, v14);
      v19 = v82.m128i_i32[0] + v42;
      v43 = EngMulDiv(v86->bottom - v86->top, v77, v14);
      v21 = v82.m128i_i32[1];
      v15 = (__int64)NewMonitor;
      v20 = v82.m128i_i32[1] + v43;
      goto LABEL_7;
    }
    v15 = (__int64)NewMonitor;
  }
  v19 = v82.m128i_i32[2];
  v20 = v82.m128i_i32[3];
LABEL_6:
  v21 = v82.m128i_i32[1];
LABEL_7:
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v47 = *GetMonitorWorkRectForWindow(&v95, v15, a1);
      v48 = (struct tagRECT *)&v97;
      v97 = v47;
    }
    else
    {
      v55 = *GetMonitorRectForWindow(&v96, v15, a1);
      v48 = (struct tagRECT *)&v98;
      v98 = v55;
    }
    v49 = *((_DWORD *)a1 + 77) == 0;
    v85 = *v48;
    if ( v49 )
    {
      WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((__int64)a1);
      v51 = v85.left - WindowBordersWithDpiAwareness;
      v52 = v85.top - WindowBordersWithDpiAwareness;
      a2->left = v85.left - WindowBordersWithDpiAwareness;
      a2->top = v52;
      WindowBordersWithDpiAwareness *= 2;
      v53 = v52 + WindowBordersWithDpiAwareness - v85.top;
      v54 = v85.right + v51 + WindowBordersWithDpiAwareness - v85.left;
      a2->bottom = v85.bottom + v53;
      a2->right = v54;
    }
    else
    {
      ExtendRectByWindowMargin(a1, &v85, &v85);
      *a2 = v85;
    }
  }
  else
  {
    v22 = *(_DWORD **)(v15 + 40);
    v78 = *(_DWORD *)((char *)a4 + v12 + 12);
    v80 = *(_DWORD *)((char *)a4 + v12 + 8);
    v23 = v22[7];
    v24 = v23 - v80;
    v25 = v22[8];
    v26 = v25 - v78;
    v27 = *(_DWORD *)((char *)a4 + v12 + 16) - v80;
    v28 = *(_DWORD *)((char *)a4 + v12 + 20) - v78;
    LODWORD(v86) = v27;
    v29 = v27;
    LODWORD(v81) = v22[9] - v23;
    v30 = v22[10] - v25;
    if ( (_DWORD)v81 != (_DWORD)v86 || v30 != v28 )
    {
      v24 += (((int)v81 - v29) * (v82.m128i_i32[0] - v80) + v29 / v87) / v29;
      v26 += ((v21 - v78) * (v30 - v28) + v28 / 2) / v28;
    }
    v81 = 0LL;
    a2->left = v24 + v82.m128i_i32[0];
    a2->right = v24 + v19;
    a2->top = v26 + v21;
    a2->bottom = v26 + v20;
    v31 = *(_DWORD **)(v15 + 40);
    GetWindowExtendedMargin(a1, (struct FRAME_MARGIN *)&v81);
    right = a2->right;
    v33 = v31[13];
    left = a2->left;
    if ( right > v33 )
    {
      left += v33 + SWORD1(v81) - right;
      right = v33 + SWORD1(v81);
      a2->left = left;
      a2->right = right;
    }
    v35 = v31[11];
    if ( left < v35 )
    {
      v36 = v35 - (__int16)v81;
      right = v36 + right - left;
      a2->left = v36;
      a2->right = right;
    }
    else
    {
      v36 = left;
    }
    bottom = a2->bottom;
    v38 = v31[14];
    if ( bottom > v38 )
    {
      v56 = SHIWORD(v81) - bottom;
      a2->right = right;
      v57 = v38 + v56;
      bottom += v57;
      a2->top += v57;
      a2->bottom = bottom;
    }
    top = a2->top;
    v40 = v31[12];
    if ( top < v40 )
    {
      v75 = SWORD2(v81);
      a2->right = right;
      v76 = v40 - v75 - top;
      bottom += v76;
      top += v76;
      a2->bottom = bottom;
      a2->top = top;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
    {
      v44 = v31[13];
      v45 = 0;
      if ( right - SWORD1(v81) > v44 )
      {
        right = SWORD1(v81) + v44;
        v45 = 1;
        a2->right = right;
      }
      v46 = v31[14];
      if ( bottom - SHIWORD(v81) > v46 )
      {
        bottom = SHIWORD(v81) + v46;
        ++v45;
        a2->bottom = bottom;
      }
      if ( v45 == 2 )
      {
        a2->left = v36 + 1;
        a2->right = right - 1;
        a2->top = top + 1;
        a2->bottom = bottom - 1;
      }
    }
    if ( v84 )
      PhysicalToLogicalDPIRect(a2, a2, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), &NewMonitor);
  }
  return NewMonitor;
}

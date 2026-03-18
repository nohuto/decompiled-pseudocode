/*
 * XREFs of ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00CF3B4
 * Callers:
 *     xxxComputeProposedPerMonRect @ 0x1C00CDB6C (xxxComputeProposedPerMonRect.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C00CF334 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C001CA24 (ScaleDPIRect.c)
 *     GetMonitorRectForWindow @ 0x1C001CCB8 (GetMonitorRectForWindow.c)
 *     GetMonitorRectForDpi @ 0x1C001CCF4 (GetMonitorRectForDpi.c)
 *     GetMonitorWorkRectForWindow @ 0x1C001D104 (GetMonitorWorkRectForWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00691A4 (GetWindowBordersWithDpiAwareness.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C00CDDB4 (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     IsValidMonitor @ 0x1C00CF9CC (IsValidMonitor.c)
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C00CF9F8 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01C5C70 (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01D2EAC (xxxAppAdjustDpiCandidateRect.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C0224534 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  INT v19; // eax
  __int32 v20; // r12d
  INT v21; // eax
  __int32 v22; // r8d
  __int32 v23; // edi
  __int128 v24; // xmm0
  struct tagRECT *v25; // rax
  __int64 ThreadWin32Thread; // rax
  struct tagMONITOR *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  INT v32; // eax
  INT v33; // eax
  BOOL v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int128 v38; // xmm0
  bool v39; // zf
  int WindowBordersWithDpiAwareness; // eax
  int v41; // ecx
  LONG v42; // r8d
  int v43; // edx
  LONG v44; // eax
  _DWORD *v45; // rdx
  int v46; // eax
  int v47; // ebx
  int v48; // r10d
  int v49; // r15d
  int v50; // r11d
  int v51; // r13d
  int v52; // r10d
  int v53; // ecx
  _DWORD *v54; // rbx
  LONG right; // edx
  LONG v56; // r8d
  LONG left; // ecx
  LONG v58; // r9d
  LONG v59; // r9d
  LONG bottom; // r8d
  LONG v61; // ecx
  int v62; // eax
  int v63; // eax
  LONG top; // r10d
  LONG v65; // ecx
  int v66; // eax
  int v67; // ecx
  int v68; // r11d
  int v69; // ecx
  int v70; // ebx
  unsigned __int16 v71; // [rsp+30h] [rbp-D0h]
  int v72; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v73; // [rsp+34h] [rbp-CCh]
  __m128i v74; // [rsp+38h] [rbp-C8h] BYREF
  struct tagMONITOR *NewMonitor; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v76; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v77; // [rsp+52h] [rbp-AEh]
  __int16 v78; // [rsp+54h] [rbp-ACh]
  __int16 v79; // [rsp+56h] [rbp-AAh]
  int v80; // [rsp+58h] [rbp-A8h]
  struct tagRECT v81; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT *v82; // [rsp+70h] [rbp-90h]
  int v83; // [rsp+78h] [rbp-88h]
  _QWORD v84[3]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v85[3]; // [rsp+98h] [rbp-68h] BYREF
  __m128i v86; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v87; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v88; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v89; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v90; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v91[72]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v92[41]; // [rsp+148h] [rbp+48h] BYREF

  v8 = *a3;
  v80 = 0;
  v82 = (struct tagRECT *)a3;
  v12 = 48LL * a5;
  v74 = v8;
  v13 = ValidateHmonitor(*(_QWORD *)((char *)a4 + v12 + 48));
  NewMonitor = (struct tagMONITOR *)v13;
  v14 = 96;
  if ( !v13 || !(unsigned int)IsValidMonitor(v13) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a4 + v12 + 8));
    v15 = (__int64)NewMonitor;
    if ( !NewMonitor )
    {
      v15 = *(_QWORD *)(GetDispInfo(v17, v16) + 96);
      NewMonitor = (struct tagMONITOR *)v15;
    }
  }
  v71 = *(_WORD *)((char *)a4 + v12 + 40);
  v18 = *(unsigned __int16 *)(*(_QWORD *)(v15 + 40) + 64LL);
  v73 = *(_WORD *)(*(_QWORD *)(v15 + 40) + 64LL);
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
  {
    if ( a7
      && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 648LL) & 0x2000000) == 0
      && !a6
      && (_WORD)v18 != *(_WORD *)((char *)a4 + v12 + 40) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
      v84[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v84;
      v84[1] = a1;
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
      v27 = NewMonitor;
      v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28);
      v85[0] = *(_QWORD *)(v29 + 416);
      *(_QWORD *)(v29 + 416) = v85;
      v85[1] = v27;
      _InterlockedIncrement((volatile signed __int32 *)v27 + 2);
      if ( (unsigned int)xxxAppAdjustDpiCandidateRect(a1, v73, &v74, &v74) )
      {
        v23 = v74.m128i_i32[3];
        v20 = v74.m128i_i32[2];
      }
      else
      {
        v32 = EngMulDiv(a3->m128i_i32[2] - a3->m128i_i32[0], v73, v71);
        v20 = v74.m128i_i32[0] + v32;
        v33 = EngMulDiv(v82->bottom - v82->top, v73, v71);
        v23 = v74.m128i_i32[1] + v33;
      }
      v34 = ThreadUnlock1(v31, v30) == 0;
      if ( v34 | (ThreadUnlock1(v36, v35) == 0) )
        return 0LL;
      v15 = (__int64)NewMonitor;
      goto LABEL_12;
    }
LABEL_11:
    v20 = v74.m128i_i32[2];
    v23 = v74.m128i_i32[3];
LABEL_12:
    v22 = v74.m128i_i32[1];
    goto LABEL_13;
  }
  memset(v91, 0, sizeof(v91));
  memset(v92, 0, sizeof(v92));
  v92[5] = v91;
  PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v91, (struct tagMONITORRECTS *)((char *)a4 + v12 + 8));
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 0 )
    v14 = *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
  v81 = (struct tagRECT)*GetMonitorRectForDpi(&v86, (__int64)v92, v14);
  ScaleDPIRect(&v74, &v74, v71, v14, *(_QWORD *)((char *)a4 + v12 + 8), *(__int64 *)&v81.left);
  v80 = 1;
  if ( a6 )
  {
    v15 = (__int64)NewMonitor;
    goto LABEL_11;
  }
  v19 = EngMulDiv(a3->m128i_i32[2] - a3->m128i_i32[0], v73, v14);
  v20 = v74.m128i_i32[0] + v19;
  v21 = EngMulDiv(v82->bottom - v82->top, v73, v14);
  v22 = v74.m128i_i32[1];
  v15 = (__int64)NewMonitor;
  v23 = v74.m128i_i32[1] + v21;
LABEL_13:
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v24 = *GetMonitorWorkRectForWindow(&v87, v15, a1);
      v25 = (struct tagRECT *)&v89;
      v89 = v24;
    }
    else
    {
      v38 = *GetMonitorRectForWindow(&v88, v15, a1);
      v25 = (struct tagRECT *)&v90;
      v90 = v38;
    }
    v39 = *((_DWORD *)a1 + 73) == 0;
    v81 = *v25;
    if ( v39 )
    {
      WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((__int64)a1);
      v41 = v81.left - WindowBordersWithDpiAwareness;
      v42 = v81.top - WindowBordersWithDpiAwareness;
      a2->left = v81.left - WindowBordersWithDpiAwareness;
      a2->top = v42;
      WindowBordersWithDpiAwareness *= 2;
      v43 = v42 + WindowBordersWithDpiAwareness - v81.top;
      v44 = v81.right + v41 + WindowBordersWithDpiAwareness - v81.left;
      a2->bottom = v81.bottom + v43;
      a2->right = v44;
    }
    else
    {
      ExtendRectByWindowMargin(a1, &v81, &v81);
      *a2 = v81;
    }
  }
  else
  {
    v45 = *(_DWORD **)(v15 + 40);
    v72 = *(_DWORD *)((char *)a4 + v12 + 12);
    LODWORD(v82) = *(_DWORD *)((char *)a4 + v12 + 8);
    v46 = v45[8];
    v47 = v45[7] - (_DWORD)v82;
    v48 = *(_DWORD *)((char *)a4 + v12 + 16) - (_DWORD)v82;
    v49 = *(_DWORD *)((char *)a4 + v12 + 20) - v72;
    v50 = v45[9] - v45[7];
    v83 = v48;
    v51 = v48;
    v52 = v45[10] - v46;
    if ( v50 == v83 && v52 == v49 )
    {
      v53 = v46 - v72;
    }
    else
    {
      v47 += ((v74.m128i_i32[0] - (int)v82) * (v50 - v51) + v51 / 2) / v51;
      v53 = ((v22 - v72) * (v52 - v49) + v49 / 2) / v49 + v46 - v72;
    }
    a2->left = v47 + v74.m128i_i32[0];
    a2->right = v47 + v20;
    a2->top = v53 + v22;
    a2->bottom = v53 + v23;
    v54 = *(_DWORD **)(v15 + 40);
    GetWindowExtendedMargin(a1, (struct FRAME_MARGIN *)&v76);
    right = a2->right;
    v56 = v54[13];
    left = a2->left;
    if ( right > v56 )
    {
      left += v56 + v77 - right;
      right = v56 + v77;
      a2->left = left;
      a2->right = right;
    }
    v58 = v54[11];
    if ( left >= v58 )
    {
      v59 = left;
    }
    else
    {
      v59 = v58 - v76;
      right = v59 + right - left;
      a2->left = v59;
      a2->right = right;
    }
    bottom = a2->bottom;
    v61 = v54[14];
    if ( bottom > v61 )
    {
      v62 = v79 - bottom;
      a2->right = right;
      v63 = v61 + v62;
      bottom += v63;
      a2->top += v63;
      a2->bottom = bottom;
    }
    top = a2->top;
    v65 = v54[12];
    if ( top < v65 )
    {
      v66 = v78;
      a2->right = right;
      v67 = v65 - v66 - top;
      bottom += v67;
      top += v67;
      a2->bottom = bottom;
      a2->top = top;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
    {
      v68 = v54[13];
      v69 = 0;
      if ( right - v77 > v68 )
      {
        right = v77 + v68;
        v69 = 1;
        a2->right = right;
      }
      v70 = v54[14];
      if ( bottom - v79 > v70 )
      {
        bottom = v79 + v70;
        ++v69;
        a2->bottom = bottom;
      }
      if ( v69 == 2 )
      {
        a2->left = v59 + 1;
        a2->right = right - 1;
        a2->top = top + 1;
        a2->bottom = bottom - 1;
      }
    }
    if ( v80 )
      PhysicalToLogicalDPIRect(a2, a2, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), &NewMonitor);
  }
  return NewMonitor;
}

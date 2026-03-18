/*
 * XREFs of ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FF16C
 * Callers:
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FDDC8 (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01FFC94 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     CkptRestore @ 0x1C0090C80 (CkptRestore.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00970A8 (GetMonitorWorkRectForWindow.c)
 *     ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F9D8C (-ComputeMoveOutcome@@YA-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     ?DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FA10C (-DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FA254 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FAA24 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01FAC2C (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01FB160 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01FB484 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FB4B8 (-SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FB504 (-SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FB530 (-SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FB578 (-SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01FBC94 (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FFB10 (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
 */

__int64 __fastcall xxxSizeOrMoveRect(
        struct _MOVESIZEDATA *a1,
        int a2,
        unsigned int *a3,
        struct tagRECT *a4,
        struct tagCHECKPOINT **a5)
{
  int v5; // r14d
  unsigned int *v6; // rsi
  int v7; // r12d
  int v9; // r15d
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // r13d
  unsigned int v14; // eax
  unsigned int v15; // ecx
  int v16; // ebx
  int v17; // ecx
  int v18; // r8d
  __int64 result; // rax
  bool v20; // zf
  struct tagMONITOR *v21; // rsi
  struct tagMONITOR *v22; // rbx
  struct tagMONITOR *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int128 v27; // xmm6
  unsigned int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rax
  struct tagMONITOR *v31; // r12
  unsigned int v32; // r14d
  unsigned int v33; // eax
  struct tagRECT *v34; // rax
  struct tagRECT v35; // xmm0
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // eax
  struct tagCHECKPOINT *v41; // r12
  int v42; // r11d
  int v43; // edx
  __m128i v44; // xmm6
  int v45; // r9d
  int v46; // r10d
  int v47; // eax
  int v48; // r8d
  int v49; // eax
  int v50; // ecx
  int v51; // edx
  int v52; // r11d
  int v53; // r12d
  int v54; // r11d
  int v55; // r11d
  int v56; // r14d
  int v57; // r15d
  int v58; // r14d
  int v59; // r15d
  int v60; // eax
  unsigned int v61; // eax
  bool v62; // zf
  int v63; // r14d
  int v64; // r15d
  int v65; // r8d
  _OWORD *v66; // rax
  int v67; // r14d
  int v68; // r15d
  int v69; // r8d
  _OWORD *p_left; // rax
  const struct _MOVESIZEDATA *v71; // rcx
  int v72; // ecx
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 ThreadWin32Thread; // rax
  struct tagMONITOR *v76; // r14
  unsigned int v77; // r12d
  unsigned int v78; // eax
  int v79; // eax
  __int128 v80; // [rsp+38h] [rbp-61h]
  __m128i v81; // [rsp+38h] [rbp-61h]
  __m128i *v83; // [rsp+48h] [rbp-51h]
  unsigned int v84; // [rsp+50h] [rbp-49h]
  struct tagMONITOR *v85; // [rsp+58h] [rbp-41h]
  struct tagMONITOR *v86; // [rsp+60h] [rbp-39h] BYREF
  __int64 v87; // [rsp+68h] [rbp-31h] BYREF
  struct tagMONITOR *v88; // [rsp+70h] [rbp-29h]
  __int64 v89; // [rsp+78h] [rbp-21h]
  __int128 v90; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v91; // [rsp+F8h] [rbp+5Fh] BYREF
  int v92; // [rsp+100h] [rbp+67h]
  unsigned int *v93; // [rsp+108h] [rbp+6Fh]
  struct tagRECT *v94; // [rsp+110h] [rbp+77h]

  v94 = a4;
  v93 = a3;
  v92 = a2;
  v5 = (__int16)a2 - *((_DWORD *)a1 + 42);
  v6 = a3;
  v87 = 0LL;
  v7 = a2;
  v88 = 0LL;
  v89 = 0LL;
  v9 = SHIWORD(a2) - *((_DWORD *)a1 + 43);
  v84 = 1;
  v83 = (__m128i *)GetOrUpdateCheckPointIfNotPresent(a1);
  if ( !v83 || v5 == *((_DWORD *)a1 + 75) && v9 == *((_DWORD *)a1 + 76) )
    return 0LL;
  v10 = ComputeMoveOutcome(__PAIR64__(v9, v5), (__int64)a1, &v86, &v91);
  v12 = *((unsigned int *)a1 + 49);
  v13 = v10;
  *(_QWORD *)((char *)a1 + 300) = __PAIR64__(v9, v5);
  if ( (v12 & 0x6000000) == 0x6000000 )
  {
    *((_DWORD *)a1 + 49) = v12 & 0xFDFFFFFF;
    v14 = MoveRect((__int64)a1, v7, 0);
    *((_DWORD *)a1 + 49) |= 0x2000000u;
    v12 = *((unsigned int *)a1 + 49);
    v84 = v14;
  }
  v15 = v91;
  if ( v13 == 1 && v91 - 1 <= 1 || (*((_DWORD *)a1 + 70) &= ~2u, v13 == 1) )
  {
    v16 = *((_DWORD *)a1 + 60);
    if ( (unsigned int)(v16 - 1) > 1 )
    {
      v17 = v12 & 0x300;
    }
    else
    {
      v17 = v12 & 0x300;
      if ( (v12 & 0x300) == 0 )
      {
        if ( (v12 & 0x2000000) == 0 )
        {
LABEL_12:
          v18 = *((_DWORD *)a1 + 61);
          return MoveRect((__int64)a1, v7, v18);
        }
        return v84;
      }
    }
    if ( !v16 )
    {
      if ( v17 == 768 && (((v12 & 0x38000) - 0x20000) & 0xFFFF7FFF) == 0 )
      {
        v20 = (v12 & 0x2000000) == 0;
        goto LABEL_19;
      }
      if ( v17 && (((v12 & 0x38000) - 0x20000) & 0xFFFF7FFF) == 0 )
      {
        *((_DWORD *)a1 + 49) = v12 | 0x300;
        MakeArrangedStateObservable(a1);
        v20 = (*((_DWORD *)a1 + 49) & 0x2000000) == 0;
LABEL_19:
        if ( v20 )
        {
          v18 = 3;
          return MoveRect((__int64)a1, v7, v18);
        }
        return v84;
      }
    }
    if ( (v12 & 0x2000000) != 0 )
      return v84;
    return 0LL;
  }
  if ( v13 != 3 )
  {
    if ( v13 == 4 )
    {
      if ( (v12 & 0x80u) == 0LL )
      {
        MoveRect((__int64)a1, v7, 0);
        v40 = *((_DWORD *)a1 + 60);
        if ( v40 )
        {
          if ( (unsigned int)(v40 - 1) <= 1 )
          {
            ++*((_DWORD *)a1 + 80);
            SetDragOutToDragInThreshold(a1);
          }
        }
        else
        {
          ++*((_DWORD *)a1 + 79);
          SetDragInThresholdAlways(a1);
        }
        goto LABEL_121;
      }
      v41 = (struct tagCHECKPOINT *)v83;
      v42 = *((_DWORD *)a1 + 60);
      v43 = v12 & 0x7000;
      v44 = *v83;
      v45 = _mm_cvtsi128_si32(*v83);
      v46 = _mm_cvtsi128_si32(_mm_srli_si128(*v83, 8));
      v81 = *v83;
      v47 = v46 - v45;
      if ( !v42 )
      {
        if ( v43 == 4096 )
        {
          v48 = v47 / 2;
          v49 = *((_DWORD *)a1 + 6);
          v50 = v5 - v49;
          if ( v5 - v49 >= v48 )
          {
            if ( v50 <= *((_DWORD *)a1 + 8) - v49 - v48 )
              v50 = v48;
            else
              v50 = v46 + v5 - *((_DWORD *)a1 + 8) - v45;
          }
          v51 = *((_DWORD *)a1 + 72);
          LODWORD(v12) = *((_DWORD *)a1 + 49);
          goto LABEL_93;
        }
        v52 = *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30);
        v50 = *((_DWORD *)a1 + 73);
        if ( v52 <= v47 )
        {
          if ( v50 < v52 / 2 )
            goto LABEL_92;
          if ( v50 <= v52 / 2 )
          {
            v50 = v52 / 2;
            goto LABEL_92;
          }
        }
        else
        {
          if ( v50 < v47 / 2 )
          {
LABEL_92:
            v51 = *((_DWORD *)a1 + 74);
LABEL_93:
            v42 = 0;
            goto LABEL_104;
          }
          if ( v50 <= v52 - v47 / 2 )
          {
            v50 = v47 / 2;
            goto LABEL_92;
          }
        }
        v50 = v46 + v50 - v52 - v45;
        goto LABEL_92;
      }
      v53 = *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30);
      v50 = *((_DWORD *)a1 + 73);
      if ( v43 == 4096 || v53 > v47 )
      {
        if ( v50 >= v47 / 2 )
        {
          if ( v50 > v53 - v47 / 2 )
          {
LABEL_101:
            v50 = v46 + v50 - v53 - v45;
            goto LABEL_103;
          }
          v50 = v47 / 2;
        }
      }
      else if ( v50 >= v53 / 2 )
      {
        if ( v50 <= v53 / 2 )
        {
          v50 = v53 / 2;
          goto LABEL_103;
        }
        goto LABEL_101;
      }
LABEL_103:
      v41 = (struct tagCHECKPOINT *)v83;
      v51 = *((_DWORD *)a1 + 74);
LABEL_104:
      if ( !v42 )
      {
        v67 = v5 - v50 - v45;
        v68 = v9 - v81.m128i_i32[1] - v51;
        v81.m128i_i32[3] += v68;
        v81.m128i_i32[1] += v68;
        v81.m128i_i32[0] = v67 + v45;
        v81.m128i_i32[2] = v67 + v46;
        v44 = v81;
        if ( (v12 & 0x80) != 0 )
        {
          v69 = v12 & 0xFFFFFF7F;
          *((_DWORD *)a1 + 71) = v50;
          *((_DWORD *)a1 + 49) = v69;
          *((_DWORD *)a1 + 72) = v51;
          if ( (v69 & 0x20) != 0 )
          {
            p_left = &v94->left;
            *v6 |= 1u;
            *p_left = v81;
            *a5 = v41;
          }
        }
        ++*((_DWORD *)a1 + 79);
        SetDragInThresholdAlways(a1);
        goto LABEL_120;
      }
      v54 = v42 - 1;
      if ( v54 )
      {
        v55 = v54 - 1;
        if ( v55 )
        {
          if ( v55 == 1 )
          {
            v56 = v5 - v50 - v45;
            v57 = v9 - v81.m128i_i32[1] - v51;
            v81.m128i_i32[0] = v56 + v45;
            v81.m128i_i32[3] += v57;
            v81.m128i_i32[1] += v57;
            v81.m128i_i32[2] = v56 + v46;
            v44 = v81;
          }
          goto LABEL_120;
        }
        v58 = v5 - v50 - v45;
        v59 = v9 - v81.m128i_i32[1] - v51;
        v81.m128i_i32[3] += v59;
        v81.m128i_i32[1] += v59;
        v60 = *((_DWORD *)a1 + 49);
        v81.m128i_i32[0] = v58 + v45;
        v81.m128i_i32[2] = v58 + v46;
        v44 = v81;
        if ( (v60 & 0x80) != 0 )
        {
          v61 = v60 & 0xFFFFFF7F;
          *((_DWORD *)a1 + 49) = v61;
          v62 = (v61 & 0x20) == 0;
          goto LABEL_113;
        }
      }
      else
      {
        v63 = v5 - v50 - v45;
        v64 = v9 - v81.m128i_i32[1] - v51;
        v81.m128i_i32[3] += v64;
        v81.m128i_i32[1] += v64;
        v81.m128i_i32[0] = v63 + v45;
        v81.m128i_i32[2] = v63 + v46;
        v44 = v81;
        if ( (v12 & 0x80) != 0 )
        {
          v65 = v12 & 0xFFFFFF7F;
          *((_DWORD *)a1 + 49) = v65;
          v62 = (v65 & 0x20) == 0;
LABEL_113:
          if ( !v62 )
          {
            v66 = &v94->left;
            *v6 |= 1u;
            *v66 = v44;
            *a5 = v41;
          }
        }
      }
      ++*((_DWORD *)a1 + 80);
      SetDragOutToDragInThreshold(a1);
LABEL_120:
      *(__m128i *)((char *)a1 + 40) = v44;
LABEL_121:
      *((_DWORD *)a1 + 49) &= 0xFFFFFCFF;
      *((_DWORD *)a1 + 70) &= ~2u;
      *((_DWORD *)a1 + 60) = 4;
      DisableTemporayMetricsOverrides(a1);
      MakeArrangedStateObservable(v71);
      v72 = *((_DWORD *)a1 + 49);
      *((_DWORD *)a1 + 61) = 0;
      if ( (v72 & 0x6000000) == 0x6000000 )
      {
        *v6 |= 4u;
        *((_DWORD *)a1 + 49) = v72 & 0xFDFFFFFF;
      }
      return 1LL;
    }
    if ( v13 == 5 )
      goto LABEL_12;
    if ( v13 != 6 )
      return 0LL;
    if ( (v12 & 0x40000) == 0 )
    {
      CkptRestore(*((_QWORD *)a1 + 2), (struct _MOVESIZEDATA *)((char *)a1 + 120));
      LODWORD(v12) = *((_DWORD *)a1 + 49) | 0x40000;
      *((_DWORD *)a1 + 49) = v12;
      if ( (v12 & 0x1000000) != 0 )
        *(__m128i *)((char *)a1 + 152) = *v83;
    }
    v73 = 100663296LL;
    v74 = v12 & 0x6000000;
    if ( (_DWORD)v74 == 0x4000000 )
    {
      if ( !(unsigned int)MoveRect((__int64)a1, v7, 0) )
        return 0LL;
      *v6 |= 8u;
      *((_DWORD *)a1 + 49) |= 0x2000000u;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73, v74, v11);
    v76 = v86;
    v87 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v87;
    v88 = v76;
    if ( v76 )
      HMLockObject(v76);
    v77 = v91;
    xxxSizeRectFromHitTarget(a1, v76, v91);
    if ( v77 )
    {
      if ( v77 == 1 )
      {
        v78 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x100;
      }
      else
      {
        if ( v77 != 2 )
        {
          if ( v77 == 3 )
          {
            *((_DWORD *)a1 + 49) &= 0xFFFFFCFF;
            *((_DWORD *)a1 + 70) &= ~2u;
          }
          goto LABEL_144;
        }
        v78 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x200;
      }
      *((_DWORD *)a1 + 49) = v78;
    }
    else
    {
      v79 = *((_DWORD *)a1 + 49);
      *((_DWORD *)a1 + 70) &= ~2u;
      v79 &= 0xFFFFFCFF;
      *((_DWORD *)a1 + 49) = v79;
      if ( (v79 & 0x4000000) == 0 )
        *v6 |= 2u;
    }
    SetDragInToDragOutThreshold(a1);
LABEL_144:
    MakeArrangedStateObservable(a1);
    *((_DWORD *)a1 + 60) = v77;
    SetCurrentHitTargetMonitor(a1, v76, 1);
    goto LABEL_69;
  }
  if ( !*((_DWORD *)a1 + 60) && !v15 && (v12 & 0x300) == 0x300 )
  {
    v11 = 229376LL;
    v12 = ((unsigned int)v12 & 0x38000) - 0x20000;
    if ( (v12 & 0xFFFF7FFF) == 0 )
    {
      v21 = 0LL;
      v22 = v86;
      v23 = 0LL;
      do
      {
        v80 = *GetMonitorWorkRectForWindow(&v90, (__int64)v22, *((const struct tagWND **)a1 + 2));
        if ( IsDockTargetActive((__int64)a1, (__int64)v22, 0) && (int)v80 <= v5 && v5 < SDWORD2(v80) )
          v21 = v22;
        if ( IsDockTargetActive(v25, v24, 3) && (int)v80 <= v5 && v5 < SDWORD2(v80) )
          v23 = v22;
        v26 = *((_QWORD *)v22 + 35);
        if ( v26 == gpDispInfo + 144LL )
          v26 = *(_QWORD *)(gpDispInfo + 144LL);
        v22 = (struct tagMONITOR *)(v26 - 280);
      }
      while ( v22 != *((struct tagMONITOR **)a1 + 29) );
      *(_QWORD *)&v90 = v23;
      v20 = v23 == 0LL;
      v7 = v92;
      v85 = v21;
      v6 = v93;
      if ( !v20 )
      {
        if ( v85 )
        {
          v27 = *(_OWORD *)((char *)a1 + 40);
          MoveRect((__int64)a1, v92, v12);
          if ( (unsigned int)VerticalSizeRectFromHitTarget((__int64)a1, (__int64)v85, 0, v90, v5) )
          {
            *((_DWORD *)a1 + 60) = 0;
            SetCurrentHitTargetMonitor(a1, v85, 1);
            result = v28;
            *((_DWORD *)a1 + 61) = v28 + 1;
            return result;
          }
          if ( (*((_DWORD *)a1 + 49) & 0x2000000) != 0 )
            *(_OWORD *)((char *)a1 + 72) = v27;
          else
            *(_OWORD *)((char *)a1 + 40) = v27;
        }
      }
    }
  }
  v29 = 100663296LL;
  if ( (*((_DWORD *)a1 + 49) & 0x6000000) != 0x4000000 )
  {
LABEL_53:
    v30 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v12, v11);
    v31 = v86;
    v87 = *(_QWORD *)(v30 + 408);
    *(_QWORD *)(v30 + 408) = &v87;
    v88 = v31;
    if ( v31 )
      HMLockObject(v31);
    v32 = v91;
    xxxSizeRectFromHitTarget(a1, v31, v91);
    if ( v32 )
    {
      if ( v32 == 1 )
      {
        v33 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x100;
        goto LABEL_60;
      }
      if ( v32 == 2 )
      {
        v33 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x200;
LABEL_60:
        *((_DWORD *)a1 + 49) = v33;
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 1) != 0 )
        {
          v34 = v94;
          v35 = *(struct tagRECT *)((char *)a1 + 40);
          *v6 |= 1u;
          *v34 = v35;
          *a5 = (struct tagCHECKPOINT *)v83;
        }
        SetDragOutThresholdAlways(a1);
        goto LABEL_67;
      }
    }
    else
    {
      v36 = *((_DWORD *)a1 + 49);
      *((_DWORD *)a1 + 70) &= ~2u;
      v36 &= 0xFFFFFCFF;
      *((_DWORD *)a1 + 49) = v36;
      if ( (v36 & 0x4000000) == 0 )
        *v6 |= 2u;
      SetDragInToDragOutThreshold(a1);
    }
    if ( v32 == 3 )
    {
LABEL_68:
      *((_DWORD *)a1 + 60) = v32;
      SetCurrentHitTargetMonitor(a1, v31, 1);
      *((_DWORD *)a1 + 61) = 2;
LABEL_69:
      ThreadUnlock1(v38, v37, v39);
      return 1LL;
    }
LABEL_67:
    MakeArrangedStateObservable(a1);
    goto LABEL_68;
  }
  if ( (unsigned int)MoveRect((__int64)a1, v7, 0) )
  {
    *v6 |= 8u;
    *((_DWORD *)a1 + 49) |= 0x2000000u;
    goto LABEL_53;
  }
  return 0LL;
}

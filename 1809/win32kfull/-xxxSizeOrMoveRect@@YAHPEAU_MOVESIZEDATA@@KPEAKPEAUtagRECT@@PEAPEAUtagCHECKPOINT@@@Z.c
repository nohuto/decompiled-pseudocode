/*
 * XREFs of ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01E9754
 * Callers:
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01E845C (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01EA210 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C001D104 (GetMonitorWorkRectForWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     CkptRestore @ 0x1C00B6EB0 (CkptRestore.c)
 *     ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E44F0 (-ComputeMoveOutcome@@YA-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     ?DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E4874 (-DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01E49BC (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E5134 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01E5338 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01E5884 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01E5BA4 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E5BD8 (-SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E5C24 (-SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E5C50 (-SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E5C98 (-SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01E63BC (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01EA098 (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
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
  __int64 v11; // rdx
  int v12; // r13d
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  int v16; // r11d
  int v17; // eax
  int v18; // r8d
  __int64 result; // rax
  bool v20; // zf
  struct tagMONITOR *v21; // rsi
  struct tagMONITOR *v22; // rbx
  struct tagMONITOR *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r8d
  __int64 v27; // rbx
  struct tagMONITOR *v28; // rbx
  __int128 v29; // xmm6
  unsigned int v30; // r8d
  __int64 v31; // rax
  struct tagMONITOR *v32; // r14
  unsigned int v33; // r12d
  unsigned int v34; // eax
  struct tagRECT *v35; // rax
  struct tagRECT v36; // xmm0
  struct tagCHECKPOINT *v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  struct tagCHECKPOINT *v42; // r12
  int v43; // edx
  int v44; // r10d
  __m128i v45; // xmm6
  int v46; // r8d
  int v47; // r9d
  int v48; // eax
  int v49; // r10d
  int v50; // eax
  int v51; // ecx
  int v52; // edx
  int v53; // r10d
  int v54; // r11d
  int v55; // r10d
  int v56; // r10d
  int v57; // r14d
  int v58; // r15d
  int v59; // r14d
  int v60; // r15d
  int v61; // eax
  unsigned int v62; // eax
  _OWORD *p_left; // rax
  int v64; // r14d
  int v65; // r15d
  int v66; // eax
  unsigned int v67; // eax
  _OWORD *v68; // rax
  const struct _MOVESIZEDATA *v69; // rcx
  int v70; // ecx
  __int64 v71; // rdx
  __int64 ThreadWin32Thread; // rax
  struct tagMONITOR *v73; // r14
  unsigned int v74; // r12d
  unsigned int v75; // eax
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int128 v79; // [rsp+38h] [rbp-61h]
  __m128i v80; // [rsp+38h] [rbp-61h]
  struct tagMONITOR *v83; // [rsp+48h] [rbp-51h] BYREF
  __m128i *v84; // [rsp+50h] [rbp-49h]
  int v85; // [rsp+58h] [rbp-41h]
  struct tagMONITOR *v86; // [rsp+60h] [rbp-39h]
  struct tagMONITOR *v87; // [rsp+68h] [rbp-31h]
  __int64 v88; // [rsp+70h] [rbp-29h] BYREF
  struct tagMONITOR *v89; // [rsp+78h] [rbp-21h]
  __int128 v90; // [rsp+88h] [rbp-11h] BYREF
  unsigned int v91; // [rsp+F8h] [rbp+5Fh] BYREF
  int v92; // [rsp+100h] [rbp+67h]
  unsigned int *v93; // [rsp+108h] [rbp+6Fh]
  struct tagRECT *v94; // [rsp+110h] [rbp+77h]

  v94 = a4;
  v93 = a3;
  v92 = a2;
  v5 = (__int16)a2 - *((_DWORD *)a1 + 42);
  v6 = a3;
  v7 = a2;
  v9 = SHIWORD(a2) - *((_DWORD *)a1 + 43);
  v86 = 0LL;
  v85 = 1;
  v84 = (__m128i *)GetOrUpdateCheckPointIfNotPresent(a1);
  if ( !v84 || v5 == *((_DWORD *)a1 + 75) && v9 == *((_DWORD *)a1 + 76) )
    return 0LL;
  v10 = ComputeMoveOutcome(__PAIR64__(v9, v5), (__int64)a1, &v83, &v91);
  v11 = *((unsigned int *)a1 + 49);
  v12 = v10;
  *(_QWORD *)((char *)a1 + 300) = __PAIR64__(v9, v5);
  if ( (v11 & 0x6000000) == 0x6000000 )
  {
    *((_DWORD *)a1 + 49) = v11 & 0xFDFFFFFF;
    v13 = MoveRect((__int64)a1, v7, 0);
    *((_DWORD *)a1 + 49) |= 0x2000000u;
    v14 = v13;
    v11 = *((unsigned int *)a1 + 49);
  }
  else
  {
    v14 = v85;
  }
  v15 = v91;
  if ( v12 != 1 || v91 - 1 > 1 )
    *((_DWORD *)a1 + 70) &= ~2u;
  if ( v12 == 1 )
  {
    v16 = *((_DWORD *)a1 + 60);
    if ( (unsigned int)(v16 - 1) > 1 )
    {
      v17 = v11 & 0x300;
    }
    else
    {
      v17 = v11 & 0x300;
      if ( (v11 & 0x300) == 0 )
      {
        if ( (v11 & 0x2000000) == 0 )
        {
LABEL_14:
          v18 = *((_DWORD *)a1 + 61);
          return MoveRect((__int64)a1, v7, v18);
        }
        return v14;
      }
    }
    if ( !v16 )
    {
      if ( v17 == 768 && (((v11 & 0x38000) - 0x20000) & 0xFFFF7FFF) == 0 )
      {
        v20 = (v11 & 0x2000000) == 0;
        goto LABEL_21;
      }
      if ( (v11 & 0x300) != 0 && (((v11 & 0x38000) - 0x20000) & 0xFFFF7FFF) == 0 )
      {
        *((_DWORD *)a1 + 49) = v11 | 0x300;
        MakeArrangedStateObservable(a1);
        v20 = (*((_DWORD *)a1 + 49) & 0x2000000) == 0;
LABEL_21:
        if ( v20 )
        {
          v18 = 3;
          return MoveRect((__int64)a1, v7, v18);
        }
        return v14;
      }
    }
    if ( (v11 & 0x2000000) != 0 )
      return v14;
    return 0LL;
  }
  if ( v12 != 3 )
  {
    if ( v12 == 4 )
    {
      if ( (v11 & 0x80u) == 0LL )
      {
        MoveRect((__int64)a1, v7, 0);
        v41 = *((_DWORD *)a1 + 60);
        if ( v41 )
        {
          if ( (unsigned int)(v41 - 1) <= 1 )
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
LABEL_118:
        *((_DWORD *)a1 + 49) &= 0xFFFFFCFF;
        *((_DWORD *)a1 + 70) &= ~2u;
        *((_DWORD *)a1 + 60) = 4;
        DisableTemporayMetricsOverrides(a1);
        MakeArrangedStateObservable(v69);
        v70 = *((_DWORD *)a1 + 49);
        *((_DWORD *)a1 + 61) = 0;
        if ( (v70 & 0x6000000) == 0x6000000 )
        {
          *v6 |= 4u;
          *((_DWORD *)a1 + 49) = v70 & 0xFDFFFFFF;
        }
        return 1LL;
      }
      v42 = (struct tagCHECKPOINT *)v84;
      v43 = v11 & 0x7000;
      v44 = *((_DWORD *)a1 + 60);
      v45 = *v84;
      v46 = _mm_cvtsi128_si32(*v84);
      v47 = _mm_cvtsi128_si32(_mm_srli_si128(*v84, 8));
      v80 = *v84;
      v48 = v47 - v46;
      if ( !v44 )
      {
        if ( v43 == 4096 )
        {
          v49 = v48 / 2;
          v50 = *((_DWORD *)a1 + 6);
          v51 = v5 - v50;
          if ( v5 - v50 >= v49 )
          {
            if ( v51 <= *((_DWORD *)a1 + 8) - v50 - v49 )
              v51 = v49;
            else
              v51 = v47 + v5 - *((_DWORD *)a1 + 8) - v46;
          }
          v52 = *((_DWORD *)a1 + 72);
          goto LABEL_93;
        }
        v53 = *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30);
        v51 = *((_DWORD *)a1 + 73);
        if ( v53 <= v48 )
        {
          if ( v51 < v53 / 2 )
            goto LABEL_92;
          if ( v51 <= v53 / 2 )
          {
            v51 = v53 / 2;
            goto LABEL_92;
          }
        }
        else
        {
          if ( v51 < v48 / 2 )
          {
LABEL_92:
            v52 = *((_DWORD *)a1 + 74);
LABEL_93:
            v44 = 0;
LABEL_104:
            if ( v44 )
            {
              v55 = v44 - 1;
              if ( v55 && (v56 = v55 - 1) != 0 )
              {
                if ( v56 == 1 )
                {
                  v57 = v5 - v51 - v46;
                  v58 = v9 - v80.m128i_i32[1] - v52;
                  v80.m128i_i32[0] = v57 + v46;
                  v80.m128i_i32[3] += v58;
                  v80.m128i_i32[1] += v58;
                  v80.m128i_i32[2] = v57 + v47;
                  v45 = v80;
                }
              }
              else
              {
                v59 = v5 - v51 - v46;
                v60 = v9 - v80.m128i_i32[1] - v52;
                v80.m128i_i32[3] += v60;
                v80.m128i_i32[1] += v60;
                v61 = *((_DWORD *)a1 + 49);
                v80.m128i_i32[0] = v59 + v46;
                v80.m128i_i32[2] = v59 + v47;
                v45 = v80;
                if ( (v61 & 0x80) != 0 )
                {
                  v62 = v61 & 0xFFFFFF7F;
                  *((_DWORD *)a1 + 49) = v62;
                  if ( (v62 & 0x20) != 0 )
                  {
                    p_left = &v94->left;
                    *v6 |= 1u;
                    *p_left = v80;
                    *a5 = v42;
                  }
                }
                ++*((_DWORD *)a1 + 80);
                SetDragOutToDragInThreshold(a1);
              }
            }
            else
            {
              v64 = v5 - v51 - v46;
              v65 = v9 - v80.m128i_i32[1] - v52;
              v80.m128i_i32[3] += v65;
              v80.m128i_i32[1] += v65;
              v66 = *((_DWORD *)a1 + 49);
              v80.m128i_i32[0] = v64 + v46;
              v80.m128i_i32[2] = v64 + v47;
              v45 = v80;
              if ( (v66 & 0x80) != 0 )
              {
                v67 = v66 & 0xFFFFFF7F;
                *((_DWORD *)a1 + 71) = v51;
                *((_DWORD *)a1 + 49) = v67;
                *((_DWORD *)a1 + 72) = v52;
                if ( (v67 & 0x20) != 0 )
                {
                  v68 = &v94->left;
                  *v6 |= 1u;
                  *v68 = v80;
                  *a5 = v42;
                }
              }
              ++*((_DWORD *)a1 + 79);
              SetDragInThresholdAlways(a1);
            }
            *(__m128i *)((char *)a1 + 40) = v45;
            goto LABEL_118;
          }
          if ( v51 <= v53 - v48 / 2 )
          {
            v51 = v48 / 2;
            goto LABEL_92;
          }
        }
        v51 = v47 + v51 - v53 - v46;
        goto LABEL_92;
      }
      v54 = *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30);
      v51 = *((_DWORD *)a1 + 73);
      if ( v43 == 4096 || v54 > v48 )
      {
        if ( v51 >= v48 / 2 )
        {
          if ( v51 > v54 - v48 / 2 )
          {
LABEL_101:
            v51 = v47 + v51 - v54 - v46;
            goto LABEL_103;
          }
          v51 = v48 / 2;
        }
      }
      else if ( v51 >= v54 / 2 )
      {
        if ( v51 <= v54 / 2 )
        {
          v51 = v54 / 2;
          goto LABEL_103;
        }
        goto LABEL_101;
      }
LABEL_103:
      v52 = *((_DWORD *)a1 + 74);
      goto LABEL_104;
    }
    if ( v12 == 5 )
      goto LABEL_14;
    if ( v12 != 6 )
      return 0LL;
    if ( (v11 & 0x40000) == 0 )
    {
      CkptRestore(*((_QWORD *)a1 + 2), (struct _MOVESIZEDATA *)((char *)a1 + 120));
      LODWORD(v11) = *((_DWORD *)a1 + 49) | 0x40000;
      *((_DWORD *)a1 + 49) = v11;
      if ( (v11 & 0x1000000) != 0 )
        *(__m128i *)((char *)a1 + 152) = *v84;
    }
    v71 = v11 & 0x6000000;
    if ( (_DWORD)v71 == 0x4000000 )
    {
      if ( !(unsigned int)MoveRect((__int64)a1, v7, 0) )
        return 0LL;
      *v6 |= 8u;
      *((_DWORD *)a1 + 49) |= 0x2000000u;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v71);
    v73 = v83;
    v88 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v88;
    v89 = v73;
    if ( v73 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v73 + 2);
      v73 = v83;
    }
    v74 = v91;
    xxxSizeRectFromHitTarget(a1, v73, v91);
    if ( v74 )
    {
      if ( v74 == 1 )
      {
        v75 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x100;
      }
      else
      {
        if ( v74 != 2 )
        {
          if ( v74 == 3 )
          {
            *((_DWORD *)a1 + 49) &= 0xFFFFFCFF;
            *((_DWORD *)a1 + 70) &= ~2u;
          }
          goto LABEL_142;
        }
        v75 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x200;
      }
      *((_DWORD *)a1 + 49) = v75;
    }
    else
    {
      v76 = *((_DWORD *)a1 + 49);
      *((_DWORD *)a1 + 70) &= ~2u;
      v76 &= 0xFFFFFCFF;
      *((_DWORD *)a1 + 49) = v76;
      if ( (v76 & 0x4000000) == 0 )
        *v6 |= 2u;
    }
    SetDragInToDragOutThreshold(a1);
LABEL_142:
    MakeArrangedStateObservable(a1);
    *((_DWORD *)a1 + 60) = v74;
    SetCurrentHitTargetMonitor(a1, v73, 1);
    ThreadUnlock1(v78, v77);
    return 1LL;
  }
  if ( !*((_DWORD *)a1 + 60) && !v15 && (v11 & 0x300) == 0x300 )
  {
    v11 = ((unsigned int)v11 & 0x38000) - 0x20000;
    if ( (v11 & 0xFFFF7FFF) == 0 )
    {
      v21 = v86;
      v22 = v83;
      v23 = v86;
      do
      {
        v79 = *GetMonitorWorkRectForWindow(&v90, (__int64)v22, *((const struct tagWND **)a1 + 2));
        if ( IsDockTargetActive((__int64)a1, (__int64)v22, 0) && (int)v79 <= v5 && v5 < SDWORD2(v79) )
          v21 = v22;
        if ( IsDockTargetActive(v25, v24, 3) && (int)v79 <= v5 && v5 < SDWORD2(v79) )
          v23 = v22;
        v27 = *((_QWORD *)v22 + 35);
        if ( v27 == gpDispInfo + 144LL )
          v27 = *(_QWORD *)(gpDispInfo + 144LL);
        v22 = (struct tagMONITOR *)(v27 - 280);
      }
      while ( v22 != *((struct tagMONITOR **)a1 + 29) );
      v87 = v23;
      v20 = v23 == 0LL;
      v7 = v92;
      v86 = v21;
      v6 = v93;
      if ( !v20 )
      {
        v28 = v86;
        if ( v86 )
        {
          v29 = *(_OWORD *)((char *)a1 + 40);
          MoveRect((__int64)a1, v92, v26);
          if ( (unsigned int)VerticalSizeRectFromHitTarget((__int64)a1, (__int64)v28, 0, (__int64)v87, v5) )
          {
            *((_DWORD *)a1 + 60) = 0;
            SetCurrentHitTargetMonitor(a1, v28, 1);
            result = v30;
            *((_DWORD *)a1 + 61) = v30 + 1;
            return result;
          }
          if ( (*((_DWORD *)a1 + 49) & 0x2000000) != 0 )
            *(_OWORD *)((char *)a1 + 72) = v29;
          else
            *(_OWORD *)((char *)a1 + 40) = v29;
        }
      }
    }
  }
  if ( (*((_DWORD *)a1 + 49) & 0x6000000) != 0x4000000 )
  {
LABEL_55:
    v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
    v32 = v83;
    v88 = *(_QWORD *)(v31 + 416);
    *(_QWORD *)(v31 + 416) = &v88;
    v89 = v32;
    if ( v32 )
    {
      _InterlockedAdd((volatile signed __int32 *)v32 + 2, 1u);
      v32 = v83;
    }
    v33 = v91;
    xxxSizeRectFromHitTarget(a1, v32, v91);
    if ( v33 )
    {
      if ( v33 == 1 )
      {
        v34 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x100;
        goto LABEL_62;
      }
      if ( v33 == 2 )
      {
        v34 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x200;
LABEL_62:
        *((_DWORD *)a1 + 49) = v34;
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 1) != 0 )
        {
          v35 = v94;
          v36 = *(struct tagRECT *)((char *)a1 + 40);
          v37 = (struct tagCHECKPOINT *)v84;
          *v6 |= 1u;
          *v35 = v36;
          *a5 = v37;
        }
        SetDragOutThresholdAlways(a1);
        goto LABEL_69;
      }
    }
    else
    {
      v38 = *((_DWORD *)a1 + 49);
      *((_DWORD *)a1 + 70) &= ~2u;
      v38 &= 0xFFFFFCFF;
      *((_DWORD *)a1 + 49) = v38;
      if ( (v38 & 0x4000000) == 0 )
        *v6 |= 2u;
      SetDragInToDragOutThreshold(a1);
    }
    if ( v33 == 3 )
    {
LABEL_70:
      *((_DWORD *)a1 + 60) = v33;
      SetCurrentHitTargetMonitor(a1, v32, 1);
      *((_DWORD *)a1 + 61) = 2;
      ThreadUnlock1(v40, v39);
      return 1LL;
    }
LABEL_69:
    MakeArrangedStateObservable(a1);
    goto LABEL_70;
  }
  if ( (unsigned int)MoveRect((__int64)a1, v7, 0) )
  {
    *v6 |= 8u;
    *((_DWORD *)a1 + 49) |= 0x2000000u;
    goto LABEL_55;
  }
  return 0LL;
}

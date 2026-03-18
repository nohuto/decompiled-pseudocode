/*
 * XREFs of ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01C4330
 * Callers:
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01C2FEC (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01C4E74 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0035A78 (GetMonitorWorkRectForWindow.c)
 *     CkptRestore @ 0x1C00669FC (CkptRestore.c)
 *     ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C02FC (-ComputeMoveOutcome@@YA-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     ?DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01C067C (-DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01C0758 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C0EE4 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01C10E8 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01C1160 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01C1464 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01C1498 (-SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01C14E4 (-SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01C1518 (-SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01C1560 (-SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01C1C0C (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C4C44 (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
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
  unsigned int v8; // r13d
  int v9; // r15d
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // r8d
  int v17; // r8d
  int v18; // eax
  __int64 result; // rax
  int v20; // r8d
  struct tagMONITOR *v21; // rsi
  struct tagMONITOR *v22; // rbx
  struct tagMONITOR *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r8d
  __int64 v27; // rbx
  bool v28; // zf
  struct tagMONITOR *v29; // rbx
  __int128 v30; // xmm6
  unsigned int v31; // r8d
  __int64 ThreadWin32Thread; // rax
  struct tagMONITOR *v33; // r14
  unsigned int v34; // r12d
  unsigned int v35; // eax
  struct tagRECT *v36; // rax
  struct tagRECT v37; // xmm0
  struct tagCHECKPOINT *v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // eax
  struct tagCHECKPOINT *v44; // r12
  int v45; // edx
  int v46; // r10d
  __m128i v47; // xmm6
  int v48; // r8d
  int v49; // r9d
  int v50; // eax
  int v51; // r10d
  int v52; // eax
  int v53; // ecx
  int v54; // edx
  int v55; // r10d
  int v56; // r11d
  int v57; // r10d
  int v58; // r10d
  int v59; // r14d
  int v60; // r15d
  int v61; // r14d
  int v62; // r15d
  int v63; // eax
  unsigned int v64; // eax
  _OWORD *p_left; // rax
  int v66; // r14d
  int v67; // r15d
  int v68; // eax
  unsigned int v69; // eax
  _OWORD *v70; // rax
  const struct _MOVESIZEDATA *v71; // rcx
  int v72; // ecx
  __int64 v73; // rdx
  __int64 v74; // rax
  struct tagMONITOR *v75; // r14
  unsigned int v76; // r12d
  unsigned int v77; // eax
  int v78; // eax
  __int128 v79; // [rsp+38h] [rbp-51h]
  __int64 v80; // [rsp+38h] [rbp-51h]
  __m128i v81; // [rsp+38h] [rbp-51h]
  struct tagMONITOR *v84; // [rsp+48h] [rbp-41h] BYREF
  __m128i *v85; // [rsp+50h] [rbp-39h]
  struct tagMONITOR *v86; // [rsp+58h] [rbp-31h]
  __int128 v87; // [rsp+60h] [rbp-29h] BYREF
  __int64 v88; // [rsp+70h] [rbp-19h] BYREF
  struct tagMONITOR *v89; // [rsp+78h] [rbp-11h]
  unsigned int v90; // [rsp+E8h] [rbp+5Fh] BYREF
  int v91; // [rsp+F0h] [rbp+67h]
  unsigned int *v92; // [rsp+F8h] [rbp+6Fh]
  struct tagRECT *v93; // [rsp+100h] [rbp+77h]

  v93 = a4;
  v92 = a3;
  v91 = a2;
  v5 = (__int16)a2 - *((_DWORD *)a1 + 42);
  v6 = a3;
  v7 = a2;
  v8 = 1;
  v9 = SHIWORD(a2) - *((_DWORD *)a1 + 43);
  v86 = 0LL;
  *(_QWORD *)&v87 = __PAIR64__(v9, v5);
  v85 = (__m128i *)GetOrUpdateCheckPointIfNotPresent(a1);
  if ( !v85 || v5 == *((_DWORD *)a1 + 75) && v9 == *((_DWORD *)a1 + 76) )
    return 0LL;
  v11 = v87;
  v12 = ComputeMoveOutcome(v87, (__int64)a1, &v84, &v90);
  v13 = *((unsigned int *)a1 + 49);
  v14 = v12;
  LODWORD(v87) = v12;
  *(_QWORD *)((char *)a1 + 300) = v11;
  if ( (v13 & 0x6000000) == 0x6000000 )
  {
    *((_DWORD *)a1 + 49) = v13 & 0xFDFFFFFF;
    v15 = MoveRect((__int64)a1, v7, 0);
    *((_DWORD *)a1 + 49) |= 0x2000000u;
    v8 = v15;
    v13 = *((unsigned int *)a1 + 49);
    v14 = v87;
  }
  v16 = v90;
  if ( v14 != 1 || v90 - 1 > 1 )
    *((_DWORD *)a1 + 70) &= ~2u;
  if ( v14 != 1 )
  {
    switch ( v14 )
    {
      case 3:
        if ( !*((_DWORD *)a1 + 60) && !v16 && (v13 & 0x300) == 0x300 )
        {
          v13 = (((unsigned int)v13 >> 15) & 7) - 4;
          if ( (unsigned int)v13 <= 1 )
          {
            v21 = v86;
            v22 = v84;
            v23 = v86;
            do
            {
              v79 = *GetMonitorWorkRectForWindow(&v87, (__int64)v22, *((const struct tagWND **)a1 + 2));
              if ( IsDockTargetActive((__int64)a1, (__int64)v22, 0) && (int)v79 <= v5 && v5 < SDWORD2(v79) )
                v21 = v22;
              if ( IsDockTargetActive(v25, v24, 3) && (int)v79 <= v5 && v5 < SDWORD2(v79) )
                v23 = v22;
              v27 = *((_QWORD *)v22 + 71);
              if ( v27 == gpDispInfo + 144LL )
                v27 = *(_QWORD *)(gpDispInfo + 144LL);
              v22 = (struct tagMONITOR *)(v27 - 568);
            }
            while ( v22 != *((struct tagMONITOR **)a1 + 29) );
            v80 = (__int64)v23;
            v28 = v23 == 0LL;
            v7 = v91;
            v86 = v21;
            v6 = v92;
            if ( !v28 )
            {
              v29 = v86;
              if ( v86 )
              {
                v30 = *(_OWORD *)((char *)a1 + 40);
                MoveRect((__int64)a1, v91, v26);
                if ( (unsigned int)VerticalSizeRectFromHitTarget((__int64)a1, (__int64)v29, 0, v80, v5) )
                {
                  *((_DWORD *)a1 + 60) = 0;
                  SetCurrentHitTargetMonitor(a1, v29, 1);
                  result = v31;
                  *((_DWORD *)a1 + 61) = v31 + 1;
                  return result;
                }
                if ( (*((_DWORD *)a1 + 49) & 0x2000000) != 0 )
                  *(_OWORD *)((char *)a1 + 72) = v30;
                else
                  *(_OWORD *)((char *)a1 + 40) = v30;
              }
            }
          }
        }
        if ( (*((_DWORD *)a1 + 49) & 0x6000000) != 0x4000000 )
        {
LABEL_54:
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
          v33 = v84;
          v88 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v88;
          v89 = v33;
          if ( v33 )
          {
            _InterlockedIncrement((volatile signed __int32 *)v33 + 2);
            v33 = v84;
          }
          v34 = v90;
          xxxSizeRectFromHitTarget(a1, v33, v90);
          if ( v34 )
          {
            if ( v34 == 1 )
            {
              v35 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x100;
              goto LABEL_60;
            }
            if ( v34 == 2 )
            {
              v35 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x200;
LABEL_60:
              *((_DWORD *)a1 + 49) = v35;
              if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 1) != 0 )
              {
                v36 = v93;
                v37 = *(struct tagRECT *)((char *)a1 + 40);
                v38 = (struct tagCHECKPOINT *)v85;
                *v6 |= 1u;
                *v36 = v37;
                *a5 = v38;
              }
              SetDragOutThresholdAlways(a1);
              goto LABEL_68;
            }
          }
          else
          {
            v39 = *((_DWORD *)a1 + 49);
            *((_DWORD *)a1 + 70) &= ~2u;
            v39 &= 0xFFFFFCFF;
            *((_DWORD *)a1 + 49) = v39;
            if ( (v39 & 0x4000000) == 0 )
              *v6 |= 2u;
            SetDragInToDragOutThreshold(a1);
          }
          if ( v34 == 3 )
          {
LABEL_69:
            *((_DWORD *)a1 + 60) = v34;
            SetCurrentHitTargetMonitor(a1, v33, 1);
            *((_DWORD *)a1 + 61) = 2;
LABEL_70:
            ThreadUnlock1(v41, v40, v42);
            return 1LL;
          }
LABEL_68:
          MakeArrangedStateObservable(a1);
          goto LABEL_69;
        }
        if ( (unsigned int)MoveRect((__int64)a1, v7, 0) )
        {
          *v6 |= 8u;
          *((_DWORD *)a1 + 49) |= 0x2000000u;
          goto LABEL_54;
        }
        return 0LL;
      case 4:
        if ( (v13 & 0x80u) == 0LL )
        {
          MoveRect((__int64)a1, v7, 0);
          v43 = *((_DWORD *)a1 + 60);
          if ( v43 )
          {
            if ( (unsigned int)(v43 - 1) <= 1 )
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
LABEL_119:
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
        v44 = (struct tagCHECKPOINT *)v85;
        v45 = v13 & 0x7000;
        v46 = *((_DWORD *)a1 + 60);
        v47 = *v85;
        v48 = _mm_cvtsi128_si32(*v85);
        v49 = _mm_cvtsi128_si32(_mm_srli_si128(*v85, 8));
        v81 = *v85;
        v50 = v49 - v48;
        if ( !v46 )
        {
          if ( v45 == 4096 )
          {
            v51 = v50 / 2;
            v52 = *((_DWORD *)a1 + 6);
            v53 = v5 - v52;
            if ( v5 - v52 >= v51 )
            {
              if ( v53 <= *((_DWORD *)a1 + 8) - v52 - v51 )
                v53 = v51;
              else
                v53 = v49 + v5 - *((_DWORD *)a1 + 8) - v48;
            }
            v54 = *((_DWORD *)a1 + 72);
            goto LABEL_94;
          }
          v55 = *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30);
          v53 = *((_DWORD *)a1 + 73);
          if ( v55 <= v50 )
          {
            if ( v53 < v55 / 2 )
              goto LABEL_93;
            if ( v53 <= v55 / 2 )
            {
              v53 = v55 / 2;
              goto LABEL_93;
            }
          }
          else
          {
            if ( v53 < v50 / 2 )
            {
LABEL_93:
              v54 = *((_DWORD *)a1 + 74);
LABEL_94:
              v46 = 0;
LABEL_105:
              if ( v46 )
              {
                v57 = v46 - 1;
                if ( v57 && (v58 = v57 - 1) != 0 )
                {
                  if ( v58 == 1 )
                  {
                    v59 = v5 - v53 - v48;
                    v60 = v9 - v81.m128i_i32[1] - v54;
                    v81.m128i_i32[0] = v59 + v48;
                    v81.m128i_i32[3] += v60;
                    v81.m128i_i32[1] += v60;
                    v81.m128i_i32[2] = v59 + v49;
                    v47 = v81;
                  }
                }
                else
                {
                  v61 = v5 - v53 - v48;
                  v62 = v9 - v81.m128i_i32[1] - v54;
                  v81.m128i_i32[3] += v62;
                  v81.m128i_i32[1] += v62;
                  v63 = *((_DWORD *)a1 + 49);
                  v81.m128i_i32[0] = v61 + v48;
                  v81.m128i_i32[2] = v61 + v49;
                  v47 = v81;
                  if ( (v63 & 0x80) != 0 )
                  {
                    v64 = v63 & 0xFFFFFF7F;
                    *((_DWORD *)a1 + 49) = v64;
                    if ( (v64 & 0x20) != 0 )
                    {
                      p_left = &v93->left;
                      *v6 |= 1u;
                      *p_left = v81;
                      *a5 = v44;
                    }
                  }
                  ++*((_DWORD *)a1 + 80);
                  SetDragOutToDragInThreshold(a1);
                }
              }
              else
              {
                v66 = v5 - v53 - v48;
                v67 = v9 - v81.m128i_i32[1] - v54;
                v81.m128i_i32[3] += v67;
                v81.m128i_i32[1] += v67;
                v68 = *((_DWORD *)a1 + 49);
                v81.m128i_i32[0] = v66 + v48;
                v81.m128i_i32[2] = v66 + v49;
                v47 = v81;
                if ( (v68 & 0x80) != 0 )
                {
                  v69 = v68 & 0xFFFFFF7F;
                  *((_DWORD *)a1 + 71) = v53;
                  *((_DWORD *)a1 + 49) = v69;
                  *((_DWORD *)a1 + 72) = v54;
                  if ( (v69 & 0x20) != 0 )
                  {
                    v70 = &v93->left;
                    *v6 |= 1u;
                    *v70 = v81;
                    *a5 = v44;
                  }
                }
                ++*((_DWORD *)a1 + 79);
                SetDragInThresholdAlways(a1);
              }
              *(__m128i *)((char *)a1 + 40) = v47;
              goto LABEL_119;
            }
            if ( v53 <= v55 - v50 / 2 )
            {
              v53 = v50 / 2;
              goto LABEL_93;
            }
          }
          v53 = v49 + v53 - v55 - v48;
          goto LABEL_93;
        }
        v56 = *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30);
        v53 = *((_DWORD *)a1 + 73);
        if ( v45 == 4096 || v56 > v50 )
        {
          if ( v53 >= v50 / 2 )
          {
            if ( v53 > v56 - v50 / 2 )
            {
LABEL_102:
              v53 = v49 + v53 - v56 - v48;
              goto LABEL_104;
            }
            v53 = v50 / 2;
          }
        }
        else if ( v53 >= v56 / 2 )
        {
          if ( v53 <= v56 / 2 )
          {
            v53 = v56 / 2;
            goto LABEL_104;
          }
          goto LABEL_102;
        }
LABEL_104:
        v54 = *((_DWORD *)a1 + 74);
        goto LABEL_105;
      case 5:
LABEL_14:
        v20 = *((_DWORD *)a1 + 61);
        return MoveRect((__int64)a1, v7, v20);
    }
    if ( v14 != 6 )
      return 0LL;
    if ( (v13 & 0x40000) == 0 )
    {
      CkptRestore(*((_QWORD *)a1 + 2), (struct _MOVESIZEDATA *)((char *)a1 + 120));
      LODWORD(v13) = *((_DWORD *)a1 + 49) | 0x40000;
      *((_DWORD *)a1 + 49) = v13;
      if ( (v13 & 0x1000000) != 0 )
        *(__m128i *)((char *)a1 + 152) = *v85;
    }
    v73 = v13 & 0x6000000;
    if ( (_DWORD)v73 == 0x4000000 )
    {
      if ( !(unsigned int)MoveRect((__int64)a1, v7, 0) )
        return 0LL;
      *v6 |= 8u;
      *((_DWORD *)a1 + 49) |= 0x2000000u;
    }
    v74 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73);
    v75 = v84;
    v88 = *(_QWORD *)(v74 + 408);
    *(_QWORD *)(v74 + 408) = &v88;
    v89 = v75;
    if ( v75 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v75 + 2);
      v75 = v84;
    }
    v76 = v90;
    xxxSizeRectFromHitTarget(a1, v75, v90);
    if ( v76 )
    {
      if ( v76 == 1 )
      {
        v77 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x100;
      }
      else
      {
        if ( v76 != 2 )
        {
          if ( v76 == 3 )
          {
            *((_DWORD *)a1 + 49) &= 0xFFFFFCFF;
            *((_DWORD *)a1 + 70) &= ~2u;
          }
          goto LABEL_142;
        }
        v77 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x200;
      }
      *((_DWORD *)a1 + 49) = v77;
    }
    else
    {
      v78 = *((_DWORD *)a1 + 49);
      *((_DWORD *)a1 + 70) &= ~2u;
      v78 &= 0xFFFFFCFF;
      *((_DWORD *)a1 + 49) = v78;
      if ( (v78 & 0x4000000) == 0 )
        *v6 |= 2u;
    }
    SetDragInToDragOutThreshold(a1);
LABEL_142:
    MakeArrangedStateObservable(a1);
    *((_DWORD *)a1 + 60) = v76;
    SetCurrentHitTargetMonitor(a1, v75, 1);
    goto LABEL_70;
  }
  v17 = *((_DWORD *)a1 + 60);
  if ( (unsigned int)(v17 - 1) > 1 )
  {
    v18 = v13 & 0x300;
  }
  else
  {
    v18 = v13 & 0x300;
    if ( (v13 & 0x300) == 0 )
    {
      if ( (v13 & 0x2000000) != 0 )
        return v8;
      goto LABEL_14;
    }
  }
  if ( !v17 )
  {
    if ( v18 == 768 && (((unsigned int)v13 >> 15) & 7) - 4 <= 1 )
    {
      if ( (v13 & 0x2000000) != 0 )
        return v8;
      goto LABEL_21;
    }
    if ( (v13 & 0x300) != 0 && (((unsigned int)v13 >> 15) & 7) - 4 <= 1 )
    {
      *((_DWORD *)a1 + 49) = v13 | 0x300;
      MakeArrangedStateObservable(a1);
      if ( (*((_DWORD *)a1 + 49) & 0x2000000) != 0 )
        return v8;
LABEL_21:
      v20 = 3;
      return MoveRect((__int64)a1, v7, v20);
    }
  }
  return (v13 & 0x2000000) != 0 ? v8 : 0;
}

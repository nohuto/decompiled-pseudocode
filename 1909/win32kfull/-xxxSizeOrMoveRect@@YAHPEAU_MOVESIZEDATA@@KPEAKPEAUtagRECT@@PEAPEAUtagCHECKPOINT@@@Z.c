/*
 * XREFs of ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FEEBC
 * Callers:
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FDB18 (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01FF9E4 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C0014440 (CkptRestore.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0037DD8 (GetMonitorWorkRectForWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F9ADC (-ComputeMoveOutcome@@YA-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     ?DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F9E5C (-DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01F9FA4 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FA774 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01FA97C (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01FAEB0 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01FB1D4 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FB208 (-SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FB254 (-SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FB280 (-SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FB2C8 (-SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01FB9E4 (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FF860 (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
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
  __int64 v11; // r8
  int v12; // r13d
  unsigned int v13; // eax
  unsigned int v14; // ecx
  int v15; // ebx
  int v16; // ecx
  int v17; // r8d
  __int64 result; // rax
  bool v19; // zf
  struct tagMONITOR *v20; // rsi
  struct tagMONITOR *v21; // rbx
  struct tagMONITOR *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int128 v26; // xmm6
  unsigned int v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // rax
  struct tagMONITOR *v30; // r12
  unsigned int v31; // r14d
  unsigned int v32; // eax
  struct tagRECT *v33; // rax
  struct tagRECT v34; // xmm0
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  struct tagCHECKPOINT *v40; // r12
  int v41; // r11d
  int v42; // edx
  __m128i v43; // xmm6
  int v44; // r9d
  int v45; // r10d
  int v46; // eax
  int v47; // r8d
  int v48; // eax
  int v49; // ecx
  int v50; // edx
  int v51; // r11d
  int v52; // r12d
  int v53; // r11d
  int v54; // r11d
  int v55; // r14d
  int v56; // r15d
  int v57; // r14d
  int v58; // r15d
  int v59; // eax
  unsigned int v60; // eax
  bool v61; // zf
  int v62; // r14d
  int v63; // r15d
  int v64; // r8d
  _OWORD *v65; // rax
  int v66; // r14d
  int v67; // r15d
  int v68; // r8d
  _OWORD *p_left; // rax
  const struct _MOVESIZEDATA *v70; // rcx
  int v71; // ecx
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 ThreadWin32Thread; // rax
  struct tagMONITOR *v75; // r14
  unsigned int v76; // r12d
  unsigned int v77; // eax
  int v78; // eax
  __int128 v79; // [rsp+38h] [rbp-61h]
  __m128i v80; // [rsp+38h] [rbp-61h]
  __m128i *v82; // [rsp+48h] [rbp-51h]
  unsigned int v83; // [rsp+50h] [rbp-49h]
  struct tagMONITOR *v84; // [rsp+58h] [rbp-41h]
  struct tagMONITOR *v85; // [rsp+60h] [rbp-39h] BYREF
  __int64 v86; // [rsp+68h] [rbp-31h] BYREF
  struct tagMONITOR *v87; // [rsp+70h] [rbp-29h]
  __int64 v88; // [rsp+78h] [rbp-21h]
  __int128 v89; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v90; // [rsp+F8h] [rbp+5Fh] BYREF
  int v91; // [rsp+100h] [rbp+67h]
  unsigned int *v92; // [rsp+108h] [rbp+6Fh]
  struct tagRECT *v93; // [rsp+110h] [rbp+77h]

  v93 = a4;
  v92 = a3;
  v91 = a2;
  v5 = (__int16)a2 - *((_DWORD *)a1 + 42);
  v6 = a3;
  v86 = 0LL;
  v7 = a2;
  v87 = 0LL;
  v88 = 0LL;
  v9 = SHIWORD(a2) - *((_DWORD *)a1 + 43);
  v83 = 1;
  v82 = (__m128i *)GetOrUpdateCheckPointIfNotPresent(a1);
  if ( !v82 || v5 == *((_DWORD *)a1 + 75) && v9 == *((_DWORD *)a1 + 76) )
    return 0LL;
  v10 = ComputeMoveOutcome(__PAIR64__(v9, v5), (__int64)a1, &v85, &v90);
  v11 = *((unsigned int *)a1 + 49);
  v12 = v10;
  *(_QWORD *)((char *)a1 + 300) = __PAIR64__(v9, v5);
  if ( (v11 & 0x6000000) == 0x6000000 )
  {
    *((_DWORD *)a1 + 49) = v11 & 0xFDFFFFFF;
    v13 = MoveRect((__int64)a1, v7, 0);
    *((_DWORD *)a1 + 49) |= 0x2000000u;
    v11 = *((unsigned int *)a1 + 49);
    v83 = v13;
  }
  v14 = v90;
  if ( v12 == 1 && v90 - 1 <= 1 || (*((_DWORD *)a1 + 70) &= ~2u, v12 == 1) )
  {
    v15 = *((_DWORD *)a1 + 60);
    if ( (unsigned int)(v15 - 1) > 1 )
    {
      v16 = v11 & 0x300;
    }
    else
    {
      v16 = v11 & 0x300;
      if ( (v11 & 0x300) == 0 )
      {
        if ( (v11 & 0x2000000) == 0 )
        {
LABEL_12:
          v17 = *((_DWORD *)a1 + 61);
          return MoveRect((__int64)a1, v7, v17);
        }
        return v83;
      }
    }
    if ( !v15 )
    {
      if ( v16 == 768 && (((v11 & 0x38000) - 0x20000) & 0xFFFF7FFF) == 0 )
      {
        v19 = (v11 & 0x2000000) == 0;
        goto LABEL_19;
      }
      if ( v16 && (((v11 & 0x38000) - 0x20000) & 0xFFFF7FFF) == 0 )
      {
        *((_DWORD *)a1 + 49) = v11 | 0x300;
        MakeArrangedStateObservable(a1);
        v19 = (*((_DWORD *)a1 + 49) & 0x2000000) == 0;
LABEL_19:
        if ( v19 )
        {
          v17 = 3;
          return MoveRect((__int64)a1, v7, v17);
        }
        return v83;
      }
    }
    if ( (v11 & 0x2000000) != 0 )
      return v83;
    return 0LL;
  }
  if ( v12 != 3 )
  {
    if ( v12 == 4 )
    {
      if ( (v11 & 0x80u) == 0LL )
      {
        MoveRect((__int64)a1, v7, 0);
        v39 = *((_DWORD *)a1 + 60);
        if ( v39 )
        {
          if ( (unsigned int)(v39 - 1) <= 1 )
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
      v40 = (struct tagCHECKPOINT *)v82;
      v41 = *((_DWORD *)a1 + 60);
      v42 = v11 & 0x7000;
      v43 = *v82;
      v44 = _mm_cvtsi128_si32(*v82);
      v45 = _mm_cvtsi128_si32(_mm_srli_si128(*v82, 8));
      v80 = *v82;
      v46 = v45 - v44;
      if ( !v41 )
      {
        if ( v42 == 4096 )
        {
          v47 = v46 / 2;
          v48 = *((_DWORD *)a1 + 6);
          v49 = v5 - v48;
          if ( v5 - v48 >= v47 )
          {
            if ( v49 <= *((_DWORD *)a1 + 8) - v48 - v47 )
              v49 = v47;
            else
              v49 = v45 + v5 - *((_DWORD *)a1 + 8) - v44;
          }
          v50 = *((_DWORD *)a1 + 72);
          LODWORD(v11) = *((_DWORD *)a1 + 49);
          goto LABEL_93;
        }
        v51 = *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30);
        v49 = *((_DWORD *)a1 + 73);
        if ( v51 <= v46 )
        {
          if ( v49 < v51 / 2 )
            goto LABEL_92;
          if ( v49 <= v51 / 2 )
          {
            v49 = v51 / 2;
            goto LABEL_92;
          }
        }
        else
        {
          if ( v49 < v46 / 2 )
          {
LABEL_92:
            v50 = *((_DWORD *)a1 + 74);
LABEL_93:
            v41 = 0;
            goto LABEL_104;
          }
          if ( v49 <= v51 - v46 / 2 )
          {
            v49 = v46 / 2;
            goto LABEL_92;
          }
        }
        v49 = v45 + v49 - v51 - v44;
        goto LABEL_92;
      }
      v52 = *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30);
      v49 = *((_DWORD *)a1 + 73);
      if ( v42 == 4096 || v52 > v46 )
      {
        if ( v49 >= v46 / 2 )
        {
          if ( v49 > v52 - v46 / 2 )
          {
LABEL_101:
            v49 = v45 + v49 - v52 - v44;
            goto LABEL_103;
          }
          v49 = v46 / 2;
        }
      }
      else if ( v49 >= v52 / 2 )
      {
        if ( v49 <= v52 / 2 )
        {
          v49 = v52 / 2;
          goto LABEL_103;
        }
        goto LABEL_101;
      }
LABEL_103:
      v40 = (struct tagCHECKPOINT *)v82;
      v50 = *((_DWORD *)a1 + 74);
LABEL_104:
      if ( !v41 )
      {
        v66 = v5 - v49 - v44;
        v67 = v9 - v80.m128i_i32[1] - v50;
        v80.m128i_i32[3] += v67;
        v80.m128i_i32[1] += v67;
        v80.m128i_i32[0] = v66 + v44;
        v80.m128i_i32[2] = v66 + v45;
        v43 = v80;
        if ( (v11 & 0x80) != 0 )
        {
          v68 = v11 & 0xFFFFFF7F;
          *((_DWORD *)a1 + 71) = v49;
          *((_DWORD *)a1 + 49) = v68;
          *((_DWORD *)a1 + 72) = v50;
          if ( (v68 & 0x20) != 0 )
          {
            p_left = &v93->left;
            *v6 |= 1u;
            *p_left = v80;
            *a5 = v40;
          }
        }
        ++*((_DWORD *)a1 + 79);
        SetDragInThresholdAlways(a1);
        goto LABEL_120;
      }
      v53 = v41 - 1;
      if ( v53 )
      {
        v54 = v53 - 1;
        if ( v54 )
        {
          if ( v54 == 1 )
          {
            v55 = v5 - v49 - v44;
            v56 = v9 - v80.m128i_i32[1] - v50;
            v80.m128i_i32[0] = v55 + v44;
            v80.m128i_i32[3] += v56;
            v80.m128i_i32[1] += v56;
            v80.m128i_i32[2] = v55 + v45;
            v43 = v80;
          }
          goto LABEL_120;
        }
        v57 = v5 - v49 - v44;
        v58 = v9 - v80.m128i_i32[1] - v50;
        v80.m128i_i32[3] += v58;
        v80.m128i_i32[1] += v58;
        v59 = *((_DWORD *)a1 + 49);
        v80.m128i_i32[0] = v57 + v44;
        v80.m128i_i32[2] = v57 + v45;
        v43 = v80;
        if ( (v59 & 0x80) != 0 )
        {
          v60 = v59 & 0xFFFFFF7F;
          *((_DWORD *)a1 + 49) = v60;
          v61 = (v60 & 0x20) == 0;
          goto LABEL_113;
        }
      }
      else
      {
        v62 = v5 - v49 - v44;
        v63 = v9 - v80.m128i_i32[1] - v50;
        v80.m128i_i32[3] += v63;
        v80.m128i_i32[1] += v63;
        v80.m128i_i32[0] = v62 + v44;
        v80.m128i_i32[2] = v62 + v45;
        v43 = v80;
        if ( (v11 & 0x80) != 0 )
        {
          v64 = v11 & 0xFFFFFF7F;
          *((_DWORD *)a1 + 49) = v64;
          v61 = (v64 & 0x20) == 0;
LABEL_113:
          if ( !v61 )
          {
            v65 = &v93->left;
            *v6 |= 1u;
            *v65 = v43;
            *a5 = v40;
          }
        }
      }
      ++*((_DWORD *)a1 + 80);
      SetDragOutToDragInThreshold(a1);
LABEL_120:
      *(__m128i *)((char *)a1 + 40) = v43;
LABEL_121:
      *((_DWORD *)a1 + 49) &= 0xFFFFFCFF;
      *((_DWORD *)a1 + 70) &= ~2u;
      *((_DWORD *)a1 + 60) = 4;
      DisableTemporayMetricsOverrides(a1);
      MakeArrangedStateObservable(v70);
      v71 = *((_DWORD *)a1 + 49);
      *((_DWORD *)a1 + 61) = 0;
      if ( (v71 & 0x6000000) == 0x6000000 )
      {
        *v6 |= 4u;
        *((_DWORD *)a1 + 49) = v71 & 0xFDFFFFFF;
      }
      return 1LL;
    }
    if ( v12 == 5 )
      goto LABEL_12;
    if ( v12 != 6 )
      return 0LL;
    if ( (v11 & 0x40000) == 0 )
    {
      CkptRestore(*((_QWORD *)a1 + 2), (struct _MOVESIZEDATA *)((char *)a1 + 120));
      LODWORD(v11) = *((_DWORD *)a1 + 49) | 0x40000;
      *((_DWORD *)a1 + 49) = v11;
      if ( (v11 & 0x1000000) != 0 )
        *(__m128i *)((char *)a1 + 152) = *v82;
    }
    v72 = 100663296LL;
    v73 = v11 & 0x6000000;
    if ( (_DWORD)v73 == 0x4000000 )
    {
      if ( !(unsigned int)MoveRect((__int64)a1, v7, 0) )
        return 0LL;
      *v6 |= 8u;
      *((_DWORD *)a1 + 49) |= 0x2000000u;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v72, v73);
    v75 = v85;
    v86 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v86;
    v87 = v75;
    if ( v75 )
      HMLockObject(v75);
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
          goto LABEL_144;
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
LABEL_144:
    MakeArrangedStateObservable(a1);
    *((_DWORD *)a1 + 60) = v76;
    SetCurrentHitTargetMonitor(a1, v75, 1);
    goto LABEL_69;
  }
  if ( !*((_DWORD *)a1 + 60) && !v14 && (v11 & 0x300) == 0x300 )
  {
    v11 = ((unsigned int)v11 & 0x38000) - 0x20000;
    if ( (v11 & 0xFFFF7FFF) == 0 )
    {
      v20 = 0LL;
      v21 = v85;
      v22 = 0LL;
      do
      {
        v79 = *GetMonitorWorkRectForWindow(&v89, (__int64)v21, *((const struct tagWND **)a1 + 2));
        if ( IsDockTargetActive((__int64)a1, (__int64)v21, 0) && (int)v79 <= v5 && v5 < SDWORD2(v79) )
          v20 = v21;
        if ( IsDockTargetActive(v24, v23, 3) && (int)v79 <= v5 && v5 < SDWORD2(v79) )
          v22 = v21;
        v25 = *((_QWORD *)v21 + 35);
        if ( v25 == gpDispInfo + 144LL )
          v25 = *(_QWORD *)(gpDispInfo + 144LL);
        v21 = (struct tagMONITOR *)(v25 - 280);
      }
      while ( v21 != *((struct tagMONITOR **)a1 + 29) );
      *(_QWORD *)&v89 = v22;
      v19 = v22 == 0LL;
      v7 = v91;
      v84 = v20;
      v6 = v92;
      if ( !v19 )
      {
        if ( v84 )
        {
          v26 = *(_OWORD *)((char *)a1 + 40);
          MoveRect((__int64)a1, v91, v11);
          if ( (unsigned int)VerticalSizeRectFromHitTarget((__int64)a1, (__int64)v84, 0, v89, v5) )
          {
            *((_DWORD *)a1 + 60) = 0;
            SetCurrentHitTargetMonitor(a1, v84, 1);
            result = v27;
            *((_DWORD *)a1 + 61) = v27 + 1;
            return result;
          }
          if ( (*((_DWORD *)a1 + 49) & 0x2000000) != 0 )
            *(_OWORD *)((char *)a1 + 72) = v26;
          else
            *(_OWORD *)((char *)a1 + 40) = v26;
        }
      }
    }
  }
  v28 = 100663296LL;
  if ( (*((_DWORD *)a1 + 49) & 0x6000000) != 0x4000000 )
  {
LABEL_53:
    v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v11);
    v30 = v85;
    v86 = *(_QWORD *)(v29 + 408);
    *(_QWORD *)(v29 + 408) = &v86;
    v87 = v30;
    if ( v30 )
      HMLockObject(v30);
    v31 = v90;
    xxxSizeRectFromHitTarget(a1, v30, v90);
    if ( v31 )
    {
      if ( v31 == 1 )
      {
        v32 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x100;
        goto LABEL_60;
      }
      if ( v31 == 2 )
      {
        v32 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x200;
LABEL_60:
        *((_DWORD *)a1 + 49) = v32;
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 1) != 0 )
        {
          v33 = v93;
          v34 = *(struct tagRECT *)((char *)a1 + 40);
          *v6 |= 1u;
          *v33 = v34;
          *a5 = (struct tagCHECKPOINT *)v82;
        }
        SetDragOutThresholdAlways(a1);
        goto LABEL_67;
      }
    }
    else
    {
      v35 = *((_DWORD *)a1 + 49);
      *((_DWORD *)a1 + 70) &= ~2u;
      v35 &= 0xFFFFFCFF;
      *((_DWORD *)a1 + 49) = v35;
      if ( (v35 & 0x4000000) == 0 )
        *v6 |= 2u;
      SetDragInToDragOutThreshold(a1);
    }
    if ( v31 == 3 )
    {
LABEL_68:
      *((_DWORD *)a1 + 60) = v31;
      SetCurrentHitTargetMonitor(a1, v30, 1);
      *((_DWORD *)a1 + 61) = 2;
LABEL_69:
      ThreadUnlock1(v37, v36, v38);
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

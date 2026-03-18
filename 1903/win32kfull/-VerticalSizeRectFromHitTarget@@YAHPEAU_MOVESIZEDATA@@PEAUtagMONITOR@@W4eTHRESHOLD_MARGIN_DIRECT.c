/*
 * XREFs of ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01FBC94
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C01FA408 (-HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DI.c)
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01FB7CC (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FF16C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C00970A8 (GetMonitorWorkRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FAA24 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall VerticalSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  const struct tagWND *v6; // r8
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r13d
  __m128i *MonitorWorkRectForWindow; // rax
  int v16; // r14d
  int v17; // r15d
  __m128i v18; // xmm1
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // xmm0_8
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  __int128 v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // r10
  __int64 v26; // rdi
  __int64 v27; // r8
  __int128 *v28; // rax
  int v29; // esi
  int v30; // r13d
  unsigned int v31; // edi
  int v32; // edx
  int v33; // eax
  __int64 v34; // rdi
  __int128 v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // r10
  __int64 v38; // rdi
  __int64 v39; // r8
  __int128 *v40; // rax
  int v41; // esi
  int v42; // r13d
  unsigned int v43; // edi
  int v44; // eax
  int v45; // esi
  int v46; // eax
  __int128 v48; // [rsp+20h] [rbp-59h]
  __int64 v49; // [rsp+30h] [rbp-49h] BYREF
  __int64 v50; // [rsp+38h] [rbp-41h] BYREF
  unsigned int CurrentThreadDpiAwarenessContext; // [rsp+40h] [rbp-39h]
  __int128 v52; // [rsp+50h] [rbp-29h] BYREF
  __int128 v53; // [rsp+60h] [rbp-19h] BYREF
  __int128 v54; // [rsp+70h] [rbp-9h] BYREF

  v49 = 0LL;
  v6 = *(const struct tagWND **)(a1 + 16);
  v50 = a2;
  v9 = 0;
  v48 = *GetMonitorWorkRectForWindow(&v52, a2, v6);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13);
  v14 = CurrentThreadDpiAwarenessContext;
  if ( a4 )
  {
    MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v52, a4, *(const struct tagWND **)(a1 + 16));
    v16 = HIDWORD(v48);
    v17 = DWORD1(v48);
    v18 = *MonitorWorkRectForWindow;
    v19 = MonitorWorkRectForWindow->m128i_i64[0];
    v20 = _mm_srli_si128(v18, 8).m128i_u64[0];
    if ( SHIDWORD(v20) > SHIDWORD(v48) )
      v16 = HIDWORD(v20);
    v21 = HIDWORD(v19);
    HIDWORD(v48) = v16;
    if ( (int)v21 < SDWORD1(v48) )
      v17 = v21;
    DWORD1(v48) = v17;
  }
  else
  {
    v16 = HIDWORD(v48);
    v17 = DWORD1(v48);
  }
  if ( a3 )
  {
    if ( a3 != 3 )
      return v9;
    v22 = *(_QWORD *)(a1 + 232);
    while ( 1 )
    {
      v23 = *GetMonitorWorkRectForWindow(&v53, v22, *(const struct tagWND **)(a1 + 16));
      v54 = 0uLL;
      v24 = *(_QWORD *)(a1 + 16);
      v52 = v23;
      if ( (*(_DWORD *)(*(_QWORD *)(v24 + 40) + 288LL) & 0xF) == 2 || v22 == v50 )
      {
        v54 = v23;
      }
      else
      {
        v54 = *(_OWORD *)(*(_QWORD *)(v22 + 40) + 44LL);
        PhysicalToLogicalDPIRect(&v54, &v54, v14, &v50);
      }
      if ( IsDockTargetActive(a1, v22, 0) && (int)v54 <= a5 && a5 < SDWORD2(v54) )
        break;
      v26 = *(_QWORD *)(v22 + 280);
      if ( v26 == gpDispInfo + 144LL )
        v26 = *(_QWORD *)(gpDispInfo + 144LL);
      v22 = v26 - 280;
      if ( v22 == *(_QWORD *)(a1 + 232) )
        return v9;
    }
    v27 = *(_QWORD *)(a1 + 16);
    v49 = v22;
    if ( (*(_DWORD *)(*(_QWORD *)(v27 + 40) + 288LL) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v22 + 40) + 64LL) == *(_WORD *)(*(_QWORD *)(v25 + 40) + 64LL) )
    {
      v29 = DWORD1(v52);
      DWORD1(v48) = DWORD1(v52);
    }
    else
    {
      v49 = v25;
      v28 = GetMonitorWorkRectForWindow(&v53, v25, (const struct tagWND *)v27);
      v27 = *(_QWORD *)(a1 + 16);
      v22 = v49;
      v48 = *v28;
      v16 = HIDWORD(*v28);
      v29 = HIDWORD(*(_QWORD *)v28);
    }
    v30 = *(_DWORD *)(a1 + 48);
    LODWORD(v48) = *(_DWORD *)(a1 + 40);
    DWORD2(v48) = v30;
    if ( (*(_DWORD *)(*(_QWORD *)(v27 + 40) + 288LL) & 0xF) != 2 && v22 != *(_QWORD *)(a1 + 208) )
    {
      v31 = CurrentThreadDpiAwarenessContext;
      *(_QWORD *)&v54 = *(unsigned int *)(a1 + 40);
      LogicalToPhysicalDPIPoint(&v54, &v54, CurrentThreadDpiAwarenessContext, a1 + 208);
      PhysicalToLogicalDPIPoint(&v54, &v54, v31, &v49);
      LODWORD(v48) = (__int16)v54;
      LODWORD(v54) = v30;
      LogicalToPhysicalDPIPoint(&v54, &v54, v31, a1 + 208);
      PhysicalToLogicalDPIPoint(&v54, &v54, v31, &v49);
      DWORD2(v48) = (__int16)v54;
    }
    v32 = *(_DWORD *)(a1 + 108);
    if ( v16 - v29 < v32 )
      DWORD1(v48) = v16 - v32;
    v33 = *(_DWORD *)(a1 + 116);
    if ( v16 - v29 >= v33 )
      DWORD1(v48) = v16 - v33;
  }
  else
  {
    v34 = *(_QWORD *)(a1 + 232);
    while ( 1 )
    {
      v35 = *GetMonitorWorkRectForWindow(&v53, v34, *(const struct tagWND **)(a1 + 16));
      v54 = 0uLL;
      v36 = *(_QWORD *)(a1 + 16);
      v52 = v35;
      if ( (*(_DWORD *)(*(_QWORD *)(v36 + 40) + 288LL) & 0xF) == 2 || v34 == v50 )
      {
        v54 = v35;
      }
      else
      {
        v54 = *(_OWORD *)(*(_QWORD *)(v34 + 40) + 44LL);
        PhysicalToLogicalDPIRect(&v54, &v54, v14, &v50);
      }
      if ( IsDockTargetActive(a1, v34, 3) && (int)v54 <= a5 && a5 < SDWORD2(v54) )
        break;
      v38 = *(_QWORD *)(v34 + 280);
      if ( v38 == gpDispInfo + 144LL )
        v38 = *(_QWORD *)(gpDispInfo + 144LL);
      v34 = v38 - 280;
      if ( v34 == *(_QWORD *)(a1 + 232) )
        return v9;
    }
    v39 = *(_QWORD *)(a1 + 16);
    v49 = v34;
    if ( (*(_DWORD *)(*(_QWORD *)(v39 + 40) + 288LL) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v34 + 40) + 64LL) == *(_WORD *)(*(_QWORD *)(v37 + 40) + 64LL) )
    {
      v41 = HIDWORD(v52);
      HIDWORD(v48) = HIDWORD(v52);
    }
    else
    {
      v49 = v37;
      v40 = GetMonitorWorkRectForWindow(&v53, v37, (const struct tagWND *)v39);
      v39 = *(_QWORD *)(a1 + 16);
      v34 = v49;
      v48 = *v40;
      v41 = HIDWORD(*v40);
      v17 = HIDWORD(*(_QWORD *)v40);
    }
    v42 = *(_DWORD *)(a1 + 48);
    LODWORD(v48) = *(_DWORD *)(a1 + 40);
    DWORD2(v48) = v42;
    if ( (*(_DWORD *)(*(_QWORD *)(v39 + 40) + 288LL) & 0xF) != 2 && v34 != *(_QWORD *)(a1 + 208) )
    {
      v43 = CurrentThreadDpiAwarenessContext;
      *(_QWORD *)&v54 = *(unsigned int *)(a1 + 40);
      LogicalToPhysicalDPIPoint(&v54, &v54, CurrentThreadDpiAwarenessContext, a1 + 208);
      PhysicalToLogicalDPIPoint(&v54, &v54, v43, &v49);
      LODWORD(v48) = (__int16)v54;
      LODWORD(v54) = v42;
      LogicalToPhysicalDPIPoint(&v54, &v54, v43, a1 + 208);
      PhysicalToLogicalDPIPoint(&v54, &v54, v43, &v49);
      DWORD2(v48) = (__int16)v54;
    }
    v44 = *(_DWORD *)(a1 + 108);
    v45 = v41 - v17;
    if ( v45 < v44 )
      HIDWORD(v48) = v17 + v44;
    v46 = *(_DWORD *)(a1 + 116);
    if ( v45 >= v46 )
      HIDWORD(v48) = v17 + v46;
  }
  v9 = 1;
  if ( (*(_DWORD *)(a1 + 196) & 0x2000000) != 0 )
    *(_OWORD *)(a1 + 72) = v48;
  else
    *(_OWORD *)(a1 + 40) = v48;
  return v9;
}

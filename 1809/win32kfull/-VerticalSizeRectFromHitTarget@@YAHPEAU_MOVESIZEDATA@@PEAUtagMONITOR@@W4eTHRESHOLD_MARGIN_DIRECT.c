/*
 * XREFs of ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01E63BC
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C01E4B64 (-HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DI.c)
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01E5EF4 (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01E9754 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C001D104 (GetMonitorWorkRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E5134 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall VerticalSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  const struct tagWND *v6; // r8
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r13d
  __m128i *MonitorWorkRectForWindow; // rax
  int v14; // r14d
  int v15; // r15d
  __m128i v16; // xmm1
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // xmm0_8
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  __int128 v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // rdi
  __int64 v25; // r8
  __int128 *v26; // rax
  int v27; // esi
  int v28; // r13d
  unsigned int v29; // edi
  int v30; // edx
  int v31; // eax
  __int64 v32; // rdi
  __int128 v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // r10
  __int64 v36; // rdi
  __int64 v37; // r8
  __int128 *v38; // rax
  int v39; // esi
  int v40; // r13d
  unsigned int v41; // edi
  int v42; // eax
  int v43; // esi
  int v44; // eax
  __int128 v46; // [rsp+20h] [rbp-59h]
  __int64 v47; // [rsp+30h] [rbp-49h] BYREF
  __int64 v48; // [rsp+38h] [rbp-41h] BYREF
  unsigned int CurrentThreadDpiAwarenessContext; // [rsp+40h] [rbp-39h]
  __int128 v50; // [rsp+50h] [rbp-29h] BYREF
  __int128 v51; // [rsp+60h] [rbp-19h] BYREF
  __int128 v52; // [rsp+70h] [rbp-9h] BYREF

  v47 = 0LL;
  v6 = *(const struct tagWND **)(a1 + 16);
  v48 = a2;
  v9 = 0;
  v46 = *GetMonitorWorkRectForWindow(&v50, a2, v6);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11, v10);
  v12 = CurrentThreadDpiAwarenessContext;
  if ( a4 )
  {
    MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v50, a4, *(const struct tagWND **)(a1 + 16));
    v14 = HIDWORD(v46);
    v15 = DWORD1(v46);
    v16 = *MonitorWorkRectForWindow;
    v17 = MonitorWorkRectForWindow->m128i_i64[0];
    v18 = _mm_srli_si128(v16, 8).m128i_u64[0];
    if ( SHIDWORD(v18) > SHIDWORD(v46) )
      v14 = HIDWORD(v18);
    v19 = HIDWORD(v17);
    HIDWORD(v46) = v14;
    if ( (int)v19 < SDWORD1(v46) )
      v15 = v19;
    DWORD1(v46) = v15;
  }
  else
  {
    v14 = HIDWORD(v46);
    v15 = DWORD1(v46);
  }
  if ( a3 )
  {
    if ( a3 != 3 )
      return v9;
    v20 = *(_QWORD *)(a1 + 232);
    while ( 1 )
    {
      v21 = *GetMonitorWorkRectForWindow(&v51, v20, *(const struct tagWND **)(a1 + 16));
      v22 = *(_QWORD *)(a1 + 16);
      v50 = v21;
      if ( (*(_DWORD *)(*(_QWORD *)(v22 + 40) + 288LL) & 0xF) == 2 || v20 == v48 )
      {
        v52 = v21;
      }
      else
      {
        v52 = *(_OWORD *)(*(_QWORD *)(v20 + 40) + 44LL);
        PhysicalToLogicalDPIRect(&v52, &v52, v12, &v48);
      }
      if ( IsDockTargetActive(a1, v20, 0) && (int)v52 <= a5 && a5 < SDWORD2(v52) )
        break;
      v24 = *(_QWORD *)(v20 + 280);
      if ( v24 == gpDispInfo + 144LL )
        v24 = *(_QWORD *)(gpDispInfo + 144LL);
      v20 = v24 - 280;
      if ( v20 == *(_QWORD *)(a1 + 232) )
        return v9;
    }
    v25 = *(_QWORD *)(a1 + 16);
    v47 = v20;
    if ( (*(_DWORD *)(*(_QWORD *)(v25 + 40) + 288LL) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v20 + 40) + 64LL) == *(_WORD *)(*(_QWORD *)(v23 + 40) + 64LL) )
    {
      v27 = DWORD1(v50);
      DWORD1(v46) = DWORD1(v50);
    }
    else
    {
      v47 = v23;
      v26 = GetMonitorWorkRectForWindow(&v51, v23, (const struct tagWND *)v25);
      v25 = *(_QWORD *)(a1 + 16);
      v20 = v47;
      v46 = *v26;
      v14 = HIDWORD(*v26);
      v27 = HIDWORD(*(_QWORD *)v26);
    }
    v28 = *(_DWORD *)(a1 + 48);
    LODWORD(v46) = *(_DWORD *)(a1 + 40);
    DWORD2(v46) = v28;
    if ( (*(_DWORD *)(*(_QWORD *)(v25 + 40) + 288LL) & 0xF) != 2 && v20 != *(_QWORD *)(a1 + 208) )
    {
      v29 = CurrentThreadDpiAwarenessContext;
      *(_QWORD *)&v52 = *(unsigned int *)(a1 + 40);
      LogicalToPhysicalDPIPoint(&v52, &v52, CurrentThreadDpiAwarenessContext, a1 + 208);
      PhysicalToLogicalDPIPoint(&v52, &v52, v29, &v47);
      LODWORD(v46) = (__int16)v52;
      LODWORD(v52) = v28;
      LogicalToPhysicalDPIPoint(&v52, &v52, v29, a1 + 208);
      PhysicalToLogicalDPIPoint(&v52, &v52, v29, &v47);
      DWORD2(v46) = (__int16)v52;
    }
    v30 = *(_DWORD *)(a1 + 108);
    if ( v14 - v27 < v30 )
      DWORD1(v46) = v14 - v30;
    v31 = *(_DWORD *)(a1 + 116);
    if ( v14 - v27 >= v31 )
      DWORD1(v46) = v14 - v31;
  }
  else
  {
    v32 = *(_QWORD *)(a1 + 232);
    while ( 1 )
    {
      v33 = *GetMonitorWorkRectForWindow(&v51, v32, *(const struct tagWND **)(a1 + 16));
      v34 = *(_QWORD *)(a1 + 16);
      v50 = v33;
      if ( (*(_DWORD *)(*(_QWORD *)(v34 + 40) + 288LL) & 0xF) == 2 || v32 == v48 )
      {
        v52 = v33;
      }
      else
      {
        v52 = *(_OWORD *)(*(_QWORD *)(v32 + 40) + 44LL);
        PhysicalToLogicalDPIRect(&v52, &v52, v12, &v48);
      }
      if ( IsDockTargetActive(a1, v32, 3) && (int)v52 <= a5 && a5 < SDWORD2(v52) )
        break;
      v36 = *(_QWORD *)(v32 + 280);
      if ( v36 == gpDispInfo + 144LL )
        v36 = *(_QWORD *)(gpDispInfo + 144LL);
      v32 = v36 - 280;
      if ( v32 == *(_QWORD *)(a1 + 232) )
        return v9;
    }
    v37 = *(_QWORD *)(a1 + 16);
    v47 = v32;
    if ( (*(_DWORD *)(*(_QWORD *)(v37 + 40) + 288LL) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v32 + 40) + 64LL) == *(_WORD *)(*(_QWORD *)(v35 + 40) + 64LL) )
    {
      v39 = HIDWORD(v50);
      HIDWORD(v46) = HIDWORD(v50);
    }
    else
    {
      v47 = v35;
      v38 = GetMonitorWorkRectForWindow(&v51, v35, (const struct tagWND *)v37);
      v37 = *(_QWORD *)(a1 + 16);
      v32 = v47;
      v46 = *v38;
      v39 = HIDWORD(*v38);
      v15 = HIDWORD(*(_QWORD *)v38);
    }
    v40 = *(_DWORD *)(a1 + 48);
    LODWORD(v46) = *(_DWORD *)(a1 + 40);
    DWORD2(v46) = v40;
    if ( (*(_DWORD *)(*(_QWORD *)(v37 + 40) + 288LL) & 0xF) != 2 && v32 != *(_QWORD *)(a1 + 208) )
    {
      v41 = CurrentThreadDpiAwarenessContext;
      *(_QWORD *)&v52 = *(unsigned int *)(a1 + 40);
      LogicalToPhysicalDPIPoint(&v52, &v52, CurrentThreadDpiAwarenessContext, a1 + 208);
      PhysicalToLogicalDPIPoint(&v52, &v52, v41, &v47);
      LODWORD(v46) = (__int16)v52;
      LODWORD(v52) = v40;
      LogicalToPhysicalDPIPoint(&v52, &v52, v41, a1 + 208);
      PhysicalToLogicalDPIPoint(&v52, &v52, v41, &v47);
      DWORD2(v46) = (__int16)v52;
    }
    v42 = *(_DWORD *)(a1 + 108);
    v43 = v39 - v15;
    if ( v43 < v42 )
      HIDWORD(v46) = v15 + v42;
    v44 = *(_DWORD *)(a1 + 116);
    if ( v43 >= v44 )
      HIDWORD(v46) = v15 + v44;
  }
  v9 = 1;
  if ( (*(_DWORD *)(a1 + 196) & 0x2000000) != 0 )
    *(_OWORD *)(a1 + 72) = v46;
  else
    *(_OWORD *)(a1 + 40) = v46;
  return v9;
}

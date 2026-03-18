/*
 * XREFs of ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01FB9E4
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C01FA158 (-HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DI.c)
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01FB51C (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FEEBC (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0037DD8 (GetMonitorWorkRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FA774 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall VerticalSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  const struct tagWND *v6; // r8
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // r13d
  __m128i *MonitorWorkRectForWindow; // rax
  int v15; // r14d
  int v16; // r15d
  __m128i v17; // xmm1
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // xmm0_8
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  __int128 v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // r10
  __int64 v25; // rdi
  __int64 v26; // r8
  __int128 *v27; // rax
  int v28; // esi
  int v29; // r13d
  unsigned int v30; // edi
  int v31; // edx
  int v32; // eax
  __int64 v33; // rdi
  __int128 v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // r10
  __int64 v37; // rdi
  __int64 v38; // r8
  __int128 *v39; // rax
  int v40; // esi
  int v41; // r13d
  unsigned int v42; // edi
  int v43; // eax
  int v44; // esi
  int v45; // eax
  __int128 v47; // [rsp+20h] [rbp-59h]
  __int64 v48; // [rsp+30h] [rbp-49h] BYREF
  __int64 v49; // [rsp+38h] [rbp-41h] BYREF
  unsigned int CurrentThreadDpiAwarenessContext; // [rsp+40h] [rbp-39h]
  __int128 v51; // [rsp+50h] [rbp-29h] BYREF
  __int128 v52; // [rsp+60h] [rbp-19h] BYREF
  __int128 v53; // [rsp+70h] [rbp-9h] BYREF

  v48 = 0LL;
  v6 = *(const struct tagWND **)(a1 + 16);
  v49 = a2;
  v9 = 0;
  v47 = *GetMonitorWorkRectForWindow(&v51, a2, v6);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12);
  v13 = CurrentThreadDpiAwarenessContext;
  if ( a4 )
  {
    MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v51, a4, *(const struct tagWND **)(a1 + 16));
    v15 = HIDWORD(v47);
    v16 = DWORD1(v47);
    v17 = *MonitorWorkRectForWindow;
    v18 = MonitorWorkRectForWindow->m128i_i64[0];
    v19 = _mm_srli_si128(v17, 8).m128i_u64[0];
    if ( SHIDWORD(v19) > SHIDWORD(v47) )
      v15 = HIDWORD(v19);
    v20 = HIDWORD(v18);
    HIDWORD(v47) = v15;
    if ( (int)v20 < SDWORD1(v47) )
      v16 = v20;
    DWORD1(v47) = v16;
  }
  else
  {
    v15 = HIDWORD(v47);
    v16 = DWORD1(v47);
  }
  if ( a3 )
  {
    if ( a3 != 3 )
      return v9;
    v21 = *(_QWORD *)(a1 + 232);
    while ( 1 )
    {
      v22 = *GetMonitorWorkRectForWindow(&v52, v21, *(const struct tagWND **)(a1 + 16));
      v53 = 0uLL;
      v23 = *(_QWORD *)(a1 + 16);
      v51 = v22;
      if ( (*(_DWORD *)(*(_QWORD *)(v23 + 40) + 288LL) & 0xF) == 2 || v21 == v49 )
      {
        v53 = v22;
      }
      else
      {
        v53 = *(_OWORD *)(*(_QWORD *)(v21 + 40) + 44LL);
        PhysicalToLogicalDPIRect(&v53, &v53, v13, &v49);
      }
      if ( IsDockTargetActive(a1, v21, 0) && (int)v53 <= a5 && a5 < SDWORD2(v53) )
        break;
      v25 = *(_QWORD *)(v21 + 280);
      if ( v25 == gpDispInfo + 144LL )
        v25 = *(_QWORD *)(gpDispInfo + 144LL);
      v21 = v25 - 280;
      if ( v21 == *(_QWORD *)(a1 + 232) )
        return v9;
    }
    v26 = *(_QWORD *)(a1 + 16);
    v48 = v21;
    if ( (*(_DWORD *)(*(_QWORD *)(v26 + 40) + 288LL) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v21 + 40) + 64LL) == *(_WORD *)(*(_QWORD *)(v24 + 40) + 64LL) )
    {
      v28 = DWORD1(v51);
      DWORD1(v47) = DWORD1(v51);
    }
    else
    {
      v48 = v24;
      v27 = GetMonitorWorkRectForWindow(&v52, v24, (const struct tagWND *)v26);
      v26 = *(_QWORD *)(a1 + 16);
      v21 = v48;
      v47 = *v27;
      v15 = HIDWORD(*v27);
      v28 = HIDWORD(*(_QWORD *)v27);
    }
    v29 = *(_DWORD *)(a1 + 48);
    LODWORD(v47) = *(_DWORD *)(a1 + 40);
    DWORD2(v47) = v29;
    if ( (*(_DWORD *)(*(_QWORD *)(v26 + 40) + 288LL) & 0xF) != 2 && v21 != *(_QWORD *)(a1 + 208) )
    {
      v30 = CurrentThreadDpiAwarenessContext;
      *(_QWORD *)&v53 = *(unsigned int *)(a1 + 40);
      LogicalToPhysicalDPIPoint(&v53, &v53, CurrentThreadDpiAwarenessContext, a1 + 208);
      PhysicalToLogicalDPIPoint(&v53, &v53, v30, &v48);
      LODWORD(v47) = (__int16)v53;
      LODWORD(v53) = v29;
      LogicalToPhysicalDPIPoint(&v53, &v53, v30, a1 + 208);
      PhysicalToLogicalDPIPoint(&v53, &v53, v30, &v48);
      DWORD2(v47) = (__int16)v53;
    }
    v31 = *(_DWORD *)(a1 + 108);
    if ( v15 - v28 < v31 )
      DWORD1(v47) = v15 - v31;
    v32 = *(_DWORD *)(a1 + 116);
    if ( v15 - v28 >= v32 )
      DWORD1(v47) = v15 - v32;
  }
  else
  {
    v33 = *(_QWORD *)(a1 + 232);
    while ( 1 )
    {
      v34 = *GetMonitorWorkRectForWindow(&v52, v33, *(const struct tagWND **)(a1 + 16));
      v53 = 0uLL;
      v35 = *(_QWORD *)(a1 + 16);
      v51 = v34;
      if ( (*(_DWORD *)(*(_QWORD *)(v35 + 40) + 288LL) & 0xF) == 2 || v33 == v49 )
      {
        v53 = v34;
      }
      else
      {
        v53 = *(_OWORD *)(*(_QWORD *)(v33 + 40) + 44LL);
        PhysicalToLogicalDPIRect(&v53, &v53, v13, &v49);
      }
      if ( IsDockTargetActive(a1, v33, 3) && (int)v53 <= a5 && a5 < SDWORD2(v53) )
        break;
      v37 = *(_QWORD *)(v33 + 280);
      if ( v37 == gpDispInfo + 144LL )
        v37 = *(_QWORD *)(gpDispInfo + 144LL);
      v33 = v37 - 280;
      if ( v33 == *(_QWORD *)(a1 + 232) )
        return v9;
    }
    v38 = *(_QWORD *)(a1 + 16);
    v48 = v33;
    if ( (*(_DWORD *)(*(_QWORD *)(v38 + 40) + 288LL) & 0xF) == 2
      || *(_WORD *)(*(_QWORD *)(v33 + 40) + 64LL) == *(_WORD *)(*(_QWORD *)(v36 + 40) + 64LL) )
    {
      v40 = HIDWORD(v51);
      HIDWORD(v47) = HIDWORD(v51);
    }
    else
    {
      v48 = v36;
      v39 = GetMonitorWorkRectForWindow(&v52, v36, (const struct tagWND *)v38);
      v38 = *(_QWORD *)(a1 + 16);
      v33 = v48;
      v47 = *v39;
      v40 = HIDWORD(*v39);
      v16 = HIDWORD(*(_QWORD *)v39);
    }
    v41 = *(_DWORD *)(a1 + 48);
    LODWORD(v47) = *(_DWORD *)(a1 + 40);
    DWORD2(v47) = v41;
    if ( (*(_DWORD *)(*(_QWORD *)(v38 + 40) + 288LL) & 0xF) != 2 && v33 != *(_QWORD *)(a1 + 208) )
    {
      v42 = CurrentThreadDpiAwarenessContext;
      *(_QWORD *)&v53 = *(unsigned int *)(a1 + 40);
      LogicalToPhysicalDPIPoint(&v53, &v53, CurrentThreadDpiAwarenessContext, a1 + 208);
      PhysicalToLogicalDPIPoint(&v53, &v53, v42, &v48);
      LODWORD(v47) = (__int16)v53;
      LODWORD(v53) = v41;
      LogicalToPhysicalDPIPoint(&v53, &v53, v42, a1 + 208);
      PhysicalToLogicalDPIPoint(&v53, &v53, v42, &v48);
      DWORD2(v47) = (__int16)v53;
    }
    v43 = *(_DWORD *)(a1 + 108);
    v44 = v40 - v16;
    if ( v44 < v43 )
      HIDWORD(v47) = v16 + v43;
    v45 = *(_DWORD *)(a1 + 116);
    if ( v44 >= v45 )
      HIDWORD(v47) = v16 + v45;
  }
  v9 = 1;
  if ( (*(_DWORD *)(a1 + 196) & 0x2000000) != 0 )
    *(_OWORD *)(a1 + 72) = v47;
  else
    *(_OWORD *)(a1 + 40) = v47;
  return v9;
}

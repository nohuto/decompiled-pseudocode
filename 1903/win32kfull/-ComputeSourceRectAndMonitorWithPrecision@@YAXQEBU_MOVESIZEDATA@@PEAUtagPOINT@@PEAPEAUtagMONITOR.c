/*
 * XREFs of ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01F9F48
 * Callers:
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FA7A0 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 * Callees:
 *     _MonitorFromPoint @ 0x1C0091B40 (_MonitorFromPoint.c)
 *     GetMonitorRectForWindow @ 0x1C0095B2C (GetMonitorRectForWindow.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00970A8 (GetMonitorWorkRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall ComputeSourceRectAndMonitorWithPrecision(
        const struct _MOVESIZEDATA *const a1,
        struct tagPOINT *a2,
        struct tagMONITOR **a3,
        struct tagRECT *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v9; // r8d
  unsigned int v10; // esi
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  struct tagRECT v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax
  const struct tagWND *v16; // r8
  __m128i *MonitorWorkRectForWindow; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  const struct tagWND *v20; // r8
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  __int128 v22; // [rsp+28h] [rbp-40h] BYREF
  __int128 v23; // [rsp+38h] [rbp-30h] BYREF
  struct tagRECT v24; // [rsp+48h] [rbp-20h] BYREF

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(
                                       (__int64)a1,
                                       (__int64)a2,
                                       (__int64)a3,
                                       (__int64)a4);
  v9 = *((_DWORD *)a1 + 49);
  v10 = CurrentThreadDpiAwarenessContext;
  if ( (v9 & 0x38000) == 0x30000 )
  {
    v19 = MonitorFromPoint((unsigned __int64)*a2, 2u, CurrentThreadDpiAwarenessContext);
    v20 = (const struct tagWND *)*((_QWORD *)a1 + 2);
    v21 = v19;
    v13 = (struct tagRECT)*GetMonitorWorkRectForWindow(&v22, v19, v20);
LABEL_13:
    v12 = v21;
    goto LABEL_14;
  }
  if ( *(_DWORD *)*gpDispInfo <= 1u || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF) == 2 )
  {
    if ( (v9 & 0x20) != 0 )
      v14 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 256LL));
    else
      v14 = *((_QWORD *)a1 + 26);
    v21 = v14;
    LogicalToPhysicalDPIPoint(a2, a2, v10, &v21);
    v15 = MonitorFromPoint((unsigned __int64)*a2, 2u, 0x12u);
    v16 = (const struct tagWND *)*((_QWORD *)a1 + 2);
    v21 = v15;
    if ( *(_DWORD *)*gpDispInfo <= 1u )
      MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v22, v15, v16);
    else
      MonitorWorkRectForWindow = (__m128i *)GetMonitorRectForWindow(&v23, v15, v16);
    v18 = *MonitorWorkRectForWindow;
    *(_QWORD *)&v24.left = MonitorWorkRectForWindow->m128i_i64[0];
    v24.bottom = v18.m128i_i32[3] - 1;
    v24.right = _mm_cvtsi128_si32(_mm_srli_si128(v18, 8)) - 1;
    LogicalToPhysicalDPIRect(&v24, &v24, v10, &v21);
    ++v24.right;
    ++v24.bottom;
    v13 = v24;
    goto LABEL_13;
  }
  v11 = *(_QWORD *)((char *)a1 + 308);
  *a2 = (struct tagPOINT)v11;
  v12 = MonitorFromPoint(v11, 2u, 0x12u);
  v21 = v12;
  v13 = *(struct tagRECT *)(*(_QWORD *)(v12 + 40) + 28LL);
LABEL_14:
  *a3 = (struct tagMONITOR *)v12;
  *a4 = v13;
}

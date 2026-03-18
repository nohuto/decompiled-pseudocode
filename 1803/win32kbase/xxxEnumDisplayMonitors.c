/*
 * XREFs of xxxEnumDisplayMonitors @ 0x1C0057430
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C0057380 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     GreGetClipBox @ 0x1C00197D0 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C0019B10 (GreIntersectClipRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C001F400 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ThreadUnlock1 @ 0x1C0022E20 (ThreadUnlock1.c)
 *     ReleaseCacheDC @ 0x1C002C3A0 (ReleaseCacheDC.c)
 *     GreLockVisRgn @ 0x1C00333D0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0033460 (GreUnlockVisRgn.c)
 *     GetMonitorDC @ 0x1C0033A78 (GetMonitorDC.c)
 *     LookupDC @ 0x1C0045410 (LookupDC.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00570B0 (TransformRectBetweenCoordinateSpaces.c)
 *     IntersectRect @ 0x1C0057618 (IntersectRect.c)
 *     GetMonitorRect @ 0x1C0057744 (GetMonitorRect.c)
 *     GetScreenRect @ 0x1C0057788 (GetScreenRect.c)
 *     GreGetDCPoint @ 0x1C0061630 (GreGetDCPoint.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00BBE00 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(
        HDC a1,
        __int64 a2,
        __int64 (__fastcall *a3)(struct tagMONITOR *, HDC, struct tagRECT *, __int64),
        __int64 a4,
        int a5)
{
  unsigned int v5; // ebx
  __int64 *v8; // r13
  __int64 StyleWindow; // rdi
  __int64 v10; // rdx
  int v11; // r8d
  unsigned int v12; // r12d
  struct tagMONITOR *i; // rdi
  HDC MonitorDC; // r15
  unsigned int v15; // eax
  __int64 *v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  struct tagMONITOR *v20; // rax
  __int64 v21; // [rsp+30h] [rbp-81h]
  __int64 v24; // [rsp+48h] [rbp-69h]
  struct tagTHREADINFO *v25; // [rsp+50h] [rbp-61h]
  __int128 v26; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v27[3]; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v28[16]; // [rsp+80h] [rbp-31h] BYREF
  _BYTE v29[16]; // [rsp+90h] [rbp-21h] BYREF
  __int128 v30; // [rsp+A0h] [rbp-11h] BYREF
  struct tagRECT v31; // [rsp+B0h] [rbp-1h] BYREF

  v5 = 0;
  v30 = 0uLL;
  v21 = 0LL;
  v8 = 0LL;
  v25 = gptiCurrent;
  StyleWindow = 0LL;
  v24 = 0LL;
  if ( !a1 )
  {
    v30 = *(_OWORD *)GetScreenRect(v28);
    if ( a2 && !(unsigned int)IntersectRect(&v30, &v30, a2) )
      return 1LL;
    goto LABEL_3;
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, (int)a3);
  v17 = LookupDC((__int64)a1, 1);
  v8 = v17;
  if ( !v17 )
  {
LABEL_51:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v10, v11);
    return v5;
  }
  v24 = v17[2];
  if ( (v17[8] & 0x4000) != 0 )
    StyleWindow = GetStyleWindow(v17[2], 2848LL);
  if ( (unsigned int)GreGetClipBox(a1, (int *)&v30, 0) == 1 )
    goto LABEL_42;
  if ( StyleWindow
    && (*(_WORD *)(*(_QWORD *)(StyleWindow + 40) + 42LL) & 0x3FFF) == 0x29D
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    TransformRectBetweenCoordinateSpaces(&v30, &v30, 0LL, StyleWindow);
  }
  if ( a2 && !(unsigned int)IntersectRect(&v30, &v30, a2) )
  {
LABEL_42:
    v5 = 1;
    goto LABEL_51;
  }
  if ( !StyleWindow )
  {
    GreGetDCPoint(a1);
    goto LABEL_44;
  }
  if ( (*(_WORD *)(*(_QWORD *)(StyleWindow + 40) + 42LL) & 0x3FFF) == 0x29D )
  {
LABEL_44:
    v18 = 0;
    v10 = 0LL;
    goto LABEL_45;
  }
  GreGetDCPoint(a1);
  v18 = *(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 88LL);
  LODWORD(v21) = v18;
  v19 = *(_QWORD *)(StyleWindow + 40);
  v10 = *(unsigned int *)(v19 + 92);
  HIDWORD(v21) = *(_DWORD *)(v19 + 92);
LABEL_45:
  LODWORD(v30) = v18 + v30;
  DWORD2(v30) += v18;
  HIDWORD(v30) += v10;
  DWORD1(v30) += v10;
LABEL_3:
  v12 = 1;
  for ( i = *(struct tagMONITOR **)(gpDispInfo + 104); i; i = (struct tagMONITOR *)*((_QWORD *)i + 7) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)i + 5) + 24LL) & 1) == 0 )
      continue;
    v26 = *(_OWORD *)GetMonitorRect(v29, i);
    if ( !(unsigned int)IntersectRect(&v31, &v30, &v26) )
      continue;
    if ( a1 )
    {
      v20 = AdjustDisplayMonitor(i, &v31);
      MonitorDC = (HDC)GetMonitorDC((__int64)v8, v20, v20 != i);
      if ( !MonitorDC )
        goto LABEL_51;
      v31.top -= HIDWORD(v21);
      v31.left -= v21;
      v31.bottom -= HIDWORD(v21);
      v31.right -= v21;
      GreIntersectClipRect(MonitorDC, v31.left, v31.top, v31.right, v31.bottom);
    }
    else
    {
      MonitorDC = 0LL;
    }
    v27[0] = *((_QWORD *)v25 + 51);
    *((_QWORD *)v25 + 51) = v27;
    v27[1] = i;
    _InterlockedAdd((volatile signed __int32 *)i + 2, 1u);
    if ( a1 )
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v10, v11);
    if ( a5 )
    {
      v15 = a3(i, MonitorDC, &v31, a4);
    }
    else
    {
      if ( (int)IsxxxClientMonitorEnumProcSupported() < 0 )
        goto LABEL_15;
      v15 = xxxClientMonitorEnumProc(*(_QWORD *)i, MonitorDC, &v31, a4, a3);
    }
    v12 = v15;
LABEL_15:
    if ( !ThreadUnlock1()
      || (*((_BYTE *)qword_1C01A0E28 + dword_1C01A0E30 * (unsigned int)(unsigned __int16)*(_DWORD *)i + 25) & 1) != 0 )
    {
      v12 = 0;
    }
    if ( MonitorDC )
      ReleaseCacheDC((__int64)MonitorDC, 0, v11);
    if ( !v12 )
      return 0LL;
    if ( a1 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), v10, v11);
      v8 = LookupDC((__int64)a1, 1);
      if ( !v8 || v8[2] != v24 )
        goto LABEL_51;
    }
  }
  if ( a1 )
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v10, v11);
  return v12;
}

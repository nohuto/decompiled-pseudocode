/*
 * XREFs of xxxEnumDisplayMonitors @ 0x1C0039060
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C0038FB0 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     GreGetClipBox @ 0x1C001C680 (GreGetClipBox.c)
 *     ThreadUnlock1 @ 0x1C00250E0 (ThreadUnlock1.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002581C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ReleaseCacheDC @ 0x1C0027A50 (ReleaseCacheDC.c)
 *     GreUnlockVisRgn @ 0x1C0029B20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0029D60 (GreLockVisRgn.c)
 *     GetMonitorDC @ 0x1C002A590 (GetMonitorDC.c)
 *     GetScreenRectForDpi @ 0x1C002B318 (GetScreenRectForDpi.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0038C50 (TransformRectBetweenCoordinateSpaces.c)
 *     IntersectRect @ 0x1C00393F4 (IntersectRect.c)
 *     GetMonitorRect @ 0x1C0039468 (GetMonitorRect.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0039B78 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     LookupDC @ 0x1C00452A0 (LookupDC.c)
 *     GreGetDCPoint @ 0x1C0076160 (GreGetDCPoint.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C009499C (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     GreIntersectClipRect @ 0x1C009DA90 (GreIntersectClipRect.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(
        HDC a1,
        __int64 a2,
        __int64 (__fastcall *a3)(struct tagMONITOR *, HDC, struct tagRECT *, __int64),
        __int64 a4,
        int a5)
{
  unsigned int v5; // ebx
  __int64 v8; // r13
  __int64 StyleWindow; // rdi
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // r12d
  struct tagMONITOR *i; // rdi
  HDC MonitorDC; // r15
  unsigned int v16; // eax
  __int64 v18; // rax
  int v19; // ecx
  struct tagMONITOR *v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp-81h]
  __int64 v25; // [rsp+48h] [rbp-69h]
  struct tagTHREADINFO *v26; // [rsp+50h] [rbp-61h]
  __int128 v27; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v28[3]; // [rsp+68h] [rbp-49h] BYREF
  __int128 v29; // [rsp+80h] [rbp-31h] BYREF
  _BYTE v30[16]; // [rsp+90h] [rbp-21h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-11h] BYREF
  struct tagRECT v32; // [rsp+B0h] [rbp-1h] BYREF

  v5 = 0;
  v31 = 0uLL;
  v22 = 0LL;
  v8 = 0LL;
  v26 = gptiCurrent;
  StyleWindow = 0LL;
  v25 = 0LL;
  if ( !a1 )
  {
    CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
    v31 = *GetScreenRectForDpi(&v29, CurrentThreadCompositedDpi);
    if ( a2 && !(unsigned int)IntersectRect(&v31, &v31, a2) )
      return 1LL;
    goto LABEL_3;
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, (__int64)a3);
  v18 = LookupDC(a1, 1LL);
  v8 = v18;
  if ( !v18 )
  {
LABEL_45:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v11, v12);
    return v5;
  }
  v25 = *(_QWORD *)(v18 + 16);
  if ( (*(_DWORD *)(v18 + 64) & 0x4000) != 0 )
    StyleWindow = GetStyleWindow(*(_QWORD *)(v18 + 16), 2848LL);
  if ( (unsigned int)GreGetClipBox(a1, &v31, 0) == 1 )
    goto LABEL_44;
  if ( StyleWindow
    && (*(_WORD *)(*(_QWORD *)(StyleWindow + 40) + 42LL) & 0x2FFF) == 0x29D
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    TransformRectBetweenCoordinateSpaces(&v31, &v31, 0LL, StyleWindow);
  }
  if ( a2 && !(unsigned int)IntersectRect(&v31, &v31, a2) )
  {
LABEL_44:
    v5 = 1;
    goto LABEL_45;
  }
  if ( StyleWindow )
  {
    if ( (*(_WORD *)(*(_QWORD *)(StyleWindow + 40) + 42LL) & 0x2FFF) != 0x29D )
    {
      GreGetDCPoint(a1);
      v19 = *(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 88LL);
      LODWORD(v22) = v19;
      v21 = *(_QWORD *)(StyleWindow + 40);
      v11 = *(unsigned int *)(v21 + 92);
      HIDWORD(v22) = *(_DWORD *)(v21 + 92);
      goto LABEL_37;
    }
  }
  else
  {
    GreGetDCPoint(a1);
  }
  v19 = 0;
  v11 = 0LL;
LABEL_37:
  LODWORD(v31) = v19 + v31;
  DWORD2(v31) += v19;
  HIDWORD(v31) += v11;
  DWORD1(v31) += v11;
LABEL_3:
  v13 = 1;
  for ( i = *(struct tagMONITOR **)(gpDispInfo + 104); i; i = (struct tagMONITOR *)*((_QWORD *)i + 7) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)i + 5) + 24LL) & 1) == 0 )
      continue;
    v27 = *(_OWORD *)GetMonitorRect(v30, i);
    if ( !(unsigned int)IntersectRect(&v32, &v31, &v27) )
      continue;
    if ( a1 )
    {
      v20 = AdjustDisplayMonitor(i, &v32);
      MonitorDC = (HDC)GetMonitorDC(v8, v20, v20 != i);
      if ( !MonitorDC )
        goto LABEL_45;
      v32.top -= HIDWORD(v22);
      v32.left -= v22;
      v32.bottom -= HIDWORD(v22);
      v32.right -= v22;
      GreIntersectClipRect(MonitorDC, v32.bottom);
    }
    else
    {
      MonitorDC = 0LL;
    }
    v28[0] = *((_QWORD *)v26 + 52);
    *((_QWORD *)v26 + 52) = v28;
    v28[1] = i;
    _InterlockedAdd((volatile signed __int32 *)i + 2, 1u);
    if ( a1 )
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v11, v12);
    if ( a5 )
    {
      v16 = a3(i, MonitorDC, &v32, a4);
    }
    else
    {
      if ( (int)IsxxxClientMonitorEnumProcSupported() < 0 )
        goto LABEL_15;
      v16 = xxxClientMonitorEnumProc(*(_QWORD *)i, MonitorDC, &v32, a4, a3);
    }
    v13 = v16;
LABEL_15:
    if ( !ThreadUnlock1()
      || (*((_BYTE *)qword_1C01CBA58 + dword_1C01CBA60 * (unsigned int)(unsigned __int16)*(_DWORD *)i + 25) & 1) != 0 )
    {
      v13 = 0;
    }
    if ( MonitorDC )
      ReleaseCacheDC((__int64)MonitorDC, 0, v12);
    if ( !v13 )
      return 0LL;
    if ( a1 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), v11, v12);
      v8 = LookupDC(a1, 1LL);
      if ( !v8 || *(_QWORD *)(v8 + 16) != v25 )
        goto LABEL_45;
    }
  }
  if ( a1 )
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v11, v12);
  return v13;
}

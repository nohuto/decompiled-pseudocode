/*
 * XREFs of xxxEnumDisplayMonitors @ 0x1C004C7E0
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C004C740 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     GreGetClipBox @ 0x1C0017FA0 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C0019DF0 (GreIntersectClipRect.c)
 *     ReleaseCacheDC @ 0x1C00200C0 (ReleaseCacheDC.c)
 *     ThreadUnlock1 @ 0x1C0026330 (ThreadUnlock1.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029CEC (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreUnlockVisRgn @ 0x1C002A8A0 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C002BA20 (GreLockVisRgn.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     GetMonitorDC @ 0x1C002E29C (GetMonitorDC.c)
 *     LookupDC @ 0x1C003A460 (LookupDC.c)
 *     GreGetDCPoint @ 0x1C003FB00 (GreGetDCPoint.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C004C2F0 (TransformRectBetweenCoordinateSpaces.c)
 *     IntersectRect @ 0x1C004CB8C (IntersectRect.c)
 *     GetMonitorRect @ 0x1C004CC00 (GetMonitorRect.c)
 *     GetScreenRectForDpi @ 0x1C004D444 (GetScreenRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C004D4C8 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00A75EC (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(HDC a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // ebx
  __int64 *v8; // r13
  __int64 StyleWindow; // rdi
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // r12d
  struct tagMONITOR *i; // rdi
  HDC MonitorDC; // r15
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // eax
  __int64 *v20; // rax
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // ecx
  struct tagMONITOR *v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+30h] [rbp-A1h] BYREF
  __int64 (__fastcall *v27)(struct tagMONITOR *, HDC, struct tagRECT *, __int64); // [rsp+38h] [rbp-99h]
  __int64 v28; // [rsp+40h] [rbp-91h]
  __int64 v29; // [rsp+48h] [rbp-89h]
  struct tagTHREADINFO *v30; // [rsp+50h] [rbp-81h]
  __int64 v31; // [rsp+58h] [rbp-79h] BYREF
  struct tagMONITOR *v32; // [rsp+60h] [rbp-71h]
  __int64 v33; // [rsp+68h] [rbp-69h]
  __int128 v34; // [rsp+70h] [rbp-61h] BYREF
  char v35[16]; // [rsp+80h] [rbp-51h] BYREF
  char v36[16]; // [rsp+90h] [rbp-41h] BYREF
  char v37[16]; // [rsp+A0h] [rbp-31h] BYREF
  char v38[16]; // [rsp+B0h] [rbp-21h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-11h] BYREF
  struct tagRECT v40; // [rsp+D0h] [rbp-1h] BYREF

  v28 = a4;
  v5 = 0;
  v39 = 0uLL;
  *(_QWORD *)&v40.left = 0LL;
  *(_QWORD *)&v40.right = 0LL;
  v8 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  StyleWindow = 0LL;
  v33 = 0LL;
  v30 = gptiCurrent;
  v27 = (__int64 (__fastcall *)(struct tagMONITOR *, HDC, struct tagRECT *, __int64))a3;
  v26 = 0LL;
  v29 = 0LL;
  if ( !a1 )
  {
    CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
    v39 = *(_OWORD *)GetScreenRectForDpi(v35, CurrentThreadCompositedDpi);
    if ( a2 && !(unsigned int)IntersectRect(&v39, &v39, a2) )
      return 1LL;
    goto LABEL_3;
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, a3);
  v20 = LookupDC((__int64)a1, 1);
  v8 = v20;
  if ( !v20 )
  {
LABEL_43:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v11, v12);
    return v5;
  }
  v21 = (v20[8] & 0x4000) == 0;
  v22 = v20[2];
  v29 = v22;
  if ( !v21 )
    StyleWindow = GetStyleWindow(v22, 2848LL);
  if ( (unsigned int)GreGetClipBox(a1, (int *)&v39, 0) == 1 )
    goto LABEL_42;
  if ( StyleWindow
    && (*(_WORD *)(*(_QWORD *)(StyleWindow + 40) + 42LL) & 0x3FFF) == 0x29D
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    TransformRectBetweenCoordinateSpaces(&v39, (__int64)&v39, 0LL, StyleWindow);
  }
  if ( a2 && !(unsigned int)IntersectRect(&v39, &v39, a2) )
  {
LABEL_42:
    v5 = 1;
    goto LABEL_43;
  }
  if ( StyleWindow )
  {
    if ( (*(_WORD *)(*(_QWORD *)(StyleWindow + 40) + 42LL) & 0x3FFF) != 0x29D )
    {
      GreGetDCPoint(a1, 32, (__int64)&v26);
      v23 = *(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 88LL) + v26;
      LODWORD(v26) = v23;
      v25 = *(_QWORD *)(StyleWindow + 40);
      v11 = (unsigned int)(*(_DWORD *)(v25 + 92) + HIDWORD(v26));
      HIDWORD(v26) += *(_DWORD *)(v25 + 92);
      goto LABEL_35;
    }
  }
  else
  {
    GreGetDCPoint(a1, 32, (__int64)&v26);
  }
  v23 = v26;
  v11 = HIDWORD(v26);
LABEL_35:
  LODWORD(v39) = v23 + v39;
  DWORD2(v39) += v23;
  HIDWORD(v39) += v11;
  DWORD1(v39) += v11;
LABEL_3:
  v13 = 1;
  for ( i = *(struct tagMONITOR **)(gpDispInfo + 104); i; i = (struct tagMONITOR *)*((_QWORD *)i + 7) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)i + 5) + 24LL) & 1) == 0 )
      continue;
    v34 = *(_OWORD *)GetMonitorRect(v36, i);
    if ( !(unsigned int)IntersectRect(&v40, &v39, &v34) )
      continue;
    if ( a1 )
    {
      v24 = AdjustDisplayMonitor(i, &v40);
      MonitorDC = (HDC)GetMonitorDC((__int64)v8, v24, v24 != i);
      if ( !MonitorDC )
        goto LABEL_43;
      v40.top -= HIDWORD(v26);
      v40.left -= v26;
      v40.bottom -= HIDWORD(v26);
      v40.right -= v26;
      GreIntersectClipRect(MonitorDC, v40.left, v40.top, v40.right, v40.bottom);
    }
    else
    {
      MonitorDC = 0LL;
    }
    v31 = *((_QWORD *)v30 + 51);
    *((_QWORD *)v30 + 51) = &v31;
    v32 = i;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v37,
      v11,
      v12);
    _InterlockedAdd((volatile signed __int32 *)i + 2, 1u);
    if ( a1 )
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v16, v17);
    if ( a5 )
    {
      v18 = v27(i, MonitorDC, &v40, v28);
    }
    else
    {
      if ( (int)IsxxxClientMonitorEnumProcSupported() < 0 )
        goto LABEL_15;
      v18 = xxxClientMonitorEnumProc(*(_QWORD *)i, MonitorDC, &v40, v28, v27);
    }
    v13 = v18;
LABEL_15:
    if ( !ThreadUnlock1()
      || (CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
            (__int64)v38,
            v11,
            v12),
          (*((_BYTE *)qword_1C0210758 + dword_1C0210760 * (unsigned int)(unsigned __int16)*(_DWORD *)i + 25) & 1) != 0) )
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
      v8 = LookupDC((__int64)a1, 1);
      if ( !v8 || v8[2] != v29 )
        goto LABEL_43;
    }
  }
  if ( a1 )
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v11, v12);
  return v13;
}

/*
 * XREFs of CloneWindowPosAndArrangementAsync @ 0x1C019EAFC
 * Callers:
 *     ?TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@_N@Z @ 0x1C01FD274 (-TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@_N@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     GetMonitorMaxArea @ 0x1C0070B88 (GetMonitorMaxArea.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01AF71C (LogicalToPhysicalInPlaceRect.c)
 *     LogicalToPhysicalPointForWindow @ 0x1C01AF8E8 (LogicalToPhysicalPointForWindow.c)
 *     ExtendRectByWindowMargin @ 0x1C01BF574 (ExtendRectByWindowMargin.c)
 *     GetWindowFrameBounds @ 0x1C01BF5C0 (GetWindowFrameBounds.c)
 */

__int64 __fastcall CloneWindowPosAndArrangementAsync(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // edx
  int v9; // r8d
  __int64 Prop; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF

  if ( !(unsigned int)IsTopLevelWindow(a1) )
    return 0LL;
  if ( !(unsigned int)IsTopLevelWindow(a2) )
    return 0LL;
  v6 = Win32AllocPoolZInit(120LL, 1886872405LL);
  if ( !v6 )
    return 0LL;
  v15[0] = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 256LL));
  *(_QWORD *)v6 = *(_QWORD *)a1;
  if ( a3 )
    v7 = *a3;
  else
    v7 = 0LL;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = *(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 0x20;
  *(_DWORD *)(v6 + 96) = v8;
  v9 = *(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 1;
  *(_DWORD *)(v6 + 100) = v9;
  *(_DWORD *)(v6 + 104) = *(_BYTE *)(*(_QWORD *)(a2 + 40) + 233LL) & 1;
  *(_DWORD *)(v6 + 108) = *(_BYTE *)(*(_QWORD *)(a2 + 40) + 233LL) & 2;
  *(_DWORD *)(v6 + 112) = *(_BYTE *)(*(_QWORD *)(a2 + 40) + 234LL) & 0x80;
  *(_QWORD *)(v6 + 16) = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 256LL);
  if ( !v8 && !v9 )
  {
    *(_OWORD *)(v6 + 24) = *(_OWORD *)GetWindowFrameBounds(&v16, a2);
    LogicalToPhysicalInPlaceRect(a2, v6 + 24);
    PhysicalToLogicalDPIRect(v6 + 24, v6 + 24, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), v15);
    v16 = *(_OWORD *)(v6 + 24);
    ExtendRectByWindowMargin(a1, &v16, v6 + 24);
  }
  Prop = RealGetProp(*(_QWORD *)(a2 + 120), (unsigned __int16)atomCheckpointProp, 1LL);
  if ( Prop )
  {
    *(_OWORD *)(v6 + 40) = *(_OWORD *)Prop;
    *(_OWORD *)(v6 + 56) = *(_OWORD *)(Prop + 16);
    *(_OWORD *)(v6 + 72) = *(_OWORD *)(Prop + 32);
    *(_DWORD *)(v6 + 88) = *(_DWORD *)(Prop + 48);
    *(_DWORD *)(v6 + 92) = 1;
    LogicalToPhysicalInPlaceRect(a2, v6 + 40);
    PhysicalToLogicalDPIRect(v6 + 40, v6 + 40, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), v15);
    LogicalToPhysicalInPlaceRect(a2, v6 + 56);
    PhysicalToLogicalDPIRect(v6 + 56, v6 + 56, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), v15);
    v11 = *(_DWORD *)(v6 + 88);
    if ( (v11 & 0x20) != 0 )
    {
      LogicalToPhysicalPointForWindow(*(_QWORD *)(v6 + 72), a2, v6 + 72);
      PhysicalToLogicalDPIPoint(v6 + 72, v6 + 72, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), v15);
      v11 = *(_DWORD *)(v6 + 88);
    }
    if ( (v11 & 0x40) != 0 )
    {
      v12 = *(_QWORD *)GetMonitorMaxArea(&v16, (const struct tagWND *)a2, v15[0]);
      *(_DWORD *)(v6 + 80) += v12;
      *(_DWORD *)(v6 + 84) += HIDWORD(v12);
      LogicalToPhysicalPointForWindow(*(_QWORD *)(v6 + 80), a2, v6 + 80);
      PhysicalToLogicalDPIPoint(v6 + 80, v6 + 80, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), v15);
      v13 = *(_QWORD *)GetMonitorMaxArea(&v16, (const struct tagWND *)a2, v15[0]);
      *(_DWORD *)(v6 + 80) -= v13;
      *(_DWORD *)(v6 + 84) -= HIDWORD(v13);
    }
  }
  return PostEventMessageEx(
           *(struct tagTHREADINFO **)(a1 + 16),
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL),
           0x1Bu,
           a1,
           0,
           0LL,
           v6,
           0LL);
}

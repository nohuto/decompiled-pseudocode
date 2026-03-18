/*
 * XREFs of ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0072A9C
 * Callers:
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C000D590 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     GetNewMonitor @ 0x1C002D640 (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxCheckFullScreen @ 0x1C0035620 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0036384 (xxxInitSendValidateMinMaxInfoEx.c)
 *     CalcWindowFullScreen @ 0x1C007290C (CalcWindowFullScreen.c)
 *     IsSmallerThanScreen @ 0x1C00C10E4 (IsSmallerThanScreen.c)
 *     SelectWindowRgn @ 0x1C00C4C7C (SelectWindowRgn.c)
 *     SkipWindowOnMonitor @ 0x1C00FB434 (SkipWindowOnMonitor.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C019E3E8 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01C6954 (xxxEndSetWindowArrangement.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C01E4AE0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     NtUserSetWindowShowState @ 0x1C01F6130 (NtUserSetWindowShowState.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall _MonitorFromWindowInternal(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // edi
  _QWORD *DispInfo; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 v13; // rax
  struct tagRECT *v14; // rcx
  struct tagRECT v15; // xmm0
  struct tagRECT *Prop; // rax
  struct tagRECT v17; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  v5 = a2;
  DispInfo = (_QWORD *)GetDispInfo(a1, a2, a3, a4);
  v10 = 1LL;
  v11 = (_DWORD *)*DispInfo;
  if ( *(_DWORD *)*DispInfo == 1 && v5 )
    return *(struct tagMONITOR **)(GetDispInfo(v9, v8, v10, v11) + 96);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      goto LABEL_6;
    Prop = (struct tagRECT *)RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomCheckpointProp, 1LL);
    v14 = Prop;
    if ( Prop )
    {
      if ( !v4 )
        return (struct tagMONITOR *)MonitorFromRect(v14);
      v15 = *Prop;
      v13 = *((_QWORD *)a1 + 5);
      goto LABEL_8;
    }
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 40LL);
    if ( (*(_WORD *)(v9 + 42) & 0x3FFF) != 0x29D )
    {
LABEL_6:
      v13 = *((_QWORD *)a1 + 5);
      v14 = (struct tagRECT *)(v13 + 88);
      if ( !v4 )
        return (struct tagMONITOR *)MonitorFromRect(v14);
      v15 = *v14;
LABEL_8:
      v17 = v15;
      LogicalToPhysicalDPIRect(&v17, &v17, *(unsigned int *)(v13 + 288), 0LL);
      v14 = &v17;
      return (struct tagMONITOR *)MonitorFromRect(v14);
    }
    return *(struct tagMONITOR **)(GetDispInfo(v9, v8, v10, v11) + 96);
  }
  if ( (unsigned int)(v5 - 1) <= 1 )
    return *(struct tagMONITOR **)(GetDispInfo(v9, v8, v10, v11) + 96);
  return 0LL;
}

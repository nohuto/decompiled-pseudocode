/*
 * XREFs of ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007A7CC
 * Callers:
 *     SkipWindowOnMonitor @ 0x1C000B5C4 (SkipWindowOnMonitor.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C001D674 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     GetNewMonitor @ 0x1C004259C (GetNewMonitor.c)
 *     CalcWindowFullScreen @ 0x1C0079A8C (CalcWindowFullScreen.c)
 *     IsSmallerThanScreen @ 0x1C00A5C9C (IsSmallerThanScreen.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00B3BD8 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     SelectWindowRgn @ 0x1C010A774 (SelectWindowRgn.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01BF910 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020A9E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     NtUserSetWindowShowState @ 0x1C021DBC0 (NtUserSetWindowShowState.c)
 * Callees:
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall _MonitorFromWindowInternal(struct tagWND *a1, int a2, int a3)
{
  __int64 v7; // rax
  struct tagRECT *v8; // rcx
  struct tagRECT v9; // xmm0
  struct tagRECT *Prop; // rax
  struct tagRECT v11; // [rsp+20h] [rbp-28h] BYREF

  if ( **(_DWORD **)GetDispInfo() == 1 && a2 )
    return *(struct tagMONITOR **)(GetDispInfo() + 96);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      goto LABEL_6;
    Prop = (struct tagRECT *)GetProp((__int64)a1, (unsigned __int16)atomCheckpointProp, 1LL);
    v8 = Prop;
    if ( Prop )
    {
      if ( !a3 )
        return (struct tagMONITOR *)MonitorFromRect(v8);
      v9 = *Prop;
      v7 = *((_QWORD *)a1 + 5);
      goto LABEL_8;
    }
    if ( (*(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 40LL) + 42LL) & 0x2FFF) != 0x29D )
    {
LABEL_6:
      v7 = *((_QWORD *)a1 + 5);
      v8 = (struct tagRECT *)(v7 + 88);
      if ( !a3 )
        return (struct tagMONITOR *)MonitorFromRect(v8);
      v9 = *v8;
LABEL_8:
      v11 = v9;
      ((void (__fastcall *)(struct tagRECT *, struct tagRECT *, _QWORD, _QWORD))LogicalToPhysicalDPIRect)(
        &v11,
        &v11,
        *(unsigned int *)(v7 + 288),
        0LL);
      v8 = &v11;
      return (struct tagMONITOR *)MonitorFromRect(v8);
    }
    return *(struct tagMONITOR **)(GetDispInfo() + 96);
  }
  if ( (unsigned int)(a2 - 1) <= 1 )
    return *(struct tagMONITOR **)(GetDispInfo() + 96);
  return 0LL;
}

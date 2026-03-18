/*
 * XREFs of ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00146C4
 * Callers:
 *     CalcWindowFullScreen @ 0x1C0032BBC (CalcWindowFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0034030 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     GetNewMonitor @ 0x1C006B820 (GetNewMonitor.c)
 *     SelectWindowRgn @ 0x1C00EE40C (SelectWindowRgn.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C00F1618 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 *     IsSmallerThanScreen @ 0x1C010912C (IsSmallerThanScreen.c)
 *     SkipWindowOnMonitor @ 0x1C013A570 (SkipWindowOnMonitor.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01D34AC (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD0D8 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0221FC4 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     NtUserSetWindowShowState @ 0x1C02357E0 (NtUserSetWindowShowState.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
    Prop = (struct tagRECT *)GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
    v8 = Prop;
    if ( Prop )
    {
      if ( !a3 )
        return (struct tagMONITOR *)MonitorFromRect(v8);
      v9 = *Prop;
      v7 = *((_QWORD *)a1 + 5);
      goto LABEL_8;
    }
    if ( (*(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 42LL) & 0x3FFF) != 0x29D )
    {
LABEL_6:
      v7 = *((_QWORD *)a1 + 5);
      v8 = (struct tagRECT *)(v7 + 88);
      if ( !a3 )
        return (struct tagMONITOR *)MonitorFromRect(v8);
      v9 = *v8;
LABEL_8:
      v11 = v9;
      LogicalToPhysicalDPIRect(&v11, &v11, *(unsigned int *)(v7 + 288), 0LL);
      v8 = &v11;
      return (struct tagMONITOR *)MonitorFromRect(v8);
    }
    return *(struct tagMONITOR **)(GetDispInfo() + 96);
  }
  if ( (unsigned int)(a2 - 1) <= 1 )
    return *(struct tagMONITOR **)(GetDispInfo() + 96);
  return 0LL;
}

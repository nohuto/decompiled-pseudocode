/*
 * XREFs of xxxDefWindowProc @ 0x1C00B3E60
 * Callers:
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C000BF58 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxGetControlColor @ 0x1C008DB14 (xxxGetControlColor.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00A0070 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B387C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxEventWndProc @ 0x1C00B4BC0 (xxxEventWndProc.c)
 *     xxxTooltipWndProc @ 0x1C012F5F0 (xxxTooltipWndProc.c)
 *     xxxGetWindowText @ 0x1C0157F9C (xxxGetWindowText.c)
 *     xxxSwitchWndProc @ 0x1C01F6320 (xxxSwitchWndProc.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C0242BA0 (xxxSBWndProc.c)
 * Callees:
 *     SfnDWORD @ 0x1C0024FB0 (SfnDWORD.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxLoadUserApiHook @ 0x1C00B4030 (xxxLoadUserApiHook.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDefWindowProc(struct tagWND *a1, unsigned int a2, HWND a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rax

  if ( a2 == 397 || a2 == 325 )
    return 0LL;
  v7 = 0LL;
  if ( a2 != 60 )
    v7 = a4;
  if ( gihmodUserApiHook < 0 )
    return xxxRealDefWindowProc(a1, a2, a3, v7);
  v8 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v8 + 19) < 0 && (a2 != 130 || (*(_BYTE *)(v8 + 18) & 4) == 0 || *(__int16 *)(v8 + 42) < 0) )
    return xxxRealDefWindowProc(a1, a2, a3, v7);
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 || !(unsigned int)xxxLoadUserApiHook() )
    return xxxRealDefWindowProc(a1, a2, a3, v7);
  v9 = a2 & 0x1FFFF;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 8) != 0 )
  {
    if ( v9 >= 0x400 )
    {
      v10 = *(_QWORD *)(gpsi + 552LL);
      return SfnDWORD(a1, a2, (__int64)a3, v7, 0LL, v10);
    }
    return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, HWND, unsigned __int64, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
             a1,
             a2,
             a3,
             v7,
             0LL,
             *(_QWORD *)(gpsi + 552LL),
             1,
             0LL);
  }
  else
  {
    if ( v9 >= 0x400 )
    {
      v10 = *(_QWORD *)(gpsi + 744LL);
      return SfnDWORD(a1, a2, (__int64)a3, v7, 0LL, v10);
    }
    return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, HWND, unsigned __int64, _QWORD, _QWORD, _DWORD, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
             a1,
             a2,
             a3,
             v7,
             0LL,
             *(_QWORD *)(gpsi + 744LL),
             0,
             0LL);
  }
}

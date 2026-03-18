/*
 * XREFs of xxxDefWindowProc @ 0x1C0054BB0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0040E40 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00546DC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxEventWndProc @ 0x1C0055930 (xxxEventWndProc.c)
 *     xxxTooltipWndProc @ 0x1C00E96D0 (xxxTooltipWndProc.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C00EB0B8 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxGetControlColor @ 0x1C012C064 (xxxGetControlColor.c)
 *     xxxGetWindowText @ 0x1C0158D5C (xxxGetWindowText.c)
 *     xxxValidateClassAndSize @ 0x1C0165268 (xxxValidateClassAndSize.c)
 *     xxxSwitchWndProc @ 0x1C01F61A0 (xxxSwitchWndProc.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     SfnDWORD @ 0x1C002B420 (SfnDWORD.c)
 *     xxxLoadUserApiHook @ 0x1C0054D80 (xxxLoadUserApiHook.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDefWindowProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, HICON a4)
{
  unsigned int v4; // ebx
  HICON v7; // rdi
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rax

  v4 = a2;
  if ( (_DWORD)a2 == 397 || (_DWORD)a2 == 325 )
    return 0LL;
  v7 = 0LL;
  if ( (_DWORD)a2 != 60 )
    v7 = a4;
  if ( gihmodUserApiHook < 0 )
    return xxxRealDefWindowProc(a1, v4, a3, v7);
  v8 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v8 + 19) < 0 && ((_DWORD)a2 != 130 || (*(_BYTE *)(v8 + 18) & 4) == 0 || *(__int16 *)(v8 + 42) < 0) )
    return xxxRealDefWindowProc(a1, v4, a3, v7);
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 || !(unsigned int)xxxLoadUserApiHook(gptiCurrent, a2, a3, a4) )
    return xxxRealDefWindowProc(a1, v4, a3, v7);
  v9 = v4 & 0x1FFFF;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 8) != 0 )
  {
    if ( v9 >= 0x400 )
    {
      v10 = *(_QWORD *)(gpsi + 552LL);
      return SfnDWORD(a1, v4, a3, (__int64)v7, 0LL, v10);
    }
    return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, HICON, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v4]])(
             a1,
             v4,
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
      return SfnDWORD(a1, v4, a3, (__int64)v7, 0LL, v10);
    }
    return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, HICON, _QWORD, _QWORD, _DWORD, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v4]])(
             a1,
             v4,
             a3,
             v7,
             0LL,
             *(_QWORD *)(gpsi + 744LL),
             0,
             0LL);
  }
}

/*
 * XREFs of xxxDefWindowProc @ 0x1C006CD90
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00431F0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxEventWndProc @ 0x1C006C550 (xxxEventWndProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006C68C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C01044C0 (xxxTooltipWndProc.c)
 *     xxxGetControlColor @ 0x1C01293EC (xxxGetControlColor.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012F984 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxGetWindowText @ 0x1C0133370 (xxxGetWindowText.c)
 *     xxxSwitchWndProc @ 0x1C01BD650 (xxxSwitchWndProc.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxLoadUserApiHook @ 0x1C003B220 (xxxLoadUserApiHook.c)
 *     SfnDWORD @ 0x1C0043660 (SfnDWORD.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDefWindowProc(struct tagWND *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v7; // rdi
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
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 || !(unsigned int)xxxLoadUserApiHook(gptiCurrent, a2) )
    return xxxRealDefWindowProc(a1, v4, a3, v7);
  v9 = v4 & 0x1FFFF;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 8) != 0 )
  {
    if ( v9 >= 0x400 )
    {
      v10 = *(_QWORD *)(gpsi + 552LL);
      return SfnDWORD((volatile signed __int32 *)a1, v4, a3, v7, 0LL, v10);
    }
    return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, unsigned __int64, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v4]])(
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
      return SfnDWORD((volatile signed __int32 *)a1, v4, a3, v7, 0LL, v10);
    }
    return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, unsigned __int64, _QWORD, _QWORD, _DWORD, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v4]])(
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

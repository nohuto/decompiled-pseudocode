/*
 * XREFs of xxxDefWindowProc @ 0x1C00B4F70
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C002D410 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxGetControlColor @ 0x1C007B6E0 (xxxGetControlColor.c)
 *     xxxEventWndProc @ 0x1C00B49A0 (xxxEventWndProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B4ADC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C00B84F0 (xxxTooltipWndProc.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0106C88 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxGetWindowText @ 0x1C0151F7C (xxxGetWindowText.c)
 *     xxxValidateClassAndSize @ 0x1C015D924 (xxxValidateClassAndSize.c)
 *     xxxSwitchWndProc @ 0x1C01E02C0 (xxxSwitchWndProc.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     SfnDWORD @ 0x1C002D8C0 (SfnDWORD.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxLoadUserApiHook @ 0x1C00B5140 (xxxLoadUserApiHook.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDefWindowProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
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
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 || !(unsigned int)xxxLoadUserApiHook() )
    return xxxRealDefWindowProc(a1, a2, a3, v7);
  v9 = a2 & 0x1FFFF;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 8) != 0 )
  {
    if ( v9 >= 0x400 )
    {
      v10 = *(_QWORD *)(gpsi + 552LL);
      return SfnDWORD((volatile signed __int32 *)a1, a2, a3, v7, 0LL, v10);
    }
    return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, unsigned __int64, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
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
      return SfnDWORD((volatile signed __int32 *)a1, a2, a3, v7, 0LL, v10);
    }
    return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, unsigned __int64, _QWORD, _QWORD, _DWORD, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
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

/*
 * XREFs of UserIsWindowGdiScaled @ 0x1C0022280
 * Callers:
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0026A58 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0026B90 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00487A0 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicModeChange @ 0x1C0048884 (bDynamicModeChange.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00C1A54 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DxgkEngGetWindowGdiDpiScalingFactor@@YAGQEAUHWND__@@@Z @ 0x1C00C8FB0 (-DxgkEngGetWindowGdiDpiScalingFactor@@YAGQEAUHWND__@@@Z.c)
 * Callees:
 *     CheckAccessForIntegrityLevelEx @ 0x1C001E8B0 (CheckAccessForIntegrityLevelEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C0034B74 (-IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0067454 (EtwTraceUIPIHandleValidationError.c)
 */

__int64 __fastcall UserIsWindowGdiScaled(void *a1, _WORD *a2)
{
  char *v4; // rsi
  _QWORD *v5; // rbx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 result; // rax
  __int16 v12; // cx
  __int64 v13; // rcx
  struct tagPROCESSINFO *v14; // rdx

  if ( !W32GetThreadWin32Thread(KeGetCurrentThread()) )
    return 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1)
    || (v4 = (char *)qword_1C01A0E28 + (unsigned int)(unsigned __int16)a1 * dword_1C01A0E30,
        v5 = (char *)gpKernelHandleTable + 24 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C01A0E30) >> 5),
        WORD1(a1) != *((_WORD *)v4 + 13))
    && WORD1(a1) != 0xFFFF
    && (WORD1(a1) || !PsGetCurrentProcessWow64Process(0xFFFFLL))
    || v4[24] != 1
    || (ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread()),
        v7 = (_QWORD *)*v5,
        v8 = ThreadWin32Thread,
        !v7)
    || (v9 = v7[2], (v4[25] & 1) != 0)
    || v9 != ThreadWin32Thread
    && v7[3] != *(_QWORD *)(ThreadWin32Thread + 448)
    && (*(_DWORD *)(ThreadWin32Thread + 480) & 4) == 0
    && ((int)IsGetDesktopViewSupported() < 0 || !GetDesktopView(*(_QWORD *)(v8 + 416), v7[3])) )
  {
    v13 = 1400LL;
LABEL_22:
    UserSetLastError(v13);
    return 0LL;
  }
  if ( gbValidateHandleForIL )
  {
    if ( v9 )
    {
      if ( !CheckAccessForIntegrityLevelEx(
              *(_QWORD *)(*(_QWORD *)(v8 + 416) + 872LL),
              *(_QWORD *)(*(_QWORD *)(v9 + 416) + 872LL),
              0) )
      {
        v14 = *(struct tagPROCESSINFO **)(v9 + 416);
        if ( *(PVOID *)v14 != gpepCSRSS )
        {
          EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v8 + 416), v14);
          v13 = 5LL;
          goto LABEL_22;
        }
      }
    }
  }
  if ( (*(_DWORD *)(v8 + 480) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 416) + 760LL) + 24LL) & 1) != 0
    && !(unsigned int)IsHandleEntrySecure(a1, (struct _HANDLEENTRY *)v4) )
  {
    UserSetLastError(1400LL);
    v7 = 0LL;
  }
  if ( !v7 )
    return 0LL;
  if ( !W32GetThreadWin32Thread(KeGetCurrentThread()) )
    return 0LL;
  if ( !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) )
    return 0LL;
  if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 52LL) & 1) == 0 )
    return 0LL;
  v10 = v7[5];
  if ( (*(_DWORD *)(v10 + 288) & 0x4000000F) != 0x40000000 )
    return 0LL;
  v12 = *(_WORD *)(v10 + 284);
  result = 1LL;
  *a2 = v12;
  return result;
}

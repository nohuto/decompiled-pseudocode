/*
 * XREFs of ValidateHwndEx @ 0x1C0026110
 * Callers:
 *     ValidateHwnd @ 0x1C00260F0 (ValidateHwnd.c)
 *     NtUserGetDC @ 0x1C0029560 (NtUserGetDC.c)
 *     UserGetDesktopDC @ 0x1C003E02C (UserGetDesktopDC.c)
 *     UserIsWindowGdiScaled @ 0x1C00818D0 (UserIsWindowGdiScaled.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C015D7A0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C015DB5C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C015DC74 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C016C6C0 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0072394 (EtwTraceUIPIHandleValidationError.c)
 *     IsHandleEntrySecure @ 0x1C008AB40 (IsHandleEntrySecure.c)
 */

__int64 __fastcall ValidateHwndEx(__int64 a1, int a2, int a3)
{
  char *v6; // rdi
  __int64 *v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // r8d
  int v17; // r9d
  int v18; // r10d
  struct tagPROCESSINFO *v19; // rdx

  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1)
    && ((v6 = (char *)qword_1C0213758 + (unsigned int)(unsigned __int16)a1 * dword_1C0213760,
         v7 = (__int64 *)((char *)gpKernelHandleTable
                        + 24 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C0213760) >> 5)),
         WORD1(a1) == *((_WORD *)v6 + 13))
     || WORD1(a1) == 0xFFFF
     || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
    && v6[24] == 1
    && (ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread()), v9 = *v7, v10 = ThreadWin32Thread, v9)
    && (v11 = *(_QWORD *)(v9 + 16), (v6[25] & 1) == 0)
    && (!a2
     || v11 == ThreadWin32Thread
     || *(_QWORD *)(v9 + 24) == *(_QWORD *)(ThreadWin32Thread + 448)
     || (*(_DWORD *)(ThreadWin32Thread + 480) & 4) != 0
     || (int)IsGetDesktopViewSupported() >= 0 && GetDesktopView(*(_QWORD *)(v10 + 416), *(_QWORD *)(v9 + 24))) )
  {
    if ( a3 && *(_DWORD *)(*(_QWORD *)(v11 + 416) + 880LL) != 1 )
      a3 = 0;
    if ( !gbValidateHandleForIL
      || !v11
      || (v13 = *(_QWORD *)(v11 + 416), v14 = *(_QWORD *)(v10 + 416), !UIPrivelegeIsolation::fEnforce)
      || (v15 = *(_DWORD *)(v14 + 872), v16 = *(_DWORD *)(v13 + 872), v15 > v16)
      || v15 == v16
      && ((v17 = *(_DWORD *)(v14 + 876), v18 = *(_DWORD *)(v13 + 876), v17 == v18) || v17 == -1 || v18 == -1)
      || a3
      && v15 == v16
      && (unsigned __int8)SeIsParentOfChildAppContainer(
                            gSessionId,
                            *(unsigned int *)(v14 + 876),
                            *(unsigned int *)(v13 + 876))
      || (v19 = *(struct tagPROCESSINFO **)(v11 + 416), *(PVOID *)v19 == gpepCSRSS) )
    {
      if ( (*(_DWORD *)(v10 + 480) & 0x20000000) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 416) + 760LL) + 24LL) & 1) != 0
        && !(unsigned int)IsHandleEntrySecure(a1, v6) )
      {
        UserSetLastError(1400LL);
        return 0LL;
      }
      return v9;
    }
    else
    {
      EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v10 + 416), v19);
      UserSetLastError(5LL);
      return 0LL;
    }
  }
  else
  {
    UserSetLastError(1400LL);
    return 0LL;
  }
}

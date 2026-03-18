/*
 * XREFs of ValidateHwndEx @ 0x1C0022ED0
 * Callers:
 *     ValidateHwnd @ 0x1C0022EB0 (ValidateHwnd.c)
 *     NtUserGetDC @ 0x1C0030850 (NtUserGetDC.c)
 *     UserGetDesktopDC @ 0x1C004567C (UserGetDesktopDC.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C01099E4 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0109B34 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0116354 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C0034B74 (-IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0067454 (EtwTraceUIPIHandleValidationError.c)
 */

__int64 __fastcall ValidateHwndEx(void *a1, int a2, int a3)
{
  struct _HANDLEENTRY *v6; // rdi
  __int64 *v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  struct tagPROCESSINFO *v15; // rdx

  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1)
    && ((v6 = (struct _HANDLEENTRY *)((char *)qword_1C01A0E28 + (unsigned int)(unsigned __int16)a1 * dword_1C01A0E30),
         v7 = (__int64 *)((char *)gpKernelHandleTable
                        + 24 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C01A0E30) >> 5)),
         WORD1(a1) == *((_WORD *)v6 + 13))
     || WORD1(a1) == 0xFFFF
     || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL))
    && *((_BYTE *)v6 + 24) == 1
    && (ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread()), v9 = *v7, v10 = ThreadWin32Thread, v9)
    && (v11 = *(_QWORD *)(v9 + 16), (*((_BYTE *)v6 + 25) & 1) == 0)
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
      || (v13 = *(_QWORD *)(*(_QWORD *)(v11 + 416) + 872LL),
          v14 = *(_QWORD *)(*(_QWORD *)(v10 + 416) + 872LL),
          !gbEnforceUIPI)
      || (unsigned int)v14 > (unsigned int)v13
      || (_DWORD)v14 == (_DWORD)v13 && (HIDWORD(v14) == HIDWORD(v13) || HIDWORD(v14) == -1 || HIDWORD(v13) == -1)
      || a3
      && (_DWORD)v14 == (_DWORD)v13
      && (unsigned __int8)SeIsParentOfChildAppContainer(gSessionId, HIDWORD(v14), HIDWORD(v13))
      || (v15 = *(struct tagPROCESSINFO **)(v11 + 416), *(PVOID *)v15 == gpepCSRSS) )
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
      EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v10 + 416), v15);
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

/*
 * XREFs of UserGetDesktopDC @ 0x1C005E630
 * Callers:
 *     NtGdiCreateMetafileDC @ 0x1C005E130 (NtGdiCreateMetafileDC.c)
 *     NtGdiOpenDCW @ 0x1C005E1A0 (NtGdiOpenDCW.c)
 * Callees:
 *     GreCreateDisplayDC @ 0x1C001D950 (GreCreateDisplayDC.c)
 *     ValidateHwndEx @ 0x1C0024E60 (ValidateHwndEx.c)
 *     _GetDCEx @ 0x1C0026700 (_GetDCEx.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0029F00 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall UserGetDesktopDC(unsigned int a1, int a2, int a3)
{
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rax
  __int64 DisplayDC; // rax
  __int64 v11; // rbx
  _QWORD *v13; // rcx
  int v14; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14);
  v6 = *(_QWORD *)(gpDispInfo + 40);
  if ( a3
    && a1 != 2
    && (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0
    && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 768LL) + 24LL) & 1 )
  {
    v13 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 57) + 8LL) + 24LL);
    if ( v13 )
      v13 = (_QWORD *)*v13;
    if ( !ValidateHwndEx(v13, 1, 0) )
      goto LABEL_16;
  }
  CurrentThread = KeGetCurrentThread();
  if ( a1 || PsIsSystemThread(CurrentThread) || PsGetThreadProcess(CurrentThread) == gpepCSRSS )
  {
    DisplayDC = (__int64)GreCreateDisplayDC(v6, a1, a2 != 0);
    goto LABEL_12;
  }
  v9 = *((_QWORD *)gptiCurrent + 57);
  if ( v9 )
  {
    DisplayDC = GetDCEx(*(_QWORD **)(*(_QWORD *)(v9 + 8) + 24LL), 0LL, 2155872259LL);
LABEL_12:
    v11 = DisplayDC;
    goto LABEL_13;
  }
LABEL_16:
  v11 = 0LL;
LABEL_13:
  if ( !v14 )
    UserSessionSwitchLeaveCrit();
  return v11;
}

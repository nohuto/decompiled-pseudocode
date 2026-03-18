/*
 * XREFs of UserGetDesktopDC @ 0x1C003E02C
 * Callers:
 *     NtGdiOpenDCW @ 0x1C003B7F0 (NtGdiOpenDCW.c)
 *     NtGdiCreateMetafileDC @ 0x1C0099500 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     GreCreateDisplayDC @ 0x1C0017D80 (GreCreateDisplayDC.c)
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 *     ValidateHwndEx @ 0x1C0026110 (ValidateHwndEx.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C002C3B8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall UserGetDesktopDC(unsigned int a1, int a2, int a3)
{
  int v6; // r9d
  __int64 v7; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 DisplayDC; // rax
  __int64 v14; // rbx
  _QWORD *v16; // rcx
  int v17; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v17);
  v7 = *(_QWORD *)(gpDispInfo + 40);
  if ( a3
    && a1 != 2
    && (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0
    && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 760LL) + 24LL) & 1 )
  {
    v16 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 56) + 8LL) + 24LL);
    if ( v16 )
      v16 = (_QWORD *)*v16;
    if ( !ValidateHwndEx((__int64)v16, 1, 0) )
      goto LABEL_16;
  }
  CurrentThread = KeGetCurrentThread();
  if ( a1 || PsIsSystemThread(CurrentThread) || PsGetThreadProcess(CurrentThread) == gpepCSRSS )
  {
    DisplayDC = GreCreateDisplayDC(v7, a1, a2 != 0, v6);
    goto LABEL_11;
  }
  v12 = *((_QWORD *)gptiCurrent + 56);
  if ( v12 )
  {
    DisplayDC = GetDCEx(*(_QWORD **)(*(_QWORD *)(v12 + 8) + 24LL), 0LL, 2155872259LL);
LABEL_11:
    v14 = DisplayDC;
    goto LABEL_12;
  }
LABEL_16:
  v14 = 0LL;
LABEL_12:
  if ( !v17 )
    UserSessionSwitchLeaveCrit(v11, v10);
  return v14;
}

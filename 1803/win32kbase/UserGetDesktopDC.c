/*
 * XREFs of UserGetDesktopDC @ 0x1C004567C
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0043B40 (NtGdiOpenDCW.c)
 *     NtGdiCreateMetafileDC @ 0x1C0068A50 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0022ED0 (ValidateHwndEx.c)
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     GreCreateDisplayDC @ 0x1C002D5C0 (GreCreateDisplayDC.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0033028 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall UserGetDesktopDC(unsigned int a1, int a2, int a3)
{
  int v6; // r9d
  __int64 v7; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 DisplayDC; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  int v16; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
  v7 = *(_QWORD *)(gpDispInfo + 40);
  if ( a3
    && a1 != 2
    && (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0
    && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 760LL) + 24LL) & 1 )
  {
    v15 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 56) + 8LL) + 24LL);
    if ( v15 )
      v15 = (_QWORD *)*v15;
    if ( !ValidateHwndEx(v15, 1, 0) )
      goto LABEL_17;
  }
  CurrentThread = KeGetCurrentThread();
  if ( a1 || PsIsSystemThread(CurrentThread) || PsGetThreadProcess(CurrentThread) == gpepCSRSS )
  {
    DisplayDC = (__int64)GreCreateDisplayDC(v7, a1, a2, v6);
LABEL_5:
    v11 = DisplayDC;
    goto LABEL_6;
  }
  v14 = *((_QWORD *)gptiCurrent + 56);
  if ( v14 )
  {
    DisplayDC = GetDCEx(*(_QWORD **)(*(_QWORD *)(v14 + 8) + 24LL), 0LL, 0x80800003);
    goto LABEL_5;
  }
LABEL_17:
  v11 = 0LL;
LABEL_6:
  if ( !v16 )
    UserSessionSwitchLeaveCrit(v10);
  return v11;
}

/*
 * XREFs of ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0001_0001@@@Z @ 0x1802B9300
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleFrameWindowChange@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@@Z @ 0x18028B778 (-HandleFrameWindowChange@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ??$FrameWindowChanged@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1802B3B6C (--$FrameWindowChanged@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAU.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1802B6B00 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x1802B7B4C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 */

__int64 __fastcall ViewWrapperBase::SetFrameWindow(__int64 a1, HWND a2, char a3)
{
  RTL_SRWLOCK *v6; // rsi
  char v7; // cl
  DWORD WindowThreadProcessId; // eax
  __int16 v9; // ax
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v14; // [rsp+50h] [rbp+8h] BYREF
  HWND v15; // [rsp+58h] [rbp+10h] BYREF
  DWORD dwProcessId; // [rsp+60h] [rbp+18h] BYREF

  v15 = a2;
  v6 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 120) + 280LL);
  AcquireSRWLockExclusive(v6);
  if ( *(HWND *)(a1 + 232) != a2 && ViewManagerInteropTraceLogging::IsEnabled(v7) )
  {
    dwProcessId = 0;
    if ( a2 )
      WindowThreadProcessId = GetWindowThreadProcessId(a2, &dwProcessId);
    else
      WindowThreadProcessId = 0;
    v14 = WindowThreadProcessId;
    ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int &,HWND__ * &,unsigned long const &,unsigned long &>(
      (int *)(a1 + 100),
      (__int64 *)&v15,
      (__int64)&v14,
      (__int64)&dwProcessId);
  }
  *(_QWORD *)(a1 + 232) = a2;
  if ( (a3 & 1) != 0 || !a2 )
    v9 = 0;
  else
    v9 = 128;
  *(_WORD *)(a1 + 308) &= ~0x80u;
  *(_WORD *)(a1 + 308) |= v9;
  ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 48));
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  v10 = ViewEventDispatcher::HandleFrameWindowChange(
          *(RTL_SRWLOCK **)(a1 + 120),
          (struct IViewWrapperInternal *)((a1 - 40) & -(__int64)(a1 != 48)));
  v11 = v10;
  if ( v10 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x878,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v10);
  return v11;
}

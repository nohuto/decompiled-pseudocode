/*
 * XREFs of ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0001_0001@@@Z @ 0x180243D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18021EDB8 (-_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ??$FrameWindowChanged@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x18023E498 (--$FrameWindowChanged@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAU.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1802414C4 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x1802425AC (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 */

__int64 __fastcall ViewWrapperBase::SetFrameWindow(__int64 a1, HWND a2, char a3)
{
  RTL_SRWLOCK *v6; // rsi
  char v7; // cl
  DWORD WindowThreadProcessId; // eax
  __int16 v9; // ax
  __int64 v10; // rsi
  __int64 v11; // rbx
  struct IViewWrapperInternal *v12; // rbp
  DWORD v14; // [rsp+50h] [rbp+8h] BYREF
  HWND v15; // [rsp+58h] [rbp+10h] BYREF
  DWORD dwProcessId; // [rsp+60h] [rbp+18h] BYREF

  v15 = a2;
  v6 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 120) + 296LL);
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
  v10 = *(_QWORD *)(a1 + 120);
  v11 = (a1 - 40) & -(__int64)(a1 != 48);
  AcquireSRWLockExclusive((PSRWLOCK)(v10 + 296));
  v12 = *(struct IViewWrapperInternal **)(v10 + 312);
  if ( v12 == (struct IViewWrapperInternal *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 736LL))(v11) )
    ViewEventDispatcher::_HandleForegroundWindow((struct IViewWrapperInternal **)v10, v12);
  if ( v10 != -296 )
    ReleaseSRWLockExclusive((PSRWLOCK)(v10 + 296));
  return 0LL;
}

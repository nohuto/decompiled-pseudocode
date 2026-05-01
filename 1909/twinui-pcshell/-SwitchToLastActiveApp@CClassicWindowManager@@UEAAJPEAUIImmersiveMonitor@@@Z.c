/*
 * XREFs of ?SwitchToLastActiveApp@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180149B50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x180079E74 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindowManager::SwitchToLastActiveApp(
        CClassicWindowManager *this,
        struct IImmersiveMonitor *a2)
{
  int v4; // ebx
  __int64 v5; // rdi
  HWND v6; // rdx
  CApplicationManagerUtility *LastActiveVisiblePopupOrSelf; // rax
  HWND hWnd; // [rsp+30h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = (*(__int64 (__fastcall **)(char *, struct IImmersiveMonitor *, HWND *))(*((_QWORD *)this - 1) + 104LL))(
         (char *)this - 8,
         a2,
         &hWnd);
  v5 = *((_QWORD *)this + 15);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 >= 0 )
  {
    if ( IsIconic(hWnd) || v5 == 1 )
    {
      return (unsigned int)-2147019873;
    }
    else
    {
      LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(
                                       (CApplicationManagerUtility *)hWnd,
                                       v6);
      SwitchToThisWindow((HWND)LastActiveVisiblePopupOrSelf, 1);
    }
  }
  return (unsigned int)v4;
}

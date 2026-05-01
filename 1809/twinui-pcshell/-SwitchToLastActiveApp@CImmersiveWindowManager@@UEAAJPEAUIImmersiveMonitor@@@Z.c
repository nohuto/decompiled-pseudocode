/*
 * XREFs of ?SwitchToLastActiveApp@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800FFCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x1800FBA8C (-SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveWindowManager::SwitchToLastActiveApp(
        CImmersiveWindowManager *this,
        struct IImmersiveMonitor *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v5; // eax
  HWND v6; // rdx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  CApplicationManagerUtility *v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = -2147319765;
  v8 = 0LL;
  v9 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( *((_BYTE *)this + 113) )
  {
    v4 = *((_QWORD *)this + 11);
    v5 = 0;
    if ( !v4 )
      v5 = -2147319765;
    v3 = v5;
    if ( v4 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
      v3 = (****((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))this + 10))(
             **((_QWORD **)this + 10),
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v8);
      if ( v3 >= 0 )
        v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, CApplicationManagerUtility **))(*(_QWORD *)v8 + 312LL))(
               v8,
               0LL,
               &v9);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v3 >= 0 )
    v3 = CApplicationManagerUtility::SetForegroundWindow(v9, v6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  return (unsigned int)v3;
}

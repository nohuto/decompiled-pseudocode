/*
 * XREFs of ?HandleCreation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x180106680
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x1800FBAB4 (-ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTY.c)
 *     ?s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x1801254E0 (-s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCharmsWindowManager::HandleCreation(
        CCharmsWindowManager *this,
        CallerIdentity *a2,
        enum PROCESS_UICONTEXT *a3)
{
  __int64 v5; // [rsp+70h] [rbp+18h] BYREF

  if ( CApplicationManagerUtility::ValidateWindowProcess(a2, 0, a3) )
  {
    v5 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
    if ( (int)CTaskWindow::s_CreateInstance(a2, 0LL, 2LL) >= 0 )
      (*(void (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16, &v5);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
}

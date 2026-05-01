/*
 * XREFs of ?GetAppMainWindow@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z @ 0x18014FEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_GetAppMainWindow@CAppViewManager@@AEAAPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1801568CC (-_GetAppMainWindow@CAppViewManager@@AEAAPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::GetAppMainWindow(
        CAppViewManager *this,
        int (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, struct IImmersiveApplicationInternal **),
        HWND *a3)
{
  int (__fastcall *v6)(struct IImmersiveApplication *, GUID *, struct IImmersiveApplicationInternal **); // rbx
  unsigned int v7; // ebx
  struct IImmersiveApplicationInternal *v9; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  if ( v6((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v9) >= 0 )
    *a3 = CAppViewManager::_GetAppMainWindow((CAppViewManager *)((char *)this - 40), v9);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = *a3 == 0LL ? 0x80070490 : 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  return v7;
}

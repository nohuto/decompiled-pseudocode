/*
 * XREFs of ?AcquireForegroundRightForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180108640
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800FACF0 (WPP_SF_.c)
 *     ?_FindAnotherGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@W4FindGlomOption@1@PEAPEAU2@@Z @ 0x18011032C (-_FindAnotherGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@W4FindGlomOption@1@PE.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::AcquireForegroundRightForApp(
        CAppViewManager *this,
        struct IImmersiveApplication *a2)
{
  int v4; // esi
  bool v5; // di
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // r8
  _QWORD *v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  PSRWLOCK v11; // [rsp+68h] [rbp+20h]

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  v4 = (**(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, _QWORD **))a2)(
         a2,
         &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
         &v9);
  if ( v4 >= 0 )
  {
    v5 = 1;
    v6 = CApplicationManagerUtility::g_pIAMGlobals;
    v11 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v9 + 416LL))(v9, *v9) )
    {
      v10 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
      v5 = (int)CAppViewManager::_FindAnotherGlom((char *)this - 40, v9, v7, &v10, -2LL) >= 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    }
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    if ( v5 )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, &WPP_9721ca1b81b531818ec3c1d708073943_Traceguids);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  return (unsigned int)v4;
}

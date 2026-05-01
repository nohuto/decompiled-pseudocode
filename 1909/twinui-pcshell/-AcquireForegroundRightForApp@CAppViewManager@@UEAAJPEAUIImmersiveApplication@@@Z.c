/*
 * XREFs of ?AcquireForegroundRightForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x18014DEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180140110 (WPP_SF_.c)
 *     ?_FindAnotherGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@W4FindGlomOption@1@PEAPEAU2@@Z @ 0x180156678 (-_FindAnotherGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@W4FindGlomOption@1@PE.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::AcquireForegroundRightForApp(
        CAppViewManager *this,
        struct IImmersiveApplication *a2)
{
  __int64 (__fastcall *v4)(struct IImmersiveApplication *, GUID *, _QWORD **); // rbx
  int v5; // esi
  bool v6; // di
  RTL_SRWLOCK *v7; // rbx
  __int64 v8; // r8
  _QWORD *v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  PSRWLOCK v12; // [rsp+68h] [rbp+20h]

  v10 = 0LL;
  v4 = **(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, _QWORD **))a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  v5 = v4(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v10);
  if ( v5 >= 0 )
  {
    v6 = 1;
    v7 = CApplicationManagerUtility::g_pIAMGlobals;
    v12 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v10 + 416LL))(v10, *v10) )
    {
      v11 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
      v6 = (int)CAppViewManager::_FindAnotherGlom((char *)this - 40, v10, v8, &v11, -2LL) >= 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    }
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    if ( v6 )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, &WPP_644466f823b93e4595a5a3e7b9e7deb6_Traceguids);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  return (unsigned int)v5;
}

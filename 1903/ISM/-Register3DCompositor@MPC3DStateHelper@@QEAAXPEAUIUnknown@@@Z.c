/*
 * XREFs of ?Register3DCompositor@MPC3DStateHelper@@QEAAXPEAUIUnknown@@@Z @ 0x18007C530
 * Callers:
 *     ?Register3DCompositor@@YAHPEAUIUnknown@@@Z @ 0x180053370 (-Register3DCompositor@@YAHPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?On3DCompositorStateChanged@MPC3DStateHelper@@AEAA_N_N@Z @ 0x18007C49C (-On3DCompositorStateChanged@MPC3DStateHelper@@AEAA_N_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPC3DStateHelper::Register3DCompositor(
        PSRWLOCK SRWLock,
        struct IUnknown *a2,
        __int64 a3,
        const char *a4)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v7; // eax
  const char *v8; // r9
  DWORD v9; // eax
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      96LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      a4);
    __debugbreak();
  }
  AcquireSRWLockExclusive(SRWLock);
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&SRWLock[3]);
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, RTL_SRWLOCK *))QueryInterface)(
         a2,
         &GUID_e35f488a_a264_4cbb_b79c_9c7dbbd61d65,
         &SRWLock[3]);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      102LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  if ( !SRWLock[3].Ptr )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      103LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v8);
  ReleaseSRWLockExclusive(SRWLock);
  if ( MPC3DStateHelper::On3DCompositorStateChanged(SRWLock, 1) )
  {
    v9 = WaitForSingleObjectEx(SRWLock[8].Ptr, 0xFFFFFFFF, 0);
    if ( v9 != 258 )
    {
      if ( v9 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          2512LL,
          (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
          v10);
        __debugbreak();
      }
    }
  }
}

/*
 * XREFs of ?OnTargetWithFocusChanged@OneCoreUAPInputHost@@UEAAJPEAUIInputTarget@@0@Z @ 0x18000DC40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall OneCoreUAPInputHost::OnTargetWithFocusChanged(
        OneCoreUAPInputHost *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 i; // rdi
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 5);
  if ( v6 )
  {
    v15 = 0LL;
    if ( (**v6)(v6, &GUID_18f2e21a_ceea_4596_9fd8_326464016a35, &v15) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)v15 + 24LL))(
             v15,
             a2,
             a3);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFD,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
          (const char *)(unsigned int)v7,
          -2);
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v15);
        return v8;
      }
    }
    v9 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  v10 = *((_QWORD *)this + 6);
  for ( i = *((_QWORD *)this + 7); v10 != i; v10 += 24LL )
  {
    v15 = 0LL;
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v10 + 16))(
           *(_QWORD *)(v10 + 16),
           &GUID_18f2e21a_ceea_4596_9fd8_326464016a35,
           &v15) >= 0 )
      (*(void (__fastcall **)(__int64, struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)v15 + 24LL))(
        v15,
        a2,
        a3);
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return 0LL;
}

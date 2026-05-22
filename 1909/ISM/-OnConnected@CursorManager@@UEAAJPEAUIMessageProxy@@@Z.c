/*
 * XREFs of ?OnConnected@CursorManager@@UEAAJPEAUIMessageProxy@@@Z @ 0x18010E4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CursorManager::OnConnected(
        CursorManager *this,
        __int64 (__fastcall ***a2)(struct IMessageProxy *, GUID *, __int64 **))
{
  __int64 **v2; // rsi
  __int64 (__fastcall *v5)(struct IMessageProxy *, GUID *, __int64 **); // rbx
  int v6; // eax
  int v7; // eax
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64 *, _OWORD *, __int64, __int64); // rax
  int v13; // eax
  _OWORD v15[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v16; // [rsp+50h] [rbp-58h]
  _OWORD v17[2]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v18; // [rsp+80h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = (__int64 **)((char *)this + 32);
  if ( !*((_QWORD *)this + 4) )
  {
    v5 = **a2;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 4);
    v6 = v5((struct IMessageProxy *)a2, &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a, v2);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        254LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *))(**((_QWORD **)this + 3) + 120LL))(
           *((_QWORD *)this + 3),
           *((_QWORD *)this + 7),
           v17);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        256LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v9 = *v2;
    v10 = *((unsigned int *)this + 18);
    v11 = **v2;
    LOBYTE(v8) = *((_DWORD *)this + 20) >= 2;
    v15[0] = v17[0];
    v15[1] = v17[1];
    v12 = *(__int64 (__fastcall **)(__int64 *, _OWORD *, __int64, __int64))(v11 + 24);
    v16 = v18;
    v13 = v12(v9, v15, v10, v8);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        259LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
  }
  return 0LL;
}

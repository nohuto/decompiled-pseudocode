/*
 * XREFs of ?Initialize@DragNDropProcessor@@AEAAJXZ @ 0x18006BEE0
 * Callers:
 *     ?Create@DragNDropProcessor@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x18006AC10 (-Create@DragNDropProcessor@@SAJAEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18001B064 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall DragNDropProcessor::Initialize(LARGE_INTEGER *this)
{
  LARGE_INTEGER *v1; // rdi
  int v3; // eax
  const char *v4; // r9
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v6; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 4;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)&this[4]);
  v3 = CoreUICreate(v1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      101LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  if ( !v1->QuadPart )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      102LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
      v4);
    __debugbreak();
  }
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 19) + 8LL) + 24LL))(*((_QWORD *)BamoServerConnection + 19) + 8LL);
  if ( *(LARGE_INTEGER **)(v6 + 56) != this )
  {
    (*(void (__fastcall **)(LARGE_INTEGER *))(this->QuadPart + 8))(this);
    v9 = *(_QWORD *)(v6 + 56);
    *(_QWORD *)(v6 + 56) = this;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v9);
  }
  QueryPerformanceFrequency(this + 30);
  return 0LL;
}

/*
 * XREFs of ?Initialize@ButtonProcessor@@IEAAJXZ @ 0x180124E78
 * Callers:
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180124D80 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x1800160DC (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18001666C (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ButtonProcessor::Initialize(ButtonProcessor *this)
{
  int ChildInputProcessor; // ebx
  __int64 v3; // rdx
  HKEY v5; // rcx
  __int64 v6; // rcx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  ButtonProcessor *v8; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = 0LL;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 8);
  ChildInputProcessor = CoreUICreate((char *)this + 64);
  if ( ChildInputProcessor < 0 )
  {
    v3 = 46LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)(unsigned int)ChildInputProcessor);
    return (unsigned int)ChildInputProcessor;
  }
  *((_WORD *)this + 40) = 0;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 9);
  RegistryWatcher::Create(
    v5,
    L"SYSTEM\\INPUT\\BUTTONS",
    this,
    (void (*)(void *, HKEY))ButtonProcessor::OnButtonRegistryKeyChangeStatic,
    (struct RegistryWatcher **)this + 9);
  *(_DWORD *)(*((_QWORD *)this + 5) + 4LL) |= 4u;
  *(_QWORD *)&v7 = *((_QWORD *)this + 5);
  *((_QWORD *)&v7 + 1) = *((_QWORD *)this + 4);
  v8 = this;
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  ChildInputProcessor = CreateChildInputProcessor(4u, (__int64)&v7, (__int64)this + 88);
  if ( ChildInputProcessor < 0 )
  {
    v3 = 73LL;
    goto LABEL_3;
  }
  return 0LL;
}

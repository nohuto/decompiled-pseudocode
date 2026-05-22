/*
 * XREFs of ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x18001E55C
 * Callers:
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x18001EA74 (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18001B02C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18001B19C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x18001B45C (-Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::Initialize(DWMCursorBroker *this, __int64 a2)
{
  int Descriptor; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, const wchar_t *, char *); // rbx
  int v7; // eax
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, char *, _QWORD, _QWORD); // rbp
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+48h] [rbp-30h] BYREF
  char v21; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v23; // [rsp+88h] [rbp+10h] BYREF
  __int64 v24; // [rsp+90h] [rbp+18h]

  v20 = 0LL;
  v21 = 0;
  v23 = 0;
  v24 = 0LL;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v20, a2, (__int64)L"System\\Input\\CursorBrokerPort");
  v4 = Descriptor;
  if ( Descriptor < 0 )
  {
    v18 = 57LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)Descriptor);
    goto LABEL_16;
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 176);
  Descriptor = CoreUICreate((char *)this + 176);
  v4 = Descriptor;
  if ( Descriptor < 0 )
  {
    v18 = 59LL;
    goto LABEL_25;
  }
  v5 = *((_QWORD *)this + 22);
  v6 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v5 + 48LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 200);
  v7 = v6(v5, v20, L"System\\Input\\CursorBrokerPort", (char *)this + 200);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x40,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v7,
      v19);
    __debugbreak();
  }
  v8 = (_QWORD *)((char *)this + 184);
  v9 = *((_QWORD *)this + 23);
  if ( v9 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Descriptor = CoreUIFactoryCreate((char *)this + 184);
  v4 = Descriptor;
  if ( Descriptor < 0 )
  {
    v18 = 66LL;
    goto LABEL_25;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v8 + 24LL))(
          *v8,
          &GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a,
          &v23);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x46,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v10,
      v19);
    __debugbreak();
  }
  v11 = *v8;
  v12 = *(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD))(*(_QWORD *)v11 + 32LL);
  v13 = *((_QWORD *)this + 24);
  if ( v13 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v12(v11, (char *)this + 8, 0LL, v23);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v14,
      (int)L"System\\Input\\CursorBrokerEndpoint");
    __debugbreak();
  }
  v15 = (_QWORD *)((char *)this + 472);
  v16 = *((_QWORD *)this + 59);
  if ( v16 )
  {
    *v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  Descriptor = InputConfigContextProvider::Create((struct ISystemContextProvider **)this + 59);
  v4 = Descriptor;
  if ( Descriptor < 0 )
  {
    v18 = 81LL;
    goto LABEL_25;
  }
  Descriptor = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v15 + 24LL))(*v15, (char *)this + 16);
  v4 = Descriptor;
  if ( Descriptor < 0 )
  {
    v18 = 83LL;
    goto LABEL_25;
  }
  *((_DWORD *)this + 114) = 3;
  v4 = 0;
LABEL_16:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v20);
  return v4;
}

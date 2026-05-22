/*
 * XREFs of ?Initialize@InputStateManager@@IEAAJXZ @ 0x1800104BC
 * Callers:
 *     ?Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z @ 0x180010354 (-Create@InputStateManager@@SAJPEAUISystemInputRouter@@PEAPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ??0TestCommandHost@@AEAA@XZ @ 0x1800107F8 (--0TestCommandHost@@AEAA@XZ.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18001616C (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18001B50C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18001B67C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??_GTestCommandHost@@QEAAPEAXI@Z @ 0x1800D36F4 (--_GTestCommandHost@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputStateManager::Initialize(InputStateManager *this, __int64 a2)
{
  int v3; // eax
  _QWORD *v4; // r14
  int v5; // eax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64, char *); // rbx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbx
  int v12; // eax
  int v13; // eax
  TestCommandHost *v14; // rax
  unsigned int v15; // edx
  TestCommandHost *v16; // rcx
  HKEY v17; // rcx
  DWORD TickCount; // eax
  int v20; // [rsp+20h] [rbp-30h]
  int v21; // [rsp+20h] [rbp-30h]
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  char v23; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF
  TestCommandHost *v26; // [rsp+A0h] [rbp+50h]

  v22 = 0LL;
  v23 = 0;
  v25 = 0LL;
  v3 = InputSecurityDescriptor::QueryDescriptor(&v22, a2, c_wszMessagePortNames);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x81,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v3,
      v20);
    __debugbreak();
  }
  v4 = (_QWORD *)((char *)this + 48);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 48);
  v5 = CoreUICreate((char *)this + 48);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x83,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v5,
      v20);
    __debugbreak();
  }
  v6 = *v4;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)*v4 + 56LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 56);
  v8 = v7(v6, v22, (char *)this + 56);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x87,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v8,
      v20);
    __debugbreak();
  }
  v21 = (_DWORD)this + 64;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *, void *, int), InputStateManager *, _QWORD))(*(_QWORD *)*v4 + 88LL))(
         *v4,
         InputStateManager::OnDeviceCommandStatic,
         this,
         *((_QWORD *)this + 7));
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x8D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v9,
      v21);
    __debugbreak();
  }
  v10 = *v4;
  v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v4 + 24LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v25);
  v12 = v11(v10, &v25);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x90,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v12,
      v21);
    __debugbreak();
  }
  v13 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v25 + 40LL))(
          v25,
          L"System\\Input\\DeviceCommandEndpoint",
          *((_QWORD *)this + 8),
          1LL);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x95,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v13,
      v21);
    __debugbreak();
  }
  if ( !TestCommandHost::m_instance )
  {
    v26 = (TestCommandHost *)operator new(0x88uLL);
    v14 = TestCommandHost::TestCommandHost(v26);
    v16 = TestCommandHost::m_instance;
    TestCommandHost::m_instance = v14;
    if ( v16 )
      TestCommandHost::`scalar deleting destructor'(v16, v15);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 168);
  if ( RegistryWatcher::Create(
         v17,
         L"System\\Input",
         this,
         (void (*)(void *, HKEY))InputStateManager::OnInputRegistryKeyChangeStatic,
         (struct RegistryWatcher **)this + 21) < 0 )
  {
    *((_DWORD *)this + 44) = 6;
    *((_DWORD *)this + 45) = -1;
  }
  TickCount = GetTickCount();
  NtMITUpdateInputGlobals(TickCount, 0LL, 0LL, 0xFFFFFFFFLL, 0);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v25);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v22);
  return 0LL;
}

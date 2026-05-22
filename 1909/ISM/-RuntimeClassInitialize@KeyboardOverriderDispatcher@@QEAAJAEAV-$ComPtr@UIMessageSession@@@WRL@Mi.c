/*
 * XREFs of ?RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Z @ 0x180019310
 * Callers:
 *     ??$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVKeyboardOverriderDispatcher@@AEAV?$ComPtr@UIMessageSession@@@12@@Z @ 0x18001D114 (--$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV-$ComPtr@UIMessageSession@@@WRL@Micros.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18001B02C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18001B19C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18001B1F8 (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardOverriderDispatcher::RuntimeClassInitialize(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64, const wchar_t *, _QWORD *); // rbx
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD *, _QWORD, _QWORD, const char *, _QWORD, _QWORD *); // rbp
  __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // [rsp+48h] [rbp-30h] BYREF
  char v16; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v18; // [rsp+80h] [rbp+8h] BYREF

  v18 = 0;
  v15 = 0LL;
  v16 = 0;
  v2 = a1 + 51;
  Microsoft::WRL::ComPtr<IMessageSession>::operator=(a1 + 51);
  v4 = InputSecurityDescriptor::QueryDescriptor(&v15, v3, L"KeyboardOverriderDispatcher");
  v5 = v4;
  if ( v4 < 0 )
  {
    v14 = 69LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboardoverr"
               "iderdispatcher.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_11;
  }
  v6 = *v2;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, _QWORD *))(*(_QWORD *)v6 + 48LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(a1 + 53);
  v4 = v7(v6, v15, L"KeyboardOverriderDispatcher", a1 + 53);
  v5 = v4;
  if ( v4 < 0 )
  {
    v14 = 74LL;
    goto LABEL_17;
  }
  v8 = a1 + 52;
  v9 = a1[52];
  if ( v9 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v4 = CoreUIFactoryCreate(a1 + 52);
  v5 = v4;
  if ( v4 < 0 )
  {
    v14 = 76LL;
    goto LABEL_17;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v8 + 24LL))(
         *v8,
         &GUID_2c657f91_d10a_486d_b793_25a3c5057719,
         &v18);
  v5 = v4;
  if ( v4 < 0 )
  {
    v14 = 80LL;
    goto LABEL_17;
  }
  v10 = *v8;
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, _QWORD, const char *, _QWORD, _QWORD *))(*(_QWORD *)v10 + 32LL);
  v12 = a1[54];
  if ( v12 )
  {
    a1[54] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v4 = v11(v10, a1, 0LL, v18, L"System\\LowLevelKeyboardOverriderCallback", a1[53], a1 + 54);
  v5 = v4;
  if ( v4 < 0 )
  {
    v14 = 88LL;
    goto LABEL_17;
  }
  v5 = 0;
LABEL_11:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v15);
  return v5;
}

/*
 * XREFs of ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x180029008
 * Callers:
 *     ?Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x180028EFC (-Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18001B50C (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18001B67C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionProcessor::Initialize(
        InputRedirectionProcessor *this,
        struct IInputDeviceInfoStore *a2)
{
  __int64 *v3; // rdi
  int Descriptor; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, const wchar_t *, char *); // rbx
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, char *, _QWORD, _QWORD, const char *, _QWORD, char *); // rbp
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // [rsp+48h] [rbp-30h] BYREF
  char v17; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v19; // [rsp+80h] [rbp+8h] BYREF

  v19 = 0;
  v16 = 0LL;
  v17 = 0;
  *((_QWORD *)this + 9) = a2;
  v3 = (__int64 *)((char *)this + 40);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 5);
  Descriptor = CoreUICreate(v3);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v15 = 26LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectionprocessor.cpp",
      (const char *)(unsigned int)Descriptor);
    goto LABEL_12;
  }
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v16, v5, (__int64)L"System\\TouchInputRedirection");
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v15 = 30LL;
    goto LABEL_19;
  }
  v7 = *v3;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v7 + 48LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 7);
  Descriptor = v8(v7, v16, L"System\\TouchInputRedirection", (char *)this + 56);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v15 = 35LL;
    goto LABEL_19;
  }
  v9 = (_QWORD *)((char *)this + 48);
  v10 = *((_QWORD *)this + 6);
  if ( v10 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  Descriptor = CoreUIFactoryCreate((char *)this + 48);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v15 = 37LL;
    goto LABEL_19;
  }
  Descriptor = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v9 + 24LL))(
                 *v9,
                 &GUID_548c27d0_a710_4ec7_92d1_67a7dee54efb,
                 &v19);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v15 = 41LL;
    goto LABEL_19;
  }
  v11 = *v9;
  v12 = *(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, const char *, _QWORD, char *))(*(_QWORD *)v11 + 32LL);
  v13 = *((_QWORD *)this + 8);
  if ( v13 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  Descriptor = v12(v11, (char *)this + 8, 0LL, v19, L"TouchInputRedirection", *((_QWORD *)this + 7), (char *)this + 64);
  v6 = Descriptor;
  if ( Descriptor < 0 )
  {
    v15 = 49LL;
    goto LABEL_19;
  }
  v6 = 0;
LABEL_12:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v16);
  return v6;
}

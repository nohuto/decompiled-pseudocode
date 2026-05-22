/*
 * XREFs of ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x18009F080
 * Callers:
 *     ??0TestCommandHost@@AEAA@XZ @ 0x18009EDC8 (--0TestCommandHost@@AEAA@XZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B58C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800C07A8 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x1800C07E0 (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TestCommandHost::CreateEndpointToReceiveMessages(TestCommandHost *this, __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+38h] [rbp-20h] BYREF
  char v15; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0LL;
  v15 = 0;
  v3 = InputSecurityDescriptor::QueryDescriptor(&v14, a2, c_wszMessagePortNames);
  v4 = retaddr;
  if ( v3 < 0 )
  {
LABEL_12:
    wil::details::in1diag3::_Throw_Hr(
      v4,
      (void *)0x68,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v5 = *(_QWORD *)this;
  v6 = (_QWORD *)((char *)this + 16);
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v5 + 48LL))(
         v5,
         v14,
         L"System\\Input\\TestCommandsPort",
         (char *)this + 16);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x6D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, int (*)(void *, const void *, int), TestCommandHost *, _QWORD, char *))(**(_QWORD **)this + 80LL))(
         *(_QWORD *)this,
         TestCommandHost::OnCoreMessageStatic,
         this,
         *v6,
         (char *)this + 24);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x73,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_15;
  }
  v17 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)this + 24LL))(*(_QWORD *)this, &v17);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::_Throw_Hr(
      v11,
      (void *)0x77,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x18009F233LL);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v17 + 40LL))(
          v17,
          L"System\\Input\\TestCommandsEndpoint",
          *((_QWORD *)this + 3),
          1LL);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_12;
  }
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v14);
}

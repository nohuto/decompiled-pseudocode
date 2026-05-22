/*
 * XREFs of ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1800C5BB4
 * Callers:
 *     ?Initialize@ComboButtonProcessor@@AEAAJXZ @ 0x1800C5230 (-Initialize@ComboButtonProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002A878 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800C07A8 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x1800C07E0 (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ButtonRecognizer::Initialize(ButtonRecognizer *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // rdx
  int Descriptor; // eax
  __int64 v9; // rdx
  __int64 v10; // rbx
  _QWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  char v23; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v25; // [rsp+80h] [rbp+30h] BYREF

  *((_DWORD *)this + 6) = 1;
  *((_DWORD *)this + 5) = 0;
  *(_WORD *)((char *)this + 17) = 0;
  *((_BYTE *)this + 16) = 0;
  v2 = (__int64 *)((char *)this + 160);
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreate(v2);
  if ( v4 < 0 )
  {
    v5 = 124LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 21,
    *v2);
  v22 = 0LL;
  v23 = 0;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v22, v7, (__int64)c_wszMessagePortNames);
  v4 = Descriptor;
  if ( Descriptor < 0 )
  {
    v9 = 131LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)Descriptor);
    InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v22);
    return (unsigned int)v4;
  }
  v10 = *v2;
  v11 = (_QWORD *)((char *)this + 184);
  v12 = *((_QWORD *)this + 23);
  if ( v12 )
  {
    *v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  Descriptor = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v10 + 56LL))(
                 v10,
                 v22,
                 (char *)this + 184);
  v4 = Descriptor;
  if ( Descriptor < 0 )
  {
    v9 = 135LL;
    goto LABEL_21;
  }
  v13 = *v2;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 21,
    *((_QWORD *)this + 21));
  Descriptor = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(_QWORD *, const void *, int), ButtonRecognizer *, _QWORD, char *))(*(_QWORD *)v13 + 80LL))(
                 v13,
                 ButtonRecognizer::MessageProc,
                 this,
                 *v11,
                 (char *)this + 176);
  v4 = Descriptor;
  if ( Descriptor < 0 )
  {
    v9 = 141LL;
    goto LABEL_21;
  }
  v14 = *((_QWORD *)this + 25);
  if ( v14 )
  {
    *((_QWORD *)this + 25) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 24);
  if ( v15 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  Descriptor = CoreUICallCreateEndpointHost(*v2, (char *)this + 192, (char *)this + 200);
  v4 = Descriptor;
  if ( Descriptor < 0 )
  {
    v9 = 146LL;
    goto LABEL_21;
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v22);
  v25 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 24LL))(*v2, &v25);
  v4 = v16;
  if ( v16 < 0 )
  {
    v17 = 155LL;
    goto LABEL_26;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v25 + 40LL))(
          v25,
          L"System\\Input\\ComboButton",
          *((_QWORD *)this + 22),
          1LL);
  v4 = v16;
  if ( v16 < 0 )
  {
    v17 = 160LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v16);
    v18 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return (unsigned int)v4;
  }
  v19 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = *v2;
  v21 = *((_QWORD *)this + 19);
  if ( v21 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v4 = (*(__int64 (__fastcall **)(__int64, void *, ButtonRecognizer *, char *))(*(_QWORD *)v20 + 120LL))(
         v20,
         &lambda_3d8bf48877b1d400f9b229e9054fc6e6_::_lambda_invoker_cdecl_,
         this,
         (char *)this + 152);
  if ( v4 < 0 )
  {
    v5 = 172LL;
    goto LABEL_5;
  }
  return 0LL;
}

/*
 * XREFs of ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x1800C8BB0
 * Callers:
 *     ?Create@DragNDropProcessorLegacy@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x1800C8E64 (-Create@DragNDropProcessorLegacy@@SAJAEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PE.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002A878 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800C07A8 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x1800C07E0 (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessorLegacy::Initialize(DragNDropProcessorLegacy *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  const char *v5; // r9
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  int Descriptor; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // r14
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int EndpointHost; // eax
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v24; // [rsp+38h] [rbp-30h] BYREF
  char v25; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v27; // [rsp+70h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreate(v2);
  v6 = retaddr;
  if ( v4 < 0 )
  {
LABEL_21:
    wil::details::in1diag3::FailFast_Hr(
      v6,
      (void *)0x39,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( !*v2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      v5);
LABEL_23:
    wil::details::in1diag3::FailFast_Hr(
      v9,
      (void *)0x45,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)Descriptor);
    __debugbreak();
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 5,
    *v2);
  v24 = 0LL;
  v25 = 0;
  Descriptor = InputSecurityDescriptor::QueryDescriptor((__int64)&v24, v7, (__int64)c_wszMessagePortNames);
  v9 = retaddr;
  if ( Descriptor < 0 )
    goto LABEL_23;
  v10 = *v2;
  v11 = (_QWORD *)((char *)this + 56);
  v12 = *((_QWORD *)this + 7);
  if ( v12 )
  {
    *v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v10 + 56LL))(v10, v24, (char *)this + 56);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x49,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  v14 = *v2;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 5,
    *((_QWORD *)this + 5));
  v15 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(_QWORD *, const void *, int), DragNDropProcessorLegacy *, _QWORD, char *))(*(_QWORD *)v14 + 80LL))(
          v14,
          DragNDropProcessorLegacy::MessageProc,
          this,
          *v11,
          (char *)this + 48);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  v16 = *((_QWORD *)this + 9);
  if ( v16 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = *((_QWORD *)this + 8);
  if ( v17 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  EndpointHost = CoreUICallCreateEndpointHost(*v2, (char *)this + 64, (char *)this + 72);
  if ( EndpointHost < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x54,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)EndpointHost);
    goto LABEL_27;
  }
  v27 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 24LL))(*v2, &v27);
  v20 = retaddr;
  if ( v19 < 0 )
  {
LABEL_27:
    wil::details::in1diag3::FailFast_Hr(
      v20,
      (void *)0x5C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v19);
    JUMPOUT(0x1800C8E5CLL);
  }
  v21 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v27 + 40LL))(
          v27,
          L"System\\Input\\DragNDrop",
          *((_QWORD *)this + 6),
          1LL);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x61,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\lib\\"
               "dragndropprocessorlegacy.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_21;
  }
  v22 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v24);
  return 0LL;
}

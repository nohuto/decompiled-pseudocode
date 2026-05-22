/*
 * XREFs of ??1EdgyConnection@@UEAA@XZ @ 0x1800FFD90
 * Callers:
 *     ??_EEdgyConnection@@UEAAPEAXI@Z @ 0x1800FFE50 (--_EEdgyConnection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180026E8C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800672AC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXXZ @ 0x1801005FC (-_Tidy@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall EdgyConnection::~EdgyConnection(EdgyConnection *this)
{
  __int64 *v2; // rdi
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &EdgyConnection::`vftable';
  v2 = (__int64 *)((char *)this + 24);
  if ( *((_QWORD *)this + 5) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD))(*(_QWORD *)*v2 + 48LL))(
           *v2,
           L"EdgyConfigurationEndpoint",
           0LL);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        37LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
        (const char *)(unsigned int)v3);
  }
  std::vector<Edge>::_Tidy((char *)this + 72);
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease((__int64 *)this + 8);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 6,
    0LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 4,
    0LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 2);
  *(_QWORD *)this = &RefCountedObject::`vftable';
}

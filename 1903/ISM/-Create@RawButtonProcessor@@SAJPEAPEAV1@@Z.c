/*
 * XREFs of ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x180109040
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180019EC8 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002736C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??R?$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z @ 0x180035E90 (--R-$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z.c)
 *     ?FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ @ 0x180109190 (-FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RawButtonProcessor::Create(struct RawButtonProcessor **a1)
{
  __int64 v2; // rbx
  int v3; // esi
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = 0LL;
  if ( !a1 )
  {
    v3 = -2147024809;
    v4 = 30LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\rawshellbutton\\system\\lib\\"
               "rawbuttonprocessor.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_15;
  }
  v5 = RefCountedObject::operator new(0x120uLL);
  v6 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x120uLL);
    v6[1] = &RefCountedObject::`vftable';
    *((_DWORD *)v6 + 4) = 1;
    *v6 = &RawButtonProcessor::`vftable'{for `IContextualProcessor'};
    v6[1] = &RawButtonProcessor::`vftable'{for `RefCountedObject'};
    v6[3] = 0LL;
    v6[4] = 0LL;
    v6[5] = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  v2 = (__int64)v6;
  if ( !v6 )
  {
    v3 = -2147024882;
    v4 = 37LL;
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v6 + 3);
  v7 = CoreUICreate(v6 + 3);
  v3 = v7;
  if ( v7 >= 0 )
  {
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      v6 + 4,
      v6[3]);
    RawButtonProcessor::FindRemoteEndpoint((RawButtonProcessor *)v6);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\rawshellbutton\\system\\lib\\"
               "rawbuttonprocessor.cpp",
      (const char *)(unsigned int)v7);
  }
  if ( v3 < 0 )
  {
    v4 = 40LL;
    goto LABEL_13;
  }
  v2 = 0LL;
  *a1 = (struct RawButtonProcessor *)v6;
  v3 = 0;
LABEL_15:
  if ( v2 )
    std::default_delete<SystemButtonProcessor>::operator()(v8, v2);
  return (unsigned int)v3;
}

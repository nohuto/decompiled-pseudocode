/*
 * XREFs of ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1800D2D40
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180087644 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002A878 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ @ 0x1800D3170 (-FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RawButtonProcessor::Create(struct RawButtonProcessor **a1)
{
  __int64 *v2; // rbx
  int v3; // esi
  __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 *v6; // rdi
  __int64 *v7; // r14
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = 0LL;
  if ( !a1 )
  {
    v3 = -2147024809;
    v4 = 30LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\rawshellbutton\\system\\lib\\"
               "rawbuttonprocessor.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_18;
  }
  v5 = (__int64 *)malloc(0x120uLL);
  v6 = v5;
  if ( v5 )
    memset_0(v5, 0, 0x120uLL);
  if ( v6 )
  {
    memset_0(v6, 0, 0x120uLL);
    v6[1] = (__int64)&RefCountedObject::`vftable';
    *((_DWORD *)v6 + 4) = 1;
    *v6 = (__int64)&RawButtonProcessor::`vftable'{for `IContextualProcessor'};
    v6[1] = (__int64)&RawButtonProcessor::`vftable'{for `RefCountedObject'};
    v6[3] = 0LL;
    v6[4] = 0LL;
    v6[5] = 0LL;
  }
  v2 = v6;
  if ( !v6 )
  {
    v3 = -2147024882;
    v4 = 37LL;
    goto LABEL_16;
  }
  v7 = v6 + 3;
  v8 = v6[3];
  if ( v8 )
  {
    *v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = CoreUICreate(v6 + 3);
  v3 = v9;
  if ( v9 >= 0 )
  {
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      v6 + 4,
      *v7);
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
      (const char *)(unsigned int)v9);
  }
  if ( v3 < 0 )
  {
    v4 = 40LL;
    goto LABEL_16;
  }
  v2 = 0LL;
  *a1 = (struct RawButtonProcessor *)v6;
  v3 = 0;
LABEL_18:
  if ( v2 )
    (*(void (__fastcall **)(__int64 *, __int64))(v2[1] + 24))(v2 + 1, 1LL);
  return (unsigned int)v3;
}

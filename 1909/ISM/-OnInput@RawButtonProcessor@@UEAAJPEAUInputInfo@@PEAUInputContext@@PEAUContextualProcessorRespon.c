/*
 * XREFs of ?OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801090B0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180026E8C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RawButtonProcessor::OnInput(
        RawButtonProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 v5; // rax
  char v6; // r8
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]

  if ( *(char *)a2 >= 0 )
  {
    *(_DWORD *)a4 = 0;
  }
  else
  {
    *(_DWORD *)a4 = 3;
    v5 = *((unsigned int *)a2 + 16);
    v6 = *((_BYTE *)this + v5 + 48);
    if ( *((_BYTE *)a2 + 68) )
    {
      if ( v6 )
      {
        v7 = 2;
      }
      else
      {
        v7 = 1;
        *((_BYTE *)this + v5 + 48) = 1;
      }
    }
    else
    {
      v7 = 0;
      if ( v6 )
      {
        *((_BYTE *)this + v5 + 48) = 0;
        v7 = 4;
      }
    }
    v12[0] = *((_DWORD *)a2 + 16);
    v8 = *((_QWORD *)a2 + 4);
    v9 = *((_QWORD *)this + 5);
    v12[1] = v7;
    v10 = *((_QWORD *)this + 3);
    v13 = v8;
    if ( (*(int (__fastcall **)(__int64, __int64, __int64, _DWORD *, int))(*(_QWORD *)v10 + 160LL))(
           v10,
           v9,
           4LL,
           v12,
           16) < 0 )
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        (_QWORD *)this + 4,
        *((_QWORD *)this + 4));
  }
  return 0LL;
}

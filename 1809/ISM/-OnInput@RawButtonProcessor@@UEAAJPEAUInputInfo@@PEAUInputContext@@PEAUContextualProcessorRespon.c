/*
 * XREFs of ?OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800D3080
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002A878 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RawButtonProcessor::OnInput(
        RawButtonProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  bool v5; // zf
  __int64 v6; // rax
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v5 = *(_BYTE *)a2 >= 0;
  v13 = 0LL;
  if ( v5 )
  {
    *(_DWORD *)a4 = 0;
  }
  else
  {
    *(_DWORD *)a4 = 3;
    v6 = *((unsigned int *)a2 + 130);
    if ( *((_BYTE *)a2 + 516) )
    {
      if ( *((_BYTE *)this + v6 + 48) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x89,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\rawshellbutton\\system\\l"
                   "ib\\rawbuttonprocessor.cpp",
          (const char *)0x8000FFFFLL);
        return 2147549183LL;
      }
      v8 = 5;
    }
    else if ( *((_BYTE *)a2 + 524) )
    {
      if ( *((_BYTE *)this + v6 + 48) )
      {
        v8 = 2;
      }
      else
      {
        v8 = 1;
        *((_BYTE *)this + v6 + 48) = 1;
      }
    }
    else
    {
      v8 = 0;
      if ( *((_BYTE *)this + v6 + 48) )
      {
        *((_BYTE *)this + v6 + 48) = 0;
        v8 = 4;
      }
    }
    v9 = *((_DWORD *)a2 + 130);
    v10 = *((_QWORD *)this + 5);
    HIDWORD(v13) = v8;
    v11 = *((_QWORD *)this + 3);
    LODWORD(v13) = v9;
    if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64 *, int))(*(_QWORD *)v11 + 152LL))(
           v11,
           v10,
           4LL,
           &v13,
           8) < 0 )
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        (_QWORD *)this + 4,
        *((_QWORD *)this + 4));
  }
  return 0LL;
}

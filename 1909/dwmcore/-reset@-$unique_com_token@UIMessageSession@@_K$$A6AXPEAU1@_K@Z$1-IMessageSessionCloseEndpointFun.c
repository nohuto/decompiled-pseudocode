/*
 * XREFs of ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800E7514
 * Callers:
 *     ?EnsureRenderThreadCanReceiveInputThreadMessages@CGlobalInputManager@@AEAAJXZ @ 0x1800E0F24 (-EnsureRenderThreadCanReceiveInputThreadMessages@CGlobalInputManager@@AEAAJXZ.c)
 *     ??1CGlobalInputManager@@MEAA@XZ @ 0x180235B18 (--1CGlobalInputManager@@MEAA@XZ.c)
 *     ?EnsureRenderThreadCanSendInputThreadMessages@CGlobalInputManager@@AEAAJXZ @ 0x180235DE4 (-EnsureRenderThreadCanSendInputThreadMessages@CGlobalInputManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rdi
  __int64 result; // rax

  if ( a1[1] )
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 152LL))(*a1);
  a1[1] = 0LL;
  v4 = *a1;
  if ( *a1 != a2 )
  {
    *a1 = a2;
    if ( a2 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v4 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}

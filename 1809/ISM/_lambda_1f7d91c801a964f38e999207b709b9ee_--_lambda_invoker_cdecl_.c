/*
 * XREFs of _lambda_1f7d91c801a964f38e999207b709b9ee_::_lambda_invoker_cdecl_ @ 0x1800F5800
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180003678 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z @ 0x1800F5740 (-ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_1f7d91c801a964f38e999207b709b9ee_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        unsigned __int8 *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  LSTATUS v5; // eax
  __int64 v6; // rcx
  char v7; // dl
  __int64 v8; // rcx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  _DWORD v11[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+58h] [rbp+10h] BYREF

  if ( _InterlockedIncrement((volatile signed __int32 *)Context + 35) > 1 )
  {
    v5 = RegNotifyChangeKeyValue(*((HKEY *)Context + 14), Context[136], 0x10000005u, *((HANDLE *)Context + 15), 1);
    if ( !v5 || v5 == 5 )
    {
      v11[0] = 0;
      v8 = *((_QWORD *)Context + 13);
      if ( !v8 )
        wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
      (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v8 + 16LL))(v8, v11);
      v7 = 1;
    }
    else
    {
      if ( v5 != 811 )
      {
        if ( v5 != 1018 )
        {
          v9 = (unsigned __int16)v5 | 0x80070000;
          if ( v5 <= 0 )
            v9 = v5;
          v10 = wil::verify_hresult<long>(v9);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xD6,
            (__int64)"internal\\sdk\\inc\\wil\\registry.h",
            (const char *)v10);
          __debugbreak();
        }
        v6 = *((_QWORD *)Context + 13);
        v13 = 1;
        if ( !v6 )
          wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 16LL))(v6, &v13);
      }
      v7 = 0;
    }
    wil::details::registry_watcher_state::ReleaseFromCallback((wil::details::registry_watcher_state *)Context, v7);
  }
}

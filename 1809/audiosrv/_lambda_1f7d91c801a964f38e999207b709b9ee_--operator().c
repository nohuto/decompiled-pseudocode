/*
 * XREFs of _lambda_1f7d91c801a964f38e999207b709b9ee_::operator() @ 0x1800FB3B8
 * Callers:
 *     _lambda_1f7d91c801a964f38e999207b709b9ee_::_lambda_invoker_cdecl_ @ 0x1800FAD80 (_lambda_1f7d91c801a964f38e999207b709b9ee_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??R?$_Func_class@XW4RegistryChangeKind@wil@@U_Nil@wistd@@U34@U34@U34@U34@U34@@wistd@@QEBAXW4RegistryChangeKind@wil@@@Z @ 0x1800FB45C (--R-$_Func_class@XW4RegistryChangeKind@wil@@U_Nil@wistd@@U34@U34@U34@U34@U34@@wistd@@QEBAXW4Regi.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FCC38 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z @ 0x1800FF0F0 (-ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAX_N@Z.c)
 */

void __fastcall lambda_1f7d91c801a964f38e999207b709b9ee_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  void *v5; // rdx
  unsigned int v6; // r8d
  bool v7; // dl
  BOOL fAsynchronous; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( _InterlockedIncrement((volatile signed __int32 *)(a3 + 140)) > 1 )
  {
    v4 = RegNotifyChangeKeyValue(
           *(HKEY *)(a3 + 112),
           *(unsigned __int8 *)(a3 + 136),
           0x10000005u,
           *(HANDLE *)(a3 + 120),
           1);
    if ( !v4 || v4 == 5 )
    {
      wistd::_Func_class<void,enum wil::RegistryChangeKind,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::operator()(
        a3,
        0LL);
      v7 = 1;
    }
    else
    {
      if ( v4 != 811 )
      {
        if ( v4 != 1018 )
        {
          if ( v4 > 0 )
            v4 = (unsigned __int16)v4 | 0x80070000;
          wil::details::in1diag3::FailFast_Hr(retaddr, v5, v6, (const char *)(unsigned int)v4, fAsynchronous);
          __debugbreak();
        }
        wistd::_Func_class<void,enum wil::RegistryChangeKind,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::operator()(
          a3,
          1LL);
      }
      v7 = 0;
    }
    wil::details::registry_watcher_state::ReleaseFromCallback((wil::details::registry_watcher_state *)a3, v7);
  }
}

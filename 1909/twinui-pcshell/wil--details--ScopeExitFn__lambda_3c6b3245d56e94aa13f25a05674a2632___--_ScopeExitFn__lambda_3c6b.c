/*
 * XREFs of wil::details::ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___::_ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___ @ 0x18012694C
 * Callers:
 *     _SmartCookie::Unregister_::_1_::dtor$0 @ 0x180128736 (_SmartCookie--Unregister_--_1_--dtor$0.c)
 * Callees:
 *     ??4?$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180126C94 (--4-$function@$$A6AJI_K_J@Z@wistd@@QEAAAEAV01@$$T@Z.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___::_ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    *(_DWORD *)(*(_QWORD *)a1 + 120LL) = 0;
    return wistd::function<long (unsigned int,unsigned __int64,__int64)>::operator=(*(_QWORD *)a1);
  }
  return result;
}

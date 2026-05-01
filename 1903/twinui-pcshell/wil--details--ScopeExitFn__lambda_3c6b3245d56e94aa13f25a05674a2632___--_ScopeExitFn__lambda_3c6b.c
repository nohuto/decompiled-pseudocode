/*
 * XREFs of wil::details::ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___::_ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___ @ 0x18010793C
 * Callers:
 *     _SmartCookie::Unregister_::_1_::dtor$0 @ 0x180109626 (_SmartCookie--Unregister_--_1_--dtor$0.c)
 * Callees:
 *     ??4?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewSizePreferencesChangedEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAAAEAV01@$$T@Z @ 0x180107C84 (--4-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___::_ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    *(_DWORD *)(*(_QWORD *)a1 + 120LL) = 0;
    return wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs *> *)>::operator=(*(_QWORD *)a1);
  }
  return result;
}

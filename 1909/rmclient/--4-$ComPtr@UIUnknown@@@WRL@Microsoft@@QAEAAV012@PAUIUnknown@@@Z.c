/*
 * XREFs of ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QAEAAV012@PAUIUnknown@@@Z @ 0x1000B830
 * Callers:
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AAEJPAU?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PAXPAUEventRegistrationToken@@@Z @ 0x100092E0 (-AddInternal@-$EventSource@U-$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windo.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QAEXPAUIUnknown@@PAX@Z @ 0x1000BA0D (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QAEXPAUIUnknown@@PAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IAEKXZ @ 0x1000B7F0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IAEKXZ.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

volatile signed __int32 **__thiscall Microsoft::WRL::ComPtr<IUnknown>::operator=(
        volatile signed __int32 **this,
        volatile signed __int32 *a2)
{
  volatile signed __int32 *v3; // eax
  volatile signed __int32 *v5; // [esp+8h] [ebp-4h] BYREF

  v3 = *this;
  if ( *this != a2 )
  {
    if ( a2 )
    {
      (*(void (__thiscall **)(_DWORD, volatile signed __int32 *))(*a2 + 4))(*(_DWORD *)(*a2 + 4), a2);
      v3 = *this;
    }
    v5 = v3;
    *this = a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
  }
  return this;
}

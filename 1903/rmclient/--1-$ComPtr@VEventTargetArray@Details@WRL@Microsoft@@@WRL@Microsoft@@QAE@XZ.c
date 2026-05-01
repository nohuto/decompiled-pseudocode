/*
 * XREFs of ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAE@XZ @ 0x1001040A
 * Callers:
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AAEJPAU?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PAXPAUEventRegistrationToken@@@Z @ 0x100092E0 (-AddInternal@-$EventSource@U-$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windo.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UAGKXZ @ 0x100094C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

Microsoft::WRL::Details::EventTargetArray *__thiscall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(
        Microsoft::WRL::Details::EventTargetArray **this)
{
  Microsoft::WRL::Details::EventTargetArray *result; // eax

  result = *this;
  if ( *this )
  {
    *this = 0;
    return (Microsoft::WRL::Details::EventTargetArray *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(result);
  }
  return result;
}

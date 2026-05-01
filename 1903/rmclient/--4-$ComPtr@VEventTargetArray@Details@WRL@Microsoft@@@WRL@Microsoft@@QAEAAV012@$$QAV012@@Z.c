/*
 * XREFs of ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QAEAAV012@$$QAV012@@Z @ 0x1001044B
 * Callers:
 *     ?Remove@?$EventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJUEventRegistrationToken@@@Z @ 0x10010E2B (-Remove@-$EventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOption.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJUEventRegistrationToken@@@Z @ 0x10010F84 (-Remove@-$EventSource@U-$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UAGKXZ @ 0x100094C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

Microsoft::WRL::Details::EventTargetArray **__thiscall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        Microsoft::WRL::Details::EventTargetArray **this,
        char *a2)
{
  Microsoft::WRL::Details::EventTargetArray *v3; // ecx
  Microsoft::WRL::Details::EventTargetArray *v4; // eax
  char v6; // [esp+4h] [ebp-4h] BYREF

  v3 = 0;
  if ( &v6 != a2 )
  {
    v3 = *(Microsoft::WRL::Details::EventTargetArray **)a2;
    *(_DWORD *)a2 = 0;
  }
  v4 = *this;
  *this = v3;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  return this;
}

/*
 * XREFs of ?Add@?$AgileEventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJPAU?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@PAUEventRegistrationToken@@@Z @ 0x10008950
 * Callers:
 *     ?add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UAGJPAU?$IEventHandler@PAUIInspectable@@@Foundation@3@PAUEventRegistrationToken@@@Z @ 0x100086A0 (-add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UAGJPAU-$IEventHandler@PAUIInspectab.c)
 *     ?add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UAGJPAU?$IEventHandler@PAUIInspectable@@@Foundation@3@PAUEventRegistrationToken@@@Z @ 0x1000C210 (-add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UAGJPAU-$IEventHandler@PAUIInspectab.c)
 * Callees:
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AAEJPAU?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@PAXPAUEventRegistrationToken@@@Z @ 0x100089C0 (-AddInternal@-$EventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeO.c)
 *     ??$CreateAgileHelper@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@YGJPAU?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@PAPAU345@@Z @ 0x10008B20 (--$CreateAgileHelper@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microso.c)
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IAEKXZ @ 0x1000B9E1 (-InternalRelease@-$ComPtr@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@.c)
 */

int __stdcall Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
        int a1,
        int a2)
{
  int v2; // edi
  int v4; // [esp+8h] [ebp-4h] BYREF

  if ( !a1 )
    return -2147024809;
  v4 = 0;
  v2 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<IInspectable *>>(a1, &v4);
  if ( v2 >= 0 )
  {
    if ( v4 )
      v2 = Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
             v4,
             *(_DWORD *)(*(_DWORD *)a1 + 12),
             a2);
    else
      v2 = -2147024809;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(&v4);
  return v2;
}

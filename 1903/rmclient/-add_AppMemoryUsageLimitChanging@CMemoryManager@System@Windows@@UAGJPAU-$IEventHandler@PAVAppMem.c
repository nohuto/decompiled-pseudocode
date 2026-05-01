/*
 * XREFs of ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UAGJPAU?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PAUEventRegistrationToken@@@Z @ 0x10009230
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UAGKXZ @ 0x100092B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$Implements@U-$.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AAEJPAU?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PAXPAUEventRegistrationToken@@@Z @ 0x100092E0 (-AddInternal@-$EventSource@U-$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windo.c)
 *     ??$CreateAgileHelper@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@YGJPAU?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PAPAU345@@Z @ 0x10009530 (--$CreateAgileHelper@U-$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@F.c)
 *     ?Init@CMemoryManager@System@Windows@@CGJXZ @ 0x10009DC0 (-Init@CMemoryManager@System@Windows@@CGJXZ.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall Windows::System::CMemoryManager::add_AppMemoryUsageLimitChanging(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  void (__thiscall *v7)(_DWORD, int); // edi
  int v8; // [esp+Ch] [ebp-4h] BYREF

  result = Windows::System::CMemoryManager::Init();
  if ( result >= 0 )
  {
    if ( a2 )
    {
      v8 = 0;
      v4 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>>(
             a2,
             &v8);
      v5 = v8;
      v6 = v4;
      if ( v4 < 0 )
        goto LABEL_6;
      if ( v8 )
      {
        v6 = Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
               v8,
               *(_DWORD *)(*(_DWORD *)a2 + 12),
               a3);
LABEL_6:
        if ( v5 )
        {
          v7 = *(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v5 + 8);
          if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>::Release(v5);
          else
            v7(*(_DWORD *)(*(_DWORD *)v5 + 8), v5);
        }
        return v6;
      }
    }
    return -2147024809;
  }
  return result;
}

/*
 * XREFs of ??$InvokeAll@PEAVVirtualDesktopDataSource@@PEAUIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVVirtualDesktopDataSource@@PEAUIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18035530C
 * Callers:
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1803567B0 (-CurrentVirtualDesktopChanged@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?VirtualDesktopCreated@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180357AF0 (-VirtualDesktopCreated@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?VirtualDesktopDestroyed@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180357CF0 (-VirtualDesktopDestroyed@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs____Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_fac0f6d681df41980e3f062c9a85ea0a___ @ 0x180355258 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_180355258.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<VirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  *(_QWORD *)&v4 = &v5;
  *((_QWORD *)&v4 + 1) = &v6;
  return Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource___Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs____Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_fac0f6d681df41980e3f062c9a85ea0a___(
           a1,
           &v4);
}

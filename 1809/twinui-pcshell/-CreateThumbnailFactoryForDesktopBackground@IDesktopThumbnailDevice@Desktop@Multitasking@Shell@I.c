/*
 * XREFs of ?CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@UE$AAAPE$AAVDesktopBackgroundThumbnailFactory@23456@VRect@Foundation@6@@Z @ 0x18026F14C
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18026E4EC (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180283AF0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice::CreateThumbnailFactoryForDesktopBackground(
        __int64 a1,
        __int128 *a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v5 = *a2;
  v2 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)a1 + 56LL))(a1, &v5, &v6);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  v3 = __abi_winrt_ptr_ctor(v6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v3;
}

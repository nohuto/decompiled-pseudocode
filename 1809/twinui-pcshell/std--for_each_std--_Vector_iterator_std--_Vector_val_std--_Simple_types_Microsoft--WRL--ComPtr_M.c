/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___ @ 0x1802681D8
 * Callers:
 *     ?AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ @ 0x18026D69C (-AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18025B7BC (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x18026F540 (-DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableObjectArray@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180273EF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObs_ea_180273EF0.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *v6; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+68h] [rbp+10h]
  __int64 v14; // [rsp+70h] [rbp+18h]
  _QWORD *v15; // [rsp+78h] [rbp+20h]

  v15 = a4;
  v12 = a1;
  v6 = a2;
  if ( a2 != a3 )
  {
    v13 = (__int64 *)&v12;
    do
    {
      v12 = (_QWORD *)*v6;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
      v8 = __abi_winrt_cast_to(
             0,
             *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(*a4 + 200LL),
             (__int64)&_uuidof__AUIMonitorFrameDismissAnimationCallback__);
      v14 = v8;
      MonitorFrame::DismissAnimated(v12, v8);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v9 = (__int64)v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      ++v6;
    }
    while ( v6 != a3 );
  }
  *a1 = 0LL;
  if ( a1 != a4 )
  {
    *a1 = *a4;
    *a4 = 0LL;
  }
  v10 = *a4;
  if ( *a4 )
  {
    *a4 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::Release(v10);
  }
  return a1;
}

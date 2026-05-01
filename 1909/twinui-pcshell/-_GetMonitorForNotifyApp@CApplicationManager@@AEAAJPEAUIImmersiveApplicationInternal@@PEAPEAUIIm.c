/*
 * XREFs of ?_GetMonitorForNotifyApp@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18013BE18
 * Callers:
 *     ?NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x180134410 (-NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_GetMonitorForNotifyApp(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IImmersiveMonitor **a3)
{
  void (__fastcall *v6)(struct IImmersiveApplicationInternal *, struct IImmersiveMonitor **); // rbx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int v9; // ebx
  int v11; // [rsp+68h] [rbp+28h] BYREF
  struct IImmersiveMonitor *v12; // [rsp+70h] [rbp+30h] BYREF

  *a3 = 0LL;
  v12 = 0LL;
  v6 = *(void (__fastcall **)(struct IImmersiveApplicationInternal *, struct IImmersiveMonitor **))(*(_QWORD *)a2 + 464LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  v6(a2, &v12);
  (*(void (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)v12 + 48LL))(v12, &v11);
  if ( v11
    || (Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12),
        v7 = *((_QWORD *)this + 70),
        v8 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v7 + 72LL),
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12),
        v9 = v8(v7, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v12),
        v9 >= 0) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    *a3 = v12;
    v9 = 0;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  return (unsigned int)v9;
}

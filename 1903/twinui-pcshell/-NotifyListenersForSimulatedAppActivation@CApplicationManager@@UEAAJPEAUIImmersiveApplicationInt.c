/*
 * XREFs of ?NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x180114FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18011C6D4 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_GetMonitorForNotifyApp@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18011C978 (-_GetMonitorForNotifyApp@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIIm.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18011CB8C (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::NotifyListenersForSimulatedAppActivation(
        CApplicationManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))
{
  __int64 (__fastcall *v4)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  int MonitorForNotifyApp; // r15d
  char *v6; // r12
  struct ISyncIAMEventHandler *v7; // rbx
  void (__fastcall *v8)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, __int64, int, int, int); // r14
  __int64 v9; // rdi
  struct IObjectArray *v10; // rsi
  int v11; // eax
  __int64 v13[3]; // [rsp+40h] [rbp-18h] BYREF
  struct ISyncIAMEventHandler *v15; // [rsp+A8h] [rbp+50h] BYREF
  struct IObjectArray *v16; // [rsp+B0h] [rbp+58h] BYREF
  struct IImmersiveMonitor *v17; // [rsp+B8h] [rbp+60h] BYREF

  v13[1] = -2LL;
  v13[0] = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  MonitorForNotifyApp = v4((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v13);
  if ( MonitorForNotifyApp >= 0 )
  {
    v17 = 0LL;
    v6 = (char *)this - 240;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    MonitorForNotifyApp = CApplicationManager::_GetMonitorForNotifyApp(
                            (CApplicationManager *)((char *)this - 240),
                            (struct IImmersiveApplicationInternal *)a2,
                            &v17);
    if ( MonitorForNotifyApp >= 0 )
    {
      v16 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      MonitorForNotifyApp = CApplicationManager::_GetSingleMonitorObjectArray(
                              (CApplicationManager *)((char *)this - 240),
                              v17,
                              &v16);
      if ( MonitorForNotifyApp >= 0 )
      {
        v15 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
        MonitorForNotifyApp = CApplicationManager::_GetGlobalSyncEventHandler(
                                (CApplicationManager *)((char *)this - 240),
                                &v15);
        if ( MonitorForNotifyApp >= 0 )
        {
          v7 = v15;
          v8 = *(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, __int64, int, int, int))(*(_QWORD *)v15 + 24LL);
          v9 = v13[0];
          v10 = v16;
          v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *)))(*a2)[17])(a2);
          v8(v7, v10, ((unsigned __int64)this + 8) & -(__int64)(v6 != 0LL), v9, v11, 7, 0xFFFF);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  return (unsigned int)MonitorForNotifyApp;
}

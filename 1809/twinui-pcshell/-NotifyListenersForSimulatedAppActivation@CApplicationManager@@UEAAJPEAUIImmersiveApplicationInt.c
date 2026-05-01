/*
 * XREFs of ?NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1800F0620
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800F7318 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_GetMonitorForNotifyApp@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800F75C4 (-_GetMonitorForNotifyApp@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIIm.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1800F77C8 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::NotifyListenersForSimulatedAppActivation(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2)
{
  int MonitorForNotifyApp; // r15d
  char *v5; // r12
  __int64 v6; // rsi
  struct IObjectArray *v7; // r14
  struct ISyncIAMEventHandler *v8; // rbx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF
  struct ISyncIAMEventHandler *v14; // [rsp+A8h] [rbp+50h] BYREF
  struct IObjectArray *v15; // [rsp+B0h] [rbp+58h] BYREF
  struct IImmersiveMonitor *v16; // [rsp+B8h] [rbp+60h] BYREF

  v12[1] = -2LL;
  v12[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  MonitorForNotifyApp = (**(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a2)(
                          a2,
                          &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                          v12);
  if ( MonitorForNotifyApp >= 0 )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    v5 = (char *)this - 240;
    MonitorForNotifyApp = CApplicationManager::_GetMonitorForNotifyApp(
                            (CApplicationManager *)((char *)this - 240),
                            a2,
                            &v16);
    if ( MonitorForNotifyApp >= 0 )
    {
      v15 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      MonitorForNotifyApp = CApplicationManager::_GetSingleMonitorObjectArray(
                              (CApplicationManager *)((char *)this - 240),
                              v16,
                              &v15);
      if ( MonitorForNotifyApp >= 0 )
      {
        v14 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
        MonitorForNotifyApp = CApplicationManager::_GetGlobalSyncEventHandler(
                                (CApplicationManager *)((char *)this - 240),
                                &v14);
        if ( MonitorForNotifyApp >= 0 )
        {
          v6 = v12[0];
          v7 = v15;
          v8 = v14;
          v9 = *(_QWORD *)v14;
          v10 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 136LL))(a2);
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, __int64, int, int, int))(v9 + 24))(
            v8,
            v7,
            ((unsigned __int64)this + 8) & -(__int64)(v5 != 0LL),
            v6,
            v10,
            7,
            0xFFFF);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  return (unsigned int)MonitorForNotifyApp;
}

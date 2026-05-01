/*
 * XREFs of ?HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x1802E9070
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@PEAPEAVMonitorFrame@@@Z @ 0x1802E88B4 (-GetFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@PEAPEAVMonitorFrame@@@Z.c)
 *     ?GetImmersiveMonitorForNavigate@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@IPEAPEAU2@@Z @ 0x1802E8A38 (-GetImmersiveMonitorForNavigate@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@IPEAPEAU2@@Z.c)
 *     ?GetMonitorForHWND@XamlAllUpViewHost@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1802E8C10 (-GetMonitorForHWND@XamlAllUpViewHost@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall XamlAllUpViewHost::HandleCrossMonitorTabbing(XamlAllUpViewHost *this, HWND a2, int a3)
{
  XamlAllUpViewHost *v5; // rdi
  struct MonitorFrame *v6; // rsi
  int v7; // r14d
  struct MonitorFrame *v8; // rbx
  struct MonitorFrame *v9[3]; // [rsp+20h] [rbp-20h] BYREF
  int v10; // [rsp+38h] [rbp-8h]
  struct IImmersiveMonitor *v11; // [rsp+70h] [rbp+30h] BYREF
  struct IImmersiveMonitor *v12; // [rsp+88h] [rbp+48h] BYREF

  v9[1] = (struct MonitorFrame *)-2LL;
  v5 = (XamlAllUpViewHost *)((char *)this - 128);
  v6 = (struct MonitorFrame *)(((unsigned __int64)this - 104) & -(__int64)(this != (XamlAllUpViewHost *)128));
  v9[2] = v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v10 = v7;
  v11 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  if ( (int)XamlAllUpViewHost::GetMonitorForHWND(v5, a2, &v11) >= 0 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
    if ( (int)XamlAllUpViewHost::GetImmersiveMonitorForNavigate(v5, v11, a3, &v12) >= 0
      && v11 != v12
      && (int)XamlAllUpViewHost::GetFrameForMonitor(v5, v12, v9) >= 0 )
    {
      v9[0] = *((struct MonitorFrame **)v9[0] + 6);
      v8 = v9[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v9);
      (*(void (__fastcall **)(struct MonitorFrame *))(*(_QWORD *)v8 + 24LL))(v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v9);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  if ( v7 >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v6);
}

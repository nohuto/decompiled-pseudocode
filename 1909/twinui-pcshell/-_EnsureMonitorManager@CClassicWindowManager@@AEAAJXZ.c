/*
 * XREFs of ?_EnsureMonitorManager@CClassicWindowManager@@AEAAJXZ @ 0x180149D28
 * Callers:
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180051980 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::_EnsureMonitorManager(CClassicWindowManager *this)
{
  unsigned int Service; // ebx
  __int64 *v2; // rdi
  IUnknown *punk; // [rsp+48h] [rbp+10h] BYREF

  Service = 0;
  v2 = (__int64 *)((char *)this + 272);
  if ( !*((_QWORD *)this + 34) )
  {
    punk = 0LL;
    (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 4) + 32LL))(
      (char *)this + 32,
      &GUID_00000000_0000_0000_c000_000000000046,
      &punk);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
    Service = IUnknown_QueryService(
                punk,
                (const GUID *const)&SID_IImmersiveMonitorService,
                &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                (void **)v2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  }
  return Service;
}

/*
 * XREFs of ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x180046DC0
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180046FD0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x180046A08 (-DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?IsCurrentMonitorAlsoPrimary@ImmersiveMonitorHelper@@AEAA_NXZ @ 0x180046E28 (-IsCurrentMonitorAlsoPrimary@ImmersiveMonitorHelper@@AEAA_NXZ.c)
 *     ?IsCurrentMonitorConnected@ImmersiveMonitorHelper@@AEAA_NXZ @ 0x180046E60 (-IsCurrentMonitorConnected@ImmersiveMonitorHelper@@AEAA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x180316530 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ImmersiveMonitorHelper::AdjustMonitorConnectedIfNeeded(ImmersiveMonitorHelper *this)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD, GUID *, GUID *); // rbx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPARAM dwData; // [rsp+58h] [rbp+10h] BYREF
  struct IImmersiveMonitor *v10; // [rsp+60h] [rbp+18h] BYREF

  if ( !ImmersiveMonitorHelper::IsCurrentMonitorConnected(this)
    || !ImmersiveMonitorHelper::IsCurrentMonitorAlsoPrimary(this)
    || !ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(this, *((struct IImmersiveMonitor **)this + 8)) )
  {
    v10 = 0LL;
    v3 = *((_QWORD *)this + 9);
    v4 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *))(*(_QWORD *)v3 + 72LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    v5 = v4(v3, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
    v6 = retaddr;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, LPARAM *))(*(_QWORD *)v10 + 48LL))(v10, &dwData);
      v6 = retaddr;
      if ( v5 >= 0 )
      {
        if ( (_DWORD)dwData && ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(this, v10) )
        {
          ImmersiveMonitorHelper::ConnectToMonitor(this, v10);
          goto LABEL_10;
        }
LABEL_9:
        dwData = (LPARAM)this;
        EnumDisplayMonitors(
          0LL,
          0LL,
          CCLambdaAdapter<int (*)(HMONITOR__ *,HDC__ *,tagRECT *,__int64),4>::Adapt<_lambda_e1d8dfd296a10e855a8b37200bc3f556_>,
          (LPARAM)&dwData);
LABEL_10:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
        return 0LL;
      }
      v7 = 195LL;
    }
    else
    {
      v7 = 192LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v6,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v5,
      (int)&v10);
    goto LABEL_9;
  }
  return 0LL;
}

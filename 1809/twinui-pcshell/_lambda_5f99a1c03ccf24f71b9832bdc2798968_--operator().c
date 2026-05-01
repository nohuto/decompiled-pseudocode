/*
 * XREFs of _lambda_5f99a1c03ccf24f71b9832bdc2798968_::operator() @ 0x18029EF44
 * Callers:
 *     ??$Adapt@V_lambda_5f99a1c03ccf24f71b9832bdc2798968_@@@?$CCLambdaAdapter@P6AHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z$03@@SAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x18029EF30 (--$Adapt@V_lambda_5f99a1c03ccf24f71b9832bdc2798968_@@@-$CCLambdaAdapter@P6AHPEAUHMONITOR__@@PEAU.c)
 * Callees:
 *     ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18000B420 (-DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18029F020 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_5f99a1c03ccf24f71b9832bdc2798968_::operator()(ImmersiveMonitorHelper **a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IImmersiveMonitor *v9; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v9 = 0LL;
  v5 = *((_QWORD *)*a1 + 9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v5 + 72LL))(
         v5,
         a2,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &v9);
  if ( v6 >= 0 )
  {
    if ( ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(*a1, v9) )
    {
      ImmersiveMonitorHelper::ConnectToMonitor(*a1, v9);
      goto LABEL_4;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      202LL,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v6);
  }
  v4 = 1;
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  return v4;
}

/*
 * XREFs of ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001260
 * Callers:
 *     ?HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ @ 0x140001210 (-HandleDisplayModeChange@CDwmAppHost@@AEAAJXZ.c)
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140001410 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z @ 0x140002350 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z.c)
 *     ?OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z @ 0x140002C50 (-OnSettingChange@CDwmAppHost@@AEAAX_K_J@Z.c)
 * Callees:
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x1400012F0 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x140001380 (--1CPortClient@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1400017A0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140004A90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDwmAppHost::LpcNotifySettingsChange(CDwmAppHost *this, unsigned int a2, void *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  void *v7; // [rsp+28h] [rbp-70h]
  _BYTE v8[24]; // [rsp+30h] [rbp-68h] BYREF
  __int64 (__fastcall *v9)(_BYTE *, __int64, CDwmAppHost **, __int64); // [rsp+48h] [rbp-50h]
  __int64 v10; // [rsp+60h] [rbp-38h]
  CDwmAppHost *v11; // [rsp+A0h] [rbp+8h] BYREF

  v11 = this;
  if ( !*(&g_dwmAppHost + 1) )
    return 0LL;
  CPortClient::CPortClient((CPortClient *)v8, a2, a3);
  v10 = (__int64)*(&g_dwmAppHost + 1);
  LODWORD(v11) = 1073741872;
  HIDWORD(v11) = a2;
  v4 = v9(v8, 1073741872LL, &v11, 8LL);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x146u, v7);
  CPortClient::~CPortClient((CPortClient *)v8);
  return v5;
}

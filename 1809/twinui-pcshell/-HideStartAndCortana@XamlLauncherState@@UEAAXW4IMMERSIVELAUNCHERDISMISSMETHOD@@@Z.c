/*
 * XREFs of ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180076D90
 * Callers:
 *     ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180076D10 (-DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180010B30 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x180010C2C (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ??0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x1800116A4 (--0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ??4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180012014 (--4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180012474 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ??$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18007E2E8 (--$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x1802A3C24 (-LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncherState::HideStartAndCortana(__int64 a1, unsigned int a2)
{
  XamlLauncherState *v4; // rsi
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int128 v8; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v9; // [rsp+30h] [rbp-D8h]
  __int64 v10; // [rsp+38h] [rbp-D0h]
  __int64 v11; // [rsp+40h] [rbp-C8h]
  _BYTE v12[40]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v13; // [rsp+78h] [rbp-90h]
  _QWORD v14[40]; // [rsp+188h] [rbp+80h] BYREF

  v11 = -2LL;
  DWORD2(v8) = *(_DWORD *)(a1 + 40);
  v4 = (XamlLauncherState *)(a1 - 24);
  v9 = a1 - 24;
  LOBYTE(v10) = 1;
  if ( DWORD2(v8) == 5 )
    goto LABEL_2;
  if ( DWORD2(v8) == 3 )
    goto LABEL_9;
  if ( SDWORD2(v8) <= 11 )
    goto LABEL_17;
  if ( SDWORD2(v8) <= 14 )
  {
LABEL_2:
    *(_DWORD *)(a1 + 40) = 9;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
    goto LABEL_3;
  }
  if ( DWORD2(v8) == 16 )
  {
    *(_DWORD *)(a1 + 40) = 17;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56));
    goto LABEL_3;
  }
  if ( DWORD2(v8) == 20 )
  {
LABEL_9:
    CommonStartTelemetry::LauncherInvokeActivity::LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v12);
    if ( **(_DWORD **)(a1 + 312) == 1 && a2 == 7 )
    {
      v7 = CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(a1 + 264, v14, v6);
      CommonStartTelemetry::LauncherInvokeActivity::operator=((__int64)v12, (__int64)v7);
      CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v14);
      CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToForeground((CommonStartTelemetry::LauncherInvokeActivity *)v12);
    }
    *(_DWORD *)(a1 + 40) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), a2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
    if ( *v13 == 1 && a2 == 7 )
      XamlLauncherState::CompleteStartShowTelemetry(v4, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v12);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v12);
  }
  else
  {
LABEL_17:
    *(_BYTE *)(a1 + 941) = a2 == 7;
    if ( a2 == 7 )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
LABEL_3:
  LOBYTE(v10) = 0;
  return StartWindowTelemetry::HideStartAndCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
           (char *)&v8 + 8,
           (char *)v4 + 64);
}

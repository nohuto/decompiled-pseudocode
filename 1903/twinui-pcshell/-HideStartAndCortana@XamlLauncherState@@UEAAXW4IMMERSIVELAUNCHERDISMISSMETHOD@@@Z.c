/*
 * XREFs of ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18007A720
 * Callers:
 *     ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x18007A6A0 (-DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     ??4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004AAB4 (--4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18004AEE0 (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ??0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18004C030 (--0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x18004C2C4 (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18007C6D8 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ??$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180080F68 (--$HideStartAndCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x1802FC004 (-LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncherState::HideStartAndCortana(__int64 a1, unsigned int a2)
{
  XamlLauncherState *v4; // rsi
  _QWORD *v6; // rax
  __int128 v7; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v8; // [rsp+30h] [rbp-D8h]
  __int64 v9; // [rsp+38h] [rbp-D0h]
  __int64 v10; // [rsp+40h] [rbp-C8h]
  _BYTE v11[40]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v12; // [rsp+78h] [rbp-90h]
  _QWORD v13[40]; // [rsp+188h] [rbp+80h] BYREF

  v10 = -2LL;
  DWORD2(v7) = *(_DWORD *)(a1 + 40);
  v4 = (XamlLauncherState *)(a1 - 24);
  v8 = a1 - 24;
  LOBYTE(v9) = 1;
  if ( DWORD2(v7) == 5 )
    goto LABEL_2;
  if ( DWORD2(v7) == 3 )
    goto LABEL_9;
  if ( SDWORD2(v7) <= 11 )
    goto LABEL_17;
  if ( SDWORD2(v7) <= 14 )
  {
LABEL_2:
    *(_DWORD *)(a1 + 40) = 9;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
    goto LABEL_3;
  }
  if ( DWORD2(v7) == 16 )
  {
    *(_DWORD *)(a1 + 40) = 17;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56));
    goto LABEL_3;
  }
  if ( DWORD2(v7) == 20 )
  {
LABEL_9:
    CommonStartTelemetry::LauncherInvokeActivity::LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v11);
    if ( **(_DWORD **)(a1 + 320) == 1 && a2 == 7 )
    {
      v6 = CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(a1 + 272, v13);
      CommonStartTelemetry::LauncherInvokeActivity::operator=((__int64)v11, (__int64)v6);
      CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v13);
      CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToForeground((CommonStartTelemetry::LauncherInvokeActivity *)v11);
    }
    *(_DWORD *)(a1 + 40) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), a2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
    if ( *v12 == 1 && a2 == 7 )
      XamlLauncherState::CompleteStartShowTelemetry(v4, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v11);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v11);
  }
  else
  {
LABEL_17:
    *(_BYTE *)(a1 + 949) = a2 == 7;
    if ( a2 == 7 )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 88LL))(*(_QWORD *)(a1 + 64));
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
LABEL_3:
  LOBYTE(v9) = 0;
  return StartWindowTelemetry::HideStartAndCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
           (char *)&v7 + 8,
           (char *)v4 + 64);
}

/*
 * XREFs of IntelPptFilter_Create @ 0x1C00621C4
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C005BDD0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall IntelPptFilter_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  int v6; // esi
  __int64 v7; // rbx
  _QWORD v9[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+90h] [rbp+20h] BYREF

  memset(v9, 0, 0x38uLL);
  v9[3] = 0x100000001LL;
  v9[6] = off_1C004F090;
  v9[2] = IntelPptFilter_EvtDestoryCallback;
  LODWORD(v9[0]) = 56;
  v9[4] = a1;
  v6 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v9,
         &v10);
  if ( v6 < 0 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 72),
      2u,
      0x10u,
      0xBu,
      (__int64)&WPP_6c48406684fc3add5f2371f4d5718836_Traceguids,
      v6);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v10,
           off_1C004F090);
    *(_QWORD *)v7 = v10;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_i(
        *(_QWORD *)(a2 + 72),
        5u,
        0x10u,
        0xAu,
        (__int64)&WPP_6c48406684fc3add5f2371f4d5718836_Traceguids,
        v10);
    *(_QWORD *)(v7 + 8) = a2;
    *(_DWORD *)(v7 + 48) = 0;
    KeInitializeSpinLock((PKSPIN_LOCK)(v7 + 40));
    *a3 = v7;
    *(_QWORD *)(v7 + 24) = IntelPptFilter_FilterCommandCompletion;
    *(_QWORD *)(v7 + 16) = IntelPptFilter_FilterCommand;
    *(_QWORD *)(v7 + 32) = IntelPptFilter_ControllerResetPostReset;
    *(_QWORD *)(v7 + 56) = MmLockPagableDataSection(IntelPptFilter_FilterCommand);
  }
  return (unsigned int)v6;
}

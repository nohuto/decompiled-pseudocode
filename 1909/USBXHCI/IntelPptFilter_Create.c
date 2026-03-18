/*
 * XREFs of IntelPptFilter_Create @ 0x1C006A374
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0063470 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall IntelPptFilter_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  int v5; // edi
  __int64 v6; // rbx
  int v8; // [rsp+28h] [rbp-48h]
  int v9; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+34h] [rbp-3Ch]
  int v11; // [rsp+3Ch] [rbp-34h]
  void (__fastcall *v12)(__int64); // [rsp+40h] [rbp-30h]
  int v13; // [rsp+48h] [rbp-28h]
  int v14; // [rsp+4Ch] [rbp-24h]
  __int64 v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp-18h]
  void *v17; // [rsp+60h] [rbp-10h]
  __int64 v18; // [rsp+90h] [rbp+20h] BYREF

  v15 = a1;
  v10 = 0LL;
  v11 = 0;
  v16 = 0LL;
  v13 = 1;
  v14 = 1;
  v17 = off_1C00560B8;
  v12 = IntelPptFilter_EvtDestoryCallback;
  v9 = 56;
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, int *, __int64 *))(WdfFunctions_01023 + 1656))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         &v9,
         &v18);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 72),
        2u,
        0x10u,
        0xBu,
        (__int64)&WPP_6c48406684fc3add5f2371f4d5718836_Traceguids,
        v8);
    }
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v18,
           off_1C00560B8);
    *(_QWORD *)v6 = v18;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_i(
        *(_QWORD *)(a2 + 72),
        5u,
        0x10u,
        0xAu,
        (__int64)&WPP_6c48406684fc3add5f2371f4d5718836_Traceguids,
        v18);
    *(_QWORD *)(v6 + 8) = a2;
    *(_DWORD *)(v6 + 48) = 0;
    KeInitializeSpinLock((PKSPIN_LOCK)(v6 + 40));
    *a3 = v6;
    *(_QWORD *)(v6 + 24) = IntelPptFilter_FilterCommandCompletion;
    *(_QWORD *)(v6 + 16) = IntelPptFilter_FilterCommand;
    *(_QWORD *)(v6 + 32) = IntelPptFilter_ControllerResetPostReset;
    *(_QWORD *)(v6 + 56) = MmLockPagableDataSection(IntelPptFilter_FilterCommand);
  }
  return (unsigned int)v5;
}

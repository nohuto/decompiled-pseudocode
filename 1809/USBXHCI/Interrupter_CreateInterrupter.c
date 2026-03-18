/*
 * XREFs of Interrupter_CreateInterrupter @ 0x1C005E028
 * Callers:
 *     Interrupter_Create @ 0x1C005DF98 (Interrupter_Create.c)
 *     Interrupter_PrepareHardware @ 0x1C005EB9C (Interrupter_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000953C (WPP_RECORDER_SF_qd.c)
 *     Controller_IsSecureDevice @ 0x1C000CF68 (Controller_IsSecureDevice.c)
 *     Counter_CreateInterrupterInstance @ 0x1C0062444 (Counter_CreateInterrupterInstance.c)
 */

__int64 __fastcall Interrupter_CreateInterrupter(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        _QWORD *a7)
{
  _QWORD *v7; // r15
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // esi
  unsigned __int16 v14; // r9
  unsigned __int16 v15; // r9
  __int64 v16; // rbx
  __int64 v18; // [rsp+28h] [rbp-B9h]
  _QWORD *v19; // [rsp+40h] [rbp-A1h] BYREF
  _QWORD v20[7]; // [rsp+48h] [rbp-99h] BYREF
  _QWORD v21[20]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v24; // [rsp+148h] [rbp+67h] BYREF

  v7 = a7;
  if ( a4 || a5 || a7 )
  {
    memset(v21, 0, 0x68uLL);
    v21[4] = 0LL;
    v21[3] = Interrupter_WdfEvtInterruptIsr;
    LODWORD(v21[0]) = 104;
    v21[5] = Interrupter_WdfEvtInterruptEnable;
    v21[6] = Interrupter_WdfEvtInterruptDisable;
    LODWORD(v21[2]) = 2;
    HIDWORD(v21[11]) = 2;
    v21[8] = a4;
    v21[9] = a5;
    if ( Controller_IsSecureDevice(a2) )
      v21[7] = Interrupter_WdfEvtInterruptWorkItem;
    else
      v21[4] = Interrupter_WdfEvtInterruptDpc;
    memset(v20, 0, sizeof(v20));
    v20[6] = off_1C004F2E8;
    LODWORD(v20[0]) = 56;
    v20[1] = Interrupter_WdfEvtCleanupCallback;
    v20[3] = 0x100000001LL;
    v11 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01023 + 1128))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a1,
            v21,
            v20,
            &v24);
    v12 = *(_QWORD *)(a2 + 72);
    v13 = v11;
    if ( v11 < 0 )
    {
      v14 = 13;
      goto LABEL_6;
    }
    v15 = 14;
  }
  else
  {
    memset(v20, 0, sizeof(v20));
    v20[6] = off_1C004F2E8;
    LODWORD(v20[0]) = 56;
    v20[3] = 0x100000001LL;
    v20[4] = a1;
    v11 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v20,
            &v24);
    v12 = *(_QWORD *)(a2 + 72);
    v13 = v11;
    if ( v11 < 0 )
    {
      v14 = 11;
      goto LABEL_6;
    }
    v15 = 12;
  }
  WPP_RECORDER_SF_qd(v12, 4u, 9u, v15, (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids, v24, a3);
  v16 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          v24,
          off_1C004F2E8);
  *(_QWORD *)v16 = v24;
  *(_QWORD *)(v16 + 8) = a2;
  *(_DWORD *)(v16 + 32) = a3;
  KeInitializeSpinLock((PKSPIN_LOCK)(v16 + 208));
  Counter_CreateInterrupterInstance(v16);
  *a6 = v16;
  if ( !v7 )
    return v13;
  memset(v20, 0, sizeof(v20));
  v20[6] = off_1C004F158;
  LODWORD(v20[0]) = 56;
  v20[3] = 0x100000001LL;
  v11 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD *, _QWORD **))(WdfFunctions_01023 + 1624))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          v24,
          v20,
          &v19);
  v13 = v11;
  if ( v11 >= 0 )
  {
    *v19 = a1;
    v19[1] = a2;
    *v7 = v19;
    return v13;
  }
  v12 = *(_QWORD *)(a2 + 72);
  v14 = 15;
LABEL_6:
  LODWORD(v18) = v11;
  WPP_RECORDER_SF_d(v12, 2u, 9u, v14, (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids, v18);
  return v13;
}

/*
 * XREFs of Interrupter_CreateInterrupter @ 0x1C0065AE8
 * Callers:
 *     Interrupter_Create @ 0x1C0065A48 (Interrupter_Create.c)
 *     Interrupter_PrepareHardware @ 0x1C00667BC (Interrupter_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C000B5C4 (WPP_RECORDER_SF_qd.c)
 *     Controller_IsSecureDevice @ 0x1C000F418 (Controller_IsSecureDevice.c)
 *     Counter_CreateInterrupterInstance @ 0x1C006A61C (Counter_CreateInterrupterInstance.c)
 */

__int64 __fastcall Interrupter_CreateInterrupter(
        unsigned __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        unsigned __int64 **a7)
{
  unsigned __int64 **v10; // r13
  int v11; // eax
  unsigned int v12; // r14d
  unsigned __int16 v13; // r9
  unsigned __int16 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v18; // [rsp+28h] [rbp-B9h]
  unsigned __int64 *v19; // [rsp+40h] [rbp-A1h] BYREF
  _BYTE v20[56]; // [rsp+48h] [rbp-99h] BYREF
  _QWORD v21[20]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v24; // [rsp+148h] [rbp+67h] BYREF

  memset(v21, 0, 0x68uLL);
  v10 = a7;
  if ( a4 || a5 || a7 )
  {
    LODWORD(v21[0]) = 104;
    v21[3] = Interrupter_WdfEvtInterruptIsr;
    v21[5] = Interrupter_WdfEvtInterruptEnable;
    v21[6] = Interrupter_WdfEvtInterruptDisable;
    LODWORD(v21[2]) = 2;
    v21[4] = 0LL;
    HIDWORD(v21[11]) = 2;
    v21[8] = a4;
    v21[9] = a5;
    if ( Controller_IsSecureDevice(a2) )
      v21[7] = Interrupter_WdfEvtInterruptWorkItem;
    else
      v21[4] = Interrupter_WdfEvtInterruptDpc;
    *(_QWORD *)&v20[48] = off_1C0056310;
    *(_QWORD *)&v20[16] = v15;
    *(_QWORD *)&v20[8] = Interrupter_WdfEvtCleanupCallback;
    *(_QWORD *)v20 = 56LL;
    *(_OWORD *)&v20[32] = 0LL;
    *(_DWORD *)&v20[24] = 1;
    *(_DWORD *)&v20[28] = 1;
    v11 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD *, _BYTE *, __int64 *))(WdfFunctions_01023 + 1128))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a1,
            v21,
            v20,
            &v24);
    v12 = v11;
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v12;
      v13 = 13;
      goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 14;
      goto LABEL_18;
    }
  }
  else
  {
    *(_QWORD *)&v20[48] = off_1C0056310;
    memset(&v20[4], 0, 20);
    *(_DWORD *)v20 = 56;
    *(_DWORD *)&v20[24] = 1;
    *(_DWORD *)&v20[28] = 1;
    *(_OWORD *)&v20[32] = a1;
    v11 = (*(__int64 (__fastcall **)(unsigned __int64, _BYTE *, __int64 *))(WdfFunctions_01023 + 1656))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v20,
            &v24);
    v12 = v11;
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 11;
LABEL_7:
        LODWORD(v18) = v11;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 72),
          2u,
          9u,
          v13,
          (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
          v18);
        return v12;
      }
      return v12;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 12;
LABEL_18:
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(a2 + 72),
        4u,
        9u,
        v14,
        (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
        v24,
        a3);
    }
  }
  v16 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          v24,
          off_1C0056310);
  *(_QWORD *)v16 = v24;
  *(_QWORD *)(v16 + 8) = a2;
  *(_DWORD *)(v16 + 32) = a3;
  KeInitializeSpinLock((PKSPIN_LOCK)(v16 + 208));
  Counter_CreateInterrupterInstance(v16);
  *a6 = v16;
  if ( v10 )
  {
    memset(v20, 0, sizeof(v20));
    *(_QWORD *)&v20[48] = off_1C0056180;
    *(_DWORD *)v20 = 56;
    *(_DWORD *)&v20[24] = 1;
    *(_DWORD *)&v20[28] = 1;
    v11 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _BYTE *, unsigned __int64 **))(WdfFunctions_01023 + 1624))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v24,
            v20,
            &v19);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *v19 = a1;
      v19[1] = a2;
      *v10 = v19;
      return v12;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 15;
      goto LABEL_7;
    }
  }
  return v12;
}

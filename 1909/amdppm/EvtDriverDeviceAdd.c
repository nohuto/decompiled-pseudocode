/*
 * XREFs of EvtDriverDeviceAdd @ 0x1C001FB10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     ProcLibDeviceCreate @ 0x1C00265C4 (ProcLibDeviceCreate.c)
 */

__int64 __fastcall EvtDriverDeviceAdd(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  int v4; // ebx
  __int64 v5; // r9
  unsigned __int16 v6; // r9
  void *v7; // rdi
  unsigned int v8; // r8d
  __int64 v10; // [rsp+28h] [rbp-D8h]
  _QWORD v11[6]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[56]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v13[7]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v14[22]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v15; // [rsp+1A8h] [rbp+A8h] BYREF
  char v16; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v17; // [rsp+1B8h] [rbp+B8h] BYREF

  v15 = a2;
  memset(v12, 0, sizeof(v12));
  memset(v13, 0, sizeof(v13));
  memset(v11, 0, sizeof(v11));
  memset(v14, 0, 0x90uLL);
  v14[5] = EvtDevicePrepareHardware;
  LODWORD(v14[0]) = 144;
  v14[6] = EvtDeviceReleaseHardware;
  v14[14] = EvtDeviceQueryStop;
  v14[1] = EvtDeviceD0Entry;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, a2, v14);
  v16 = 2;
  LOBYTE(v3) = 22;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64, char *, int))(WdfFunctions_01015 + 584))(
         WdfDriverGlobals,
         v15,
         EvtDeviceSetPower,
         v3,
         &v16,
         1);
  if ( v4 >= 0 )
  {
    v16 = 20;
    LOBYTE(v5) = 27;
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64, char *, int))(WdfFunctions_01015 + 584))(
           WdfDriverGlobals,
           v15,
           EvtDeviceWdmIrpPreprocessPnp,
           v5,
           &v16,
           1);
    if ( v4 >= 0 )
    {
      v13[6] = off_1C0013018;
      LODWORD(v13[0]) = 56;
      v13[3] = 0x100000001LL;
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 600))(
             WdfDriverGlobals,
             &v15,
             v13,
             &v17);
      if ( v4 >= 0 )
      {
        v7 = (void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                       WdfDriverGlobals,
                       v17,
                       off_1C0013018);
        v4 = ProcLibDeviceCreate(v7);
        if ( v4 >= 0 )
        {
          *(_DWORD *)&v12[4] = 0;
          memset(&v11[3], 0, 24);
          *(_QWORD *)&v12[16] = AcpiCStateIdleCancel;
          *(_QWORD *)&v12[24] = AcpiCStateIdleCancel;
          *(_QWORD *)&v12[48] = ProcLibThermalNotification;
          v11[1] = v12;
          v11[2] = &GUID_THERMAL_COOLING_INTERFACE;
          *(_OWORD *)&v12[32] = 0LL;
          *(_DWORD *)v12 = 65592;
          *(_QWORD *)&v12[8] = v7;
          v11[0] = 48LL;
          v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1824))(
                 WdfDriverGlobals,
                 v17,
                 v11);
          if ( v4 >= 0 )
          {
            v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
                   WdfDriverGlobals,
                   v17,
                   &GUID_DEVINTERFACE_THERMAL_COOLING,
                   0LL);
            if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v6 = 17;
              goto LABEL_19;
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v6 = 16;
            goto LABEL_19;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v6 = 15;
          v8 = 3;
LABEL_20:
          LODWORD(v10) = v4;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            v8,
            v6,
            (__int64)&WPP_aa9d9c6c8741343c67d4469f91515e40_Traceguids,
            v10);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 14;
        goto LABEL_19;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 13;
      goto LABEL_19;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 12;
LABEL_19:
    v8 = 4;
    goto LABEL_20;
  }
  return (unsigned int)v4;
}

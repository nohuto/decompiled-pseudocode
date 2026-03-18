/*
 * XREFs of Controller_WdfEvtDeviceAdd @ 0x1C005BDD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Controller_AddControllerToGlobalControllerList @ 0x1C000B3A0 (Controller_AddControllerToGlobalControllerList.c)
 *     Controller_QueryControllerCapabilitiesFromACPI @ 0x1C000D654 (Controller_QueryControllerCapabilitiesFromACPI.c)
 *     Device_IsSecureDevice @ 0x1C001154C (Device_IsSecureDevice.c)
 *     Etw_ControllerCreate @ 0x1C0038FFC (Etw_ControllerCreate.c)
 *     Command_Create @ 0x1C0057170 (Command_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C0057888 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_ConfigureSxWakeSettings @ 0x1C0057B24 (Controller_ConfigureSxWakeSettings.c)
 *     Controller_Create @ 0x1C0057BD4 (Controller_Create.c)
 *     Controller_CreateWdfDevice @ 0x1C00587E0 (Controller_CreateWdfDevice.c)
 *     Controller_ExecuteDSM @ 0x1C0059160 (Controller_ExecuteDSM.c)
 *     DeviceSlot_Create @ 0x1C005C904 (DeviceSlot_Create.c)
 *     Interrupter_Create @ 0x1C005DF98 (Interrupter_Create.c)
 *     IoControl_Create @ 0x1C005F514 (IoControl_Create.c)
 *     Register_Create @ 0x1C005F678 (Register_Create.c)
 *     RootHub_Create @ 0x1C0060810 (RootHub_Create.c)
 *     Wmi_Create @ 0x1C0061FD0 (Wmi_Create.c)
 *     IntelPptFilter_Create @ 0x1C00621C4 (IntelPptFilter_Create.c)
 *     SecureChannel_Create @ 0x1C0063038 (SecureChannel_Create.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceAdd(__int64 a1, __int64 a2)
{
  __m128i *v3; // rdi
  int v4; // eax
  int WdfDevice; // ebx
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  int v22; // [rsp+28h] [rbp-21h]
  int v23; // [rsp+28h] [rbp-21h]
  int v24; // [rsp+28h] [rbp-21h]
  int v25; // [rsp+28h] [rbp-21h]
  int v26; // [rsp+28h] [rbp-21h]
  int v27; // [rsp+28h] [rbp-21h]
  int v28; // [rsp+28h] [rbp-21h]
  int v29; // [rsp+28h] [rbp-21h]
  int v30; // [rsp+28h] [rbp-21h]
  int v31; // [rsp+28h] [rbp-21h]
  int v32; // [rsp+28h] [rbp-21h]
  int v33[2]; // [rsp+30h] [rbp-19h] BYREF
  int v34[2]; // [rsp+38h] [rbp-11h] BYREF
  int v35; // [rsp+40h] [rbp-9h] BYREF
  __m128i *v36; // [rsp+48h] [rbp-1h] BYREF
  __int64 v37; // [rsp+50h] [rbp+7h] BYREF
  int v38; // [rsp+58h] [rbp+Fh]
  int v39; // [rsp+5Ch] [rbp+13h]
  __int64 v40; // [rsp+60h] [rbp+17h]
  char v41; // [rsp+68h] [rbp+1Fh]
  int v42; // [rsp+6Ch] [rbp+23h]
  char v43; // [rsp+70h] [rbp+27h]

  v37 = 48LL;
  v36 = 0LL;
  v43 = 0;
  v3 = 0LL;
  v40 = 0LL;
  v41 = 0;
  v42 = 16;
  v38 = 1024;
  v39 = 200;
  imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v37, v33);
  v4 = ((__int64 (__fastcall *)(__int64, __int64))qword_1C00506C8)(UcxDriverGlobals, a2);
  WdfDevice = v4;
  if ( v4 >= 0 )
  {
    WdfDevice = Controller_CreateWdfDevice(a2, *(__int64 *)v33, v34, (unsigned int *)&v35);
    if ( WdfDevice < 0 )
      return (unsigned int)WdfDevice;
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     *(_QWORD *)v34,
                     off_1C004F3B0);
    if ( Device_IsSecureDevice((__int64)v6) && (v8 = SecureChannel_Create(v7, v7 + 40), WdfDevice = v8, v8 < 0) )
    {
      v23 = v8;
      WPP_RECORDER_SF_d(*(__int64 *)v33, 2u, 4u, 0xBu, (__int64)&Context.Logger + 4, v23);
    }
    else
    {
      v9 = Controller_Create(*(__int64 *)v34, *(__int64 *)v33, v35, (__int64 *)&v36);
      WdfDevice = v9;
      if ( v9 >= 0 )
      {
        v3 = v36;
        v6[1] = v36;
        (*(void (__fastcall **)(unsigned __int64, __int64, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01023 + 1640))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          v3->m128i_i64[1],
          Controller_WdfEvtDeviceAdd,
          337LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
        v10 = IoControl_Create(*(_QWORD *)v34, v3, &v3[5]);
        WdfDevice = v10;
        if ( v10 >= 0 )
        {
          v11 = Register_Create(v3, &v3[5].m128i_u64[1]);
          WdfDevice = v11;
          if ( v11 >= 0 )
          {
            v12 = Interrupter_Create(*(_QWORD *)v34, v3, &v3[8]);
            WdfDevice = v12;
            if ( v12 >= 0 )
            {
              v14 = DeviceSlot_Create(v13, v3, &v3[8].m128i_u64[1]);
              WdfDevice = v14;
              if ( v14 >= 0 )
              {
                v16 = Command_Create(v15, (__int64)v3, v3[9].m128i_i64);
                WdfDevice = v16;
                if ( v16 >= 0 )
                {
                  v17 = &v3[10].m128i_i64[1];
                  if ( (v3[17].m128i_i64[0] & 0x800000) != 0 )
                  {
                    WdfDevice = IntelPptFilter_Create(*(_QWORD *)v34, v3, &v3[10].m128i_u64[1]);
                  }
                  else
                  {
                    *v17 = 0LL;
                    WdfDevice = 0;
                  }
                  if ( WdfDevice >= 0 )
                  {
                    v18 = RootHub_Create(v17, v3, &v3[9].m128i_u64[1]);
                    WdfDevice = v18;
                    if ( v18 >= 0 )
                    {
                      v19 = Wmi_Create(*(_QWORD *)v34, v3, &v3[10]);
                      WdfDevice = v19;
                      if ( v19 >= 0 )
                      {
                        *v6 = g_UsbXhciTriageInfo;
                        Controller_ConfigureS0IdleSettings(v3->m128i_i64);
                        Controller_ConfigureSxWakeSettings(v3->m128i_i64);
                        KeInitializeSpinLock(&v3[2].m128i_u64[1]);
                        v3[3].m128i_i64[1] = (__int64)v3[3].m128i_i64;
                        v3[3].m128i_i64[0] = (__int64)v3[3].m128i_i64;
                        v3[4].m128i_i32[0] = 0;
                        v3[20].m128i_i32[2] = 5;
                        Controller_AddControllerToGlobalControllerList((__int64)v3);
                        Etw_ControllerCreate(v20, (__int64)v3);
                        Controller_QueryControllerCapabilitiesFromACPI((__int64)v3);
                        if ( (_mm_srli_si128(v3[17], 8).m128i_u8[0] & 1) != 0 )
                          Controller_ExecuteDSM(v3->m128i_i64, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, 1, 1, 0LL, 0);
                      }
                      else
                      {
                        v32 = v19;
                        WPP_RECORDER_SF_d(*(__int64 *)v33, 2u, 4u, 0x14u, (__int64)&Context.Logger + 4, v32);
                      }
                    }
                    else
                    {
                      v31 = v18;
                      WPP_RECORDER_SF_d(*(__int64 *)v33, 2u, 4u, 0x13u, (__int64)&Context.Logger + 4, v31);
                    }
                  }
                  else
                  {
                    v30 = WdfDevice;
                    WPP_RECORDER_SF_d(*(__int64 *)v33, 2u, 4u, 0x12u, (__int64)&Context.Logger + 4, v30);
                  }
                }
                else
                {
                  v29 = v16;
                  WPP_RECORDER_SF_d(*(__int64 *)v33, 2u, 4u, 0x11u, (__int64)&Context.Logger + 4, v29);
                }
              }
              else
              {
                v28 = v14;
                WPP_RECORDER_SF_d(*(__int64 *)v33, 2u, 4u, 0x10u, (__int64)&Context.Logger + 4, v28);
              }
            }
            else
            {
              v27 = v12;
              WPP_RECORDER_SF_d(*(__int64 *)v33, 2u, 4u, 0xFu, (__int64)&Context.Logger + 4, v27);
            }
          }
          else
          {
            v26 = v11;
            WPP_RECORDER_SF_d(*(__int64 *)v33, 2u, 4u, 0xEu, (__int64)&Context.Logger + 4, v26);
          }
        }
        else
        {
          v25 = v10;
          WPP_RECORDER_SF_d(*(__int64 *)v33, 2u, 4u, 0xDu, (__int64)&Context.Logger + 4, v25);
        }
      }
      else
      {
        v24 = v9;
        WPP_RECORDER_SF_d(*(__int64 *)v33, 2u, 4u, 0xCu, (__int64)&Context.Logger + 4, v24);
        v3 = v36;
      }
    }
  }
  else
  {
    v22 = v4;
    WPP_RECORDER_SF_d(*(__int64 *)v33, 2u, 4u, 0xAu, (__int64)&Context.Logger + 4, v22);
  }
  if ( WdfDevice < 0 && v3 )
    (*(void (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 1664))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      v3->m128i_i64[1]);
  return (unsigned int)WdfDevice;
}

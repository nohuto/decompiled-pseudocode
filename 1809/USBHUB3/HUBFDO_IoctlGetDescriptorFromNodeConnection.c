/*
 * XREFs of HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C006C858
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C006DEA0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C000175C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddDsmEvent @ 0x1C0008F70 (HUBSM_AddDsmEvent.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x1C000C16C (HUBFDO_CompleteGetDescriptorRequest.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002CCD0 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003C640 (memmove.c)
 *     memset @ 0x1C003C980 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C006B6D0 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetDescriptorFromNodeConnection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // r13d
  unsigned int v8; // ebx
  __int64 v9; // rax
  _QWORD *v10; // rdi
  int v11; // eax
  int v12; // r12d
  struct _MCGEN_TRACE_CONTEXT *v13; // rcx
  __int64 v14; // rsi
  unsigned __int64 v15; // r8
  _DWORD *v16; // r9
  __int64 v17; // rsi
  _DWORD *v18; // r14
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  unsigned __int16 *v22; // rdx
  char v23; // al
  unsigned __int16 v24; // r10
  size_t v25; // r8
  _DWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  _DWORD *v30; // rax
  __int64 v31; // rbx
  __int64 v33; // [rsp+20h] [rbp-79h]
  _DWORD *v34; // [rsp+30h] [rbp-69h] BYREF
  __int64 v35; // [rsp+38h] [rbp-61h]
  __int64 v36; // [rsp+40h] [rbp-59h]
  __int64 v37; // [rsp+48h] [rbp-51h]
  _QWORD v38[9]; // [rsp+50h] [rbp-49h] BYREF
  char v39; // [rsp+98h] [rbp-1h] BYREF

  v35 = a2;
  v36 = a1;
  v7 = 0;
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v9,
                    off_1C005F0E0);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, _DWORD **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v34,
          0LL);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v12 = HUBFDO_IoctlValidateParameters((__int64)v10, 4uLL, a4, v34, 0xDuLL, a3);
    if ( v12 < 0 )
      return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v7, v35, v12, v8);
    v7 = *(unsigned __int16 *)v34;
    if ( a3 != 12 )
      memset(v34 + 3, 0, a3 - 12);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, v35);
      v13 = (struct _MCGEN_TRACE_CONTEXT *)((int)HUBMISC_GetActivityIdIrp() >= 0);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      {
        LOBYTE(v13) = -(char)v13;
        LODWORD(v33) = v7;
        McTemplateK0pq(
          v13,
          &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION_START,
          (const GUID *)((unsigned __int64)&v39 & -(__int64)((_BYTE)v13 != 0)),
          v10[31],
          v33);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v10[2]);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
            WdfDriverGlobals,
            v10[2],
            0LL,
            1LL);
    if ( !v14 )
      goto LABEL_45;
    do
    {
      if ( v14 != v10[327]
        && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v14,
                                   off_1C005F040)
                               + 48) == v7 )
      {
        break;
      }
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v10[2],
              v14,
              1LL);
    }
    while ( v14 );
    if ( !v14
      || (v37 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  v14,
                  off_1C005F040),
          (v17 = *(_QWORD *)(v37 + 24)) == 0)
      || (*(_DWORD *)(v17 + 1636) & 2) == 0 )
    {
LABEL_45:
      v12 = -1073741810;
      goto LABEL_46;
    }
    v18 = v34;
    v15 = *((unsigned __int8 *)v34 + 7);
    v19 = *((unsigned __int8 *)v34 + 7);
    *((_WORD *)v34 + 2) = 1664;
    v20 = v19 - 1;
    if ( !v20 )
    {
      v22 = (unsigned __int16 *)(v17 + 1988);
      v8 = a3 - 12;
      if ( (unsigned __int64)(unsigned int)a3 - 12 > 0x12 )
        v8 = 18;
      goto LABEL_44;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      if ( v21 == 13 )
      {
        v22 = *(unsigned __int16 **)(v17 + 2056);
        if ( v22 )
        {
LABEL_20:
          if ( v22[1] >= (unsigned __int64)(unsigned int)a3 - 12 )
            v8 = a3 - 12;
          else
            v8 = v22[1];
LABEL_44:
          v26 = v34 + 3;
          v25 = v8;
          goto LABEL_39;
        }
      }
    }
    else
    {
      v22 = *(unsigned __int16 **)(v17 + 2016);
      if ( v22 && !*((_BYTE *)v18 + 6) )
        goto LABEL_20;
    }
    if ( (_BYTE)v15 != 3 )
      goto LABEL_41;
    v23 = *((_BYTE *)v18 + 6);
    if ( !v23 || v23 != *(_BYTE *)(v17 + 2004) || *((_WORD *)v18 + 4) != 1033 )
      goto LABEL_41;
    if ( (*(_DWORD *)(v17 + 1632) & 0x40) == 0 )
    {
      v12 = -1073741823;
      goto LABEL_46;
    }
    v8 = a3 - 12;
    v24 = (*(_DWORD *)(v17 + 1636) & 0x800) != 0 ? 0xC : 0;
    v15 = (unsigned int)a3 - 12LL;
    if ( (unsigned __int16)(*(_WORD *)(v17 + 2148) - v24) < v15 )
      v8 = (unsigned __int16)(*(_WORD *)(v17 + 2148) - v24);
    if ( v8 > *((unsigned __int16 *)v18 + 5) )
    {
LABEL_41:
      v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              v36,
              off_1C005F1D0);
      *(_QWORD *)(v27 + 152) = *(_QWORD *)(v18 + 1);
      v28 = v27 + 24;
      *(_QWORD *)(v27 + 32) = *(_QWORD *)(*(_QWORD *)(v37 + 24) + 24LL);
      v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v17);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v29,
        "User Mode FDO Request",
        3961LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v10[2]);
      *(_DWORD *)v28 = 3276936;
      *(_DWORD *)(v28 + 36) = a3 - 12;
      *(_DWORD *)(v28 + 32) = 11;
      v30 = v34;
      *(_QWORD *)(v28 + 48) = 0LL;
      *(_QWORD *)(v28 + 40) = v30 + 3;
      *(_DWORD *)(v28 + 56) = 5000;
      memset(v38, 0, sizeof(v38));
      v38[1] = v28;
      v31 = v35;
      LOBYTE(v38[0]) = 15;
      LODWORD(v38[3]) = 2228227;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
        WdfDriverGlobals,
        v35,
        v38);
      *(_QWORD *)(v17 + 496) = v31;
      return HUBSM_AddDsmEvent(v17, 4051LL);
    }
    v16 = v34;
    if ( (_BYTE)v8 )
      *((_BYTE *)v34 + 12) = v8;
    if ( (unsigned __int8)v8 > 1u )
      *((_BYTE *)v16 + 13) = 3;
    if ( (unsigned __int8)v8 <= 2u )
      goto LABEL_46;
    v25 = (unsigned int)(unsigned __int8)v8 - 2;
    v22 = (unsigned __int16 *)(*(_QWORD *)(v17 + 2152) + 2 * ((unsigned __int64)v24 >> 1));
    v26 = (_DWORD *)((char *)v16 + 14);
LABEL_39:
    memmove(v26, v22, v25);
LABEL_46:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, unsigned __int64, _DWORD *))(WdfFunctions_01015 + 1088))(
      WdfDriverGlobals,
      v10[2],
      v15,
      v16);
    return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v7, v35, v12, v8);
  }
  WPP_RECORDER_SF_d(v10[315], 2u, 3u, 0x2Au, (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids, v11);
  return HUBFDO_CompleteGetDescriptorRequest((__int64)v10, v7, v35, v12, v8);
}

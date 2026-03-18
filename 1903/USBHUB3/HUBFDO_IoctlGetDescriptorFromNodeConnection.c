/*
 * XREFs of HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0072B74
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0074290 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C0001864 (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddDsmEvent @ 0x1C00097E0 (HUBSM_AddDsmEvent.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x1C000CE84 (HUBFDO_CompleteGetDescriptorRequest.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002F49C (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041300 (memmove.c)
 *     memset @ 0x1C0041640 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C00718F0 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetDescriptorFromNodeConnection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v8; // r13d
  unsigned int v9; // ebx
  __int64 v10; // rax
  _QWORD *v11; // rdi
  int v12; // r12d
  struct _MCGEN_TRACE_CONTEXT *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rsi
  _DWORD *v16; // r14
  char v17; // r8
  unsigned __int16 *v18; // rdx
  char v19; // al
  unsigned __int16 v20; // r10
  _DWORD *v21; // r9
  size_t v22; // r8
  _DWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  _DWORD *v27; // rax
  __int64 v28; // rbx
  __int64 v30; // [rsp+20h] [rbp-79h]
  _DWORD *v31; // [rsp+30h] [rbp-69h] BYREF
  __int64 v32; // [rsp+38h] [rbp-61h]
  __int64 v33; // [rsp+40h] [rbp-59h]
  __int64 v34; // [rsp+48h] [rbp-51h]
  _QWORD v35[9]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v36[2]; // [rsp+98h] [rbp-1h] BYREF

  v32 = a2;
  v33 = a1;
  memset(v35, 0, sizeof(v35));
  v36[0] = 0LL;
  v36[1] = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    v10,
                    off_1C00640E0);
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, _DWORD **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v31,
          0LL);
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(v11[315], 2u, 3u, 0x2Du, (__int64)&WPP_266c009e770034b9bb66bd8a0240ebba_Traceguids, v12);
    return HUBFDO_CompleteGetDescriptorRequest((__int64)v11, v8, v32, v12, v9);
  }
  v12 = HUBFDO_IoctlValidateParameters((__int64)v11, 4uLL, a4, v31, 0xDuLL, a3);
  if ( v12 >= 0 )
  {
    v8 = *(unsigned __int16 *)v31;
    if ( a3 != 12 )
      memset(v31 + 3, 0, a3 - 12);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, v32);
      v13 = (struct _MCGEN_TRACE_CONTEXT *)((int)HUBMISC_GetActivityIdIrp() >= 0);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
      {
        LOBYTE(v13) = -(char)v13;
        LODWORD(v30) = v8;
        McTemplateK0pq(
          v13,
          &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION_START,
          (const GUID *)((unsigned __int64)v36 & -(__int64)((_BYTE)v13 != 0)),
          v11[31],
          v30);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v11[2]);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
            WdfDriverGlobals,
            v11[2],
            0LL,
            1LL);
    if ( !v14 )
      goto LABEL_41;
    do
    {
      if ( v14 != v11[332]
        && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v14,
                                   off_1C0064040)
                               + 48) == v8 )
      {
        break;
      }
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v11[2],
              v14,
              1LL);
    }
    while ( v14 );
    if ( !v14
      || (v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  v14,
                  off_1C0064040),
          (v15 = *(_QWORD *)(v34 + 24)) == 0)
      || (*(_DWORD *)(v15 + 1636) & 2) == 0 )
    {
LABEL_41:
      v12 = -1073741810;
      goto LABEL_42;
    }
    v16 = v31;
    v17 = *((_BYTE *)v31 + 7);
    *((_WORD *)v31 + 2) = 1664;
    switch ( v17 )
    {
      case 1:
        v18 = (unsigned __int16 *)(v15 + 1988);
        v9 = a3 - 12;
        if ( (unsigned __int64)(unsigned int)a3 - 12 > 0x12 )
          v9 = 18;
        goto LABEL_40;
      case 2:
        v18 = *(unsigned __int16 **)(v15 + 2016);
        if ( v18 && !*((_BYTE *)v16 + 6) )
          goto LABEL_21;
        break;
      case 15:
        v18 = *(unsigned __int16 **)(v15 + 2056);
        if ( v18 )
        {
LABEL_21:
          if ( v18[1] >= (unsigned __int64)(unsigned int)a3 - 12 )
            v9 = a3 - 12;
          else
            v9 = v18[1];
LABEL_40:
          v23 = v31 + 3;
          v22 = v9;
          goto LABEL_35;
        }
        break;
    }
    if ( v17 != 3 )
      goto LABEL_37;
    v19 = *((_BYTE *)v16 + 6);
    if ( !v19 || v19 != *(_BYTE *)(v15 + 2004) || *((_WORD *)v16 + 4) != 1033 )
      goto LABEL_37;
    if ( (*(_DWORD *)(v15 + 1632) & 0x40) == 0 )
    {
      v12 = -1073741823;
      goto LABEL_42;
    }
    v9 = a3 - 12;
    v20 = (*(_DWORD *)(v15 + 1636) & 0x800) != 0 ? 0xC : 0;
    if ( (unsigned __int16)(*(_WORD *)(v15 + 2148) - v20) < (unsigned __int64)(unsigned int)a3 - 12 )
      v9 = (unsigned __int16)(*(_WORD *)(v15 + 2148) - v20);
    if ( v9 > *((unsigned __int16 *)v16 + 5) )
    {
LABEL_37:
      v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              v33,
              off_1C00641D0);
      *(_QWORD *)(v24 + 152) = *(_QWORD *)(v16 + 1);
      v25 = v24 + 24;
      *(_QWORD *)(v24 + 32) = *(_QWORD *)(*(_QWORD *)(v34 + 24) + 24LL);
      v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v15);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v26,
        "User Mode FDO Request",
        4032LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v11[2]);
      *(_DWORD *)v25 = 3276936;
      *(_DWORD *)(v25 + 36) = a3 - 12;
      *(_DWORD *)(v25 + 32) = 11;
      v27 = v31;
      *(_QWORD *)(v25 + 48) = 0LL;
      *(_QWORD *)(v25 + 40) = v27 + 3;
      *(_DWORD *)(v25 + 56) = 5000;
      memset(v35, 0, sizeof(v35));
      v35[1] = v25;
      v28 = v32;
      LOBYTE(v35[0]) = 15;
      LODWORD(v35[3]) = 2228227;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
        WdfDriverGlobals,
        v32,
        v35);
      *(_QWORD *)(v15 + 496) = v28;
      return HUBSM_AddDsmEvent(v15, 4051LL);
    }
    v21 = v31;
    *((_BYTE *)v31 + 12) = v9;
    *((_BYTE *)v21 + 13) = 3;
    v22 = *(_DWORD *)(v15 + 2148) - (unsigned int)v20 - 2LL;
    v18 = (unsigned __int16 *)(*(_QWORD *)(v15 + 2152) + 2 * ((unsigned __int64)v20 >> 1));
    v23 = (_DWORD *)((char *)v21 + 14);
LABEL_35:
    memmove(v23, v18, v22);
LABEL_42:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v11[2]);
  }
  return HUBFDO_CompleteGetDescriptorRequest((__int64)v11, v8, v32, v12, v9);
}

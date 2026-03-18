/*
 * XREFs of HUBHTX_Get30PortChangeEvent @ 0x1C0004C20
 * Callers:
 *     HUBPSM30_EnablingInterruptsAndGettingPortEvent @ 0x1C00106E0 (HUBPSM30_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange @ 0x1C0010720 (HUBPSM30_EnablingInterruptsAndGettingPortEventInNoChange.c)
 *     HUBPSM30_AcquiringPortReferenceAndGettingPortEvent @ 0x1C0010740 (HUBPSM30_AcquiringPortReferenceAndGettingPortEvent.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C000175C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0qhhhqhhh @ 0x1C0001D6C (McTemplateK0qhhhqhhh.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002870 (WPP_RECORDER_SF_dDDD.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0002AB0 (WPP_RECORDER_SF_qd.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002C5A0 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C002DD0C (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_Get30PortChangeEvent(_QWORD *a1, __int64 a2)
{
  _WORD *v3; // rax
  unsigned int v4; // ebp
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // di
  unsigned __int16 v7; // si
  __int16 v8; // r12
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  struct _MCGEN_TRACE_CONTEXT *v12; // rcx
  __int64 v13; // rdx
  unsigned __int16 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int16 v22; // r9
  struct _MCGEN_TRACE_CONTEXT *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  struct _MCGEN_TRACE_CONTEXT *v26; // rcx
  unsigned __int16 v27; // r9
  unsigned __int8 v28; // dl
  __int64 v29; // rcx
  __int64 v30; // rdx
  struct _MCGEN_TRACE_CONTEXT *v31; // rcx
  __int64 v33; // [rsp+20h] [rbp-98h]
  __int64 v34; // [rsp+28h] [rbp-90h]
  int v35; // [rsp+28h] [rbp-90h]
  __int64 v36; // [rsp+30h] [rbp-88h]
  __int64 v37; // [rsp+38h] [rbp-80h]
  __int64 v38; // [rsp+40h] [rbp-78h]
  __int16 v39; // [rsp+C0h] [rbp+8h]
  __int16 v40; // [rsp+C8h] [rbp+10h]
  char v41; // [rsp+D0h] [rbp+18h]

  if ( *((_BYTE *)a1 + 1457) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      *(_QWORD *)(*a1 + 16LL),
      0LL,
      3887LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    *((_BYTE *)a1 + 1457) = 0;
  }
  v3 = (_WORD *)a1[166];
  v4 = 3061;
  v5 = *((_WORD *)a1 + 92);
  v6 = *((_WORD *)a1 + 96);
  v7 = *((_WORD *)a1 + 97);
  *((_WORD *)a1 + 96) = v5;
  if ( v3 )
    v40 = v3[998];
  else
    LOBYTE(v40) = 0;
  if ( v3 )
    v39 = v3[999];
  else
    LOBYTE(v39) = 0;
  if ( v3 )
  {
    v8 = v3[1000];
    v41 = v8;
  }
  else
  {
    LOBYTE(v8) = 0;
    v41 = 0;
  }
  if ( (v5 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
    v10 = *a1;
    v11 = 512LL;
    *((_DWORD *)a1 + 356) = 4;
    v4 = 3065;
    if ( (*(_DWORD *)(v10 + 2592) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh(
        v9,
        v11,
        (const GUID *)(*a1 + 2412LL),
        *((unsigned __int16 *)a1 + 100),
        v6,
        v5,
        v7,
        249,
        v40,
        v39,
        v8);
    goto LABEL_117;
  }
  if ( (v7 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*a1, a2);
    if ( (v6 & 8) == 0 )
    {
      *((_DWORD *)a1 + 356) = 4;
      v4 = 3065;
    }
    v13 = 512LL;
    if ( (*(_DWORD *)(*a1 + 2592LL) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", a1 + 34);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh(
        v12,
        v13,
        (const GUID *)(*a1 + 2412LL),
        *((unsigned __int16 *)a1 + 100),
        v6,
        v5,
        v7,
        v4,
        v40,
        v39,
        v41);
    goto LABEL_110;
  }
  if ( (v5 & 0x200) == 0 )
  {
    v14 = 86;
LABEL_98:
    v15 = a1[179];
    goto LABEL_99;
  }
  if ( (v5 & 0x10) == 0 )
  {
    v16 = v5;
    LOWORD(v16) = v5 & 1;
    if ( (v5 & 1) == 0 )
    {
      if ( (v5 & 0x1E0) == 0xA0 && (v6 & 0x200) != 0 && (v6 & 0x1E0) != 0xA0 )
        goto LABEL_35;
      if ( (v5 & 0x1E0) == 0xE0 && (v6 & 0x200) != 0 && (v6 & 0x1E0) != 0xE0 )
      {
        v17 = 89;
LABEL_44:
        WPP_RECORDER_SF_(a1[179], 2u, 4u, v17, (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids);
        goto LABEL_35;
      }
    }
    v18 = v5 & 0x1E0;
    if ( (v5 & 0x1E0) == 0x160 )
    {
      v19 = 90;
LABEL_47:
      v20 = a1[179];
      v35 = (v5 >> 5) & 0xF;
LABEL_48:
      WPP_RECORDER_SF_d(v20, 2u, 4u, v19, (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids, v35);
LABEL_100:
      v29 = *a1;
      v4 = 3077;
      if ( (*(_DWORD *)(*a1 + 2592LL) & 0x10) != 0 )
      {
        HUBMISC_VerifierDbgBreak("HubHwVerifierInvalidPortStatus", a1 + 34);
        v29 = *a1;
      }
      *(_DWORD *)(v29 + 2596) = 1073872896;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
      {
        LODWORD(v33) = *((unsigned __int16 *)a1 + 100);
        McTemplateK0pq(
          (struct _MCGEN_TRACE_CONTEXT *)v29,
          &USBHUB3_ETW_EVENT_HUB_RESET_DUE_TO_PORT_ERROR,
          0LL,
          *(_QWORD *)(*a1 + 248LL),
          v33);
      }
      *(_WORD *)(*a1 + 74LL) = v7;
      *(_WORD *)(*a1 + 72LL) = v5;
      goto LABEL_117;
    }
    if ( v18 == 128 && (v6 & 0x1E0) != 0x80 )
    {
      v19 = 91;
      goto LABEL_47;
    }
    if ( v18 == 320 )
    {
      v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              *a1,
              v16,
              480LL);
      if ( !(*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(
              WdfDriverGlobals,
              v21)
        || *(_BYTE *)(*a1 + 240LL) )
      {
        WPP_RECORDER_SF_dD(
          a1[179],
          2u,
          4u,
          0x5Cu,
          (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
          (v5 >> 5) & 0xF,
          v5 & 1);
        v24 = 256LL;
        if ( (*(_DWORD *)(*a1 + 2592LL) & 0x100) != 0 )
          HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateCompliance", a1 + 34);
        if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
          McTemplateK0qhhhqhhh(
            v23,
            v24,
            (const GUID *)(*a1 + 2412LL),
            *((unsigned __int16 *)a1 + 100),
            v6,
            v5,
            v7,
            245,
            v40,
            v39,
            v41);
        goto LABEL_87;
      }
      v22 = 93;
      LODWORD(v36) = v5 & 1;
      LODWORD(v34) = (v5 >> 5) & 0xF;
      goto LABEL_56;
    }
    if ( v18 == 192 )
    {
      WPP_RECORDER_SF_dD(
        a1[179],
        2u,
        4u,
        0x5Eu,
        (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
        (v5 >> 5) & 0xF,
        v5 & 1);
      v26 = (struct _MCGEN_TRACE_CONTEXT *)*(unsigned int *)(*a1 + 2592LL);
      if ( ((unsigned __int8)v26 & 0x20) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateSSInactive", a1 + 34);
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
        McTemplateK0qhhhqhhh(
          v26,
          v25,
          (const GUID *)(*a1 + 2412LL),
          *((unsigned __int16 *)a1 + 100),
          v6,
          v5,
          v7,
          245,
          v40,
          v39,
          v41);
      if ( (v7 & 0x80u) != 0 )
      {
        v17 = 95;
        goto LABEL_44;
      }
      if ( *((_DWORD *)a1 + 2) != 3053 )
      {
        if ( (v5 & 2) != 0 )
        {
          v15 = a1[179];
          if ( (*(_DWORD *)(*a1 + 40LL) & 0x200000) == 0 )
          {
            v14 = 98;
            goto LABEL_99;
          }
          WPP_RECORDER_SF_(v15, 2u, 4u, 0x61u, (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids);
        }
        v22 = 99;
        LODWORD(v36) = v5 & 1;
        LODWORD(v34) = (v5 >> 5) & 0xF;
LABEL_56:
        WPP_RECORDER_SF_dD(a1[179], 2u, 4u, v22, (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids, v34, v36);
        goto LABEL_87;
      }
      v27 = 96;
      v20 = a1[179];
      v28 = 3;
      LODWORD(v34) = v5 & 1;
    }
    else
    {
      if ( (v7 & 1) != 0 || (_WORD)v16 != (v6 & 1) )
      {
        v4 = 3017;
        goto LABEL_110;
      }
      if ( (v5 & 1) != 0 )
      {
        if ( v18 != 160 )
        {
          if ( (v5 & 2) == 0 )
          {
            v14 = 104;
            goto LABEL_98;
          }
          if ( v18 <= 0x60u || v18 == 256 )
          {
            if ( (v7 & 0x10) != 0 )
            {
              if ( v18 == 96 )
              {
                v14 = 106;
                goto LABEL_98;
              }
              v4 = 3073;
            }
            else
            {
              if ( (v6 & 0x1E0) != 0x60 || v18 == 96 )
                return v4;
              v4 = 3085;
            }
LABEL_117:
            *((_DWORD *)a1 + 2) = v4;
            return v4;
          }
          v19 = 105;
          goto LABEL_47;
        }
        WPP_RECORDER_SF_(a1[179], 2u, 4u, 0x67u, (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids);
LABEL_87:
        ++*((_DWORD *)a1 + 361);
        v4 = 3053;
        if ( *((_DWORD *)a1 + 361) != 100 * (*((_DWORD *)a1 + 361) / 0x64u) )
          goto LABEL_117;
        LODWORD(v36) = *((_DWORD *)a1 + 361);
        WPP_RECORDER_SF_qd(a1[179], 2u, 4u, 0x6Bu, (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids, a1, v36);
        if ( (*(_DWORD *)(*a1 + 2592LL) & 0x800) == 0 )
          goto LABEL_117;
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortLinkStateErrorResetWatchdog", a1 + 34);
LABEL_110:
        if ( v4 != 3017 )
          goto LABEL_116;
        goto LABEL_111;
      }
      if ( (v5 & 2) != 0 )
      {
        v14 = 100;
        goto LABEL_98;
      }
      if ( v18 > 0x60u )
        return v4;
      v20 = a1[179];
      if ( (*(_DWORD *)(*a1 + 40LL) & 0x100000) == 0 )
      {
        v19 = 102;
        v35 = (v5 >> 5) & 0xF;
        goto LABEL_48;
      }
      v27 = 101;
      LODWORD(v34) = (v5 >> 5) & 0xF;
      v28 = 2;
    }
    WPP_RECORDER_SF_d(v20, v28, 4u, v27, (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids, v34);
    return v4;
  }
  if ( (v5 & 2) != 0 )
  {
    v15 = a1[179];
    if ( (*(_DWORD *)(*a1 + 40LL) & 0x1000000) != 0 )
    {
      WPP_RECORDER_SF_(v15, 2u, 4u, 0x57u, (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids);
      goto LABEL_30;
    }
    v14 = 88;
LABEL_99:
    WPP_RECORDER_SF_(v15, 2u, 4u, v14, (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids);
    goto LABEL_100;
  }
LABEL_30:
  if ( (v5 & 1) != 0 )
  {
    v4 = 3081;
    goto LABEL_117;
  }
  if ( (v7 & 1) == 0 && (v6 & 1) == 0 )
    return v4;
LABEL_35:
  v4 = 3017;
LABEL_111:
  if ( (v5 & 1) != 0 )
    goto LABEL_117;
  LODWORD(v38) = v7;
  LODWORD(v37) = v5;
  LODWORD(v36) = v6;
  LODWORD(v34) = *((unsigned __int16 *)a1 + 100);
  WPP_RECORDER_SF_dDDD(
    a1[179],
    v6,
    4u,
    0x6Cu,
    (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
    v34,
    v36,
    v37,
    v38);
  if ( (*(_DWORD *)(*a1 + 2592LL) & 0x400) != 0 )
    HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", a1 + 34);
  if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
    goto LABEL_117;
  McTemplateK0qhhhqhhh(v31, v30, 0LL, *((unsigned __int16 *)a1 + 100), v6, v5, v7, 201, v40, v39, v41);
LABEL_116:
  if ( v4 != 3061 )
    goto LABEL_117;
  return v4;
}

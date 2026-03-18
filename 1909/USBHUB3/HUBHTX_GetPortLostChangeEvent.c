/*
 * XREFs of HUBHTX_GetPortLostChangeEvent @ 0x1C0004CC8
 * Callers:
 *     HUBPSM20_GettingPortLostChangesOnStart @ 0x1C0010A60 (HUBPSM20_GettingPortLostChangesOnStart.c)
 * Callees:
 *     McTemplateK0qhhhqhhh @ 0x1C0001E7C (McTemplateK0qhhhqhhh.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002980 (WPP_RECORDER_SF_dDDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002ED04 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C003085C (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_GetPortLostChangeEvent(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rax
  unsigned __int16 v3; // bx
  _QWORD *v4; // r14
  unsigned __int16 v5; // di
  unsigned __int16 v6; // si
  unsigned __int16 v7; // r12
  unsigned __int16 v8; // r15
  unsigned int v9; // ebp
  __int64 v11; // [rsp+28h] [rbp-60h]
  __int64 v12; // [rsp+30h] [rbp-58h]
  __int64 v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+40h] [rbp-48h]
  unsigned __int16 v15; // [rsp+90h] [rbp+8h]

  v2 = *(unsigned __int16 **)(a1 + 1328);
  v3 = *(_WORD *)(a1 + 184);
  v4 = (_QWORD *)a1;
  v5 = *(_WORD *)(a1 + 192);
  v6 = *(_WORD *)(a1 + 186);
  *(_WORD *)(a1 + 192) = v3;
  if ( v2 )
  {
    a1 = v2[998];
    v15 = v2[998];
  }
  else
  {
    LOBYTE(v15) = 0;
  }
  if ( v2 )
    v7 = v2[999];
  else
    LOBYTE(v7) = 0;
  if ( v2 )
    v8 = v2[1000];
  else
    LOBYTE(v8) = 0;
  v9 = 3013;
  if ( (v3 & 1) != (v5 & 1) )
  {
    if ( (v6 & 1) != 0 )
    {
      if ( !*((_BYTE *)v4 + 1457)
        && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015
                                                                                                 + 3504))(
             WdfDriverGlobals,
             *(_QWORD *)(*v4 + 16LL),
             0LL,
             0LL,
             3718,
             "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c") >= 0 )
      {
        *((_BYTE *)v4 + 1457) = 1;
      }
    }
    else
    {
      v9 = 3017;
    }
    goto LABEL_35;
  }
  a1 = v3;
  LOWORD(a1) = v3 & 8;
  if ( (v3 & 8) != 0 )
  {
    a2 = 3LL;
    if ( ((v5 | v6) & 8) == 0 )
    {
      HUBREG_UpdateSqmHubOvercurrentDetected(*v4, 3LL, 0LL);
      *((_DWORD *)v4 + 356) = 4;
      v9 = 3065;
LABEL_23:
      if ( (*(_DWORD *)(*v4 + 2592LL) & 0x200) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", v4 + 34);
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
        McTemplateK0qhhhqhhh(
          (struct _MCGEN_TRACE_CONTEXT *)a1,
          a2,
          (const GUID *)(*v4 + 2412LL),
          *((unsigned __int16 *)v4 + 100),
          v5,
          v3,
          v6,
          v9,
          v15,
          v7,
          v8);
      goto LABEL_35;
    }
  }
  if ( (v3 & 8) == 0 && (v5 & 8) != 0 && (v6 & 8) == 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(*v4, a2, 0LL);
    v9 = 3069;
    *((_DWORD *)v4 + 356) = 0;
    goto LABEL_23;
  }
  if ( (v3 & 2) != 0 || (v5 & 2) == 0 || (v6 & 2) != 0 )
  {
    if ( (v3 & 4) == 0 && (v5 & 4) != 0 && (v6 & 4) == 0 )
      v9 = 3085;
  }
  else
  {
    v9 = 3029;
  }
LABEL_35:
  *((_DWORD *)v4 + 2) = v9;
  if ( v9 == 3017 && (v3 & 1) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v14) = v6;
      LODWORD(v13) = v3;
      LODWORD(v12) = v5;
      LODWORD(v11) = *((unsigned __int16 *)v4 + 100);
      WPP_RECORDER_SF_dDDD(
        v4[179],
        v5,
        4u,
        0x55u,
        (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
        v11,
        v12,
        v13,
        v14);
    }
    if ( (*(_DWORD *)(*v4 + 2592LL) & 0x400) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", v4 + 34);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh(
        (struct _MCGEN_TRACE_CONTEXT *)a1,
        a2,
        (const GUID *)(*v4 + 2412LL),
        *((unsigned __int16 *)v4 + 100),
        v5,
        v3,
        v6,
        201,
        v15,
        v7,
        v8);
  }
  return v9;
}

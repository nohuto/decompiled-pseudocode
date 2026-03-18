/*
 * XREFs of HUBHTX_Get20PortChangeEvent @ 0x1C00045C4
 * Callers:
 *     HUBPSM20_EnablingInterruptsAndGettingPortEvent @ 0x1C00109B0 (HUBPSM20_EnablingInterruptsAndGettingPortEvent.c)
 *     HUBPSM20_GettingPortChangeEventInSuspended @ 0x1C0010C40 (HUBPSM20_GettingPortChangeEventInSuspended.c)
 * Callees:
 *     McTemplateK0qhhhqhhh @ 0x1C0001E7C (McTemplateK0qhhhqhhh.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002980 (WPP_RECORDER_SF_dDDD.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002ED04 (HUBMISC_VerifierDbgBreak.c)
 *     HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C003085C (HUBREG_UpdateSqmHubOvercurrentDetected.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_Get20PortChangeEvent(struct _MCGEN_TRACE_CONTEXT *a1)
{
  struct _MCGEN_TRACE_CONTEXT *v1; // r14
  _WORD *v2; // rax
  unsigned __int16 v3; // bx
  unsigned __int16 EnableBitMask; // si
  unsigned __int16 v5; // di
  __int16 v6; // r13
  __int16 v7; // r12
  __int16 v8; // r15
  unsigned int v9; // ebp
  __int64 v10; // rdx
  unsigned __int16 v11; // r9
  __int64 v13; // [rsp+28h] [rbp-60h]
  __int64 v14; // [rsp+30h] [rbp-58h]
  __int64 v15; // [rsp+38h] [rbp-50h]
  __int64 v16; // [rsp+40h] [rbp-48h]

  v1 = a1;
  if ( BYTE1(a1[20].MatchAnyKeyword) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      *(_QWORD *)(a1->RegistrationHandle + 16),
      0LL,
      3056LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
    BYTE1(v1[20].MatchAnyKeyword) = 0;
  }
  v2 = *(_WORD **)&v1[18].Flags;
  v3 = *(_WORD *)&v1[2].Level;
  EnableBitMask = (unsigned __int16)v1[2].EnableBitMask;
  v5 = WORD1(v1[2].EnableBitMask);
  LOWORD(v1[2].EnableBitMask) = v3;
  if ( v2 )
    v6 = v2[998];
  else
    LOBYTE(v6) = 0;
  if ( v2 )
    v7 = v2[999];
  else
    LOBYTE(v7) = 0;
  if ( v2 )
    v8 = v2[1000];
  else
    LOBYTE(v8) = 0;
  v9 = 3041;
  v10 = 4LL;
  if ( (v3 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(v1->RegistrationHandle, 4LL, &WPP_RECORDER_INITIALIZED);
LABEL_14:
    v9 = 3065;
    LODWORD(v1[19].EnableKeyWords) = 4;
LABEL_15:
    if ( (*(_DWORD *)(v1->RegistrationHandle + 2592) & 0x200) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortOverCurrent", &v1[3].EnableKeyWords);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh(
        a1,
        v10,
        (const GUID *)(v1->RegistrationHandle + 2412),
        LOWORD(v1[2].EnableKeyWords),
        EnableBitMask,
        v3,
        v5,
        v9,
        v6,
        v7,
        v8);
    goto LABEL_55;
  }
  if ( (v5 & 8) != 0 )
  {
    HUBREG_UpdateSqmHubOvercurrentDetected(v1->RegistrationHandle, 4LL, &WPP_RECORDER_INITIALIZED);
    if ( (EnableBitMask & 8) != 0 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( (v3 & 0x100) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    v11 = 72;
    goto LABEL_25;
  }
  if ( (v5 & 1) != 0 || (a1 = (struct _MCGEN_TRACE_CONTEXT *)v3, LOWORD(a1) = v3 & 1, (_WORD)a1 != (EnableBitMask & 1)) )
  {
    v9 = 3017;
    goto LABEL_55;
  }
  if ( (v3 & 0x10) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    v11 = 73;
    goto LABEL_25;
  }
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v11 = 74;
    }
    else
    {
      if ( (v3 & 4) == 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v11 = 75;
    }
LABEL_25:
    WPP_RECORDER_SF_(
      (__int64)v1[19].EnableLevel,
      2u,
      4u,
      v11,
      (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids);
    goto LABEL_55;
  }
  if ( (v5 & 0x10) != 0 )
  {
    if ( (v3 & 2) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v11 = 76;
      goto LABEL_25;
    }
    if ( (v3 & 4) == 0 )
    {
      v9 = 3073;
      goto LABEL_55;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 77;
      goto LABEL_25;
    }
  }
  else
  {
    if ( (v5 & 4) == 0 )
      goto LABEL_55;
    if ( (v3 & 2) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v11 = 78;
      goto LABEL_25;
    }
    if ( (v3 & 4) == 0 )
    {
      v9 = 3085;
      goto LABEL_55;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 79;
      goto LABEL_25;
    }
  }
LABEL_55:
  LODWORD(v1->Logger) = v9;
  if ( v9 == 3017 && (v3 & 1) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = v5;
      LODWORD(v15) = v3;
      LODWORD(v14) = EnableBitMask;
      LODWORD(v13) = LOWORD(v1[2].EnableKeyWords);
      WPP_RECORDER_SF_dDDD(
        (__int64)v1[19].EnableLevel,
        EnableBitMask,
        4u,
        0x50u,
        (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
        v13,
        v14,
        v15,
        v16);
    }
    if ( (*(_DWORD *)(v1->RegistrationHandle + 2592) & 0x400) != 0 )
      HUBMISC_VerifierDbgBreak("HubHwVerifierPortDeviceDisconnected", &v1[3].EnableKeyWords);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)v1[19].EnableLevel,
        2u,
        4u,
        0x51u,
        (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0qhhhqhhh(
        a1,
        v10,
        (const GUID *)(v1->RegistrationHandle + 2412),
        LOWORD(v1[2].EnableKeyWords),
        EnableBitMask,
        v3,
        v5,
        201,
        v6,
        v7,
        v8);
  }
  return v9;
}

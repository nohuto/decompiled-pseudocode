/*
 * XREFs of HUBDTX_ControlTransferComplete @ 0x1C0025CF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqqq @ 0x1C0001DEC (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDDD @ 0x1C0002980 (WPP_RECORDER_SF_dDDD.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002ED04 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

void __fastcall HUBDTX_ControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int Arg3; // edi
  __int64 v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // r15
  _BYTE *v8; // r14
  char v9; // dl
  int v10; // ebp
  int v11; // eax
  int v12; // eax
  __int16 v13; // dx
  unsigned __int8 v14; // cl
  unsigned __int16 v15; // r9
  char v16; // al
  char v17; // al
  char v18; // al
  unsigned __int8 v19; // al
  char v20; // dl
  char v21; // al
  const EVENT_DESCRIPTOR *v22; // rdx
  int v23; // edi
  __int64 v24; // rax
  __int64 Arg2; // [rsp+28h] [rbp-70h]
  unsigned int v26; // [rsp+38h] [rbp-60h]
  __int64 v27; // [rsp+50h] [rbp-48h] BYREF
  int v28; // [rsp+58h] [rbp-40h]
  __int64 v29; // [rsp+5Ch] [rbp-3Ch]
  int v30; // [rsp+64h] [rbp-34h]

  Arg3 = *(_DWORD *)(a3 + 8);
  v5 = a4;
  v6 = *(_DWORD *)(a4 + 276);
  v7 = a1;
  v8 = *(_BYTE **)(a4 + 2640);
  *(_DWORD *)(a4 + 256) = *(_DWORD *)(a4 + 308);
  *(_DWORD *)(a4 + 408) = 0;
  v9 = *(_BYTE *)(a4 + 400);
  if ( (((unsigned __int8)v9 | ((unsigned __int8)v9 >> 5)) & 3) == 0
    && v9 < 0
    && *(_BYTE *)(a4 + 401) == 26
    && *(_WORD *)(a4 + 402) == 1 )
  {
    *(_DWORD *)(a4 + 2708) = Arg3;
    *(_DWORD *)(a4 + 2712) = v6;
    memset((void *)(a4 + 1732), 0, 0x20uLL);
  }
  if ( Arg3 >= 0 )
  {
    v10 = 4012;
    goto LABEL_148;
  }
  v10 = 4004;
  LOBYTE(a4) = 96;
  if ( *(_BYTE *)(v5 + 401) == 9 && *(_WORD *)(v5 + 402) && (*(_BYTE *)(v5 + 400) & 0x60) == 0 )
  {
    v11 = -1073733632;
    a1 = 3221225473LL;
  }
  else
  {
    v11 = v6;
    a1 = (unsigned int)Arg3;
  }
  *(_DWORD *)(v5 + 1560) = a1;
  *(_DWORD *)(v5 + 1564) = v11;
  LOBYTE(a1) = *(_BYTE *)(v5 + 401);
  if ( (_BYTE)a1 == 48 )
  {
    if ( (*(_BYTE *)(v5 + 400) & 0x60) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          5u,
          0xAu,
          (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
          Arg3,
          v6);
      if ( (*(_DWORD *)(v5 + 2436) & 4) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetSelFailure", v5 + 504);
      *(_DWORD *)(v5 + 2432) = 1073807370;
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
        McTemplateK0pqqq(
          (PMCGEN_TRACE_CONTEXT)a1,
          &USBHUB3_ETW_EVENT_SET_SEL_FAILURE,
          (const GUID *)(v5 + 1516),
          *(const void **)(v5 + 24),
          0,
          v6,
          Arg3);
      v12 = 4008;
      if ( v6 != -1073741820 )
        v12 = 4004;
      v10 = v12;
      goto LABEL_148;
    }
    goto LABEL_101;
  }
  if ( (_BYTE)a1 == 3 )
  {
    v13 = *(_WORD *)(v5 + 402);
    if ( v13 == 48 && (*(_BYTE *)(v5 + 400) & 0x60) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          5u,
          0xBu,
          (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
          Arg3,
          v6);
      if ( (*(_DWORD *)(v5 + 2436) & 0x2000) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetU1EnableFailure", v5 + 504);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
        McTemplateK0pqqq(
          (PMCGEN_TRACE_CONTEXT)a1,
          &USBHUB3_ETW_EVENT_SET_U1_ENABLE_FAILURE,
          (const GUID *)(v5 + 1516),
          *(const void **)(v5 + 24),
          0,
          v6,
          Arg3);
      goto LABEL_148;
    }
    if ( v13 == 49 && (*(_BYTE *)(v5 + 400) & 0x60) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          5u,
          0xCu,
          (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
          Arg3,
          v6);
      if ( (*(_DWORD *)(v5 + 2436) & 0x4000) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetU2EnableFailure", v5 + 504);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
        McTemplateK0pqqq(
          (PMCGEN_TRACE_CONTEXT)a1,
          &USBHUB3_ETW_EVENT_SET_U2_ENABLE_FAILURE,
          (const GUID *)(v5 + 1516),
          *(const void **)(v5 + 24),
          0,
          v6,
          Arg3);
      goto LABEL_148;
    }
LABEL_101:
    v21 = *(_BYTE *)(v5 + 400) & 0x60;
    if ( v21 == 64 && (_BYTE)a1 == *(_BYTE *)(v5 + 2052) )
    {
      a1 = (unsigned int)*(unsigned __int16 *)(v5 + 404) - 4;
      if ( *(_WORD *)(v5 + 404) == 4 )
      {
        *(_DWORD *)(v5 + 2432) = 1073807376;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            2u,
            5u,
            0x17u,
            (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
            Arg3,
            v6);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
          McTemplateK0pqqq(
            (PMCGEN_TRACE_CONTEXT)a1,
            &USBHUB3_ETW_EVENT_MS_EXT_CONFIG_DESCRIPTOR_FAILURE,
            (const GUID *)(v5 + 1516),
            *(const void **)(v5 + 24),
            0,
            v6,
            Arg3);
      }
      else
      {
        a1 = (unsigned int)*(unsigned __int16 *)(v5 + 404) - 6;
        if ( *(_WORD *)(v5 + 404) == 6 )
        {
          *(_DWORD *)(v5 + 2432) = 1073807377;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
              2u,
              5u,
              0x18u,
              (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
              Arg3,
              v6);
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
            McTemplateK0pqqq(
              (PMCGEN_TRACE_CONTEXT)a1,
              &USBHUB3_ETW_EVENT_MS_CONTAINER_ID_DESCRIPTOR_FAILURE,
              (const GUID *)(v5 + 1516),
              *(const void **)(v5 + 24),
              0,
              v6,
              Arg3);
        }
        else
        {
          a1 = (unsigned int)*(unsigned __int16 *)(v5 + 404) - 7;
          if ( *(_WORD *)(v5 + 404) == 7 )
          {
            *(_DWORD *)(v5 + 2432) = 1073807388;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dD(
                *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                2u,
                5u,
                0x19u,
                (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
                Arg3,
                v6);
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
              McTemplateK0pqqq(
                (PMCGEN_TRACE_CONTEXT)a1,
                &USBHUB3_ETW_EVENT_MSOS20_DESCRIPTOR_FAILURE,
                (const GUID *)(v5 + 1516),
                *(const void **)(v5 + 24),
                0,
                v6,
                Arg3);
          }
          else
          {
            if ( *(_WORD *)(v5 + 404) != 8 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_148;
              v15 = 27;
              goto LABEL_109;
            }
            *(_DWORD *)(v5 + 2432) = 1073807390;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dD(
                *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                2u,
                5u,
                0x1Au,
                (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
                Arg3,
                v6);
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
              McTemplateK0pqqq(
                (PMCGEN_TRACE_CONTEXT)a1,
                &USBHUB3_ETW_EVENT_MSOS20_SET_ALT_ENUMERATION_FAILURE,
                (const GUID *)(v5 + 1516),
                *(const void **)(v5 + 24),
                0,
                v6,
                Arg3);
          }
        }
      }
      goto LABEL_148;
    }
    if ( (_BYTE)a1 == 49 )
    {
      if ( !v21 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
            2u,
            5u,
            0x1Cu,
            (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
            Arg3,
            v6);
        if ( (*(_DWORD *)(v5 + 2436) & 8) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierSetIsochDelayFailure", v5 + 504);
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) == 0 )
          goto LABEL_148;
        v22 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_SET_ISOCH_DELAY_FAILURE;
        goto LABEL_146;
      }
    }
    else if ( !v21
           && ((_BYTE)a1 == 1 && *(_WORD *)(v5 + 402) == 1
            || (_BYTE)a1 == 3 && !*(_WORD *)(v5 + 402) && !*(_WORD *)(v5 + 404)) )
    {
      goto LABEL_148;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = (*(unsigned __int8 *)(v5 + 400) >> 5) & 3;
      WPP_RECORDER_SF_dDDD(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
        v26,
        5u,
        0x1Du,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
        Arg3,
        v6,
        v26,
        (unsigned __int8)a1);
    }
    if ( (*(_DWORD *)(v5 + 2436) & 1) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierControlTransferFailure", v5 + 504);
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      goto LABEL_148;
    v22 = &USBHUB3_ETW_EVENT_DEVICE_CONTROL_TRANSFER_ERROR;
LABEL_146:
    McTemplateK0pqqq(
      (PMCGEN_TRACE_CONTEXT)*(unsigned __int16 *)(*(_QWORD *)(v5 + 8) + 200LL),
      v22,
      (const GUID *)(v5 + 1516),
      *(const void **)(v5 + 24),
      *(unsigned __int16 *)(*(_QWORD *)(v5 + 8) + 200LL),
      v6,
      Arg3);
    goto LABEL_148;
  }
  if ( (_BYTE)a1 != 6 || (*(_BYTE *)(v5 + 400) & 0x60) != 0 )
    goto LABEL_101;
  v14 = *(_BYTE *)(v5 + 403);
  if ( (v14 != 3 || *(_BYTE *)(v5 + 402) != 0xEE) && v14 != 6 && (*(_DWORD *)(v5 + 2436) & 1) != 0 )
  {
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierControlTransferFailure", v5 + 504);
    v14 = *(_BYTE *)(v5 + 403);
  }
  a1 = (unsigned int)v14 - 1;
  if ( (_DWORD)a1 )
  {
    a1 = (unsigned int)(a1 - 1);
    if ( (_DWORD)a1 )
    {
      a1 = (unsigned int)(a1 - 1);
      if ( (_DWORD)a1 )
      {
        a1 = (unsigned int)(a1 - 3);
        if ( (_DWORD)a1 )
        {
          if ( (_DWORD)a1 != 9 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_148;
            v15 = 22;
LABEL_109:
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
              2u,
              5u,
              v15,
              (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
              Arg3,
              v6);
            goto LABEL_148;
          }
          *(_DWORD *)(v5 + 2432) = 1073807371;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
              2u,
              5u,
              0xFu,
              (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
              Arg3,
              v6);
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
            McTemplateK0pqqq(
              (PMCGEN_TRACE_CONTEXT)a1,
              &USBHUB3_ETW_EVENT_BOS_DESCRIPTOR_FAILURE,
              (const GUID *)(v5 + 1516),
              *(const void **)(v5 + 24),
              0,
              v6,
              Arg3);
        }
        else
        {
          *(_DWORD *)(v5 + 2432) = 1073807372;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
              2u,
              5u,
              0x10u,
              (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
              Arg3,
              v6);
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
            McTemplateK0pqqq(
              (PMCGEN_TRACE_CONTEXT)a1,
              &USBHUB3_ETW_EVENT_DEVICE_QUALIFIER_DESCRIPTOR_FAILURE,
              (const GUID *)(v5 + 1516),
              *(const void **)(v5 + 24),
              0,
              v6,
              Arg3);
        }
      }
      else
      {
        v16 = *(_BYTE *)(v5 + 2004);
        if ( v16 && v16 == *(_BYTE *)(v5 + 402) )
        {
          *(_DWORD *)(v5 + 2432) = 1073807373;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
              2u,
              5u,
              0x11u,
              (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
              Arg3,
              v6);
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
            McTemplateK0pqqq(
              (PMCGEN_TRACE_CONTEXT)a1,
              &USBHUB3_ETW_EVENT_SERIAL_NUMBER_STRING_FAILURE,
              (const GUID *)(v5 + 1516),
              *(const void **)(v5 + 24),
              0,
              v6,
              Arg3);
        }
        else
        {
          LOBYTE(a1) = *(_BYTE *)(v5 + 402);
          if ( (_BYTE)a1 )
          {
            v17 = *(_BYTE *)(v5 + 2003);
            if ( v17 && v17 == (_BYTE)a1 )
            {
              *(_DWORD *)(v5 + 2432) = 1073807375;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                  2u,
                  5u,
                  0x13u,
                  (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
                  Arg3,
                  v6);
              if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
                McTemplateK0pqqq(
                  (PMCGEN_TRACE_CONTEXT)a1,
                  &USBHUB3_ETW_EVENT_PRODUCT_ID_STRING_FAILURE,
                  (const GUID *)(v5 + 1516),
                  *(const void **)(v5 + 24),
                  0,
                  v6,
                  Arg3);
            }
            else if ( v8 )
            {
              v18 = *(_BYTE *)(*(_QWORD *)v8 + 3LL);
              if ( v18 && v18 == (_BYTE)a1 )
              {
                *(_DWORD *)(v5 + 2432) = 1073807375;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_dD(
                    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                    2u,
                    5u,
                    0x14u,
                    (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
                    Arg3,
                    v6);
                if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
                  McTemplateK0pqqq(
                    (PMCGEN_TRACE_CONTEXT)a1,
                    &USBHUB3_ETW_EVENT_BILLBOARD_STRING_FAILURE,
                    (const GUID *)(v5 + 1516),
                    *(const void **)(v5 + 24),
                    0,
                    v6,
                    Arg3);
              }
              else
              {
                v19 = v8[8];
                if ( v19 != 0xFF )
                {
                  v20 = *(_BYTE *)(*(_QWORD *)v8 + 4LL * v19 + 47);
                  if ( v20 )
                  {
                    if ( v20 == (_BYTE)a1 )
                    {
                      *(_DWORD *)(v5 + 2432) = 1073807375;
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        WPP_RECORDER_SF_dD(
                          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                          2u,
                          5u,
                          0x15u,
                          (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
                          Arg3,
                          v6);
                      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
                        McTemplateK0pqqq(
                          (PMCGEN_TRACE_CONTEXT)a1,
                          &USBHUB3_ETW_EVENT_ALTERNATE_MODE_STRING_FAILURE,
                          (const GUID *)(v5 + 1516),
                          *(const void **)(v5 + 24),
                          0,
                          v6,
                          Arg3);
                    }
                  }
                }
              }
            }
          }
          else
          {
            *(_DWORD *)(v5 + 2432) = 1073807374;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dD(
                *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
                2u,
                5u,
                0x12u,
                (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
                Arg3,
                v6);
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
              McTemplateK0pqqq(
                (PMCGEN_TRACE_CONTEXT)a1,
                &USBHUB3_ETW_EVENT_LANGUAGE_ID_STRING_FAILURE,
                (const GUID *)(v5 + 1516),
                *(const void **)(v5 + 24),
                0,
                v6,
                Arg3);
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(v5 + 2432) = 1073807367;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
          2u,
          5u,
          0xEu,
          (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
          Arg3,
          v6);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
        McTemplateK0pqqq(
          (PMCGEN_TRACE_CONTEXT)a1,
          &USBHUB3_ETW_EVENT_CONFIG_DESCRIPTOR_FAILURE,
          (const GUID *)(v5 + 1516),
          *(const void **)(v5 + 24),
          0,
          v6,
          Arg3);
    }
  }
  else
  {
    *(_DWORD *)(v5 + 2432) = 1073807360;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 1432LL),
        2u,
        5u,
        0xDu,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
        Arg3,
        v6);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0pqqq(
        (PMCGEN_TRACE_CONTEXT)a1,
        &USBHUB3_ETW_EVENT_DEVICE_DESCRIPTOR_FAILURE,
        (const GUID *)(v5 + 1516),
        *(const void **)(v5 + 24),
        0,
        v6,
        Arg3);
  }
LABEL_148:
  if ( Arg3 < 0 && (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    McTemplateK0pqqq(
      (PMCGEN_TRACE_CONTEXT)a1,
      &USBHUB3_ETW_EVENT_DEVICE_CONTROL_TRANSFER_ERROR,
      0LL,
      *(const void **)(v5 + 24),
      0,
      v6,
      Arg3);
  v29 = 0LL;
  v30 = 0;
  v27 = 24LL;
  v28 = 0;
  v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *, __int64))(WdfFunctions_01015 + 1992))(
          WdfDriverGlobals,
          v7,
          &v27,
          a4);
  if ( v23 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C0064130);
    LODWORD(Arg2) = v23;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v24 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
      Arg2);
  }
  HUBSM_AddEvent(v5 + 504, v10);
}

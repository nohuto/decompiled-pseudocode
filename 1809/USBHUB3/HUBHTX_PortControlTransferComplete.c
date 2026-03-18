/*
 * XREFs of HUBHTX_PortControlTransferComplete @ 0x1C0003660
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqhh @ 0x1C0001C48 (McTemplateK0pqhh.c)
 *     McTemplateK0pqqq @ 0x1C0001CDC (McTemplateK0pqqq.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ccccc @ 0x1C0002144 (WPP_RECORDER_SF_ccccc.c)
 *     WPP_RECORDER_SF_cccccc @ 0x1C0002274 (WPP_RECORDER_SF_cccccc.c)
 *     WPP_RECORDER_SF_cccccccc @ 0x1C00023C0 (WPP_RECORDER_SF_cccccccc.c)
 *     WPP_RECORDER_SF_chcccc @ 0x1C0002630 (WPP_RECORDER_SF_chcccc.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002C5A0 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_PortControlTransferComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int Arg3; // edi
  __int64 v5; // rbx
  unsigned int v6; // esi
  __int64 v8; // rcx
  int v9; // eax
  int v10; // ebp
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r9
  __int16 v17; // ax
  int v18; // esi
  __int64 v19; // rax
  unsigned int Arg1[2]; // [rsp+20h] [rbp-88h]
  int Arg1a; // [rsp+20h] [rbp-88h]
  int Arg1b; // [rsp+20h] [rbp-88h]
  unsigned int Arg2[2]; // [rsp+28h] [rbp-80h]
  _QWORD v25[4]; // [rsp+70h] [rbp-38h] BYREF

  Arg3 = *(_DWORD *)(a3 + 8);
  v5 = a4;
  v6 = *(_DWORD *)(a4 + 44);
  if ( Arg3 >= 0 )
  {
    if ( !*(_BYTE *)(a4 + 169) )
    {
      v9 = *(_DWORD *)(a4 + 1336) & 0x20;
      if ( v6 == 1 )
      {
        if ( !v9
          && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               *(_QWORD *)(*(_QWORD *)a4 + 16LL),
               0LL,
               0LL,
               1687,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c") >= 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v5 + 1336), 0x20u);
        }
      }
      else if ( v9 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
          WdfDriverGlobals,
          *(_QWORD *)(*(_QWORD *)a4 + 16LL),
          0LL,
          1695LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubxfer.c");
        _InterlockedAnd((volatile signed __int32 *)(v5 + 1336), 0xFFFFFFDF);
      }
      v10 = **(_DWORD **)(v5 + 80);
      if ( *(_DWORD *)(v5 + 1256) == 5000 )
      {
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x20) != 0 )
        {
          LOWORD(Arg2[0]) = *(_WORD *)(v5 + 184);
          Arg1[0] = *(unsigned __int16 *)(v5 + 200);
          McTemplateK0pqhh(
            (struct _MCGEN_TRACE_CONTEXT *)*(unsigned __int16 *)(v5 + 200),
            &USBHUB3_ETW_EVENT_30_PORT_STATUS,
            a3,
            *(_QWORD *)(*(_QWORD *)v5 + 248LL),
            *(_QWORD *)Arg1,
            *(_QWORD *)Arg2,
            *(_WORD *)(v5 + 186));
        }
        LOBYTE(a4) = ((v10 & 8) != 0) + 48;
        LOBYTE(a2) = ((v10 & 0x10) != 0) + 48;
        WPP_RECORDER_SF_chcccc(*(_QWORD *)(v5 + 1432), a2, (unsigned __int8)(((v10 & 0x200) != 0) + 48), a4, Arg1[0]);
        LOBYTE(v11) = (BYTE2(v10) >> 7) + 48;
        LOBYTE(v12) = ((v10 & 0x80000) != 0) + 48;
        LOBYTE(v13) = ((v10 & 0x200000) != 0) + 48;
        WPP_RECORDER_SF_cccccc(*(_QWORD *)(v5 + 1432), v13, v12, v11, Arg1a);
      }
      else
      {
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x20) != 0 )
        {
          LOWORD(Arg2[0]) = *(_WORD *)(v5 + 184);
          Arg1[0] = *(unsigned __int16 *)(v5 + 200);
          McTemplateK0pqhh(
            (struct _MCGEN_TRACE_CONTEXT *)*(unsigned __int16 *)(v5 + 200),
            &USBHUB3_ETW_EVENT_20_PORT_STATUS,
            a3,
            *(_QWORD *)(*(_QWORD *)v5 + 248LL),
            *(_QWORD *)Arg1,
            *(_QWORD *)Arg2,
            *(_WORD *)(v5 + 186));
        }
        LOBYTE(a4) = ((v10 & 4) != 0) + 48;
        LOBYTE(a3) = ((v10 & 0x10) != 0) + 48;
        LOBYTE(a2) = ((v10 & 2) != 0) + 48;
        WPP_RECORDER_SF_cccccccc(*(_QWORD *)(v5 + 1432), a2, a3, a4, Arg1[0]);
        LOBYTE(v14) = ((v10 & 0x80000) != 0) + 48;
        LOBYTE(v15) = ((v10 & 0x40000) != 0) + 48;
        WPP_RECORDER_SF_ccccc(*(_QWORD *)(v5 + 1432), v15, v14, v16, Arg1b);
      }
    }
    if ( *(_BYTE *)(v5 + 169) == 3 )
    {
      v17 = *(_WORD *)(v5 + 170);
      if ( v17 == 2 )
      {
        *(_WORD *)(v5 + 192) |= 4u;
        *(_WORD *)(v5 + 184) |= 4u;
        v17 = *(_WORD *)(v5 + 170);
      }
      if ( v17 == 5 )
      {
        if ( *(_BYTE *)(v5 + 173) != 3
          || (*(_WORD *)(v5 + 192) = *(_WORD *)(v5 + 192) & 0xFE1F | 0x60,
              *(_WORD *)(v5 + 184) = *(_WORD *)(v5 + 184) & 0xFE1F | 0x60,
              *(_WORD *)(v5 + 170) == 5) )
        {
          if ( *(_BYTE *)(v5 + 173) == 4 )
          {
            *(_WORD *)(v5 + 192) = *(_WORD *)(v5 + 192) & 0xFE1F | 0x80;
            *(_WORD *)(v5 + 184) = *(_WORD *)(v5 + 184) & 0xFE1F | 0x80;
          }
        }
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a4 + 1432),
      2u,
      4u,
      0x22u,
      (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
      *(_DWORD *)(a3 + 8),
      *(_DWORD *)(a4 + 44));
    v8 = *(_QWORD *)v5;
    if ( (*(_DWORD *)(*(_QWORD *)v5 + 2592LL) & 2) != 0 )
    {
      HUBMISC_VerifierDbgBreak("HubHwVerifierControlTransferFailure", v8 + 1264);
      v8 = *(_QWORD *)v5;
    }
    *(_DWORD *)(v8 + 2596) = 1073872897;
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      McTemplateK0pqqq(
        (PMCGEN_TRACE_CONTEXT)v8,
        &USBHUB3_ETW_EVENT_PORT_CONTROL_TRANSFER_ERROR,
        0LL,
        *(const void **)(*(_QWORD *)v5 + 248LL),
        *(unsigned __int16 *)(v5 + 200),
        v6,
        Arg3);
  }
  v25[1] = 0LL;
  v25[2] = 0LL;
  v25[0] = 24LL;
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1992))(
          WdfDriverGlobals,
          a1,
          v25);
  if ( v18 < 0 )
  {
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C005F130);
    Arg2[0] = v18;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v19 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
      *(_QWORD *)Arg2);
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(v5 + 1240))(v5, ((Arg3 >> 31) & 0xFFFFFFFC) + 3012);
}

/*
 * XREFs of HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x1C0027CC0
 * Callers:
 *     HUBDSM_DeConfiguringDeviceOnClientRequest @ 0x1C001BFD0 (HUBDSM_DeConfiguringDeviceOnClientRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002E39C (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBDTX_SetDeviceNullConfigurationUsingControlTransfer(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+28h] [rbp-30h]

  *(_BYTE *)(a1 + 400) &= 0x1Cu;
  *(_BYTE *)(a1 + 401) = 9;
  *(_DWORD *)(a1 + 402) = 0;
  *(_WORD *)(a1 + 406) = 0;
  v2 = HUBMISC_ControlTransfer(
         *(_QWORD *)a1,
         *(_QWORD *)(a1 + 24),
         a1,
         (int)a1 + 248,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         0,
         *(_BYTE *)(a1 + 1512));
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v3) = v2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x45u,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
        v3);
    }
    HUBSM_AddEvent(a1 + 504, 4004);
  }
}

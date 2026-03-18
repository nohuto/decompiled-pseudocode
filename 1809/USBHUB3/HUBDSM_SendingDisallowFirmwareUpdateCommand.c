/*
 * XREFs of HUBDSM_SendingDisallowFirmwareUpdateCommand @ 0x1C001D3E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002BD5C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SendingDisallowFirmwareUpdateCommand(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v4; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  *(_QWORD *)(v1 + 400) = 0LL;
  *(_DWORD *)(v1 + 400) = 6912;
  *(_WORD *)(v1 + 406) = 0;
  v2 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(v1 + 24),
         v1,
         (int)v1 + 248,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         1,
         *(_BYTE *)(v1 + 1512));
  if ( v2 < 0 )
  {
    LODWORD(v4) = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x37u,
      (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids,
      v4);
    HUBSM_AddEvent(v1 + 504, 4004);
  }
  return 1000LL;
}

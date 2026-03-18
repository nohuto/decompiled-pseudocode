/*
 * XREFs of HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x1C002486C
 * Callers:
 *     HUBDSM_DisarmingDeviceForWakeOnD0Entry @ 0x1C001E950 (HUBDSM_DisarmingDeviceForWakeOnD0Entry.c)
 *     HUBDSM_DisarmingDeviceForWakeOnPortResumed @ 0x1C001E980 (HUBDSM_DisarmingDeviceForWakeOnPortResumed.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002BD5C (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBDTX_DisarmDeviceForWakeUsingControlTransfer(__int64 a1)
{
  char v2; // cl
  int v3; // eax
  __int16 v4; // dx
  char v5; // cl
  char v6; // al
  int v7; // eax
  __int64 v8; // [rsp+28h] [rbp-30h]

  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 32LL), 0xFFFFFFFD);
  v2 = *(_BYTE *)(a1 + 400) & 0x1F;
  *(_WORD *)(a1 + 406) = 0;
  *(_BYTE *)(a1 + 400) = v2;
  v3 = *(_DWORD *)(a1 + 1456);
  *(_WORD *)(a1 + 404) = 0;
  if ( (v3 & 0x800) != 0 )
  {
    v4 = 0;
    v5 = v2 & 0xFC | 1;
    v6 = 3;
  }
  else
  {
    v4 = 1;
    v5 = v2 & 0xFC;
    v6 = 1;
  }
  *(_BYTE *)(a1 + 401) = v6;
  *(_BYTE *)(a1 + 400) = v5;
  *(_WORD *)(a1 + 402) = v4;
  v7 = HUBMISC_ControlTransfer(
         *(_QWORD *)a1,
         *(_QWORD *)(a1 + 24),
         a1,
         (int)a1 + 248,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         1,
         *(_BYTE *)(a1 + 1512));
  if ( v7 < 0 )
  {
    LODWORD(v8) = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x23u,
      (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids,
      v8);
    HUBSM_AddEvent(a1 + 504, 4004);
  }
}

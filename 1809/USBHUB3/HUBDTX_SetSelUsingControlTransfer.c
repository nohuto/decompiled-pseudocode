/*
 * XREFs of HUBDTX_SetSelUsingControlTransfer @ 0x1C0027224
 * Callers:
 *     HUBDSM_SettingSEL @ 0x1C001F6A0 (HUBDSM_SettingSEL.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002BD5C (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBDTX_SetSelUsingControlTransfer(__int64 *a1)
{
  __int64 v1; // r9
  _BYTE *v2; // rdi
  unsigned __int16 v3; // r8
  int v5; // r11d
  unsigned __int16 v6; // dx
  __int16 v7; // dx
  unsigned __int16 v8; // r8
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // dx
  unsigned int v12; // edx
  int v13; // eax
  __int64 v14; // [rsp+28h] [rbp-30h]

  v1 = *a1;
  v2 = (char *)a1 + 2196;
  v3 = *((_WORD *)a1 + 1096);
  v5 = *(unsigned __int8 *)(*a1 + 240);
  if ( v3 <= *(_WORD *)(*a1 + 2474) )
    v3 = *(_WORD *)(*a1 + 2474);
  v6 = *(_WORD *)(v1 + 2478) + (1000 * (v5 - *(unsigned __int8 *)(v1 + 2480)) + 500) / 1000;
  if ( v3 <= v6 )
  {
    *((_BYTE *)a1 + 2197) = v6;
  }
  else
  {
    *((_BYTE *)a1 + 2197) = v3;
    _InterlockedOr((volatile signed __int32 *)a1 + 554, 1u);
  }
  v7 = v3 + *(_WORD *)(v1 + 2486) + ((unsigned int)*(unsigned __int8 *)(*a1 + 1187) + 5) / 0xA;
  v8 = *((_WORD *)a1 + 1097);
  *((_WORD *)a1 + 1101) = v7;
  if ( v8 <= *(_WORD *)(v1 + 2476) )
    v8 = *(_WORD *)(v1 + 2476);
  v9 = *(_WORD *)(v1 + 2482) + (1000 * (v5 - *(unsigned __int8 *)(v1 + 2484)) + 500) / 1000;
  if ( v8 <= v9 )
  {
    *((_WORD *)a1 + 1100) = v9;
  }
  else
  {
    *((_WORD *)a1 + 1100) = v8;
    _InterlockedOr((volatile signed __int32 *)a1 + 554, 2u);
  }
  v10 = *((_WORD *)a1 + 1291);
  *((_WORD *)a1 + 1102) = v8 + *(_WORD *)(v1 + 2488) + ((unsigned int)*(unsigned __int8 *)(*a1 + 1187) + 5) / 0xA;
  v11 = *((_WORD *)a1 + 1290);
  if ( (_BYTE)v5 )
    v12 = (800 * v5 + 2200 + (v5 + 1) * (v10 + (unsigned int)v11)) / 0x3E8;
  else
    LOWORD(v12) = v10 + v11;
  *v2 = v12 + *((_BYTE *)a1 + 2197) + 5;
  *((_WORD *)a1 + 1099) = v12 + *((_WORD *)a1 + 1100) + 5;
  *((_BYTE *)a1 + 400) &= 0x1Cu;
  *((_BYTE *)a1 + 401) = 48;
  *((_DWORD *)a1 + 101) = 393216;
  *((_WORD *)a1 + 201) = 0;
  v13 = HUBMISC_ControlTransfer(
          *a1,
          a1[3],
          (_DWORD)a1,
          (int)a1 + 248,
          (__int64)HUBDTX_ControlTransferComplete,
          (__int64)v2,
          6,
          1,
          *((_BYTE *)a1 + 1512));
  if ( v13 < 0 )
  {
    LODWORD(v14) = v13;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432),
      2u,
      5u,
      0x65u,
      (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids,
      v14);
    HUBSM_AddEvent((__int64)(a1 + 63), 4004);
  }
}

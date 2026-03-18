/*
 * XREFs of Control_ValidateED0TrbPointerOnMismatch @ 0x1C002C4C0
 * Callers:
 *     Control_ProcessTransferEventWithED0 @ 0x1C002A818 (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     WPP_RECORDER_SF_DDi @ 0x1C000415C (WPP_RECORDER_SF_DDi.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 */

void __fastcall Control_ValidateED0TrbPointerOnMismatch(_QWORD *a1, signed __int64 *a2)
{
  signed __int64 v2; // rax
  __int64 v4; // rcx
  signed __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]
  int v16; // [rsp+30h] [rbp-18h]
  int v17; // [rsp+30h] [rbp-18h]

  v2 = *a2;
  v4 = a1[22];
  v5 = *(_QWORD *)(v4 + 24);
  if ( *a2 < v5 || v2 >= v5 + *(unsigned int *)(v4 + 40) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = a1[7];
      v17 = *(_DWORD *)(v11 + 144);
      v14 = *(unsigned __int8 *)(a1[6] + 135LL);
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(v11 + 80),
        2u,
        *(unsigned __int8 *)(a1[6] + 135LL),
        0xEu,
        (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
        v14,
        v17,
        v2);
    }
    v10 = a1[5];
    v9 = 4127;
    goto LABEL_12;
  }
  v6 = a1[5];
  if ( (*(_QWORD *)(v6 + 336) & 0x4000000000LL) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = a1[7];
      v16 = *(_DWORD *)(v8 + 144);
      v13 = *(unsigned __int8 *)(a1[6] + 135LL);
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(v8 + 80),
        2u,
        *(unsigned __int8 *)(a1[6] + 135LL),
        0xDu,
        (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
        v13,
        v16,
        v2);
      v6 = a1[5];
    }
    v9 = 4128;
    v10 = v6;
LABEL_12:
    Controller_ReportFatalError(v10, 2, v9, a1[6], a1[7], (__int64)a1);
    return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = a1[7];
    v15 = *(_DWORD *)(v7 + 144);
    v12 = *(unsigned __int8 *)(a1[6] + 135LL);
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(v7 + 80),
      3u,
      *(unsigned __int8 *)(a1[6] + 135LL),
      0xCu,
      (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
      v12,
      v15,
      v2);
  }
}

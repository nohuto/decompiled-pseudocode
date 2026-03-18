/*
 * XREFs of Control_ValidateED0TrbPointerOnMismatch @ 0x1C0027BDC
 * Callers:
 *     Control_ProcessTransferEventWithED0 @ 0x1C00260A4 (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     WPP_RECORDER_SF_DDi @ 0x1C00035F0 (WPP_RECORDER_SF_DDi.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 */

void __fastcall Control_ValidateED0TrbPointerOnMismatch(__int64 *a1, signed __int64 *a2)
{
  signed __int64 v2; // rax
  __int64 v4; // rcx
  signed __int64 v5; // r8
  bool v6; // cl
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+30h] [rbp-18h]
  int v16; // [rsp+30h] [rbp-18h]

  v2 = *a2;
  v4 = a1[22];
  v5 = *(_QWORD *)(v4 + 24);
  v6 = *a2 >= v5 && v2 < v5 + *(unsigned int *)(v4 + 40);
  v7 = a1[6];
  if ( v6 )
  {
    v8 = a1[7];
    if ( (*(_QWORD *)(a1[5] + 272) & 0x4000000000LL) != 0 )
    {
      v14 = *(_DWORD *)(v8 + 144);
      v11 = *(unsigned __int8 *)(v7 + 135);
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(v8 + 80),
        3u,
        v8,
        0xCu,
        (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
        v11,
        v14,
        v2);
      return;
    }
    v15 = *(_DWORD *)(v8 + 144);
    v12 = *(unsigned __int8 *)(v7 + 135);
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(v8 + 80),
      2u,
      v8,
      0xDu,
      (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
      v12,
      v15,
      v2);
    v9 = 4128;
  }
  else
  {
    v10 = a1[7];
    v16 = *(_DWORD *)(v10 + 144);
    v13 = *(unsigned __int8 *)(v7 + 135);
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(v10 + 80),
      2u,
      *(unsigned __int8 *)(v7 + 135),
      0xEu,
      (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
      v13,
      v16,
      v2);
    v9 = 4127;
  }
  Controller_ReportFatalError(a1[5], 2, v9, a1[6], a1[7], (__int64)a1);
}

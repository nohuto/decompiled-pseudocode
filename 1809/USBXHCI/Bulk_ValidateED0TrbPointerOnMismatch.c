/*
 * XREFs of Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C0033074
 * Callers:
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C00307E8 (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDi @ 0x1C0003C28 (WPP_RECORDER_SF_DDDi.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x1C002FB50 (Bulk_IsTransferEventLikelyDuplicate_Internal.c)
 */

void __fastcall Bulk_ValidateED0TrbPointerOnMismatch(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  unsigned __int16 v6; // r9
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // [rsp+20h] [rbp-38h]
  char v10; // [rsp+68h] [rbp+10h] BYREF

  if ( Bulk_IsTransferEventLikelyDuplicate_Internal(a1, *(_QWORD *)a2, &v10) )
  {
    v5 = *(_QWORD *)(a1[5] + 272LL);
    if ( (v5 & 0x4000000000LL) != 0 )
    {
      v6 = 43;
      v7 = a1[7];
LABEL_10:
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(v7 + 80), 3u, v4, v6, v9);
      return;
    }
    if ( v10 )
    {
      if ( (v5 & 0x2000000000000LL) != 0 && *(_DWORD *)(a1[6] + 20LL) == 3 )
      {
        v7 = a1[7];
        if ( *(_DWORD *)(v7 + 120) == 6 && (unsigned __int8)(*(_BYTE *)(a2 + 11) - 26) <= 2u )
        {
          v6 = 44;
          goto LABEL_10;
        }
      }
    }
    WPP_RECORDER_SF_DDDi(*(_QWORD *)(a1[7] + 80LL), 2u, *(unsigned __int8 *)(a1[6] + 135LL), 0x2Du, v9);
    v8 = 4128;
  }
  else
  {
    WPP_RECORDER_SF_DDDi(*(_QWORD *)(a1[7] + 80LL), 2u, v4, 0x2Eu, v9);
    v8 = 4127;
  }
  Controller_ReportFatalError(a1[5], 2, v8, a1[6], a1[7], (__int64)a1);
}

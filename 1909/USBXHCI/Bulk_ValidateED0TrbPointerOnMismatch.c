/*
 * XREFs of Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C0037FEC
 * Callers:
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C003558C (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDi @ 0x1C0004794 (WPP_RECORDER_SF_DDDi.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x1C0034854 (Bulk_IsTransferEventLikelyDuplicate_Internal.c)
 */

void __fastcall Bulk_ValidateED0TrbPointerOnMismatch(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rax
  unsigned __int16 v7; // r9
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // [rsp+20h] [rbp-38h]
  char v12; // [rsp+68h] [rbp+10h] BYREF

  if ( Bulk_IsTransferEventLikelyDuplicate_Internal(a1, *(_QWORD *)a2, &v12) )
  {
    v5 = a1[5];
    v6 = *(_QWORD *)(v5 + 336);
    if ( (v6 & 0x4000000000LL) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v7 = 44;
      v8 = a1[7];
LABEL_12:
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(v8 + 80), 3u, v4, v7, v11);
      return;
    }
    if ( v12 )
    {
      if ( (v6 & 0x2000000000000LL) != 0 && *(_DWORD *)(a1[6] + 20LL) == 3 )
      {
        v8 = a1[7];
        if ( *(_DWORD *)(v8 + 120) == 6 && (unsigned __int8)(*(_BYTE *)(a2 + 11) - 26) <= 2u )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return;
          v7 = 45;
          goto LABEL_12;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(a1[7] + 80LL), 2u, *(unsigned __int8 *)(a1[6] + 135LL), 0x2Eu, v11);
      v5 = a1[5];
    }
    v9 = 4128;
    v10 = v5;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDi(*(_QWORD *)(a1[7] + 80LL), 2u, v4, 0x2Fu, v11);
    v10 = a1[5];
    v9 = 4127;
  }
  Controller_ReportFatalError(v10, 2, v9, a1[6], a1[7], (__int64)a1);
}

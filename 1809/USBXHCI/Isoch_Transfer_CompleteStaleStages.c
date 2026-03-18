/*
 * XREFs of Isoch_Transfer_CompleteStaleStages @ 0x1C002D7C8
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002AADC (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C002ADFC (Isoch_ProcessTransferEventWithED1.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0023608 (StageQueue_ForwardScanGetNextStage.c)
 *     Isoch_Stage_CompleteTD @ 0x1C002BB14 (Isoch_Stage_CompleteTD.c)
 */

unsigned __int8 *__fastcall Isoch_Transfer_CompleteStaleStages(__int64 a1, _BYTE *a2, unsigned __int8 *a3, char a4)
{
  unsigned __int8 *v4; // rdi
  unsigned __int8 *result; // rax
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v8 = a1;
  v4 = a2 + 128;
  a2[133] = a2[132];
  a2[134] = a2[130];
  while ( 1 )
  {
    result = StageQueue_ForwardScanGetNextStage(v4);
    if ( !result || result == a3 )
      break;
    *((_DWORD *)result + 12) = *((_DWORD *)result + 11) + 1;
    Isoch_Stage_CompleteTD((PMDL *)result, 0x17u, 0, 1, &v8, &v9, a4);
  }
  return result;
}

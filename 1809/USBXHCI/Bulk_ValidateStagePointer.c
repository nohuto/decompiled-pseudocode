/*
 * XREFs of Bulk_ValidateStagePointer @ 0x1C00331F4
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0030AC8 (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0023608 (StageQueue_ForwardScanGetNextStage.c)
 */

char __fastcall Bulk_ValidateStagePointer(__int64 a1, unsigned __int8 *a2)
{
  char v2; // di
  KSPIN_LOCK *v5; // rsi
  KIRQL v6; // al
  _BYTE *v7; // r11
  _BYTE *v8; // r10
  unsigned __int8 *v9; // r14
  unsigned __int8 *NextStage; // rax
  _QWORD *v11; // r10

  v2 = 0;
  if ( a2 )
  {
    v5 = (KSPIN_LOCK *)(a1 + 96);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v7 = (_BYTE *)(a1 + 368);
    *(_BYTE *)(a1 + 104) = v6;
    v8 = *(_BYTE **)(a1 + 368);
LABEL_8:
    if ( v7 != v8 )
    {
      v9 = v8 + 128;
      v8[133] = v8[132];
      v8[134] = v8[130];
      do
      {
        NextStage = StageQueue_ForwardScanGetNextStage(v9);
        if ( !NextStage )
        {
          v8 = (_BYTE *)*v11;
          goto LABEL_8;
        }
      }
      while ( NextStage != a2 );
      v2 = 1;
    }
    KeReleaseSpinLock(v5, *(_BYTE *)(a1 + 104));
  }
  else
  {
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xEu,
      0x2Au,
      (__int64)&WPP_e65a03fee1fe3b77277485fb27797cd8_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64));
  }
  return v2;
}

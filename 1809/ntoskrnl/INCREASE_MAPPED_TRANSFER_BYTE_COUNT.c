/*
 * XREFs of INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x14092944C
 * Callers:
 *     VfMapTransfer @ 0x14092BAB0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14092BC70 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14030AD18 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14092DD28 (ViHalPreprocessOptions.c)
 */

void __fastcall INCREASE_MAPPED_TRANSFER_BYTE_COUNT(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int32 v3; // r9d
  unsigned __int32 v4; // eax
  unsigned __int32 v5; // ebx
  unsigned __int32 v6; // edi

  v3 = *(_DWORD *)(a1 + 160) << 12;
  v4 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 188), a2);
  if ( !a3 && v4 > v3 )
  {
    v5 = v3;
    v6 = v4;
    ViHalPreprocessOptions(byte_14040546C, "Driver did not flush adapter buffers -- bytes mapped: %x (%x max).", 13, v4);
    VfReportIssueWithOptions(0xE6u, 0xDuLL, v6, v5, 0LL, byte_14040546C);
  }
}

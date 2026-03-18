/*
 * XREFs of ?IsLeftOrRightArranged@@YA_NPEBUtagWND@@@Z @ 0x1C01FA8A4
 * Callers:
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD0D8 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FEC9C (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     UpdateSizeTrackingInfo @ 0x1C02002C8 (UpdateSizeTrackingInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsLeftOrRightArranged(const struct tagWND *a1)
{
  char v1; // cl

  v1 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3;
  return v1 && v1 != 3;
}

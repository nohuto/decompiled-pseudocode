/*
 * XREFs of ?IsLeftOrRightArranged@@YAEPEBUtagWND@@@Z @ 0x1C01C1010
 * Callers:
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C01C57A0 (IsWindowSubjectToShellSizingPolicy.c)
 *     UpdateSizeTrackingInfo @ 0x1C01C5C90 (UpdateSizeTrackingInfo.c)
 *     xxxEndSetWindowArrangement @ 0x1C01C6954 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsLeftOrRightArranged(const struct tagWND *a1)
{
  char v1; // cl

  v1 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3;
  return v1 && v1 != 3;
}

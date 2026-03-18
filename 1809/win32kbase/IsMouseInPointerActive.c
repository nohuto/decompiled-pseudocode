/*
 * XREFs of IsMouseInPointerActive @ 0x1C0147C74
 * Callers:
 *     ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C013F180 (-IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C0159650 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMouseInPointerActive(__int64 a1)
{
  return !*(_QWORD *)(a1 + 608)
      && ((*(_DWORD *)(*(_QWORD *)(a1 + 424) + 820LL) & 4) != 0 || (*(_DWORD *)(a1 + 1208) & 0x2000000) != 0);
}

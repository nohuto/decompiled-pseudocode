/*
 * XREFs of IsMouseInPointerActive @ 0x1C0174A84
 * Callers:
 *     ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C016BAE0 (-IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C0190DEC (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMouseInPointerActive(__int64 a1)
{
  return !*(_QWORD *)(a1 + 600)
      && ((*(_DWORD *)(*(_QWORD *)(a1 + 416) + 812LL) & 4) != 0 || (*(_DWORD *)(a1 + 1224) & 0x2000000) != 0);
}

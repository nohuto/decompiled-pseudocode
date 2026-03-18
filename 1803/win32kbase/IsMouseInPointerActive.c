/*
 * XREFs of IsMouseInPointerActive @ 0x1C011F604
 * Callers:
 *     ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0117530 (-IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C0135D48 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsMouseInPointerActive(__int64 a1)
{
  return !*(_QWORD *)(a1 + 600)
      && ((*(_DWORD *)(*(_QWORD *)(a1 + 416) + 812LL) & 4) != 0 || (*(_DWORD *)(a1 + 1200) & 0x2000000) != 0);
}

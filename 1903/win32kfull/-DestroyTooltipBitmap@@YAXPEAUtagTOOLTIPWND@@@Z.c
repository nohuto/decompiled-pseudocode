/*
 * XREFs of ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C012FBF8
 * Callers:
 *     xxxTooltipWndProc @ 0x1C012F5F0 (xxxTooltipWndProc.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C023F52C (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyTooltipBitmap(struct tagTOOLTIPWND *a1)
{
  if ( *((_QWORD *)a1 + 3) )
  {
    GreGetStockObject(21LL);
    GreSelectBitmap(*((_QWORD *)a1 + 2));
    GreDeleteObject(*((_QWORD *)a1 + 3));
    *((_QWORD *)a1 + 3) = 0LL;
  }
}

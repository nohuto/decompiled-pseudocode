/*
 * XREFs of GetRedirectionFlags @ 0x1C007D1C4
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x1C007B700 (_SetLayeredWindowAttributes.c)
 *     zzzUpdateLayeredWindow @ 0x1C007CD40 (zzzUpdateLayeredWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00E8330 (RecreateRedirectionBitmap.c)
 *     _GetLayeredWindowAttributes @ 0x1C011A890 (_GetLayeredWindowAttributes.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01B1338 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     xxxPrintWindow @ 0x1C01B1C10 (xxxPrintWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetRedirectionFlags(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 Prop; // rax

  v1 = 0;
  Prop = RealGetProp(*(_QWORD *)(a1 + 120), (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
    return *(unsigned int *)(Prop + 32);
  return v1;
}

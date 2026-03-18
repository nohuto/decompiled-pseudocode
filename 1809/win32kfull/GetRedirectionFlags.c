/*
 * XREFs of GetRedirectionFlags @ 0x1C0074038
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C00107D4 (RecreateRedirectionBitmap.c)
 *     _SetLayeredWindowAttributes @ 0x1C0077A14 (_SetLayeredWindowAttributes.c)
 *     zzzUpdateLayeredWindow @ 0x1C0077B50 (zzzUpdateLayeredWindow.c)
 *     _GetLayeredWindowAttributes @ 0x1C013B400 (_GetLayeredWindowAttributes.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01D3E7C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     xxxPrintWindow @ 0x1C01D43EC (xxxPrintWindow.c)
 * Callees:
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 */

__int64 __fastcall GetRedirectionFlags(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 Prop; // rax

  v1 = 0;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
    return *(unsigned int *)(Prop + 32);
  return v1;
}

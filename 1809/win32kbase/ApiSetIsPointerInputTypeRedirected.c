/*
 * XREFs of ApiSetIsPointerInputTypeRedirected @ 0x1C0164458
 * Callers:
 *     RIMUpdatePrimaryDevice @ 0x1C01192B0 (RIMUpdatePrimaryDevice.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C012886C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetIsPointerInputTypeRedirected(unsigned int a1)
{
  if ( (int)IsIsPointerInputTypeRedirectedSupported() < 0 )
    return 0LL;
  else
    return IsPointerInputTypeRedirected(a1);
}

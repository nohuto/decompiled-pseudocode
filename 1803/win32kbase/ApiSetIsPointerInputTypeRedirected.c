/*
 * XREFs of ApiSetIsPointerInputTypeRedirected @ 0x1C0140EB0
 * Callers:
 *     RIMUpdatePrimaryDevice @ 0x1C00EDF20 (RIMUpdatePrimaryDevice.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01003F8 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
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

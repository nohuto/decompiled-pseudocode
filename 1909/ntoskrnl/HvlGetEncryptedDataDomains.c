/*
 * XREFs of HvlGetEncryptedDataDomains @ 0x14019ECF8
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x140182104 (IopLoadCrashdumpDriver.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140858E28 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     <none>
 */

__int64 HvlGetEncryptedDataDomains()
{
  if ( VslVsmEnabled )
    return (unsigned int)((HvlpFlags & 2) != 0) + 1;
  else
    return 0LL;
}

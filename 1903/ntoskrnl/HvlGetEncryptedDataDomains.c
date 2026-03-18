/*
 * XREFs of HvlGetEncryptedDataDomains @ 0x14019E5D8
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x140181A14 (IopLoadCrashdumpDriver.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140859728 (IopLiveDumpAllocAndInitResources.c)
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

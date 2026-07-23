/*
 * XREFs of HvlGetEncryptedDataDomains @ 0x140193FBC
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x14017827C (IopLoadCrashdumpDriver.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140820900 (IopLiveDumpAllocAndInitResources.c)
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

/*
 * XREFs of HvlGetEncryptedDataDomains @ 0x140193E7C
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x14017817C (IopLoadCrashdumpDriver.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14081F700 (IopLiveDumpAllocAndInitResources.c)
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

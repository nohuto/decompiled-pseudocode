/*
 * XREFs of PiCslIsConsoleLocked @ 0x140874CD4
 * Callers:
 *     PipDmgEnforceEnumerationPolicy @ 0x140873F90 (PipDmgEnforceEnumerationPolicy.c)
 *     PipDmgReevaluateQueue @ 0x1408740E0 (PipDmgReevaluateQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

char PiCslIsConsoleLocked()
{
  char v0; // dl

  v0 = 0;
  if ( !PipCslInitialized )
    KeBugCheckEx(0xCAu, 0x10uLL, 0LL, 0LL, 0LL);
  if ( !PipCslConsoleLockState )
    return 1;
  if ( PipCslConsoleLockState != 1 )
  {
    if ( PipCslConsoleLockState != 2 )
      __fastfail(5u);
    return 1;
  }
  return v0;
}

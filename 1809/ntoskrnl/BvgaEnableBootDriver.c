/*
 * XREFs of BvgaEnableBootDriver @ 0x14027E230
 * Callers:
 *     <none>
 * Callees:
 *     BvgaAcquireLock @ 0x14027E0C0 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x14027E380 (BvgaReleaseLock.c)
 */

__int64 __fastcall BvgaEnableBootDriver(char a1)
{
  int v1; // ebx
  __int64 result; // rax

  v1 = 0;
  if ( BvgaBootDriverFullyInitialized )
  {
    if ( BvgaDisplayState < 2 )
    {
      BvgaAcquireLock();
      if ( !BvgaDisplayState )
        VidCleanUp();
      LOBYTE(v1) = a1 == 0;
      BvgaDisplayState = v1;
      return BvgaReleaseLock();
    }
  }
  else
  {
    LOBYTE(v1) = a1 == 0;
    BvgaDisplayState = v1;
  }
  return result;
}

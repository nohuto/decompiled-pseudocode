/*
 * XREFs of AdtpCleanupParameterAllocations @ 0x140188C8C
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1403258D0 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14074D584 (AdtpWriteToEtw.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall AdtpCleanupParameterAllocations(_BYTE *a1, PVOID *a2, unsigned int a3)
{
  __int64 v4; // rsi

  if ( a3 )
  {
    v4 = a3;
    do
    {
      if ( *a1 )
        ExFreePoolWithTag(*a2, 0);
      ++a1;
      a2 += 2;
      --v4;
    }
    while ( v4 );
  }
}

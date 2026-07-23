/*
 * XREFs of AdtpCleanupParameterAllocations @ 0x140188DEC
 * Callers:
 *     AdtpWriteToEtwEx @ 0x140325BC0 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14074E754 (AdtpWriteToEtw.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
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

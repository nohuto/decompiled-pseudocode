/*
 * XREFs of ViKeObjectAcquired @ 0x140979614
 * Callers:
 *     VerifierKeWaitForMultipleObjects @ 0x140978D20 (VerifierKeWaitForMultipleObjects.c)
 *     VerifierKeWaitForSingleObject @ 0x140978E50 (VerifierKeWaitForSingleObject.c)
 * Callees:
 *     VfDeadlockAcquireResource @ 0x14097A93C (VfDeadlockAcquireResource.c)
 */

char __fastcall ViKeObjectAcquired(unsigned int a1, _BYTE **a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  char result; // al

  if ( a1 )
  {
    v5 = a1;
    do
    {
      result = **a2 & 0x7F;
      if ( result == 2 )
        result = VfDeadlockAcquireResource((int)*a2, a4);
      ++a2;
      --v5;
    }
    while ( v5 );
  }
  return result;
}

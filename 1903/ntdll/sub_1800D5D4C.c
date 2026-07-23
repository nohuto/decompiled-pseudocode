/*
 * XREFs of sub_1800D5D4C @ 0x1800D5D4C
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009B8E0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009BA20 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800D5D4C(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      stru_180165010.Ptr = (PVOID)1;
    else
      RtlReleaseSRWLockExclusive(&stru_180165010);
  }
  else
  {
    RtlAcquireSRWLockExclusive(&stru_180165010);
  }
}

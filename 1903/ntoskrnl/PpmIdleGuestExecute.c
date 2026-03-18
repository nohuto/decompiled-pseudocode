/*
 * XREFs of PpmIdleGuestExecute @ 0x1403041D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleGuestExecute(__int64 a1, __int64 a2, int a3)
{
  if ( a3 )
    __readmsr(0x400000F0u);
  else
    HalProcessorIdle();
  return 0LL;
}

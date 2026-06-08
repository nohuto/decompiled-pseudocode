/*
 * XREFs of ProcessSystemSleepStateNotify @ 0x1C00016C0
 * Callers:
 *     <none>
 * Callees:
 *     AcquireBiosPpmControl @ 0x1C000196C (AcquireBiosPpmControl.c)
 */

__int64 __fastcall ProcessSystemSleepStateNotify(int a1, __int64 a2, char a3)
{
  if ( (a1 == 3 || a1 == 6) && !a3 && (__int64 *)qword_1C001B3A8 != &qword_1C001B3A8 && qword_1C001B3A8 != 32 )
    AcquireBiosPpmControl(qword_1C001B3A8 - 32);
  return 0LL;
}

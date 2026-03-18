/*
 * XREFs of ExpCloseWorkerFactory @ 0x1406BCE40
 * Callers:
 *     <none>
 * Callees:
 *     ExpShutdownWorkerFactory @ 0x140113594 (ExpShutdownWorkerFactory.c)
 */

__int64 __fastcall ExpCloseWorkerFactory(__int64 a1, PKSPIN_LOCK *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
    return ExpShutdownWorkerFactory(a2);
  return result;
}

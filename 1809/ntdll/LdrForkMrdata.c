/*
 * XREFs of LdrForkMrdata @ 0x1800D7B0C
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D8540 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D8820 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D8AC0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall LdrForkMrdata(int a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  signed __int64 result; // rax

  if ( !a1 )
    return RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, a2, a3, a4);
  if ( a1 != 1 )
    return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  LdrpMrdataLock = 1LL;
  return result;
}

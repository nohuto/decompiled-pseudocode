/*
 * XREFs of sub_180107810 @ 0x180107810
 * Callers:
 *     sub_180107BC4 @ 0x180107BC4 (sub_180107BC4.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall sub_180107810(PRTL_SRWLOCK SRWLock, unsigned __int64 a2)
{
  _RTL_SRWLOCK *i; // r8
  char v5; // bl

  RtlAcquireSRWLockExclusive(SRWLock);
  for ( i = (_RTL_SRWLOCK *)SRWLock[1].Ptr; ; i = (_RTL_SRWLOCK *)i->Ptr )
  {
    if ( i == &SRWLock[1] )
    {
      v5 = 0;
      goto LABEL_7;
    }
    if ( a2 >= (unsigned __int64)i && a2 < (unsigned __int64)&i[126] )
      break;
  }
  v5 = 1;
LABEL_7:
  RtlReleaseSRWLockExclusive(SRWLock);
  return v5;
}

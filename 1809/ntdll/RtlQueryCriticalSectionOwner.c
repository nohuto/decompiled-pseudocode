/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x1800E9600
 * Callers:
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800DA09C (RtlpQueryCriticalSectionOwnerInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007B650 (RtlTryAcquireSRWLockShared.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800FB37C (RtlIsAnyDebuggerPresent.c)
 */

__int64 __fastcall RtlQueryCriticalSectionOwner(__int64 a1, char a2)
{
  bool v4; // si
  __int64 v5; // rbx
  _UNKNOWN **v6; // rdx
  _QWORD *v7; // r8
  __int64 v8; // rcx

  v4 = 0;
  v5 = 0LL;
  if ( !a1 || !RtlTryAcquireSRWLockShared(&RtlCriticalSectionLock) )
    return 0LL;
  v6 = (_UNKNOWN **)RtlCriticalSectionList;
  v7 = RtlCriticalSectionList;
  while ( v6 != &RtlCriticalSectionList )
  {
    if ( !*((_WORD *)v6 - 8) )
    {
      v8 = (__int64)*(v6 - 1);
      if ( a2 )
      {
        if ( v8 == a1 - 8 )
        {
          v5 = *(_QWORD *)(v8 + 16);
          break;
        }
      }
      else if ( *(_QWORD *)(v8 + 24) == a1 )
      {
        v5 = *(_QWORD *)(v8 + 16);
        break;
      }
    }
    v6 = (_UNKNOWN **)*v6;
    if ( v6 == v7 )
      break;
    if ( v4 )
      v7 = (_QWORD *)*v7;
    v4 = !v4;
  }
  RtlReleaseSRWLockShared(&RtlCriticalSectionLock);
  return v5;
}

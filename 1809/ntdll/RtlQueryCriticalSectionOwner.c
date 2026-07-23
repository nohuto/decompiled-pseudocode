/*
 * XREFs of RtlQueryCriticalSectionOwner @ 0x1800E9600
 * Callers:
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800DA09C (RtlpQueryCriticalSectionOwnerInformation.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007B660 (RtlTryAcquireSRWLockShared.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800FB37C (RtlIsAnyDebuggerPresent.c)
 */

HANDLE __cdecl RtlQueryCriticalSectionOwner(HANDLE EventHandle)
{
  char v1; // dl
  char v2; // r15
  bool v4; // si
  void *v5; // rbx
  _UNKNOWN **v6; // rdx
  _QWORD *v7; // r8
  __int64 v8; // rcx

  v2 = v1;
  v4 = 0;
  v5 = 0LL;
  if ( !EventHandle || !RtlTryAcquireSRWLockShared(&RtlCriticalSectionLock) )
    return 0LL;
  v6 = (_UNKNOWN **)RtlCriticalSectionList;
  v7 = RtlCriticalSectionList;
  while ( v6 != &RtlCriticalSectionList )
  {
    if ( !*((_WORD *)v6 - 8) )
    {
      v8 = (__int64)*(v6 - 1);
      if ( v2 )
      {
        if ( (_BYTE *)v8 == (char *)EventHandle - 8 )
        {
          v5 = *(void **)(v8 + 16);
          break;
        }
      }
      else if ( *(HANDLE *)(v8 + 24) == EventHandle )
      {
        v5 = *(void **)(v8 + 16);
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

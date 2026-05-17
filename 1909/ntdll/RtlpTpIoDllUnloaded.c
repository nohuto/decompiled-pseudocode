/*
 * XREFs of RtlpTpIoDllUnloaded @ 0x1800892D8
 * Callers:
 *     RtlpTpIoDllNotification @ 0x180089210 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpTpIoDllProcessUnloads @ 0x18010FD8C (RtlpTpIoDllProcessUnloads.c)
 */

signed __int64 __fastcall RtlpTpIoDllUnloaded(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  signed __int64 result; // rax

  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
    v2 = RtlpTpIoTree;
    while ( v2 )
    {
      v3 = *(_QWORD *)(v2 - 96);
      if ( v3 < *(_QWORD *)(a1 + 24) )
        goto LABEL_9;
      if ( v3 < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
      {
        RtlpTpIoDllProcessUnloads(a1);
        return RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
      }
      if ( v3 < *(_QWORD *)(a1 + 24) )
LABEL_9:
        v2 = *(_QWORD *)(v2 + 16);
      else
        v2 = *(_QWORD *)(v2 + 8);
    }
    return RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  }
  return result;
}

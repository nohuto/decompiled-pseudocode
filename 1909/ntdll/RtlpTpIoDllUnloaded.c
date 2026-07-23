/*
 * XREFs of RtlpTpIoDllUnloaded @ 0x1800892D8
 * Callers:
 *     RtlpTpIoDllNotification @ 0x180089210 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpTpIoDllProcessUnloads @ 0x18010FD8C (RtlpTpIoDllProcessUnloads.c)
 */

void __fastcall RtlpTpIoDllUnloaded(__int64 a1)
{
  PRTL_SPLAY_LINKS v2; // r8
  unsigned __int64 Parent; // rcx

  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
    v2 = RtlpTpIoTree;
    while ( v2 )
    {
      Parent = (unsigned __int64)v2[-4].Parent;
      if ( Parent < *(_QWORD *)(a1 + 24) )
        goto LABEL_9;
      if ( Parent < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
      {
        RtlpTpIoDllProcessUnloads(a1);
        break;
      }
      if ( Parent < *(_QWORD *)(a1 + 24) )
LABEL_9:
        v2 = v2->RightChild;
      else
        v2 = v2->LeftChild;
    }
    RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  }
}

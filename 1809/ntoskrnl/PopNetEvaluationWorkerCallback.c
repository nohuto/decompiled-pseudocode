/*
 * XREFs of PopNetEvaluationWorkerCallback @ 0x14075EBD0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14013BB40 (PopOkayToQueueNextWorkItem.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x14075ECE4 (PopTraceStandbyConnectivityUpdate.c)
 *     PopNetPublishWnfStateUpdate @ 0x14075EE14 (PopNetPublishWnfStateUpdate.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x14075EE74 (PopNetUpdateCsConsumptionFlags.c)
 *     PopNetSetResiliencyPhaseBias @ 0x140878198 (PopNetSetResiliencyPhaseBias.c)
 */

__int64 PopNetEvaluationWorkerCallback()
{
  __int64 v0; // rdx
  char v1; // si
  int v2; // ebp
  int v3; // r12d
  char v4; // r15
  char v5; // r14
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // edi

  PopAcquirePolicyLock();
  while ( 1 )
  {
    v1 = 0;
    v2 = PopNetStandbyState;
    LOBYTE(v0) = 0;
    v3 = PopNetStandbyReason;
    v4 = 0;
    v5 = 0;
    v6 = 2LL;
    if ( (PopNetStandbyStateMask & 4) != 0 )
    {
      v7 = 2;
      v8 = 2;
      goto LABEL_6;
    }
    if ( (PopNetStandbyStateMask & 8) != 0 )
    {
      v7 = 2;
      v8 = 3;
      goto LABEL_6;
    }
    if ( (PopNetStandbyStateMask & 0x40) != 0 )
    {
      v7 = 2;
      v8 = 6;
      goto LABEL_6;
    }
    if ( !PopNetResiliencyEngaged )
      goto LABEL_28;
    if ( (PopNetStandbyStateMask & 2) != 0 )
    {
      v7 = 2;
      v8 = 1;
      goto LABEL_6;
    }
    if ( (PopNetStandbyStateMask & 0x80u) != 0 )
    {
      v7 = 2;
      v8 = 7;
    }
    else
    {
LABEL_28:
      v7 = 0;
      v8 = 0;
    }
LABEL_6:
    if ( v7 == PopNetStandbyState )
      goto LABEL_10;
    if ( PopNetStandbyState == 2 )
    {
      v5 = 1;
    }
    else if ( v7 != 2 )
    {
      goto LABEL_10;
    }
    LOBYTE(v0) = 1;
    if ( PopNetResiliencyEngaged )
    {
      LOBYTE(v0) = 1;
      if ( qword_140441078 )
      {
        LOBYTE(v6) = 1;
        v4 = 1;
        PopNetSetResiliencyPhaseBias(v6);
        LOBYTE(v0) = 1;
      }
    }
LABEL_10:
    if ( v8 != v3 )
    {
      v1 = 1;
      PopNetStandbyReason = v8;
    }
    if ( v7 != v2 )
    {
      v1 = 1;
      PopNetStandbyState = v7;
      PopNetUpdateCsConsumptionFlags(v6, v0);
    }
    if ( (_BYTE)v0 )
    {
      LOBYTE(v6) = v5;
      PopNetPublishWnfStateUpdate(v6);
      if ( v4 )
        PopNetSetResiliencyPhaseBias(0LL);
    }
    if ( !v1 )
      break;
    if ( PopDiagHandleRegistered )
      PopTraceStandbyConnectivityUpdate(v7, v8);
    else
      PopNetDeferLogRequest = 1;
  }
  PopOkayToQueueNextWorkItem((__int64)&unk_140411328);
  return PopReleasePolicyLock();
}

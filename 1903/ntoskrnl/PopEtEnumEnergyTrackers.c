/*
 * XREFs of PopEtEnumEnergyTrackers @ 0x140696E1C
 * Callers:
 *     PoEnergyContextCleanup @ 0x140671134 (PoEnergyContextCleanup.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x140696D68 (PopEtEnergyContextProcessStateUpdate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PopEtGetNextEnergyTracker @ 0x140696E78 (PopEtGetNextEnergyTracker.c)
 *     PopEtEnergyTrackerEnumSnapshotCallback @ 0x1406E5CF0 (PopEtEnergyTrackerEnumSnapshotCallback.c)
 */

__int64 __fastcall PopEtEnumEnergyTrackers(__int64 a1, __int64 a2)
{
  void *i; // rcx
  __int64 NextEnergyTracker; // rax
  void *v5; // rbx
  int v6; // edi

  for ( i = 0LL; ; i = v5 )
  {
    NextEnergyTracker = PopEtGetNextEnergyTracker(i);
    v5 = (void *)NextEnergyTracker;
    if ( !NextEnergyTracker )
      break;
    v6 = PopEtEnergyTrackerEnumSnapshotCallback(NextEnergyTracker, a2);
    if ( v6 < 0 )
      goto LABEL_4;
  }
  v6 = 0;
LABEL_4:
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x74456F50u);
  return (unsigned int)v6;
}

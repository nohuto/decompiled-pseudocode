/*
 * XREFs of SeClearLearningModeObjectInformation @ 0x14003B480
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x140133D1C (RtlpAllowsLowBoxAccess.c)
 *     ObReferenceObjectByName @ 0x1405C6D50 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1405F5850 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 *     ObReferenceObjectByNameEx @ 0x1406BA0F8 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 */

void SeClearLearningModeObjectInformation()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // ecx
  struct _LIST_ENTRY *Flink; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( KeGetCurrentIrql() )
    v1 = 2;
  else
    v1 = (KeGetCurrentThread()->ApcState.InProgressFlags & 1) != 0;
  Flink = CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
  if ( Flink )
  {
    if ( LODWORD(Flink->Blink) == v1 )
    {
      CurrentThread[1].WaitBlock[1].WaitListEntry.Flink = Flink->Flink;
      if ( Flink[2].Flink )
      {
        if ( Flink[3].Flink )
          RtlFreeAnsiString((PUNICODE_STRING)&Flink[2].Blink);
      }
    }
  }
}

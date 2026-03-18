/*
 * XREFs of ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C005C8FC
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C005849C (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0059510 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0059AF8 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C005A840 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C005BCE4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
        DirectComposition::CBatchSharedMemoryPoolSet *this,
        struct _EPROCESS *a2)
{
  void *v4; // rcx

  if ( a2 )
    ObReferenceObjectByPointer(a2, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
    ObfDereferenceObject(v4);
  *((_QWORD *)this + 2) = a2;
}

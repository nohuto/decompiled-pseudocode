/*
 * XREFs of SepCleanupMarkedForDeletionEntries @ 0x140086058
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14061B08C (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400799A0 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140085B3C (SepGetSingletonEntryFromIndexNumber.c)
 *     RtlEnumerateEntryHashTable @ 0x140086160 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x140086270 (RtlRemoveEntryHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x1400864A0 (RtlInitEnumerationHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x140132B00 (RtlEndEnumerationHashTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void SepCleanupMarkedForDeletionEntries()
{
  _RTL_DYNAMIC_HASH_TABLE *v0; // rsi
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v2; // rdi
  KIRQL v3; // al
  _DWORD *v4; // rcx
  KIRQL v5; // bp
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v6; // rax
  unsigned int *v7; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

  v0 = *(_RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  memset(&Enumerator, 0, sizeof(Enumerator));
  RtlInitEnumerationHashTable(v0, &Enumerator);
  while ( 1 )
  {
    v6 = RtlEnumerateEntryHashTable(v0, &Enumerator);
    v7 = (unsigned int *)v6;
    if ( !v6 )
      break;
    if ( LOBYTE(v6[2].Linkage.Flink) && RtlRemoveEntryHashTable(v0, v6, 0LL) )
    {
      SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v7[10]);
      v2 = SingletonEntryFromIndexNumber;
      if ( SingletonEntryFromIndexNumber )
      {
        v3 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
        v4 = (_DWORD *)*((_QWORD *)v2 + 2);
        v5 = v3;
        *((_QWORD *)v2 + 1) = 0LL;
        if ( v4 )
        {
          AuthzBasepFreeSecurityAttributesList(v4);
          ExFreePoolWithTag(*((PVOID *)v2 + 2), 0x74446553u);
          *((_QWORD *)v2 + 2) = 0LL;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v5);
      }
      _bittestandreset(*(signed __int32 **)(SeLuidToIndexMapping + 24), v7[10]);
      ExFreePoolWithTag(v7, 0);
    }
  }
  RtlEndEnumerationHashTable(v0, &Enumerator);
}

/*
 * XREFs of VfDisableHalVerifier @ 0x14030A278
 * Callers:
 *     IoWriteCrashDump @ 0x14028079C (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14028246C (IopWriteCapsuleTriageDumpToFirmware.c)
 *     VfAllocateCrashDumpRegisters @ 0x14092B1D0 (VfAllocateCrashDumpRegisters.c)
 *     VfNotifyOfHibernate @ 0x14092CDCC (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *VfDisableHalVerifier()
{
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *result; // rax

  if ( ViVerifyDma )
  {
    ViVerifyDma = 0;
    for ( i = ViAdapterList.Flink; &ViAdapterList != i; i = i->Flink )
    {
      Flink = i[1].Flink;
      if ( Flink )
      {
        result = i[3].Flink;
        Flink->Blink = result;
      }
    }
  }
  return result;
}

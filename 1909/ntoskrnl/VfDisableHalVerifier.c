/*
 * XREFs of VfDisableHalVerifier @ 0x140327748
 * Callers:
 *     IoWriteCrashDump @ 0x14029556C (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x14029744C (IopWriteCapsuleTriageDumpToFirmware.c)
 *     VfAllocateCrashDumpRegisters @ 0x1409688F0 (VfAllocateCrashDumpRegisters.c)
 *     VfNotifyOfHibernate @ 0x14096A63C (VfNotifyOfHibernate.c)
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

/*
 * XREFs of VerifierIoAllocateMdl @ 0x140967050
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x1400369F0 (IoAllocateMdl.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

PMDL __fastcall VerifierIoAllocateMdl(void *a1, ULONG a2, BOOLEAN a3, BOOLEAN a4, PIRP Irp)
{
  if ( (MmVerifierData & 0x400000) == 0
    || (dword_140509E14 & 8) != 0
    || (MmVerifierData & 1) != 0
    || (MmVerifierData & 8) != 0 )
  {
    return (PMDL)((__int64 (__fastcall *)(void *))pXdvIoAllocateMdl)(a1);
  }
  else
  {
    return IoAllocateMdl(a1, a2, a3, a4, Irp);
  }
}

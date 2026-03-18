/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x140789C18
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14019C2A4 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiInsertProcessVads @ 0x14068598C (MiInsertProcessVads.c)
 *     MiAllocateProcessVads @ 0x14068604C (MiAllocateProcessVads.c)
 *     MiInitializeLockedPagesTracking @ 0x140886DD8 (MiInitializeLockedPagesTracking.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(__int64 BugCheckParameter1)
{
  int inserted; // ebx
  _QWORD *ProcessVads; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v5[48]; // [rsp+28h] [rbp-40h] BYREF

  memset(v5, 0, sizeof(v5));
  MiGetWsAndMakePageTablesNx();
  *(_QWORD *)(BugCheckParameter1 + 1296) = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14];
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v5);
  ProcessVads = MiAllocateProcessVads(BugCheckParameter1, 0LL);
  if ( ProcessVads )
    inserted = MiInsertProcessVads((struct _KPROCESS *)BugCheckParameter1, &ProcessVads);
  else
    inserted = -1073741801;
  KiUnstackDetachProcess((struct _KTHREAD *)v5, 0);
  if ( inserted >= 0 && (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  return (unsigned int)inserted;
}

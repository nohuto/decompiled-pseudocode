/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x140761810
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140191CE0 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiInsertProcessVads @ 0x14067AD24 (MiInsertProcessVads.c)
 *     MiAllocateProcessVads @ 0x14067B3DC (MiAllocateProcessVads.c)
 *     MiInitializeLockedPagesTracking @ 0x14084D308 (MiInitializeLockedPagesTracking.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(__int64 BugCheckParameter1)
{
  int inserted; // ebx
  _QWORD *ProcessVads; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v5[48]; // [rsp+28h] [rbp-40h] BYREF

  MiGetWsAndMakePageTablesNx();
  *(_QWORD *)(BugCheckParameter1 + 1296) = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v5);
  ProcessVads = MiAllocateProcessVads(BugCheckParameter1, 0LL);
  if ( ProcessVads )
    inserted = MiInsertProcessVads((struct _KPROCESS *)BugCheckParameter1, &ProcessVads);
  else
    inserted = -1073741801;
  KiUnstackDetachProcess((__int64)v5, 0LL);
  if ( inserted >= 0 && (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  return (unsigned int)inserted;
}

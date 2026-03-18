/*
 * XREFs of AcpiIrqLibInitializeGlobalState @ 0x1C00BED50
 * Callers:
 *     ACPIInitialize @ 0x1C00BE114 (ACPIInitialize.c)
 * Callees:
 *     LinkNodeInitGlobalState @ 0x1C008F2B0 (LinkNodeInitGlobalState.c)
 *     IcInitGlobalState @ 0x1C008F2D0 (IcInitGlobalState.c)
 *     ArbInitializeArbiterInstance @ 0x1C009DDB8 (ArbInitializeArbiterInstance.c)
 *     ProcessorInitGlobalState @ 0x1C00BEE78 (ProcessorInitGlobalState.c)
 */

__int64 __fastcall AcpiIrqLibInitializeGlobalState(__int64 a1)
{
  __int64 result; // rax

  qword_1C0081658 = (__int64)IrqArbTestAllocation;
  qword_1C0081660 = (__int64)IrqArbRetestAllocation;
  qword_1C0081668 = (__int64)IrqArbCommitAllocation;
  qword_1C0081678 = (__int64)IrqArbBootAllocation;
  qword_1C0081688 = (__int64)IrqArbQueryConflict;
  qword_1C00816A0 = (__int64)IrqArbPreprocessEntry;
  qword_1C00816B0 = (__int64)IrqArbGetNextAllocationRange;
  qword_1C00816B8 = (__int64)IrqArbFindSuitableRange;
  qword_1C00816D0 = (__int64)IrqArbOverrideConflict;
  qword_1C00816C0 = (__int64)IrqArbAddAllocation;
  qword_1C00816C8 = (__int64)IrqArbBacktrackAllocation;
  qword_1C0081638 = (__int64)IrqArbUnpackRequirement;
  qword_1C0081640 = (__int64)IrqArbPackResource;
  qword_1C0081648 = (__int64)IrqArbUnpackResource;
  qword_1C0081650 = (__int64)IrqArbScoreRequirement;
  qword_1C00816A8 = (__int64)IrqArbAllocateEntry;
  result = ArbInitializeArbiterInstance((__int64)&IrqLibArbiterInstance, a1, 2, (__int64)L"ACPI_IRQ");
  if ( (int)result >= 0 )
  {
    result = LinkNodeInitGlobalState();
    if ( (int)result >= 0 )
    {
      result = IcInitGlobalState();
      if ( (int)result >= 0 )
        return ProcessorInitGlobalState();
    }
  }
  return result;
}

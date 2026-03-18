/*
 * XREFs of AcpiIrqLibInitializeGlobalState @ 0x1C00BB084
 * Callers:
 *     ACPIInitialize @ 0x1C00BAE7C (ACPIInitialize.c)
 * Callees:
 *     LinkNodeInitGlobalState @ 0x1C008D274 (LinkNodeInitGlobalState.c)
 *     IcInitGlobalState @ 0x1C008D294 (IcInitGlobalState.c)
 *     ArbInitializeArbiterInstance @ 0x1C009C5E4 (ArbInitializeArbiterInstance.c)
 *     ProcessorInitGlobalState @ 0x1C00BB1AC (ProcessorInitGlobalState.c)
 */

__int64 __fastcall AcpiIrqLibInitializeGlobalState(__int64 a1)
{
  __int64 result; // rax

  qword_1C007F658 = (__int64)IrqArbTestAllocation;
  qword_1C007F660 = (__int64)IrqArbRetestAllocation;
  qword_1C007F668 = (__int64)IrqArbCommitAllocation;
  qword_1C007F678 = (__int64)IrqArbBootAllocation;
  qword_1C007F688 = (__int64)IrqArbQueryConflict;
  qword_1C007F6A0 = (__int64)IrqArbPreprocessEntry;
  qword_1C007F6B0 = (__int64)IrqArbGetNextAllocationRange;
  qword_1C007F6B8 = (__int64)IrqArbFindSuitableRange;
  qword_1C007F6D0 = (__int64)IrqArbOverrideConflict;
  qword_1C007F6C0 = (__int64)IrqArbAddAllocation;
  qword_1C007F6C8 = (__int64)IrqArbBacktrackAllocation;
  qword_1C007F638 = (__int64)IrqArbUnpackRequirement;
  qword_1C007F640 = (__int64)IrqArbPackResource;
  qword_1C007F648 = (__int64)IrqArbUnpackResource;
  qword_1C007F650 = (__int64)IrqArbScoreRequirement;
  qword_1C007F6A8 = (__int64)IrqArbAllocateEntry;
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

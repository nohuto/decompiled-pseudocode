/*
 * XREFs of IopMarkPagesForRunTimeTriageDataBlocks @ 0x14029D5C4
 * Callers:
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14029CF08 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     IopGetMaxValidMemorySize @ 0x140296C90 (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidMemorySizeDown @ 0x140296D08 (IopGetMaxValidMemorySizeDown.c)
 *     MmAddRangeToCrashDump @ 0x1402C5F54 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopMarkPagesForRunTimeTriageDataBlocks(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 MaxValidMemorySizeDown; // rbx
  int MaxValidMemorySize; // eax
  __int64 result; // rax
  unsigned int v11; // ecx
  _WORD *v12; // rbx
  unsigned __int16 v13; // dx
  unsigned __int64 v14; // rdx

  MaxValidMemorySizeDown = (unsigned int)IopGetMaxValidMemorySizeDown(*(_QWORD *)(a2 + 248));
  MaxValidMemorySize = IopGetMaxValidMemorySize(*(_QWORD *)(a2 + 248), 0x100u);
  result = MmAddRangeToCrashDump(
             a1,
             *(_QWORD *)(a2 + 248) - MaxValidMemorySizeDown,
             (unsigned int)(MaxValidMemorySize + MaxValidMemorySizeDown));
  v11 = result;
  if ( (int)result >= 0 )
  {
    v12 = &IopRunTimeContextOffsets;
    v13 = 144;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v13 + a2);
      if ( v14 < a3 || v14 >= a4 )
      {
        result = MmAddRangeToCrashDump(a1, v14 & 0xFFFFFFFFFFFFF000uLL, 4096LL);
        v11 = result;
        if ( (int)result < 0 )
          break;
      }
      v13 = *++v12;
      if ( *v12 == 0xFFFF )
        return v11;
    }
  }
  return result;
}

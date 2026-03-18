/*
 * XREFs of IopLiveDumpMarkProcessorData @ 0x1405A8E10
 * Callers:
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405A8F24 (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x1402C5F54 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpMarkProcessorData(__int64 (__fastcall **a1)(_QWORD, __int64, __int64, __int64), int a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = KiProcessorBlock[a2];
  result = MmAddRangeToCrashDump(a1, v3 - 384, 36992LL);
  if ( (int)result >= 0 )
  {
    result = MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 8), 2080LL);
    if ( (int)result >= 0 )
    {
      result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 8) + 184LL), 2176LL);
      if ( (int)result >= 0 )
      {
        result = MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 25280), 1232LL);
        if ( (int)result >= 0 )
        {
          result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 25280) + 152LL), 0x2000LL);
          if ( (int)result >= 0 )
          {
            result = MmAddRangeToCrashDump(a1, *(_QWORD *)(*(_QWORD *)(v3 + 25280) + 248LL) - 4096LL, 0x2000LL);
            if ( (int)result >= 0 )
            {
              result = MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 344), *(unsigned __int16 *)(v3 + 342));
              if ( (int)result >= 0 )
                return MmAddRangeToCrashDump(a1, *(_QWORD *)(v3 + 360), *(unsigned __int16 *)(v3 + 358));
            }
          }
        }
      }
    }
  }
  return result;
}

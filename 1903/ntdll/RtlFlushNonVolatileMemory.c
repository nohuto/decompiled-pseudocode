/*
 * XREFs of RtlFlushNonVolatileMemory @ 0x1800F5680
 * Callers:
 *     RtlFillNonVolatileMemory @ 0x1800F5E60 (RtlFillNonVolatileMemory.c)
 *     RtlFlushNonVolatileMemoryRanges @ 0x1800F5F10 (RtlFlushNonVolatileMemoryRanges.c)
 *     RtlWriteNonVolatileMemory @ 0x1800F6030 (RtlWriteNonVolatileMemory.c)
 * Callees:
 *     RtlDrainNonVolatileFlush @ 0x1800F5650 (RtlDrainNonVolatileFlush.c)
 */

__int64 __fastcall RtlFlushNonVolatileMemory(char a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v7; // rdx

  if ( (a1 & 1) == 0 )
    return 3221225485LL;
  if ( (a1 & 2) != 0 )
  {
    _RCX = (char *)(a2 & -qword_1801627E0);
    v7 = a3 + a2;
    if ( dword_1801627D8 == 2 )
    {
      while ( (unsigned __int64)_RCX < v7 )
      {
        __asm { clwb    byte ptr [rcx] }
        _RCX += qword_1801627E0;
      }
    }
    else if ( dword_1801627D8 == 3 )
    {
      while ( (unsigned __int64)_RCX < v7 )
      {
        __asm { clflushopt byte ptr [rcx] }
        _RCX += qword_1801627E0;
      }
    }
    else
    {
      while ( (unsigned __int64)_RCX < v7 )
      {
        _mm_clflush(_RCX);
        _RCX += qword_1801627E0;
      }
    }
    if ( (a4 & 1) == 0 )
      RtlDrainNonVolatileFlush(a1);
  }
  return 0LL;
}

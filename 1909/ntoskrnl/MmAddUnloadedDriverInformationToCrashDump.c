/*
 * XREFs of MmAddUnloadedDriverInformationToCrashDump @ 0x1402C5DB8
 * Callers:
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14029CC68 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x1402C5CB4 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall MmAddUnloadedDriverInformationToCrashDump(
        __int64 (__fastcall **a1)(_QWORD, __int64, __int64, __int64))
{
  unsigned int v1; // r8d
  __int64 result; // rax
  __int64 v4; // rbx
  unsigned int i; // edi
  unsigned __int64 v6; // rdx

  v1 = 0;
  if ( MmUnloadedDrivers )
  {
    result = MmAddRangeToCrashDump(a1, (unsigned __int64)MmUnloadedDrivers, 2000LL);
    v1 = result;
    if ( (int)result < 0 )
      return result;
    v4 = (unsigned int)(MmLastUnloadedDriver - 1);
    for ( i = 0; i < 0x32; ++i )
    {
      if ( (unsigned int)v4 >= 0x32 )
        v4 = 49LL;
      v6 = *((_QWORD *)MmUnloadedDrivers + 5 * v4 + 1);
      if ( !v6 )
        break;
      result = MmAddRangeToCrashDump(a1, v6, *((unsigned __int16 *)MmUnloadedDrivers + 20 * v4 + 1));
      v1 = result;
      if ( (int)result < 0 )
        return result;
      v4 = (unsigned int)(v4 - 1);
    }
  }
  return v1;
}

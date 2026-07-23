/*
 * XREFs of IopConstructInMemoryDumpHeader @ 0x1402964B4
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140189844 (IopInitializeOfflineCrashDump.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1402954E8 (IoUpdateDumpPhysicalRanges.c)
 * Callees:
 *     IoFillDumpHeader @ 0x1402944A8 (IoFillDumpHeader.c)
 */

__int64 IopConstructInMemoryDumpHeader()
{
  __int64 result; // rax
  _DWORD *v1; // r14
  __int64 v2; // rsi

  result = (unsigned int)_InterlockedExchange(InMemData, 1);
  if ( (_DWORD)result != 1 )
  {
    dword_140468008 = 0;
    if ( dword_140467FD4
      && (result = qword_140467FF0 & 1, (v1 = *(_DWORD **)&InMemData[2 * result + 2]) != 0LL)
      && (v2 = *(_QWORD *)&InMemData[2 * (((_BYTE)qword_140467FF0 - 1) & 1) + 2]) != 0 )
    {
      IoFillDumpHeader((_NT_PRODUCT_TYPE *)(v2 + 24), 1, 332, 0LL, 0LL, 0LL, 0LL, (__int64)KeGetCurrentThread());
      *(_QWORD *)(v2 + 4040) = qword_140467FF8;
      *(_QWORD *)(v2 + 40) = PsInitialSystemProcess->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)v2, 1397967163);
      *v1 = result;
      LODWORD(qword_140467FF0) = qword_140467FF0 + 1;
    }
    else
    {
      dword_140468008 = -1073741823;
    }
    _InterlockedExchange(InMemData, 0);
  }
  return result;
}

/*
 * XREFs of PiEventAllocateVetoBuffer @ 0x1406EFD88
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpAllocateCriticalMemory @ 0x1406EFE04 (PnpAllocateCriticalMemory.c)
 */

_QWORD *__fastcall PiEventAllocateVetoBuffer(__int64 a1)
{
  unsigned int v1; // edi
  _QWORD *CriticalMemory; // rbx
  __int64 v3; // rax

  v1 = a1;
  CriticalMemory = (_QWORD *)PnpAllocateCriticalMemory(a1, 1LL, 24LL, 1299213904LL);
  if ( CriticalMemory )
  {
    v3 = PnpAllocateCriticalMemory(v1, 1LL, 1024LL, 1299213904LL);
    if ( v3 )
    {
      *(_DWORD *)CriticalMemory = 0;
      CriticalMemory[1] = 0LL;
      *((_WORD *)CriticalMemory + 5) = 1024;
      CriticalMemory[2] = v3;
    }
    else
    {
      ExFreePoolWithTag(CriticalMemory, 0x4D706E50u);
      return 0LL;
    }
  }
  return CriticalMemory;
}

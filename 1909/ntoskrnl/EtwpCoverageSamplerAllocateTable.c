/*
 * XREFs of EtwpCoverageSamplerAllocateTable @ 0x140904924
 * Callers:
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140903570 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerStart @ 0x140905978 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall EtwpCoverageSamplerAllocateTable(int a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  PVOID v4; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x56777445u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    v4 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(8 * a1), 0x56777445u);
    v3[3] = v4;
    if ( !v4 )
    {
      ExFreePoolWithTag(v3, 0x56777445u);
      return 0LL;
    }
    memset(v4, 0, (unsigned int)(8 * a1));
    *((_DWORD *)v3 + 5) = a1;
  }
  return v3;
}

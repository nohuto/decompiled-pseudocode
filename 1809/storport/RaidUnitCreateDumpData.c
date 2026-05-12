/*
 * XREFs of RaidUnitCreateDumpData @ 0x1C007568C
 * Callers:
 *     RaidUnitCreateDumpInfo @ 0x1C00757B8 (RaidUnitCreateDumpInfo.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000754C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C0015394 (RaidGetTelemetryLogPageIds.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

__int64 __fastcall RaidUnitCreateDumpData(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  char *Pool; // rax
  unsigned int v7; // esi
  char *v8; // rdi
  int v9; // ecx
  _BYTE *v10; // r14
  __int64 v11; // rcx

  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x68uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v7 = 0;
  v8 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, 0x68uLL);
    *(_DWORD *)v8 = 80;
    v8[66] = *(_BYTE *)(a1 + 96);
    v8[67] = *(_BYTE *)(a1 + 97);
    v8[68] = *(_BYTE *)(a1 + 98);
    v9 = *(_DWORD *)(a1 + 3272);
    *a3 = 104;
    v10 = v8 + 80;
    RaidGetTelemetryLogPageIds(v9, (__int64)(v8 + 32), (_WORD *)v8 + 32);
    if ( RaidUnitCheckAndAcquirePoFx(a1) )
    {
      if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1744)) >= 0 )
      {
        *v10 = 1;
        v11 = **(_QWORD **)(a1 + 1744);
        *((_QWORD *)v8 + 12) = a1 + 1734;
        *((_QWORD *)v8 + 11) = v11;
        *((_QWORD *)v8 + 1) = a1 + 1735;
        *((_QWORD *)v8 + 2) = StorDumpDiskPowerOn;
        *((_QWORD *)v8 + 3) = v10;
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
    }
    *a2 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}

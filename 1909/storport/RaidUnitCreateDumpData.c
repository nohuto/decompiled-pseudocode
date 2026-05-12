/*
 * XREFs of RaidUnitCreateDumpData @ 0x1C00757F4
 * Callers:
 *     RaidUnitCreateDumpInfo @ 0x1C0075938 (RaidUnitCreateDumpInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006850 (RaidAllocatePool.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000955C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C001802C (RaidGetTelemetryLogPageIds.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 */

__int64 __fastcall RaidUnitCreateDumpData(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  char *Pool; // rax
  unsigned int v7; // esi
  char *v8; // rdi
  void *v9; // rcx
  _BYTE *v10; // r14
  __int64 v11; // rcx

  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v7 = 0;
  v8 = Pool;
  if ( Pool )
  {
    memset(Pool + 4, 0, 0x6CuLL);
    *(_DWORD *)v8 = 88;
    v9 = *(void **)(a1 + 8);
    *a3 = 112;
    v10 = v8 + 88;
    ObfReferenceObject(v9);
    *((_QWORD *)v8 + 1) = a1;
    v8[74] = *(_BYTE *)(a1 + 96);
    v8[75] = *(_BYTE *)(a1 + 97);
    v8[76] = *(_BYTE *)(a1 + 98);
    RaidGetTelemetryLogPageIds(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4356LL), (__int64)(v8 + 40), (_WORD *)v8 + 36);
    if ( RaidUnitCheckAndAcquirePoFx(a1) )
    {
      if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1744)) >= 0 )
      {
        *v10 = 1;
        v11 = **(_QWORD **)(a1 + 1744);
        *((_QWORD *)v8 + 13) = a1 + 1734;
        *((_QWORD *)v8 + 12) = v11;
        *((_QWORD *)v8 + 2) = a1 + 1735;
        *((_QWORD *)v8 + 3) = StorDumpDiskPowerOn;
        *((_QWORD *)v8 + 4) = v10;
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

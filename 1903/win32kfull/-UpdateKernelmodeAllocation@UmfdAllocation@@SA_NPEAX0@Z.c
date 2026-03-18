/*
 * XREFs of ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C02D4344
 * Callers:
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02BABA8 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C00765A0 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00F0A8C (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 */

char __fastcall UmfdAllocation::UpdateKernelmodeAllocation(char *a1, char *a2)
{
  char *v2; // rsi
  char *v4; // rdi
  PVOID v6; // rbx
  unsigned __int64 v7; // rdx
  NSInstrumentation::CPointerHashTable *v8; // rcx
  const void *v9; // rdx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 28;
  v4 = a2 - 28;
  if ( a1 - 28 == a2 - 28 )
    return 1;
  v6 = UmfdAllocation::s_allocationLookupLock;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  if ( *((_DWORD *)v2 + 1) == *((_DWORD *)v4 + 1) && *((_DWORD *)v2 + 6) == *((_DWORD *)v4 + 6) )
  {
    if ( UmfdAllocation::s_allocationLookup )
    {
      v7 = *((_QWORD *)v4 + 2);
      if ( v7 )
      {
        v10 = 0LL;
        NSInstrumentation::CPointerHashTable::Remove(
          (NSInstrumentation::CPointerHashTable *)UmfdAllocation::s_allocationLookup,
          v7,
          &v10);
      }
    }
    v8 = (NSInstrumentation::CPointerHashTable *)UmfdAllocation::s_allocationLookup;
    *((_QWORD *)v2 + 1) = *((_QWORD *)v4 + 1);
    v9 = (const void *)*((_QWORD *)v4 + 2);
    *((_QWORD *)v2 + 2) = v9;
    if ( NSInstrumentation::CPointerHashTable::Insert(v8, v9, a1) )
    {
      EngFreeMem(v4);
      ExReleasePushLockExclusiveEx(v6, 0LL);
      KeLeaveCriticalRegion();
      return 1;
    }
  }
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
  return 0;
}

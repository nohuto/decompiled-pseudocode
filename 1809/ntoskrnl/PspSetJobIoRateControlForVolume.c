/*
 * XREFs of PspSetJobIoRateControlForVolume @ 0x14088A234
 * Callers:
 *     PspSetJobIoRateControl @ 0x140584F0C (PspSetJobIoRateControl.c)
 * Callees:
 *     PspIoRateControlInfoIsAnySet @ 0x140001584 (PspIoRateControlInfoIsAnySet.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1402EA25C (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x1402EA480 (PspJobIoRateVolumeEntryRemove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PspIoRateEntryActivate @ 0x140585150 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x140585238 (PspIoRateEntryDeactivate.c)
 *     PspIoRateEntryInitialize @ 0x140605F28 (PspIoRateEntryInitialize.c)
 */

__int64 __fastcall PspSetJobIoRateControlForVolume(__int64 a1, _QWORD *a2, _BYTE *a3, _BYTE *a4, unsigned __int64 *a5)
{
  char v9; // si
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v11; // rbx
  int v12; // edi
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdi

  *a3 = 0;
  *a4 = 0;
  *a5 = 0LL;
  v9 = 0;
  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x694A7350u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    PspIoRateEntryInitialize(PoolWithTag);
    v12 = PspIoRateEntryActivate((__int64)v11, a1, (__int64)a2, 0LL);
    if ( v12 >= 0 )
    {
      v9 = 1;
      v13 = (struct _EX_RUNDOWN_REF *)PspJobIoRateVolumeEntryRemove(a1, v11[3].Count);
      v14 = v13;
      if ( v13 )
      {
        PspIoRateEntryDeactivate(v13);
        ExFreePoolWithTag(v14, 0);
        *a3 = 1;
      }
      if ( PspIoRateControlInfoIsAnySet(a2) )
      {
        *a5 = v11[5].Count;
        PspJobIoRateVolumeEntryInsert(a1, v11);
        v11 = 0LL;
        *a4 = 1;
      }
      v12 = 0;
    }
    if ( v11 )
    {
      if ( v9 )
        PspIoRateEntryDeactivate(v11);
      ExFreePoolWithTag(v11, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v12;
}

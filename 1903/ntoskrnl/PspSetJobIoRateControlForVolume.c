/*
 * XREFs of PspSetJobIoRateControlForVolume @ 0x1408C8164
 * Callers:
 *     PspSetJobIoRateControl @ 0x1405B30A0 (PspSetJobIoRateControl.c)
 * Callees:
 *     PspIoRateControlInfoIsAnySet @ 0x14000141C (PspIoRateControlInfoIsAnySet.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x140307E44 (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x140308064 (PspJobIoRateVolumeEntryRemove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PspIoRateEntryActivate @ 0x1405B32E4 (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1405B33F0 (PspIoRateEntryDeactivate.c)
 *     PspIoRateEntryInitialize @ 0x1406964F8 (PspIoRateEntryInitialize.c)
 */

__int64 __fastcall PspSetJobIoRateControlForVolume(__int64 a1, _QWORD *a2, _BYTE *a3, _BYTE *a4, _QWORD *a5)
{
  char v9; // si
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  __int64 v11; // rbx
  int v12; // edi
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rdi

  *a3 = 0;
  *a4 = 0;
  *a5 = 0LL;
  v9 = 0;
  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x694A7350u);
  v11 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    PspIoRateEntryInitialize(PoolWithTag);
    v12 = PspIoRateEntryActivate(v11, a1, (__int64)a2, 0LL);
    if ( v12 >= 0 )
    {
      v9 = 1;
      v13 = (struct _EX_RUNDOWN_REF *)PspJobIoRateVolumeEntryRemove(a1, *(_QWORD *)(v11 + 24));
      v14 = v13;
      if ( v13 )
      {
        PspIoRateEntryDeactivate(v13);
        ExFreePoolWithTag(v14, 0);
        *a3 = 1;
      }
      if ( PspIoRateControlInfoIsAnySet(a2) )
      {
        *a5 = *(_QWORD *)(v11 + 40);
        PspJobIoRateVolumeEntryInsert(a1, (_RTL_BALANCED_NODE *)v11);
        v11 = 0LL;
        *a4 = 1;
      }
      v12 = 0;
    }
    if ( v11 )
    {
      if ( v9 )
        PspIoRateEntryDeactivate((struct _EX_RUNDOWN_REF *)v11);
      ExFreePoolWithTag((PVOID)v11, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v12;
}

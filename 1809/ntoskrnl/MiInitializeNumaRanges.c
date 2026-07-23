/*
 * XREFs of MiInitializeNumaRanges @ 0x14017EF00
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeNumaRanges()
{
  unsigned int *v0; // rsi
  unsigned int v1; // edi
  _QWORD **v2; // r8
  void *v3; // rbx
  int v4; // ebp
  KIRQL v5; // al
  KIRQL v6; // di
  __int64 v7; // rdx
  PVOID PoolWithTag; // rax
  int v10; // r8d
  __int64 v11; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  char v13; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+58h] [rbp+10h] BYREF

  if ( MmPhysicalMemoryBlock )
  {
    v0 = (unsigned int *)&v13;
    v1 = 0;
  }
  else
  {
    v0 = 0LL;
    v1 = 16;
  }
  v2 = &v14;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD **, unsigned int *))off_140401458[0])(30LL, v1, v2, v0);
    if ( v4 < 0 )
      break;
    if ( !v0 )
      goto LABEL_11;
    if ( v1 == *v0 )
    {
      if ( !v1 )
      {
        if ( v3 )
          ExFreePoolWithTag(v3, 0);
        v14 = 0LL;
      }
      goto LABEL_11;
    }
    v1 = *v0;
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      v1 = *v0;
    }
    if ( !v1 )
    {
      v14 = 0LL;
      v4 = 0;
LABEL_11:
      v5 = ExAcquireSpinLockExclusive(&dword_140439E38);
      v3 = (void *)qword_14043B120;
      v6 = v5;
      if ( qword_14043B120 && !byte_14043B108 )
      {
        byte_14043B108 = 1;
        v3 = 0LL;
      }
      v7 = (__int64)v14;
      if ( v14 )
      {
        v10 = 0;
        if ( *v14 != -1LL )
        {
          v11 = 0LL;
          do
          {
            if ( *(_DWORD *)(v11 + v7 + 8) >= (unsigned int)(unsigned __int16)KeNumberNodes )
            {
              *(_DWORD *)(v11 + v7 + 8) = 0;
              v7 = (__int64)v14;
            }
            v11 = 16LL * (unsigned int)++v10;
          }
          while ( *(_QWORD *)(v11 + v7) != -1LL );
        }
      }
      dword_14043B104 = 0;
      qword_14043B120 = v7;
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439E38);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v6);
      break;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x20206D4Du);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    v14 = PoolWithTag;
    v2 = (_QWORD **)PoolWithTag;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v4;
}

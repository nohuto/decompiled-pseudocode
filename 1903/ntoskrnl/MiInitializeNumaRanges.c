/*
 * XREFs of MiInitializeNumaRanges @ 0x140188F0C
 * Callers:
 *     MiInitNucleus @ 0x1409F3DB8 (MiInitNucleus.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInitializeNumaRanges(int a1)
{
  unsigned int *v2; // r14
  _QWORD **v3; // r8
  unsigned int v4; // edi
  int v5; // ebp
  void *v6; // rbx
  int v7; // r15d
  KIRQL v8; // al
  KIRQL v9; // di
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  PVOID PoolWithTag; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+68h] [rbp+10h] BYREF

  if ( a1 )
  {
    v2 = (unsigned int *)&v16;
    v3 = &v17;
    v4 = 0;
    if ( a1 < 2 )
    {
      v2 = 0LL;
      v4 = 16;
    }
    v5 = 0;
    v6 = 0LL;
    while ( 1 )
    {
      v7 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD **, unsigned int *))off_140426798[0])(30LL, v4, v3, v2);
      if ( v7 < 0 )
        break;
      if ( a1 == 1 )
        goto LABEL_12;
      if ( v4 == *v2 )
      {
        if ( !v4 )
        {
          if ( v6 )
            ExFreePoolWithTag(v6, 0);
LABEL_11:
          v5 = 0;
          v17 = &unk_140465A60;
        }
LABEL_12:
        v8 = ExAcquireSpinLockExclusive(&dword_140465A90);
        v6 = (void *)qword_140465A80;
        v9 = v8;
        if ( qword_140465A80 )
          v6 = (void *)(-(__int64)(byte_140465A4C != 0) & qword_140465A80);
        v10 = (__int64)v17;
        if ( v17 )
        {
          v11 = 0;
          if ( *v17 != -1LL )
          {
            v12 = 0LL;
            do
            {
              if ( *(_DWORD *)(v12 + v10 + 8) >= (unsigned int)(unsigned __int16)KeNumberNodes )
              {
                *(_DWORD *)(v12 + v10 + 8) = 0;
                v10 = (__int64)v17;
              }
              dword_140465A48 = v11++;
              v12 = 16LL * v11;
            }
            while ( *(_QWORD *)(v12 + v10) != -1LL );
          }
          if ( v5 )
            byte_140465A4C = 1;
        }
        qword_140465A80 = v10;
        dword_140465A44 = 0;
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140465A90);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v9);
        break;
      }
      v4 = *v2;
      if ( v6 )
      {
        ExFreePoolWithTag(v6, 0);
        v4 = *v2;
      }
      if ( !v4 )
      {
        v7 = 0;
        goto LABEL_11;
      }
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x20206D4Du);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      v17 = PoolWithTag;
      v3 = (_QWORD **)PoolWithTag;
      v5 = 1;
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    return (unsigned int)v7;
  }
  else
  {
    qword_140465A70 = -1LL;
    qword_140465A80 = (__int64)&unk_140465A60;
    return 0LL;
  }
}
